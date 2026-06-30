# Vendored df-structures (DFHack)

These XML structure definitions are vendored verbatim from the DFHack
`df-structures` repository for use by the `df-save-re` deterministic
serialization engine. They describe the on-disk field order of Dwarf
Fortress save structures.

- Source: https://github.com/DFHack/df-structures
- Tag: `0.47.05-r8`
- Upstream commit: `afe7e90` ("bump version in changelog")
- DF target: 0.47.05 (`save_version` 1716)

The complete set is vendored (not a hand-picked subset) so the engine can
resolve any referenced compound, enum, bitfield, or polymorphic subtype
without `_STUB_STRUCTS` guesses. `symbols.xml` is included for global
address / vtable reference only; it is not required for stream parsing.

Do not hand-edit these files. To update, re-copy from the upstream tag and
record the new commit hash here.
