#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields
import struct

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
struct = load_struct("historical_figure", xml_dir)
fields = resolve_fields(struct, xml_dir)
tail_fields = [fd for fd in fields if fd.name not in ("pool_id",) and fields.index(fd) >= next(i for i, f in enumerate(fields) if f.name == "entity_links")]

for fig_label, fig_start in [("fig0", 0x2134DD0), ("fig1", 0x2135412)]:
    r = BinaryReader(BytesIO(payload))
    r.seek(fig_start)
    read_historical_figure_header(r)
    print(f"\n=== {fig_label} header end {r.tell():#x} ===")
    for fd in tail_fields:
        off = r.tell()
        try:
            skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_figure")
            print(f"  ok {fd.name:20s} @ {off:#x} +{r.tell()-off:4d} -> {r.tell():#x}")
        except SkipError as e:
            print(f"  FAIL {fd.name} @ {off:#x}: {e}")
            # dump next dwords
            for i in range(6):
                o = off + i * 4
                print(f"    {o:#x}: {struct.unpack_from('<i', payload, o)[0]:10d} ({payload[o:o+4].hex()})")
            break
    else:
        print(f"  TOTAL body bytes: {r.tell() - fig_start}")
