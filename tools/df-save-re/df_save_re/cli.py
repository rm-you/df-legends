#!/usr/bin/env python3
"""CLI for df-save-re tools."""

from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

from .compression import decompress_file, describe_save_version, is_target_save_version, read_header
from .deserializers.probe import probe_save
from .deserializers.world_dat import parse_dat_preamble
from .hexdump import format_hexdump, scan_int32_values
from .legends_extract import extract_legends_snapshot, snapshot_to_dict
from .legends_scan import scan_legends_region
from .legends_text import compare_text_with_save, load_legends_text, text_bundle_to_dict
from .legends_xml import compare_with_save_header, parse_legends_xml
from .save_bundle import index_save_folder, legends_parse_target
from .save_validate import LEGENDS_EXPORT_STEPS, fingerprint_path, fingerprint_to_dict
from .scan import scan_save
from .target import TARGET_DF_VERSION, TARGET_SAVE_VERSION


def cmd_inspect(args: argparse.Namespace) -> int:
    path = Path(args.path)
    raw = path.read_bytes()
    header = read_header(raw)
    print(f"file:           {path}")
    print(f"size:           {len(raw):,} bytes")
    print(f"save_version:   {header.save_version} ({describe_save_version(header.save_version)})")
    print(f"target:         {TARGET_DF_VERSION} (save_version {TARGET_SAVE_VERSION})")
    if not is_target_save_version(header.save_version):
        print(
            f"warning:        save is not {TARGET_DF_VERSION} — parser hypotheses may not apply",
            file=sys.stderr,
        )
    print(f"compressed:     {header.is_compressed}")
    if header.is_compressed:
        dec = decompress_file(path)
        print(f"blocks:         {len(dec.blocks)}")
        print(f"payload_size:   {len(dec.payload):,} bytes")
        ratio = len(dec.payload) / len(raw) if raw else 0
        print(f"expand_ratio:   {ratio:.2f}x")
        if dec.blocks:
            print("block_summary:")
            for block in dec.blocks[:10]:
                print(
                    f"  #{block.index}: compressed={block.compressed_size:,} "
                    f"decompressed={block.decompressed_size:,} @0x{block.file_offset:x}"
                )
            if len(dec.blocks) > 10:
                print(f"  ... {len(dec.blocks) - 10} more blocks")
    return 0


def cmd_decompress(args: argparse.Namespace) -> int:
    path = Path(args.path)
    dec = decompress_file(path)
    out = Path(args.output)
    out.write_bytes(dec.payload)
    print(f"wrote {len(dec.payload):,} bytes to {out}")
    return 0


def cmd_probe(args: argparse.Namespace) -> int:
    result = probe_save(args.path)
    if args.json:
        import json

        payload = {
            "path": result.path,
            "save_kind": result.save_kind.value,
            "payload_size": result.payload_size,
            "marker_offsets": result.marker_offsets,
            "world_header_error": result.world_header_error,
            "sav_header_error": result.sav_header_error,
            "notes": result.notes,
        }
        if result.world_header:
            wh = result.world_header
            payload["world_header"] = {
                "unknown_int16": wh.unknown_int16,
                "id_summary": wh.id_summary(),
                "world_name": str(wh.world_name) if wh.world_name else None,
                "has_name": wh.has_name,
            }
        if result.sav_header:
            payload["sav_header"] = {"fields": result.sav_header.fields}
        if result.dat_preamble:
            pre = result.dat_preamble
            payload["dat_preamble"] = {
                "bytes_consumed": pre.bytes_consumed,
                "world_data_offset": pre.world_data_offset,
                "post_raws_int32": pre.post_raws_int32,
                "generated_raws": {
                    "section_count": pre.generated_raws.section_count,
                    "total_strings": pre.generated_raws.total_strings,
                    "bytes_consumed": pre.generated_raws.bytes_consumed,
                },
            }
        if result.post_header_stream:
            ph = result.post_header_stream
            payload["post_header_stream"] = {
                "lead_field": ph.lead_field,
                "section_count": len(ph.sections),
                "total_strings": ph.total_strings,
                "bytes_consumed": ph.bytes_consumed,
            }
        if result.string_tables:
            st = result.string_tables
            payload["string_tables"] = {
                "section_count": st.section_count,
                "total_names": st.total_names,
                "bytes_consumed": st.bytes_consumed,
                "first_section_count": st.sections[0].entry_count if st.sections else 0,
                "first_section_first": st.sections[0].names[0] if st.sections else None,
            }
        payload["string_tables_error"] = result.string_tables_error
        if result.legends_scan:
            ls = result.legends_scan
            payload["legends_scan"] = {
                "preamble_end": ls.preamble_end,
                "post_header_end": ls.post_header_end,
                "string_tables_offset": ls.string_tables_offset,
                "string_tables_end": ls.string_tables_end,
                "first_region_marker": ls.first_region_marker,
                "history_anchor": (
                    {
                        "offset": ls.history_anchor.payload_offset,
                        "event_count": ls.history_anchor.event_count,
                        "fig_nearby_offset": ls.history_anchor.nearby_offset,
                        "posnull_score": ls.history_anchor.posnull_score,
                    }
                    if ls.history_anchor
                    else None
                ),
                "id_counter_hits": [
                    {
                        "index": h.index,
                        "label": h.label,
                        "value": h.value,
                        "offset": h.payload_offset,
                    }
                    for h in ls.id_counter_hits[:20]
                ],
            }
        payload["dat_preamble_error"] = result.dat_preamble_error
        payload["blocks"] = {
            k: (
                {"magic": v.magic.value, "field_8": v.field_8, "payload_len": len(v.payload)}
                if hasattr(v, "magic")
                else v
            )
            for k, v in result.block_at_markers.items()
        }
        print(json.dumps(payload, indent=2))
        return 0

    print(f"file: {result.path}")
    print(f"save_kind: {result.save_kind.value}")
    print(f"payload: {result.payload_size:,} bytes")
    for note in result.notes:
        print(f"note: {note}")
    if result.world_header_error:
        print(f"DAT world header hypothesis: FAILED ({result.world_header_error})")
    elif result.world_header:
        wh = result.world_header
        print("DAT world header hypothesis: OK")
        print(f"  world_name: {wh.world_name}")
        for k, v in wh.id_summary().items():
            if "max" in k or v > 0:
                print(f"  {k}: {v}")
    if result.sav_header_error:
        print(f"SAV world header hypothesis: FAILED ({result.sav_header_error})")
    elif result.sav_header:
        sh = result.sav_header
        print(f"SAV world header hypothesis: OK ({len(sh.fields)} int32 fields)")
        preview = ", ".join(str(v) for v in sh.fields[:6])
        if len(sh.fields) > 6:
            preview += ", ..."
        print(f"  fields: [{preview}]")
    if result.marker_offsets:
        print("region markers:")
        for m, offs in result.marker_offsets.items():
            print(f"  {m}: {len(offs)} hit(s), first @ {offs[0]:#x}")
    for key, val in result.block_at_markers.items():
        if hasattr(val, "magic"):
            print(f"  parsed {key}: field_8={val.field_8} payload={len(val.payload)} bytes")
        else:
            print(f"  {key}: {val}")
    return 0


def cmd_extract(args: argparse.Namespace) -> int:
    path = Path(args.path)
    dec = decompress_file(path)
    file_header = read_header(path.read_bytes())
    pre = parse_dat_preamble(dec.payload, save_version=file_header.save_version)
    snap = extract_legends_snapshot(
        dec.payload,
        preamble=pre,
        max_entities=args.max_entities,
    )
    data = snapshot_to_dict(snap)

    if args.json:
        print(json.dumps(data, indent=2))
        return 0

    print(f"file: {path}")
    print(f"world_name: {snap.world_name}")
    print(f"max_histfig: {snap.header.max_ids[8]:,}")
    print(f"max_event:   {snap.header.max_ids[9]:,}")
    for note in snap.notes:
        print(f"note: {note}")
    print("\nstring table sections:")
    for row in data["string_tables"]:
        print(
            f"  [{row['index']:2}] {row['count']:5} entries  "
            f"{row['first']!r} … {row['last']!r}"
        )
    print("\nfirst entities:")
    for ent in data["entities"][: min(15, len(data["entities"]))]:
        name = " (named)" if ent["has_name"] else ""
        print(f"  id={ent['id']:4} {ent['class']!r}{name}")
    cat = data.get("entity_catalog") or {}
    if cat.get("count"):
        print(
            f"\nentity catalog: {cat['count']} civ headers, "
            f"{cat['named_count']} named, max id {cat['max_id_found']}"
        )
        for cls, count in sorted(
            (cat.get("class_counts") or {}).items(),
            key=lambda kv: (-kv[1], kv[0]),
        ):
            print(f"  {cls}: {count}")
        named = cat.get("named_entities") or []
        if named:
            print("named civs (sample):")
            for ent in named[:10]:
                print(f"  id={ent['id']:4} {ent['class']!r}")
    if snap.history_stats:
        hs = snap.history_stats
        print(
            f"\nhistory stats @ 0x{hs.payload_offset:x}: "
            f"events={hs.event_counter:,} figs={hs.histfig_counter:,} "
            f"(mid fields {hs.field_151}, {hs.field_4})"
        )
    return 0


def cmd_legends_scan(args: argparse.Namespace) -> int:
    path = Path(args.path)
    dec = decompress_file(path)
    file_header = read_header(path.read_bytes())
    pre = parse_dat_preamble(dec.payload, save_version=file_header.save_version)
    post_end = None
    post_lead = None
    post_sections = None
    if args.full:
        from io import BytesIO

        from .binary_reader import BinaryReader
        from .deserializers.post_header import PostHeaderRawStream

        reader = BinaryReader(BytesIO(dec.payload))
        reader.seek(pre.world_data_offset)
        stream = PostHeaderRawStream.read(reader)
        post_end = reader.tell()
        post_lead = stream.lead_field
        post_sections = len(stream.sections)

    report = scan_legends_region(
        dec.payload,
        preamble_end=pre.world_data_offset,
        post_raws_int32=pre.post_raws_int32,
        header=pre.header,
        post_header_lead=post_lead,
        post_header_sections=post_sections,
        post_header_end=post_end,
    )

    if args.json:
        out = {
            "path": str(path),
            "world_name": pre.header.world_name.value if pre.header.world_name else None,
            "max_histfig": pre.header.max_ids[8],
            "max_event": pre.header.max_ids[9],
            "preamble_end": report.preamble_end,
            "post_header_end": report.post_header_end,
            "string_tables_offset": report.string_tables_offset,
            "string_tables_sections": report.string_tables_sections,
            "string_tables_end": report.string_tables_end,
            "history_anchor": (
                {
                    "offset": report.history_anchor.payload_offset,
                    "event_count": report.history_anchor.event_count,
                    "fig_nearby_offset": report.history_anchor.nearby_offset,
                    "posnull_score": report.history_anchor.posnull_score,
                }
                if report.history_anchor
                else None
            ),
            "notes": report.notes,
        }
        print(json.dumps(out, indent=2))
        return 0

    print(f"file: {path}")
    print(f"world_name: {pre.header.world_name}")
    print(f"max_ids[8] histfig: {pre.header.max_ids[8]:,}")
    print(f"max_ids[9] event:   {pre.header.max_ids[9]:,}")
    for note in report.notes:
        print(f"note: {note}")
    if report.history_anchor and args.legends_xml:
        xml_path = Path(args.legends_xml)
        if xml_path.is_file():
            xml_stats = parse_legends_xml(xml_path)
            mismatches = compare_with_save_header(
                xml_stats,
                world_name=pre.header.world_name.value if pre.header.world_name else None,
                max_histfig=pre.header.max_ids[8],
                max_event=pre.header.max_ids[9],
            )
            print(f"legends xml: {xml_path}")
            print(f"  events: {xml_stats.historical_events:,}  figures: {xml_stats.historical_figures:,}")
            if mismatches:
                print("  mismatches:")
                for line in mismatches:
                    print(f"    - {line}")
            else:
                print("  header/xml counts: OK")
        else:
            print(f"legends xml: (not found at {xml_path})")
    return 0


def cmd_legends_compare(args: argparse.Namespace) -> int:
    save_path = Path(args.world_dat)
    xml_path = Path(args.legends_xml)
    dec = decompress_file(save_path)
    file_header = read_header(save_path.read_bytes())
    pre = parse_dat_preamble(dec.payload, save_version=file_header.save_version)
    xml_stats = parse_legends_xml(xml_path)
    mismatches = compare_with_save_header(
        xml_stats,
        world_name=pre.header.world_name.value if pre.header.world_name else None,
        max_histfig=pre.header.max_ids[8],
        max_event=pre.header.max_ids[9],
    )

    if args.json:
        out = {
            "save": str(save_path),
            "legends_xml": str(xml_path),
            "save_world_name": pre.header.world_name.value if pre.header.world_name else None,
            "xml_world_name": xml_stats.world_name,
            "save_max_histfig": pre.header.max_ids[8],
            "save_max_event": pre.header.max_ids[9],
            "xml_figures": xml_stats.historical_figures,
            "xml_events": xml_stats.historical_events,
            "xml_max_figure_id": xml_stats.max_figure_id,
            "xml_max_event_id": xml_stats.max_event_id,
            "mismatches": mismatches,
        }
        print(json.dumps(out, indent=2))
        return 0 if not mismatches else 2

    print(f"save: {save_path}")
    print(f"xml:  {xml_path}")
    print(f"save world_name: {pre.header.world_name}")
    print(f"xml  world_name: {xml_stats.world_name}" + (f" ({xml_stats.alt_name})" if xml_stats.alt_name else ""))
    print(f"save max_ids[8] histfig: {pre.header.max_ids[8]:,}")
    print(f"save max_ids[9] event:   {pre.header.max_ids[9]:,}")
    print(f"xml  historical_figure: {xml_stats.historical_figures:,} (max id {xml_stats.max_figure_id})")
    print(f"xml  historical_event:  {xml_stats.historical_events:,} (max id {xml_stats.max_event_id})")
    if mismatches:
        print("mismatches:")
        for line in mismatches:
            print(f"  - {line}")
        return 2
    print("header/xml counts: OK (within tolerance)")
    return 0


def cmd_validate(args: argparse.Namespace) -> int:
    path = Path(args.path)
    fp = fingerprint_path(path)
    mismatches: list[str] = []
    xml_mismatches: list[str] = []
    text_mismatches: list[str] = []
    xml_stats = None
    text_bundle = None

    if args.legends_xml:
        xml_path = Path(args.legends_xml)
        if not xml_path.is_file():
            print(f"error: legends xml not found: {xml_path}", file=sys.stderr)
            return 1
        xml_stats = parse_legends_xml(xml_path)
        xml_mismatches = compare_with_save_header(
            xml_stats,
            world_name=fp.world_name,
            max_histfig=fp.max_histfig,
            max_event=fp.max_event,
        )
        mismatches.extend(xml_mismatches)

    if args.legends_text:
        text_path = Path(args.legends_text)
        if not text_path.exists():
            print(f"error: legends text export not found: {text_path}", file=sys.stderr)
            return 1
        text_bundle = load_legends_text(text_path)
        text_mismatches = compare_text_with_save(text_bundle, world_name=fp.world_name)
        mismatches.extend(text_mismatches)

    if args.json:
        out = fingerprint_to_dict(fp)
        if xml_stats is not None:
            out["legends_xml"] = str(args.legends_xml)
            out["xml_stats"] = {
                "world_name": xml_stats.world_name,
                "historical_events": xml_stats.historical_events,
                "historical_figures": xml_stats.historical_figures,
                "max_event_id": xml_stats.max_event_id,
                "max_figure_id": xml_stats.max_figure_id,
                "format_notes": xml_stats.notes,
            }
            out["xml_mismatches"] = xml_mismatches
        if text_bundle is not None:
            out["legends_text"] = str(args.legends_text)
            out["legends_text_export"] = text_bundle_to_dict(text_bundle)
            out["text_mismatches"] = text_mismatches
        print(json.dumps(out, indent=2))
        return 0 if not mismatches else 2

    print(f"path: {fp.path}")
    if fp.folder:
        print(f"folder: {fp.folder} ({fp.region_name})")
        print(f"legends target: {fp.legends_target}")
        if fp.is_retired:
            print("status: retired (world.dat present)")
        if fp.is_active:
            print("status: active (world.sav present)")
    print(f"kind: {fp.kind}")
    print(f"size: {fp.file_size:,} bytes")
    print(f"sha256: {fp.sha256}")
    if fp.known_fixture:
        print(f"known fixture: {fp.known_fixture}")
    print(
        f"save_version: {fp.save_version} ({fp.save_version_label}) "
        f"target {TARGET_DF_VERSION} ({TARGET_SAVE_VERSION})"
    )
    if fp.payload_size is not None:
        print(f"payload: {fp.payload_size:,} bytes decompressed")
    print(f"world_name: {fp.world_name}")
    if fp.max_histfig is not None:
        print(f"max_histfig (max_ids[8]): {fp.max_histfig:,}")
    if fp.max_event is not None:
        print(f"max_event   (max_ids[9]): {fp.max_event:,}")
    if fp.max_civ is not None:
        print(f"max_civ     (max_ids[4]): {fp.max_civ:,}")
    for note in fp.notes:
        print(f"note: {note}")
    for warn in fp.warnings:
        print(f"warning: {warn}", file=sys.stderr)

    if xml_stats is not None:
        print(f"\nlegends xml: {args.legends_xml}")
        print(f"  xml world_name: {xml_stats.world_name}")
        print(f"  xml events: {xml_stats.historical_events:,}  figures: {xml_stats.historical_figures:,}")
        for note in xml_stats.notes:
            print(f"  note: {note}")
        if xml_mismatches:
            print("  mismatches (XML may be from a different world or export):")
            for line in xml_mismatches:
                print(f"    - {line}")
        else:
            print("  header/xml counts: OK")

    if text_bundle is not None:
        print(f"\nlegends text export: {args.legends_text}")
        if text_bundle.history:
            print(f"  world_name: {text_bundle.history.world_name!r}")
            if text_bundle.history.alt_name:
                print(f"  alt_name:   {text_bundle.history.alt_name!r}")
            print(f"  ruler entries: {text_bundle.history.ruler_entries}")
        if text_bundle.sites:
            print(
                f"  sites: {text_bundle.sites.site_count:,}  "
                f"total pop: {text_bundle.sites.total_population:,}"
                if text_bundle.sites.total_population
                else f"  sites: {text_bundle.sites.site_count:,}"
            )
        if text_bundle.world_gen:
            print(
                f"  world_gen: DF {text_bundle.world_gen.df_version or '?'}  "
                f"end_year={text_bundle.world_gen.end_year}"
            )
        for note in text_bundle.notes:
            print(f"  note: {note}")
        if text_mismatches:
            print("  mismatches:")
            for line in text_mismatches:
                print(f"    - {line}")
        elif text_bundle.history:
            print("  world name matches save header")

    if args.export_help:
        print()
        hist = f"{fp.max_histfig:,}" if fp.max_histfig is not None else "?"
        ev = f"{fp.max_event:,}" if fp.max_event is not None else "?"
        wn = fp.world_name or "?"
        print(
            LEGENDS_EXPORT_STEPS.format(
                max_histfig=hist,
                max_event=ev,
                world_name=wn,
                target_df=TARGET_DF_VERSION,
            )
        )

    return 0 if not mismatches else 2


def cmd_preamble(args: argparse.Namespace) -> int:
    path = Path(args.path)
    dec = decompress_file(path)
    file_header = read_header(path.read_bytes())
    pre = parse_dat_preamble(dec.payload, save_version=file_header.save_version)

    if args.json:
        out = {
            "path": str(path),
            "world_name": pre.header.world_name.value if pre.header.world_name else None,
            "header_bytes": pre.header.bytes_consumed,
            "generated_raws": {
                "section_count": pre.generated_raws.section_count,
                "total_strings": pre.generated_raws.total_strings,
                "bytes_consumed": pre.generated_raws.bytes_consumed,
                "first_section_strings": pre.generated_raws.sections[0].string_count
                if pre.generated_raws.sections
                else 0,
            },
            "post_raws_int32": pre.post_raws_int32,
            "preamble_bytes": pre.bytes_consumed,
            "world_data_offset": pre.world_data_offset,
        }
        print(json.dumps(out, indent=2))
        return 0

    wh = pre.header
    print(f"file: {path}")
    print(f"world_name: {wh.world_name}")
    print(f"header: {wh.bytes_consumed} bytes")
    gr = pre.generated_raws
    print(
        f"generated_raws: {gr.section_count} sections, {gr.total_strings} strings, "
        f"{gr.bytes_consumed:,} bytes"
    )
    if gr.sections:
        s0 = gr.sections[0]
        print(f"  section[0]: {s0.string_count} strings, first={s0.strings[0]!r}")
    print(f"post_raws int32: {pre.post_raws_int32}")
    print(f"preamble total: {pre.bytes_consumed:,} bytes")
    print(f"world_data offset: 0x{pre.world_data_offset:x}")
    return 0


def cmd_hexdump(args: argparse.Namespace) -> int:
    dec = decompress_file(args.path)
    data = dec.payload
    start = args.offset
    length = args.length or min(256, len(data) - start)
    print(format_hexdump(data, start=start, length=length))
    if args.scan_ids:
        print("\nplausible int32 values (0..10M) in range:")
        for off, val in scan_int32_values(data, start=start, end=start + length):
            print(f"  0x{off:08x}  {val}")
    return 0


def cmd_fields(args: argparse.Namespace) -> int:
    from .structures.xml_fields import load_struct, summarize_fields

    repo_root = Path(__file__).resolve().parents[3]
    xml_dir = Path(args.xml_dir) if args.xml_dir else repo_root / "data" / "df-structures"
    struct = load_struct(args.type_name, xml_dir)
    if struct is None:
        print(f"error: struct {args.type_name!r} not found under {xml_dir}", file=sys.stderr)
        return 1
    print(f"struct {struct.type_name} (original: {struct.original_name})")
    if struct.inherits:
        print(f"  inherits: {struct.inherits}")
    print("fields:")
    for line in summarize_fields(struct):
        print(line)
    return 0


def cmd_folder(args: argparse.Namespace) -> int:
    index = index_save_folder(args.path)
    target = legends_parse_target(index)
    if args.json:
        payload = {
            "folder": str(index.folder),
            "region_name": index.region_name,
            "is_active": index.is_active,
            "is_retired": index.is_retired,
            "legends_parse_target": str(target.path) if target else None,
            "entries": [
                {
                    "path": str(e.path),
                    "kind": e.kind.value,
                    "index": e.index,
                }
                for e in index.entries
            ],
        }
        print(json.dumps(payload, indent=2))
        return 0

    print(f"folder: {index.folder}")
    print(f"region: {index.region_name}")
    print(f"active: {index.is_active}")
    print(f"retired: {index.is_retired}")
    if target:
        print(f"legends target: {target.path.name} ({target.kind.value})")
    print("files:")
    for e in index.entries:
        idx = f" #{e.index}" if e.index is not None else ""
        print(f"  {e.kind.value:18} {e.path.name}{idx}")
    return 0


def cmd_scan(args: argparse.Namespace) -> int:
    report = scan_save(args.path)
    if args.json:
        payload = {
            "path": report.path,
            "header": report.header_summary,
            "payload_size": report.payload_size,
            "block_count": report.block_count,
            "markers": [
                {"marker": h.marker, "offset": h.payload_offset} for h in report.markers
            ],
            "int32_at_offset_8": report.int32_at_offset_8,
            "notes": report.notes,
        }
        print(json.dumps(payload, indent=2))
        return 0

    print(f"file: {report.path}")
    print(report.header_summary)
    print(f"payload: {report.payload_size:,} bytes in {report.block_count} compressed block(s)")
    for note in report.notes:
        print(f"note: {note}")
    if report.markers:
        print("markers:")
        for hit in report.markers:
            print(f"  0x{hit.payload_offset:08x}  {hit.marker}")
    else:
        print("markers: (none)")
    return 0


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(
        prog="df-save-re",
        description="Dwarf Fortress save reverse-engineering tools (Path C, Layer 1)",
    )
    sub = parser.add_subparsers(dest="command", required=True)

    p_folder = sub.add_parser(
        "folder",
        help="Inventory a region save folder (world.sav/dat + sidecars)",
    )
    p_folder.add_argument("path", help="Path to region folder (e.g. data/save/region1)")
    p_folder.add_argument("--json", action="store_true")
    p_folder.set_defaults(func=cmd_folder)

    p_inspect = sub.add_parser("inspect", help="Show save header and compression info")
    p_inspect.add_argument("path", help="Path to world.sav or world.dat")
    p_inspect.set_defaults(func=cmd_inspect)

    p_decompress = sub.add_parser("decompress", help="Write decompressed payload bytes")
    p_decompress.add_argument("path")
    p_decompress.add_argument("-o", "--output", required=True)
    p_decompress.set_defaults(func=cmd_decompress)

    p_scan = sub.add_parser("scan", help="Scan payload for known block markers")
    p_scan.add_argument("path")
    p_scan.add_argument("--json", action="store_true")
    p_scan.set_defaults(func=cmd_scan)

    p_probe = sub.add_parser(
        "probe",
        help="Try RE-derived structure guesses against decompressed payload",
    )
    p_probe.add_argument("path")
    p_probe.add_argument("--json", action="store_true")
    p_probe.set_defaults(func=cmd_probe)

    p_preamble = sub.add_parser(
        "preamble",
        help="Parse world.dat header + generated raws block",
    )
    p_preamble.add_argument("path")
    p_preamble.add_argument("--json", action="store_true")
    p_preamble.set_defaults(func=cmd_preamble)

    p_legends = sub.add_parser(
        "legends-compare",
        help="Compare legends XML export stats against world.dat header counters",
    )
    p_legends.add_argument("world_dat")
    p_legends.add_argument("legends_xml")
    p_legends.add_argument("--json", action="store_true")
    p_legends.set_defaults(func=cmd_legends_compare)

    p_lscan = sub.add_parser(
        "legends-scan",
        help="Scan world.dat for string tables and world_history anchor candidates",
    )
    p_lscan.add_argument("path", help="Path to world.dat")
    p_lscan.add_argument(
        "--full",
        action="store_true",
        help="Parse post-header raw stream first (slower, more precise offsets)",
    )
    p_lscan.add_argument(
        "--legends-xml",
        default=None,
        help="Optional legends.xml path for count cross-check when available",
    )
    p_lscan.add_argument("--json", action="store_true")
    p_lscan.set_defaults(func=cmd_legends_scan)

    p_extract = sub.add_parser(
        "extract",
        help="Extract string tables, entity headers, and known landmarks from world.dat",
    )
    p_extract.add_argument("path", help="Path to world.dat")
    p_extract.add_argument(
        "--max-entities",
        type=int,
        default=50,
        help="Max consecutive civ headers to parse (default 50)",
    )
    p_extract.add_argument("--json", action="store_true")
    p_extract.set_defaults(func=cmd_extract)

    p_validate = sub.add_parser(
        "validate",
        help="Fingerprint world.dat/sav and verify legends XML matches (optional)",
    )
    p_validate.add_argument(
        "path",
        help="Path to world.dat, world.sav, or region save folder",
    )
    p_validate.add_argument(
        "--legends-text",
        default=None,
        help="Legends p-key export (world_history.txt or folder with text exports)",
    )
    p_validate.add_argument(
        "--legends-xml",
        default=None,
        help="Optional legends.xml (not normally used; event count cross-check only)",
    )
    p_validate.add_argument(
        "--export-help",
        action="store_true",
        help="Print step-by-step vanilla/DFHack legends export instructions",
    )
    p_validate.add_argument("--json", action="store_true")
    p_validate.set_defaults(func=cmd_validate)

    p_hex = sub.add_parser("hexdump", help="Hexdump decompressed payload region")
    p_hex.add_argument("path")
    p_hex.add_argument("-o", "--offset", type=lambda x: int(x, 0), default=0)
    p_hex.add_argument("-l", "--length", type=lambda x: int(x, 0), default=None)
    p_hex.add_argument("--scan-ids", action="store_true", help="List plausible int32 IDs in range")
    p_hex.set_defaults(func=cmd_hexdump)

    p_fields = sub.add_parser("fields", help="Show df-structures field layout for a type")
    p_fields.add_argument("type_name", help="e.g. history_event or history_event_created_sitest")
    p_fields.add_argument("--xml-dir", default=None)
    p_fields.set_defaults(func=cmd_fields)

    args = parser.parse_args(argv)
    try:
        return args.func(args)
    except (OSError, ValueError, EOFError) as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
