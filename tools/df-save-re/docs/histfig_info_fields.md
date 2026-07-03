# histfig_info slot field map (DF 0.47.05)

Hand-transcribed read order from `FUN_14070b110` and slot helpers in
`df_save_re/deserializers/histfig_info.py`. Each slot is gated by a leading `u8`
presence flag. Unknown reads use stable `unk_*` names; nothing is dropped on the
save path.

| Slot | df-structures pointer | Helper | Notes |
|------|----------------------|--------|-------|
| 0 | `known_info` / whereabouts | inline | i16 vec; `[>0x67d]` i32 vec |
| 1 | `skills` | `FUN_1406f8600` | skill i16 ids + i32 ratings + i16/i32 experience pairs; typed in parser |
| 2 | `likes` | inline | i16 vec |
| 3 | `personality` | `FUN_1406f68a0` | trait/emotion vectors; 50×i16 traits; version-gated tails |
| 4 | `preferences` | inline | 2–3 i32 vecs + optional i16 vec |
| 5 | `needs` | `FUN_1406f7f00` | fixed scalar block + optional i64 |
| 6 | `dreams` | inline | six mixed i16/i32 vecs |
| 7 | `curse` | inline | i32 vec + bit array + scalars |
| 8 | `masterpieces` / kills | `FUN_1407ab630` | event/design/item-ref vectors; item refs polymorphic on item type |
| 9 | `identity` / secret | `FUN_1407ac1c0` | id pairs, strings, nested vectors |
| 10 | `reputation` | `FUN_1407aae80` | i32 vec + flag-gated 13×(i32+i32) block |
| 11 | `wounds` | `FUN_1406f9200` | wound part vectors + nested 11×i32 blocks |
| 12 | `books` / knowledge | `FUN_1407b4ee0` | interaction vectors; scholar profile @ `[>0x65b]` with discoveries/goals |

## Slot 1 (skills) on-disk fields

| Field | Type | Source |
|-------|------|--------|
| `skill_ids` | i16[] | count + ids |
| `ratings` | i32[] | count + values |
| `exp_ids` | i16[] | count + ids |
| `experiences` | i32[] | count + values |
| `unk_i16` | i16 | fixed |
| `unk_i32_614` | i32 | if save_version > 0x614 |
| `unk_i32_65d` | i32 | if save_version > 0x65D |
| `extras[]` | compound | if save_version > 0x663 && u8: f0, vec, 4×i32 tail |

## Persistence

- Full slot bodies: `historical_figure.record_json` → `info.slots.*` (base64 for
  slots 0,2–12; typed dict for slot 1).
- Query accelerator: `hf_skill` rows from slot 1 only.

See `FUNCTIONS.md` for figure header tail i32 order and `world_history` tail
vector names.
