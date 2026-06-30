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


def _word_phrase_index(words: list[str]) -> dict[str, int]:
    """Map space-stripped table phrases (SCALE SKIN → SCALESKIN)."""
    out: dict[str, int] = {}
    for idx, name in enumerate(words):
        collapsed = re.sub(r"[^A-Z0-9]", "", name.upper())
        if len(collapsed) >= 4:
            out.setdefault(collapsed, idx)
    return out


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
    if piece.endswith("AVES"):
        variants.append("LEAF")
    if piece.endswith("D") and len(piece) > 4:
        variants.append(piece[:-1])
    out: list[str] = []
    seen: set[str] = set()
    for item in variants:
        if item not in seen:
            seen.add(item)
            out.append(item)
    return out


_GLUE_SUFFIXES = ("NESS", "ING", "ED", "ES", "D", "S")

# Irregular legends spellings → word-table entries (Namushul RE).
_IRREGULAR_PIECES: dict[str, str] = {
    "WINDS": "WIND CLOCK",
    "STANCES": "STAND",
    "STOLE": "STEAL",
    "JUSTICE": "JUST",
}


def _resolve_word_piece_exact(piece: str, word_idx: dict[str, int]) -> int | None:
    """Exact word-table hits only (no prefix expansion)."""
    return _exact_word_index(piece, word_idx)


def _resolve_word_piece(piece: str, word_idx: dict[str, int]) -> int | None:
    mapped = _IRREGULAR_PIECES.get(piece.upper())
    if mapped is not None:
        exact = _exact_word_index(mapped, word_idx)
        if exact is not None:
            return exact
    for variant in _piece_variants(piece):
        exact = _exact_word_index(variant, word_idx)
        if exact is not None:
            return exact
        prefix = _prefix_word_index(variant, word_idx)
        if prefix is not None:
            return prefix
    return None


def _strip_glued_suffix(remaining: str, word_idx: dict[str, int]) -> str:
    """Drop past-tense/plural glue (BRISTLED→D, LEAVES→S) when the rest resolves."""
    for suffix in _GLUE_SUFFIXES:
        if remaining.upper().startswith(suffix):
            trial = remaining[len(suffix) :]
            if trial and _resolve_word_piece(trial, word_idx) is not None:
                return trial
    return remaining


def _token_rewrite_variants(token: str) -> list[str]:
    variants = [token]
    if token.startswith("STOLEN"):
        variants.append("STEAL" + token[6:])
    if token.startswith("ENTER") and len(token) > 5:
        variants.append("ENTRY" + token[5:])
    return variants


def _decompose_token(token: str, word_idx: dict[str, int], phrase_idx: dict[str, int]) -> tuple[int, ...] | None:
    """Greedy compound split for a single alnum token."""
    for variant in _token_rewrite_variants(token):
        phrase = phrase_idx.get(variant)
        if phrase is not None:
            return (phrase,)
        parts: list[int] = []
        remaining = variant
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
                idx = _resolve_word_piece(remaining, word_idx)
                if idx is None:
                    break
                parts.append(idx)
                break
            parts.append(match_idx)
            remaining = _strip_glued_suffix(remaining[match_len:], word_idx)
            if not remaining:
                break
            if _resolve_word_piece(remaining, word_idx) is not None:
                parts.append(_resolve_word_piece(remaining, word_idx))  # type: ignore[arg-type]
                break
        if len(parts) >= 2:
            return tuple(parts)
    return None


def _decompose_tokens_backtracking(
    tokens: list[str],
    word_idx: dict[str, int],
    phrase_idx: dict[str, int],
    *,
    max_depth: int = 7,
) -> list[tuple[int, ...]]:
    """Enumerate word-index sequences for spaced tokens."""
    solutions: list[tuple[int, ...]] = []

    def rec(token_idx: int, acc: list[int]) -> None:
        if len(solutions) >= 16:
            return
        if token_idx >= len(tokens):
            if len(acc) >= 2:
                solutions.append(tuple(acc[:max_depth]))
            return
        token = tokens[token_idx]
        exact = _exact_word_index(token, word_idx)
        if exact is not None:
            rec(token_idx + 1, acc + [exact])
        resolved = _resolve_word_piece(token, word_idx)
        if resolved is not None:
            rec(token_idx + 1, acc + [resolved])
        compound = _decompose_token(token, word_idx, phrase_idx)
        if compound:
            rec(token_idx + 1, acc + list(compound))

    rec(0, [])
    return solutions


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
    phrase_idx = _word_phrase_index(words)
    text = re.sub(r"[^A-Za-z0-9 ]", " ", display_name.upper())
    text = re.sub(r"\s+", " ", text).strip()
    if not text:
        return None

    tokens = [t for t in text.split() if t not in _STOP_WORDS]

    if len(tokens) > 1:
        backtracked = _decompose_tokens_backtracking(tokens, word_idx, phrase_idx)
        if backtracked:
            return backtracked[0]

    indices: list[int] = []
    for token in tokens:
        exact = _exact_word_index(token, word_idx)
        if exact is not None:
            indices.append(exact)
            continue
        compound = _decompose_token(token, word_idx, phrase_idx)
        if compound is None:
            resolved = _resolve_word_piece(token, word_idx)
            if resolved is None:
                return None
            indices.append(resolved)
            continue
        indices.extend(compound)

    return tuple(indices[:7]) if len(indices) >= 2 else None


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

    word_idx = _word_index(words)
    phrase_idx = _word_phrase_index(words)
    text = re.sub(r"[^A-Za-z0-9 ]", " ", display_name.upper())
    text = re.sub(r"\s+", " ", text).strip()
    tokens = [t for t in text.split() if t not in _STOP_WORDS]
    for seq in _decompose_tokens_backtracking(tokens, word_idx, phrase_idx):
        add(seq)

    collapsed = re.sub(r"[^A-Za-z0-9]", "", display_name.upper())
    if collapsed:
        add(_decompose_token(collapsed, word_idx, phrase_idx))
        add(decompose_display_name_to_word_indices(collapsed, words=words))

    spaced = re.sub(r"[^A-Za-z0-9 ]", " ", display_name.upper())
    spaced = re.sub(r"\s+", " ", spaced).strip()
    no_stop = " ".join(t for t in spaced.split() if t not in _STOP_WORDS)
    if no_stop and no_stop != spaced:
        add(decompose_display_name_to_word_indices(no_stop, words=words))

    # Prefix pairs for long titles when full run is not stored contiguously.
    primary = decompose_display_name_to_word_indices(display_name, words=words)
    if primary and len(primary) >= 3:
        add(primary[:2])
        add(primary[:3])

    return candidates[:max_candidates]


def _normalize_title(text: str) -> str:
    return re.sub(r"[^a-z0-9]", "", text.lower())


def _pair_display(indices: tuple[int, ...], words: list[str]) -> str:
    parts: list[str] = []
    for idx in indices:
        if 0 <= idx < len(words):
            parts.append(re.sub(r"[^a-z0-9]", "", words[idx].lower()))
    return "".join(parts)


def build_word_pair_index(
    payload: bytes,
    *,
    start: int,
    end: int,
    max_word_index: int = 4000,
) -> dict[tuple[int, int], int]:
    """Index first occurrence of consecutive int32 word-index pairs in a range."""
    index: dict[tuple[int, int], int] = {}
    for off in range(start, end - 8, 4):
        a = int.from_bytes(payload[off : off + 4], "little", signed=True)
        b = int.from_bytes(payload[off + 4 : off + 8], "little", signed=True)
        if a < 0 or b < 0 or a > max_word_index or b > max_word_index:
            continue
        key = (a, b)
        if key not in index:
            index[key] = off
    return index


def match_title_to_word_pair(
    display_name: str,
    *,
    words: list[str],
    pair_index: dict[tuple[int, int], int],
) -> tuple[tuple[int, int], int] | None:
    """Fuzzy-match a site title to a indexed word pair (e.g. Scalystop → SCALE SKIN + STOP)."""
    target = _normalize_title(display_name)
    if len(target) < 4:
        return None
    best: tuple[tuple[int, int], int, int] | None = None
    for pair, off in pair_index.items():
        display = _pair_display(pair, words)
        if len(display) < 4:
            continue
        if display == target or display in target or target in display:
            score = len(display)
            if best is None or score > best[2]:
                best = (pair, off, score)
        elif target[:4] == display[:4] and len(display) >= 6:
            score = len(display) - 1
            if best is None or score > best[2]:
                best = (pair, off, score)
    if best is None:
        return None
    return best[0], best[1]


def find_word_sequence(
    payload: bytes,
    word_indices: tuple[int, ...],
    *,
    start: int,
    end: int,
    min_words: int = 2,
) -> int | None:
    if len(word_indices) < min_words:
        return None
    needle = struct.pack("<" + "i" * len(word_indices), *word_indices)
    off = payload.find(needle, start, end)
    return None if off < 0 else off


def _indices_display(indices: tuple[int, ...], words: list[str]) -> str:
    parts: list[str] = []
    for idx in indices:
        if 0 <= idx < len(words):
            parts.append(re.sub(r"[^a-z0-9]", "", words[idx].lower()))
    return "".join(parts)


def find_fuzzy_language_name_window(
    payload: bytes,
    display_name: str,
    *,
    words: list[str],
    start: int,
    end: int,
    min_score: float = 0.55,
) -> tuple[tuple[int, ...], int] | None:
    """
    Last-resort scan: treat each aligned int32[7] run as language_name.words and
    fuzzy-match its concatenated word-table text to the legends title.
    """
    target = _normalize_title(display_name)
    if len(target) < 6:
        return None
    best: tuple[tuple[int, ...], int, float] | None = None
    for off in range(start, end - 28, 4):
        raw = struct.unpack_from("<7i", payload, off)
        indices = tuple(w for w in raw if w >= 0)
        if len(indices) < 2:
            continue
        if any(w >= len(words) for w in indices):
            continue
        disp = _indices_display(indices, words)
        if len(disp) < 6:
            continue
        overlap = sum(1 for a, b in zip(target, disp) if a == b)
        score = overlap / max(len(target), len(disp))
        contained = disp in target or target in disp
        if contained:
            score = max(score, 0.9)
        if score < min_score:
            continue
        if best is None or score > best[2]:
            best = (indices, off, score)
    if best is None:
        return None
    return best[0], best[1]


def scan_site_name_markers(
    payload: bytes,
    *,
    block: StringTableBlock,
    region_start: int,
    region_end: int,
    site_names: dict[int, str],
    search_start: int | None = None,
) -> SiteNameScanResult:
    """Find site title word runs in the post-region mid payload (Namushul: ~0x86c157–0x15beb28)."""
    words = block.sections[8].names if len(block.sections) > 8 else []
    markers: list[SiteNameMarker] = []
    failures: list[tuple[int, str]] = []
    scan_start = region_start if search_start is None else search_start
    pair_index = build_word_pair_index(payload, start=scan_start, end=region_end)

    for site_id, display_name in sorted(site_names.items()):
        located: SiteNameMarker | None = None
        for word_indices in decompose_display_name_candidates(display_name, words=words):
            if len(word_indices) < 2:
                continue
            off = find_word_sequence(
                payload,
                word_indices,
                start=scan_start,
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
            pair_hit = match_title_to_word_pair(
                display_name,
                words=words,
                pair_index=pair_index,
            )
            if pair_hit is not None:
                pair, off = pair_hit
                located = SiteNameMarker(
                    site_id=site_id,
                    display_name=display_name,
                    word_indices=pair,
                    payload_offset=off,
                )
        if located is None:
            fuzzy = find_fuzzy_language_name_window(
                payload,
                display_name,
                words=words,
                start=scan_start,
                end=region_end,
            )
            if fuzzy is not None:
                word_indices, off = fuzzy
                located = SiteNameMarker(
                    site_id=site_id,
                    display_name=display_name,
                    word_indices=word_indices,
                    payload_offset=off,
                )
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
