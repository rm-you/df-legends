#!/usr/bin/env python3
"""Compute (and optionally decompile) the transitive callee closure of the
DF save-load pipeline.

Starting from root function(s) — by default the world reader FUN_140330310 and
the world writer FUN_1405f3a60 — walk the callee lists recorded in the
committed decompile headers (ghidra_decompiles/index.json) and find every
reachable function that does NOT yet have a .c decompile. With --run, invoke
Ghidra headless in batches to decompile the missing ones, rebuild index.json
from the .c headers, and iterate until the closure is complete (a callee can
only be discovered once its caller is decompiled, so this is a fixpoint loop).

Usage (from tools/df-save-re/):
    python scripts/decompile_closure.py              # report missing only
    python scripts/decompile_closure.py --run        # iterate to closure

Ghidra gotchas handled here: stale *.lock* removal, -noanalysis, output dir is
the FIRST DecompileWithCallees.java script arg.
"""
from __future__ import annotations

import argparse
import json
import re
import subprocess
import sys
import time
from pathlib import Path

TOOL_ROOT = Path(__file__).resolve().parent.parent
DECOMP_DIR = TOOL_ROOT / "ghidra_decompiles"
INDEX_PATH = DECOMP_DIR / "index.json"
GHIDRA_PROJECT_DIR = TOOL_ROOT / "ghidra"
GHIDRA_PROJECT_NAME = "DFProject"
GHIDRA_HEADLESS = Path(
    r"C:\Users\rm_yo\Downloads\ghidra_12.1.2_PUBLIC\support\analyzeHeadless.bat"
)
GHIDRA_SCRIPTS = TOOL_ROOT / "ghidra_scripts"
PROGRAM_NAME = "Dwarf Fortress.exe"

# Roots = the per-case stream reader entry functions of FUN_140330310 (the
# world reader). Do NOT root 140330310 itself: its non-reader code (cases
# 0/1/0x21/0x22 post-load fixups, viewscreen constructors, FSOUND, announce
# helpers) drags the closure into game logic that never touches the stream.
DEFAULT_ROOTS = [
    "140306a00",  # case 0 header scalars + language_name + strings
    "14030aa20",  # case 0 string-vector tables
    "140aafe60",  # case 2 world block
    "1403158a0",  # case 3
    "14031aa30",  # case 4
    "14031c5d0",  # case 5
    "14031db90",  # case 6
    "140a62e80",  # case 7 historical entities
    "1403066f0",  # case 8 world_site body
    "1407099a0",  # case 9 world_history
    "14030b9e0",  # case 9 b
    "140309da0",  # case 9 c (>0x5cc)
    "14030bd50",  # case 9 d (>0x619)
    "140305a20",  # case 0xa
    "1405bb6d0",  # case 0xa trailing string
    "140323f70",  # case 0xb artifacts?
    "140323e70",  # case 0xc written content?
    "140304680",  # case 0xd
    "1403047a0",  # case 0xe
    "140304c40",  # case 0xf
    "140301fe0",  # case 0x10
    "140301a00",  # case 0x11
    "140302a40",  # case 0x12
    "140304590",  # case 0x13
    "1403049e0",  # case 0x14
    "140304390",  # case 0x15
    "140302fb0",  # case 0x16
    "140302e90",  # case 0x17
    "140302b90",  # case 0x18
    "140305510",  # case 0x19
    "140302150",  # case 0x1a
    "140301680",  # case 0x1b (>0x5cb)
    "140301800",  # case 0x1b (>0x5cb)
    "140301910",  # case 0x1b (>0x5cb)
    "140301400",  # case 0x1b (>0x5cc)
    "140301520",  # case 0x1b (>0x5cc)
    "1403048c0",  # case 0x1c (>0x5d4)
    "1403026c0",  # case 0x1d (>0x622)
    "140302470",  # case 0x1e (>0x67d)
    "140302590",  # case 0x1f (>0x67d)
    "1405bbd50",  # case 0x20 tail
]

# CRT / allocator / exception noise — never part of the save format.
SKIP_NAMES = {
    "operator_new",
    "operator_delete",
    "free",
    "malloc",
    "calloc",
    "realloc",
    "memcpy",
    "memmove",
    "memset",
    "memcmp",
    "strlen",
    "ext",
    "__security_check_cookie",
    "__CxxFrameHandler3",
    "__CxxFrameHandler4",
    "_CxxThrowException",
    "_invalid_parameter_noinfo_noreturn",
    "_Xlength_error",
    "_Xout_of_range",
    "_Xbad_alloc",
    "_Throw_bad_array_new_length",
    "__std_exception_copy",
    "__std_exception_destroy",
    "__std_terminate",
    "abort",
    "terminate",
}

# Known non-format functions reachable from reader trees (announce/log/UI).
SKIP_ADDRS = {
    "14014a480",  # announcement/log printf-alike
    "140d38b10",  # UI/global refresh (case 1)
    "140d24c10",  # post-load fixup driver (case 0x21)
}


def skip_callee(addr: str, name: str) -> bool:
    if addr in SKIP_ADDRS:
        return True
    if name in SKIP_NAMES:
        return True
    # Named (non-FUN_) symbols are CRT/library code, not save format.
    if name and not name.startswith("FUN_"):
        return True
    return False

_ADDR_RE = re.compile(r"^14[0-9a-fA-F]{7}$")


def load_index() -> dict[str, dict]:
    with INDEX_PATH.open(encoding="utf-8") as fh:
        entries = json.load(fh)
    return {e["addr"].lower(): e for e in entries}


def parse_callee(raw: str) -> tuple[str | None, str]:
    """'140315ac0 FUN_140315ac0' -> ('140315ac0', 'FUN_140315ac0')."""
    parts = raw.split(" ", 1)
    addr = parts[0].strip().lower()
    name = parts[1].strip() if len(parts) > 1 else ""
    if not _ADDR_RE.match(addr):
        return None, name
    return addr, name


def compute_closure(
    index: dict[str, dict], roots: list[str]
) -> tuple[set[str], set[str], dict[str, str]]:
    """Return (reachable_decompiled, missing, skipped_named)."""
    reachable: set[str] = set()
    missing: set[str] = set()
    skipped: dict[str, str] = {}
    stack = [r.lower() for r in roots]
    while stack:
        addr = stack.pop()
        if addr in reachable or addr in missing:
            continue
        entry = index.get(addr)
        if entry is None:
            missing.add(addr)
            continue
        reachable.add(addr)
        for raw in entry.get("callees", []):
            caddr, cname = parse_callee(raw)
            if caddr is None:
                continue
            if skip_callee(caddr, cname):
                skipped[caddr] = cname
                continue
            if caddr not in reachable:
                stack.append(caddr)
    return reachable, missing, skipped


def remove_stale_locks() -> None:
    for lock in GHIDRA_PROJECT_DIR.glob("*.lock*"):
        try:
            lock.unlink()
            print(f"removed stale lock {lock.name}")
        except OSError as exc:
            print(f"WARNING: could not remove {lock}: {exc}")
    rep_dir = GHIDRA_PROJECT_DIR / f"{GHIDRA_PROJECT_NAME}.rep"
    if rep_dir.is_dir():
        for lock in rep_dir.rglob("*.lock*"):
            try:
                lock.unlink()
                print(f"removed stale lock {lock.relative_to(GHIDRA_PROJECT_DIR)}")
            except OSError as exc:
                print(f"WARNING: could not remove {lock}: {exc}")


def run_ghidra_batch(addrs: list[str]) -> None:
    remove_stale_locks()
    cmd = [
        str(GHIDRA_HEADLESS),
        str(GHIDRA_PROJECT_DIR),
        GHIDRA_PROJECT_NAME,
        "-process",
        PROGRAM_NAME,
        "-noanalysis",
        "-scriptPath",
        str(GHIDRA_SCRIPTS),
        "-postScript",
        "DecompileWithCallees.java",
        str(DECOMP_DIR),
        *addrs,
    ]
    print(f"ghidra batch: {len(addrs)} addrs ({addrs[0]}..{addrs[-1]})", flush=True)
    started = time.time()
    result = subprocess.run(cmd, capture_output=True, text=True)
    elapsed = time.time() - started
    tail = "\n".join(result.stdout.splitlines()[-15:])
    print(f"ghidra exit={result.returncode} in {elapsed:.0f}s\n{tail}", flush=True)
    if result.returncode != 0:
        err_tail = "\n".join(result.stderr.splitlines()[-30:])
        raise RuntimeError(f"ghidra headless failed:\n{err_tail}")


def rebuild_index() -> None:
    script = TOOL_ROOT / "scripts" / "rebuild_index_from_decompiles.py"
    result = subprocess.run(
        [sys.executable, str(script)], capture_output=True, text=True
    )
    print(result.stdout.strip(), flush=True)
    if result.returncode != 0:
        raise RuntimeError(f"rebuild_index failed:\n{result.stderr}")


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--roots", nargs="+", default=DEFAULT_ROOTS)
    ap.add_argument("--run", action="store_true", help="decompile until closure")
    ap.add_argument("--batch-size", type=int, default=150)
    ap.add_argument("--max-iterations", type=int, default=40)
    args = ap.parse_args()

    iteration = 0
    while True:
        iteration += 1
        index = load_index()
        reachable, missing, skipped = compute_closure(index, args.roots)
        print(
            f"[iter {iteration}] reachable(decompiled)={len(reachable)} "
            f"missing={len(missing)} skipped(CRT)={len(skipped)}",
            flush=True,
        )
        if not missing:
            print("closure complete — every reachable function has a decompile")
            return
        todo = sorted(missing)
        if not args.run:
            for a in todo:
                print(a)
            return
        if iteration > args.max_iterations:
            raise RuntimeError("max iterations exceeded; closure not converging")
        for i in range(0, len(todo), args.batch_size):
            run_ghidra_batch(todo[i : i + args.batch_size])
            rebuild_index()


if __name__ == "__main__":
    main()
