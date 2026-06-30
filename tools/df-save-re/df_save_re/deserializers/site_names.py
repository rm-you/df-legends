"""Locate site language_name word sequences in world.dat (Path C RE)."""

from __future__ import annotations

import re
import struct
from dataclasses import dataclass

from .string_tables import StringTableBlock


@dataclass(frozen=True)
class SiteNameMarker:
    site_id: int
    display_name: str
    word_indices: tuple[int, ...]
    payload_offset: int


@dataclass
class SiteNameScanResult:
    region_start: int
    region_end: int
    markers: list[SiteNameMarker]
    decompose_failures: list[tuple[int, str]]

    @property
    def located_count(self) -> int:
        return len(self.markers)


def _word_index(words: list[str]) -> dict[str, int]:
    return {name.upper(): idx for idx, name in enumerate(words)}


def _exact_word_index(token: str, word_idx: dict[str, int]) -> int | None:
    return word_idx.get(token)


def _prefix_word_index(token: str, word_idx: dict[str, int]) -> int | None:
    """Map a token prefix to a word-table entry (e.g. CROSS -> CROSS_NOUN)."""
    matches = [(name, idx) for name, idx in word_idx.items() if name.startswith(token)]
    if not matches:
        return None
    if len(matches) == 1:
        return matches[0][1]
    noun = [pair for pair in matches if pair[0].endswith("_NOUN")]
    if len(noun) == 1:
        return noun[0][1]
    # Same stem family (CROSS_NOUN / CROSS_VERB / …): pick canonical noun form.
    stems = {name.split("_", 1)[0] for name, _ in matches}
    if len(stems) == 1:
        for name, idx in matches:
            if name.endswith("_NOUN"):
                return idx
    return None


_STOP_WORDS = frozenset({"THE", "A", "AN", "OF", "AT", "BY", "FOR", "TO", "IN", "ON", "AND"})


def _piece_variants(piece: str) -> list[str]:
    variants = [piece]
    if len(piece) > 3 and piece.endswith("S"):
        variants.append(piece[:-1])
    if len(piece) > 4 and piece.endswith("ES"):
        variants.append(piece[:-2])
    if len(piece) > 4 and piece.endswith("ED"):
        variants.append(piece[:-2])
    if len(piece) > 5 and piece.endswith("ING"):
        variants.append(piece[:-3])
    out: list[str] = []
    seen: set[str] = set()
    for item in variants:
        if item not in seen:
            seen.add(item)
            out.append(item)
    return out


def _resolve_word_piece_exact(piece: str, word_idx: dict[str, int]) -> int | None:
    return _exact_word_index(piece, word_idx) or _prefix_word_index(piece, word_idx)


def _resolve_word_piece(piece: str, word_idx: dict[str, int]) -> int | None:
    for variant in _piece_variants(piece):
        exact = _exact_word_index(variant, word_idx)
        if exact is not None:
            return exact
        prefix = _prefix_word_index(variant, word_idx)
        if prefix is not None:
            return prefix
    return None


def decompose_display_name_to_word_indices(
    display_name: str,
    *,
    words: list[str],
) -> tuple[int, ...] | None:
    """
    Map a legends text site title to language_name word indices (section 8 word table).

    Uses greedy longest-match tokenization on uppercase alnum tokens; strips a leading THE.
    """
    word_idx = _word_index(words)
    text = re.sub(r"[^A-Za-z0-9 ]", " ", display_name.upper())
    text = re.sub(r"\s+", " ", text).strip()
    if not text:
        return None

    tokens = [t for t in text.split() if t not in _STOP_WORDS]

    indices: list[int] = []
    for token in tokens:
        exact = _exact_word_index(token, word_idx)
        if exact is not None:
            indices.append(exact)
            continue
        # Compound single-token titles (Incensecross, Birthshadows, …)
        parts: list[int] = []
        remaining = token
        while remaining:
            match_idx: int | None = None
            match_len = 0
            for size in range(min(len(remaining), 24), 1, -1):
                piece = remaining[:size]
                idx = _resolve_word_piece_exact(piece, word_idx)
                if idx is not None:
                    match_idx = idx
                    match_len = size
                    break
            if match_idx is None:
                # Allow plural/suffix variants on the final piece of a compound token.
                idx = _resolve_word_piece(remaining, word_idx)
                if idx is None:
                    return None
                parts.append(idx)
                break
            parts.append(match_idx)
            remaining = remaining[match_len:]
            if remaining and _resolve_word_piece(remaining, word_idx) is not None:
                parts.append(_resolve_word_piece(remaining, word_idx))  # type: ignore[arg-type]
                break
        indices.extend(parts)

    return tuple(indices[:7]) if indices else None


def decompose_display_name_candidates(
    display_name: str,
    *,
    words: list[str],
    max_candidates: int = 8,
) -> list[tuple[int, ...]]:
    """Return plausible word-index sequences for a legends site title."""
    candidates: list[tuple[int, ...]] = []

    def add(seq: tuple[int, ...] | None) -> None:
        if seq is None or len(seq) < 2:
            return
        if seq not in candidates:
            candidates.append(seq)

    add(decompose_display_name_to_word_indices(display_name, words=words))

    collapsed = re.sub(r"[^A-Za-z0-9]", "", display_name.upper())
    if collapsed:
        add(decompose_display_name_to_word_indices(collapsed, words=words))

    spaced = re.sub(r"[^A-Za-z0-9 ]", " ", display_name.upper())
    spaced = re.sub(r"\s+", " ", spaced).strip()
    no_stop = " ".join(t for t in spaced.split() if t not in _STOP_WORDS)
    if no_stop and no_stop != spaced:
        add(decompose_display_name_to_word_indices(no_stop, words=words))

    return candidates[:max_candidates]


def find_word_sequence(
    payload: bytes,
    word_indices: tuple[int, ...],
    *,
    start: int,
    end: int,
) -> int | None:
    if len(word_indices) < 1:
        return None
    if len(word_indices) == 1:
        needle = struct.pack("<i", word_indices[0])
    else:
        needle = struct.pack("<" + "i" * len(word_indices), *word_indices)
    off = payload.find(needle, start, end)
    return None if off < 0 else off


def scan_site_name_markers(
    payload: bytes,
    *,
    block: StringTableBlock,
    region_start: int,
    region_end: int,
    site_names: dict[int, str],
) -> SiteNameScanResult:
    """Find site title word runs in the post-region mid payload (Namushul: ~0x86c157–0x15beb28)."""
    words = block.sections[8].names if len(block.sections) > 8 else []
    markers: list[SiteNameMarker] = []
    failures: list[tuple[int, str]] = []

    for site_id, display_name in sorted(site_names.items()):
        located: SiteNameMarker | None = None
        for word_indices in decompose_display_name_candidates(display_name, words=words):
            if len(word_indices) < 2:
                continue
            off = find_word_sequence(
                payload,
                word_indices,
                start=region_start,
                end=region_end,
            )
            if off is None:
                continue
            located = SiteNameMarker(
                site_id=site_id,
                display_name=display_name,
                word_indices=word_indices,
                payload_offset=off,
            )
            break
        if located is None:
            failures.append((site_id, display_name))
            continue
        markers.append(located)

    return SiteNameScanResult(
        region_start=region_start,
        region_end=region_end,
        markers=markers,
        decompose_failures=failures,
    )


def parse_site_names_from_text(text: str) -> dict[int, str]:
    """Parse site id → display title from *-world_sites_and_pops*.txt."""
    sites: dict[int, str] = {}
    for match in re.finditer(r'^(\d+): .+, "([^"]+)", .+$', text, re.MULTILINE):
        sites[int(match.group(1))] = match.group(2)
    return sites
