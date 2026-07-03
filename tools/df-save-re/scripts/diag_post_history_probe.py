#!/usr/bin/env python3
"""Probe post-history section layouts from history_end on one or more saves."""
from __future__ import annotations

import argparse
import sys

from df_save_re.deserializers.post_history_walk import walk_post_history
from df_save_re.deserializers.world_history_walk import locate_world_history, walk_world_history
from df_save_re.save_preamble import resolve_save_payload


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("saves", nargs="+")
    args = ap.parse_args()
    for save in args.saves:
        resolved = resolve_save_payload(save)
        payload = resolved.payload
        header = resolved.preamble.header
        sv = resolved.save_version
        lm = locate_world_history(payload, header, save_version=sv)
        if lm is None:
            print(f"{save}: locate FAILED")
            continue
        full = walk_world_history(payload, header, save_version=sv, landmarks=lm)
        end = full.history_end or 0
        print(f"{save}: history_end=0x{end:x} next32={payload[end:end+32].hex()}")
        try:
            result = walk_post_history(payload, end, save_version=sv)
            for sec in result.sections:
                print(
                    f"  {sec['kind']}: 0x{sec['start']:x}..0x{sec['end']:x} "
                    f"({sec['end'] - sec['start']} bytes)"
                )
            print(f"  post_history end=0x{result.end_offset:x}")
        except Exception as exc:
            print(f"  post_history FAILED: {exc}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
