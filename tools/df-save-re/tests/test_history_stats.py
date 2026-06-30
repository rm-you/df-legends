"""Tests for history stats block probe."""

from pathlib import Path

from df_save_re.compression import decompress_file
from df_save_re.deserializers.history_stats import probe_history_stats
from df_save_re.deserializers.world_dat import parse_dat_preamble


FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"


def test_probe_history_stats_namushul():
    payload = decompress_file(FIXTURE).payload
    pre = parse_dat_preamble(payload)
    probe = probe_history_stats(payload, pre.header)
    assert probe is not None
    assert probe.header_matches
    assert probe.fields.event_counter == 113118
    assert probe.fields.histfig_counter == 12747
    assert probe.fields.field_151 == 151
    assert probe.fields.field_4 == 4
