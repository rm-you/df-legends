"""Save fingerprinting and legends-export readiness checks."""

from __future__ import annotations

import hashlib
from dataclasses import dataclass, field
from pathlib import Path

from .compression import decompress_file, describe_save_version, is_target_save_version, read_header
from .save_preamble import parse_save_preamble, preamble_kind_for_path
from .save_bundle import SaveKind, index_save_folder, legends_parse_target
from .legends_exports import LegendsExportBundle, discover_legends_exports
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
    exports: LegendsExportBundle | None = None
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
    kind = preamble_kind_for_path(path)
    pre = parse_save_preamble(dec.payload, kind=kind, save_version=header.save_version)
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
        fp.exports = discover_legends_exports(index.folder)
        sidecars = [e for e in index.entries if e.kind not in (SaveKind.WORLD_DAT, SaveKind.WORLD_SAV)]
        fp.notes.append(f"save folder: {len(index.entries)} files ({len(sidecars)} sidecars)")
        if index.is_active:
            fp.notes.append("active fort — world.sav holds live state; legends data is inside Game data")
        if index.is_retired:
            fp.notes.append("retired fort — world.dat is the legends parse target")
        return fp

    if not path.is_file():
        raise FileNotFoundError(path)
    fp = fingerprint_world_blob(path)
    fp.exports = discover_legends_exports(path)
    return fp


LEGENDS_EXPORT_STEPS = """
Legends exports for validation (DF 0.47.05)
============================================

Vanilla Legends mode ([p] key) writes text files to the game root directory:

  • regionNN-world_gen_param.txt
  • regionNN-YYYY-MM-DD-world_history.txt
  • regionNN-YYYY-MM-DD-world_sites_and_pops.txt
  • regionNN-YYYY-MM-DD-world_map.bmp

DFHack ``exportlegends all`` writes a much richer verify-only oracle:

  • regionNN-YYYY-MM-DD-legends.xml

Recommended layout for this project:

  data/saves/regionNN/world.dat
  data/saves/regionNN/regionNN-*-legends.xml     ← copy/symlink oracle here
  data/saves/regionNN-*-world_history.txt        ← parent dir also searched

Workflow:
  1. Main menu → Legends → select the same world as your save.
  2. Press [p] for text exports; run ``exportlegends all`` in DFHack for XML.
  3. Copy exports beside the save (or keep the regionNN-* prefix in data/saves/).
  4. Validate:

       df-save-re validate data/saves/region1
       df-save-re verify data/saves/region1/world.dat
       df-save-re folder data/saves/region1

Checks performed:
  • world name in world_history.txt matches world.dat header
  • DF version in world_gen_param.txt matches target {target_df}
  • exportlegends XML parses completely and record counts are reported
  • header max_ids[*] cross-checked against oracle totals (verify-only)

This save's header counters (for RE reference):
  max_histfig (max_ids[8]) = {max_histfig}
  max_event   (max_ids[9]) = {max_event}
  max_civ     (max_ids[4]) = {max_civ}

Exports are NEVER read by the binary extraction path — validation only.
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
        "exports": fp.exports.to_dict() if fp.exports else None,
        "warnings": fp.warnings,
        "notes": fp.notes,
    }
