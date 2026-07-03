"""Compare header max_ids site ceiling vs sites_and_pops exports for region1/2/3."""

import re
import sys
from pathlib import Path

from df_save_re.save_preamble import resolve_save_payload

SAVES = Path(r"C:\Users\rm_yo\CursorProjects\df-legends\data\saves")


def main() -> None:
    for region in ("region1", "region2", "region3"):
        wd = SAVES / region / "world.dat"
        exp = SAVES / f"{region}-00250-01-01-world_sites_and_pops.txt"
        if not wd.exists():
            print(f"{region}: no world.dat")
            continue
        resolved = resolve_save_payload(str(wd))
        ids = resolved.preamble.header.max_ids
        n_sites = 0
        if exp.exists():
            text = exp.read_text(encoding="cp437", errors="replace")
            site_ids = [int(m.group(1)) for m in re.finditer(r"^(\d+): ", text, re.M)]
            n_sites = max(site_ids) if site_ids else 0
        print(f"{region}: export sites={n_sites}")
        # print every max_ids entry that is within +-8 of the export count
        hits = [
            (i, v) for i, v in enumerate(ids) if n_sites and abs(v - n_sites) <= 8
        ]
        print(f"  max_ids[3]={ids[3]} (+4 = {ids[3]+4})")
        print(f"  max_ids[26]={ids[26] if len(ids) > 26 else '?'} (+4 = {ids[26]+4 if len(ids) > 26 else '?'})")
        print(f"  max_ids entries near {n_sites}: {hits}")
        print(f"  full max_ids: {ids}")


if __name__ == "__main__":
    sys.stdout.reconfigure(errors="backslashreplace")
    main()
