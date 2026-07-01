# Test suite notes

## Why pytest looks like it “hangs forever”

Two separate issues stack together:

1. **PowerShell output buffering** — piping pytest through `Select-Object -Last N` (as in some agent scripts) buffers *all* output until the entire run finishes. With a 15–30 minute suite you see zero lines for the whole run. Run pytest directly instead:

   ```powershell
   python -m pytest tests/ -q
   python -m pytest tests/ -q --durations=15
   ```

2. **Genuinely slow integration tests** — each full `extract_legends_snapshot()` on Namushul scans a ~35 MB decompressed payload (vector probes + layer walks) and takes **~60–90 seconds**. Several tests call it independently; `import_world_dat` runs a full extract plus SQLite import.

   Profile locally:

   ```powershell
   $env:PYTHONPATH = "tests"
   python scripts/time_extract.py
   python scripts/profile_extract.py
   ```

## Recommended commands

Fast subset (unit + light integration, skips `@pytest.mark.slow`):

```powershell
python -m pytest tests/ -q -m "not slow"
```

Full suite (expect **15–30+ minutes** on Namushul + Waterlures fixtures):

```powershell
python -m pytest tests/ -q --durations=20
```

Single file with live progress:

```powershell
python -m pytest tests/test_historical_figures.py -v
```

## Timeouts

`pyproject.toml` sets a default **120s** per-test timeout via `pytest-timeout`. Tests marked `@pytest.mark.slow` override to **600s** where needed.

Install test deps: `pip install -e ".[test]"`

## Shared fixtures

`conftest.py` provides session-scoped fixtures so Namushul is extracted once per run:

- `namushul_snapshot` — full extract with engine walks
- `namushul_snapshot_light` — catalogs only (no walks / vector probe)
- `namushul_resolved` — raw payload + preamble

Prefer these over calling `extract_legends_snapshot()` inline in new tests.
