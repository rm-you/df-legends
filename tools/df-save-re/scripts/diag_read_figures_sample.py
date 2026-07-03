"""Read a handful of figures to test read_figure_record performance."""

from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_history_walk import locate_world_history, walk_figures_dense_layer
from df_save_re.save_preamble import resolve_save_payload

SAVE = r"C:\Users\rm_yo\CursorProjects\df-legends\data\saves\region3\world.dat"
LIMIT = 10

resolved = resolve_save_payload(SAVE)
lm = locate_world_history(resolved.payload, resolved.preamble.header, save_version=resolved.save_version)
print("located figures:", lm.figure_count)
reader = BinaryReader(BytesIO(resolved.payload))
reader.seek(lm.figures_bodies_start)
n, consumed = walk_figures_dense_layer(
    reader, resolved.payload, save_version=resolved.save_version, limit=LIMIT
)
print(f"walked {n} figures in {consumed} bytes, end @ 0x{reader.tell():x}")
