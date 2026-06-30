"""Save fingerprinting and legends-export readiness checks."""

from __future__ import annotations

import hashlib
from dataclasses import dataclass, field
from pathlib import Path

from .compression import decompress_file, describe_save_version, is_target_save_version, read_header
from .deserializers.world_dat import parse_dat_preamble
from .save_bundle import SaveKind, index_save_folder, legends_parse_target
from .target import TARGET_DF_VERSION, TARGET_SAVE_VERSION

# SHA-256 of Namushul small-retired world.dat (matches tests/fixture_paths.py).
NAMUSHUL_WORLD_DAT_SHA256 = (
    "f9cee2642831252bcb09c71cc4f10450505e174abc0aa6806a1f9c79745d8714"
)

# Known fixture fingerprints (SHA-256 of compressed world.dat on disk).
KNOWN_FIXTURES: dict[str, dict[str, str | int]] = {
    NAMUSHUL_WORLD_DAT_SHA256: {
        "label": "Namushul (small-retired fixture)",
        "world_name": "Namushul",
        "max_histfig": 12_747,
        "max_event": 113_118,
    },
}


@dataclass
class SaveFingerprint:
    path: Path
    kind: str
    file_size: int
    sha256: str
    save_version: int
    save_version_label: str
    is_target_version: bool
    is_compressed: bool
    payload_size: int | None
    world_name: str | None
    max_histfig: int | None
    max_event: int | None
    max_civ: int | None
    known_fixture: str | None = None
    folder: Path | None = None
    region_name: str | None = None
    is_active: bool | None = None
    is_retired: bool | None = None
    legends_target: Path | None = None
    warnings: list[str] = field(default_factory=list)
    notes: list[str] = field(default_factory=list)


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as fh:
        for chunk in iter(lambda: fh.read(1 << 20), b""):
            digest.update(chunk)
    return digest.hexdigest()


def fingerprint_world_blob(path: Path) -> SaveFingerprint:
    raw = path.read_bytes()
    header = read_header(raw)
    dec = decompress_file(path)
    pre = parse_dat_preamble(dec.payload, save_version=header.save_version)
    world_name = pre.header.world_name.value if pre.header.world_name else None
    max_histfig = pre.header.max_ids[8] if len(pre.header.max_ids) > 8 else None
    max_event = pre.header.max_ids[9] if len(pre.header.max_ids) > 9 else None
    max_civ = pre.header.max_ids[4] if len(pre.header.max_ids) > 4 else None
    digest = hashlib.sha256(raw).hexdigest()

    fp = SaveFingerprint(
        path=path,
        kind=path.name,
        file_size=len(raw),
        sha256=digest,
        save_version=header.save_version,
        save_version_label=describe_save_version(header.save_version),
        is_target_version=is_target_save_version(header.save_version),
        is_compressed=header.is_compressed,
        payload_size=len(dec.payload),
        world_name=world_name,
        max_histfig=max_histfig,
        max_event=max_event,
        max_civ=max_civ,
    )

    known = KNOWN_FIXTURES.get(digest)
    if known:
        fp.known_fixture = str(known["label"])
        if world_name and known.get("world_name") and world_name != known["world_name"]:
            fp.warnings.append(
                f"world name {world_name!r} does not match known fixture {known['world_name']!r}"
            )

    if not fp.is_target_version:
        fp.warnings.append(
            f"save_version {header.save_version} is not target "
            f"{TARGET_DF_VERSION} ({TARGET_SAVE_VERSION})"
        )

    return fp


def fingerprint_path(path: Path) -> SaveFingerprint:
    path = path.resolve()
    if path.is_dir():
        index = index_save_folder(path)
        target = legends_parse_target(index)
        if target is None:
            raise FileNotFoundError(f"no world.dat or world.sav in {path}")
        fp = fingerprint_world_blob(target.path)
        fp.folder = index.folder
        fp.region_name = index.region_name
        fp.is_active = index.is_active
        fp.is_retired = index.is_retired
        fp.legends_target = target.path
        fp.kind = target.kind.value
        sidecars = [e for e in index.entries if e.kind not in (SaveKind.WORLD_DAT, SaveKind.WORLD_SAV)]
        fp.notes.append(f"save folder: {len(index.entries)} files ({len(sidecars)} sidecars)")
        if index.is_active:
            fp.notes.append("active fort — world.sav is live; legends export uses retired world.dat after abandon")
        if index.is_retired:
            fp.notes.append("retired fort — world.dat is the legends parse target")
        return fp

    if not path.is_file():
        raise FileNotFoundError(path)
    return fingerprint_world_blob(path)


LEGENDS_EXPORT_STEPS = """
Legends text export for validation (DF 0.47.05)
===============================================

Press [p] in Legends mode (Export Map/Gen information). DF writes to the game
root directory (not the save folder):

  • regionNN-world_gen_param.txt
  • regionNN-YYYY-MM-DD-world_history.txt      ← required for name cross-check
  • regionNN-YYYY-MM-DD-world_sites_and_pops.txt
  • regionNN-YYYY-MM-DD-world_map.bmp

Workflow:
  1. Main menu → Legends → select the same world as your world.dat.
  2. Press [p] once and wait for files in your DF install directory.
  3. Validate (pass the history file or a folder containing the exports):

       df-save-re validate <world.dat> --legends-text path/to/world_history.txt
       df-save-re validate <world.dat> --legends-text path/to/df-root/

Checks performed:
  • world name in world_history.txt matches world.dat header ({world_name})
  • DF version in world_gen_param.txt matches target {target_df}

This save's header counters (for RE reference, not checked against text exports):
  max_histfig (max_ids[8]) = {max_histfig}
  max_event   (max_ids[9]) = {max_event}

Note: [x] produces legends.xml — optional and not required for this project.
Text exports do not include event/figure counts.
""".strip()


def fingerprint_to_dict(fp: SaveFingerprint) -> dict:
    return {
        "path": str(fp.path),
        "kind": fp.kind,
        "file_size": fp.file_size,
        "sha256": fp.sha256,
        "save_version": fp.save_version,
        "save_version_label": fp.save_version_label,
        "is_target_version": fp.is_target_version,
        "target": f"{TARGET_DF_VERSION} ({TARGET_SAVE_VERSION})",
        "is_compressed": fp.is_compressed,
        "payload_size": fp.payload_size,
        "world_name": fp.world_name,
        "max_histfig": fp.max_histfig,
        "max_event": fp.max_event,
        "max_civ": fp.max_civ,
        "known_fixture": fp.known_fixture,
        "folder": str(fp.folder) if fp.folder else None,
        "region_name": fp.region_name,
        "is_active": fp.is_active,
        "is_retired": fp.is_retired,
        "legends_target": str(fp.legends_target) if fp.legends_target else None,
        "warnings": fp.warnings,
        "notes": fp.notes,
    }
