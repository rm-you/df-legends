// FUN_1407da8a0 @ 1407da8a0
// callees:


byte FUN_1407da8a0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xd60) == 0) && ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
    if ((*(byte *)(param_1 + 0x818) & 1) != 0) {
      return 1;
    }
    return ~*(byte *)(param_1 + 0x814) & 1;
  }
  return 0;
}

