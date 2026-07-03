// FUN_14000efd0 @ 14000efd0
// callees:


byte FUN_14000efd0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd60) == 0) {
    if ((7 < *(int *)(param_1 + 0x1260)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 7) & 2) != 0)) {
      return ~(byte)((uint)*(undefined4 *)(param_1 + 0x810) >> 0x18) & 1;
    }
    if (((*(uint *)(param_1 + 0x810) & 0x1000000) == 0) &&
       ((*(uint *)(param_1 + 0x80c) & 0x1000000) != 0)) {
      return 1;
    }
  }
  return 0;
}

