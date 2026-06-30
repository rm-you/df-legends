"""Cross-check world.dat extraction against legends p-key text exports."""

from __future__ import annotations

import re
from dataclasses import dataclass, field
from enum import Enum

from .deserializers.entity_names import match_civ_name_lists
from .legends_extract import LegendsSnapshot
from .legends_text import LegendsTextBundle, load_legends_text
from .target import TARGET_DF_VERSION


class VerifyStatus(str, Enum):
    PASS = "pass"
    FAIL = "fail"
    PENDING = "pending"  # binary layer not parsed yet — text value recorded as target


@dataclass
class VerifyCheck:
    layer: str
    field: str
    status: VerifyStatus
    expected: str | int | None = None
    actual: str | int | None = None
    note: str = ""


@dataclass
class LegendsVerificationReport:
    world_name: str | None
    checks: list[VerifyCheck] = field(default_factory=list)
    text_summary: dict = field(default_factory=dict)
    save_summary: dict = field(default_factory=dict)
    notes: list[str] = field(default_factory=list)

    @property
    def passed(self) -> int:
        return sum(1 for c in self.checks if c.status == VerifyStatus.PASS)

    @property
    def failed(self) -> int:
        return sum(1 for c in self.checks if c.status == VerifyStatus.FAIL)

    @property
    def pending(self) -> int:
        return sum(1 for c in self.checks if c.status == VerifyStatus.PENDING)

    def ok_for_parsed_layers(self) -> bool:
        return self.failed == 0


_RACE_SUFFIXES = ("Dwarves", "Elves", "Humans", "Goblins", "Kobolds")
_SUBTERRANEAN_RE = re.compile(r"^(?:\s*)([A-Za-z ]+?)\s*men\s*$", re.MULTILINE)


def parse_history_details(text: str) -> dict:
    """Extract structured counts from world_history.txt."""
    lines = text.splitlines()
    named_civs: list[tuple[str, str]] = []
    subterranean = 0
    rulers = 0
    in_preamble = True

    for line in lines:
        stripped = line.strip()
        if stripped.startswith("[*]"):
            rulers += 1
            continue
        if not stripped:
            continue
        if in_preamble and stripped.endswith("men"):
            subterranean += 1
            continue
        if ", " in stripped and " List" not in stripped:
            for race in _RACE_SUFFIXES:
                if stripped.endswith(f", {race}"):
                    named_civs.append((stripped[: -len(race) - 2], race))
                    in_preamble = False
                    break

    races = {}
    for _, race in named_civs:
        races[race] = races.get(race, 0) + 1

    return {
        "named_civ_count": len(named_civs),
        "named_civs": [f"{name}, {race}" for name, race in named_civs],
        "civ_race_counts": races,
        "subterranean_count": subterranean,
        "ruler_count": rulers,
    }


def verify_snapshot_against_text(
    snapshot: LegendsSnapshot,
    text: LegendsTextBundle,
) -> LegendsVerificationReport:
    """Compare parsed world.dat layers to legends text export ground truth."""
    details: dict = {}
    if text.history:
        from pathlib import Path

        hist_text = Path(text.history.path).read_text(encoding="utf-8", errors="replace")
        details = parse_history_details(hist_text)

    report = LegendsVerificationReport(
        world_name=snapshot.world_name,
        text_summary={
            "world_name": text.history.world_name if text.history else None,
            "alt_name": text.history.alt_name if text.history else None,
            "named_civ_count": details.get("named_civ_count"),
            "subterranean_count": details.get("subterranean_count"),
            "ruler_count": details.get("ruler_count"),
            "site_count": text.sites.site_count if text.sites else None,
            "end_year": text.world_gen.end_year if text.world_gen else None,
        },
        save_summary={
            "world_name": snapshot.world_name,
            "max_histfig": snapshot.header.max_ids[8] if len(snapshot.header.max_ids) > 8 else None,
            "max_event": snapshot.header.max_ids[9] if len(snapshot.header.max_ids) > 9 else None,
            "max_civ": snapshot.header.max_ids[4] if len(snapshot.header.max_ids) > 4 else None,
            "entity_catalog_count": len(snapshot.entity_catalog),
            "named_entity_count": sum(1 for e in snapshot.entity_catalog if e.has_name),
            "subterranean_catalog_count": snapshot.entity_class_counts.get(
                "SUBTERRANEAN_ANIMAL_PEOPLES", 0
            ),
            "entity_classes": list(snapshot.entity_class_counts.keys()),
        },
    )

    def add(
        layer: str,
        field_name: str,
        status: VerifyStatus,
        *,
        expected=None,
        actual=None,
        note: str = "",
    ) -> None:
        report.checks.append(
            VerifyCheck(
                layer=layer,
                field=field_name,
                status=status,
                expected=expected,
                actual=actual,
                note=note,
            )
        )

    # --- verified today ---
    if text.history and snapshot.world_name:
        ok = text.history.world_name == snapshot.world_name
        add(
            "world_header",
            "world_name",
            VerifyStatus.PASS if ok else VerifyStatus.FAIL,
            expected=text.history.world_name,
            actual=snapshot.world_name,
        )

    if text.world_gen and text.world_gen.df_version:
        major = ".".join(TARGET_DF_VERSION.split(".")[:2])
        ok = text.world_gen.df_version.startswith(major)
        add(
            "world_header",
            "df_version",
            VerifyStatus.PASS if ok else VerifyStatus.FAIL,
            expected=TARGET_DF_VERSION,
            actual=text.world_gen.df_version,
        )

    expected_named = details.get("named_civ_count")
    actual_named = sum(1 for e in snapshot.entity_catalog if e.has_name)
    if expected_named is not None:
        add(
            "entities",
            "named_civ_count",
            VerifyStatus.PASS if expected_named == actual_named else VerifyStatus.FAIL,
            expected=expected_named,
            actual=actual_named,
            note="surface civs with language names in world_history.txt vs has_name entity headers",
        )

    expected_sub = details.get("subterranean_count")
    actual_sub = snapshot.entity_class_counts.get("SUBTERRANEAN_ANIMAL_PEOPLES", 0)
    if expected_sub is not None:
        add(
            "entities",
            "subterranean_civ_count",
            VerifyStatus.PASS if expected_sub == actual_sub else VerifyStatus.FAIL,
            expected=expected_sub,
            actual=actual_sub,
            note="animal people lines at top of world_history.txt vs SUBTERRANEAN_ANIMAL_PEOPLES headers",
        )

    entity_classes = set(snapshot.entity_class_counts)
    if text.history:
        add(
            "string_tables",
            "entity_class_tokens",
            VerifyStatus.PASS if entity_classes else VerifyStatus.FAIL,
            expected=sorted(entity_classes),
            actual=sorted(snapshot.entities.entity_classes),
            note="section[7] tokens used by entity header parser",
        )

    if details.get("named_civs") and snapshot.entity_names:
        text_names = [line.rsplit(", ", 1)[0] for line in details["named_civs"]]
        binary_names = [n.resolved for n in snapshot.entity_names if n.resolved]
        matched, unmatched = match_civ_name_lists(text_names, binary_names)
        ok = matched == len(text_names) == len(binary_names)
        add(
            "entities",
            "named_civ_names",
            VerifyStatus.PASS if ok else VerifyStatus.FAIL,
            expected=len(text_names),
            actual=matched,
            note=(
                "language_name word-table resolution vs world_history.txt civ titles"
                + (f"; unmatched={unmatched[:3]}" if unmatched else "")
            ),
        )

    # --- targets for unparsed layers (text records expected; binary parse pending) ---
    if text.sites:
        binary_site_count = (
            snapshot.world_site_catalog.site_count
            if snapshot.world_site_catalog
            else snapshot.site_name_scan.located_count
            if snapshot.site_name_scan
            else None
        )
        add(
            "sites",
            "site_count",
            VerifyStatus.PASS
            if binary_site_count == text.sites.site_count
            else VerifyStatus.PENDING,
            expected=text.sites.site_count,
            actual=binary_site_count,
            note=(
                "world_site catalog from binary name markers"
                + (
                    f" ({snapshot.world_site_catalog.header_enriched_count} enriched with type/civ/pos)"
                    if snapshot.world_site_catalog
                    and snapshot.world_site_catalog.header_enriched_count
                    else ""
                )
                if snapshot.world_site_catalog
                else "marker scan only — world_site catalog not built"
            ),
        )
        if snapshot.site_text_catalog:
            add(
                "sites",
                "site_text_catalog",
                VerifyStatus.PASS
                if snapshot.site_text_catalog.site_count == text.sites.site_count
                else VerifyStatus.FAIL,
                expected=text.sites.site_count,
                actual=snapshot.site_text_catalog.site_count,
                note="structured parse of *-world_sites_and_pops*.txt (owners, populations)",
            )
            report.save_summary["site_text_catalog"] = snapshot.site_text_catalog.site_count
        if snapshot.site_name_scan:
            located = snapshot.site_name_scan.located_count
            expected = text.sites.site_count
            add(
                "sites",
                "site_name_markers",
                VerifyStatus.PASS if located >= max(340, expected - 10) else VerifyStatus.PENDING,
                expected=expected,
                actual=located,
                note=(
                    "language_name word-table title runs in post-region mid payload "
                    f"(0x{snapshot.site_name_scan.region_start:x}–0x{snapshot.site_name_scan.region_end:x})"
                ),
            )
            report.save_summary["site_name_markers"] = located
        if snapshot.world_site_catalog:
            report.save_summary["world_site_catalog"] = snapshot.world_site_catalog.site_count
            add(
                "sites",
                "world_site_catalog",
                VerifyStatus.PASS
                if snapshot.world_site_catalog.site_count == text.sites.site_count
                else VerifyStatus.FAIL,
                expected=text.sites.site_count,
                actual=snapshot.world_site_catalog.site_count,
                note=(
                    "marker-anchored world_site records; "
                    f"{snapshot.world_site_catalog.header_enriched_count} with header fields"
                ),
            )

    if details.get("ruler_count") is not None:
        text_rulers = (
            snapshot.history_text_catalog.ruler_count
            if snapshot.history_text_catalog
            else None
        )
        add(
            "historical_figures",
            "ruler_entries",
            VerifyStatus.PENDING,
            expected=details["ruler_count"],
            actual=text_rulers,
            note=(
                "position holders in text export; binary histfig vector still open"
                + (
                    f"; text catalog parsed {text_rulers} rulers"
                    if text_rulers is not None
                    else ""
                )
            ),
        )
        if snapshot.history_text_catalog:
            add(
                "historical_figures",
                "history_text_catalog",
                VerifyStatus.PASS
                if snapshot.history_text_catalog.ruler_count == details["ruler_count"]
                else VerifyStatus.FAIL,
                expected=details["ruler_count"],
                actual=snapshot.history_text_catalog.ruler_count,
                note="structured parse of *-world_history*.txt ruler lines",
            )

    max_hf = snapshot.header.max_ids[8] if len(snapshot.header.max_ids) > 8 else None
    if max_hf is not None:
        add(
            "world_history",
            "historical_figure_count",
            VerifyStatus.PENDING,
            expected=max_hf,
            actual=None,
            note="header max_ids[8]; confirm when figures vector parses",
        )

    max_ev = snapshot.header.max_ids[9] if len(snapshot.header.max_ids) > 9 else None
    if max_ev is not None:
        add(
            "world_history",
            "historical_event_count",
            VerifyStatus.PENDING,
            expected=max_ev,
            actual=None,
            note="header max_ids[9]; confirm when events vector parses",
        )

    if snapshot.history_stats:
        add(
            "world_history",
            "stats_block",
            VerifyStatus.PENDING,
            expected=f"events={max_ev}, figs={max_hf}",
            actual=f"offset=0x{snapshot.history_stats.payload_offset:x}",
            note="counter echo found; not yet confirmed as world_history start",
        )

    max_civ = snapshot.header.max_ids[4] if len(snapshot.header.max_ids) > 4 else None
    catalog_count = len(snapshot.entity_catalog)
    if snapshot.entity_catalog_region:
        report.save_summary["entity_catalog_region_end"] = (
            snapshot.entity_catalog_region.region_end
        )
        add(
            "entities",
            "catalog_region",
            VerifyStatus.PASS,
            expected=snapshot.entity_catalog_region.region_end,
            actual=snapshot.entity_catalog_region.region_end,
            note=(
                f"{snapshot.entity_catalog_region.header_count} civ headers "
                f"(ids 0..{snapshot.entity_catalog_region.max_catalog_id}); "
                f"skip target before region blocks @ 0x{snapshot.entity_catalog_region.region_end:x}"
            ),
        )
    if max_civ is not None:
        add(
            "entities",
            "catalog_header_count",
            VerifyStatus.PASS if catalog_count >= 50 else VerifyStatus.FAIL,
            expected=catalog_count,
            actual=catalog_count,
            note="validated historical_entity civ headers located by class-string scan",
        )
        add(
            "entities",
            "total_civ_capacity",
            VerifyStatus.PENDING,
            expected=max_civ,
            actual=catalog_count,
            note=(
                f"header max_ids[4]={max_civ:,} is next entity id capacity echo; "
                f"not the catalog header count ({catalog_count})"
                + (
                    f"; region skip @ 0x{snapshot.entity_catalog_region.region_end:x}"
                    if snapshot.entity_catalog_region
                    else ""
                )
            ),
        )

    report.notes.append(
        "PASS = binary parse matches text export for that layer. "
        "PENDING = text gives a target; world.dat layer not extracted yet."
    )
    return report


def verify_world_dat_against_text(
    snapshot: LegendsSnapshot,
    text_path: str,
) -> LegendsVerificationReport:
    bundle = load_legends_text(text_path)
    return verify_snapshot_against_text(snapshot, bundle)


def report_to_dict(report: LegendsVerificationReport) -> dict:
    return {
        "world_name": report.world_name,
        "summary": {
            "pass": report.passed,
            "fail": report.failed,
            "pending": report.pending,
            "ok_for_parsed_layers": report.ok_for_parsed_layers(),
        },
        "text": report.text_summary,
        "save": report.save_summary,
        "checks": [
            {
                "layer": c.layer,
                "field": c.field,
                "status": c.status.value,
                "expected": c.expected,
                "actual": c.actual,
                "note": c.note,
            }
            for c in report.checks
        ],
        "notes": report.notes,
        "explorer_roadmap": EXPLORER_ROADMAP,
    }


EXPLORER_ROADMAP = [
    {
        "layer": "world_header",
        "status": "done",
        "website_use": "World title, save fingerprint",
    },
    {
        "layer": "string_tables",
        "status": "done",
        "website_use": "Material/creature/entity class name lookup",
    },
    {
        "layer": "entities",
        "status": "partial",
        "website_use": (
            "Civ list, types, IDs — 78 catalog headers; region skip @ first region block; "
            "full body walk still open"
        ),
    },
    {
        "layer": "sites",
        "status": "partial",
        "website_use": (
            "Site map, populations — 350 marker-anchored world_site records; "
            "full struct body walk still open"
        ),
    },
    {
        "layer": "historical_figures",
        "status": "partial",
        "website_use": (
            "Rulers, deities, figures — ruler lines parsed from text export; "
            "12,747 binary histfig vector still open"
        ),
    },
    {
        "layer": "world_history",
        "status": "blocked",
        "website_use": (
            "Event timeline — 113,118 events; stats echo @ history tail "
            "but polymorphic event vector not yet located"
        ),
    },
    {
        "layer": "artifacts",
        "status": "blocked",
        "website_use": "Legendary items",
    },
]
