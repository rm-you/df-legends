import time
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.world_history_walk import locate_world_history

t0 = time.time()
r = resolve_save_payload(r"C:\Users\rm_yo\CursorProjects\df-legends\data\saves\region3\world.dat")
print("payload", len(r.payload), "loaded", time.time() - t0)
t1 = time.time()
lm = locate_world_history(r.payload, r.preamble.header, save_version=r.save_version)
print("locate", lm is not None, time.time() - t1, "total", time.time() - t0)
if lm:
    print("figures", lm.figure_count)
