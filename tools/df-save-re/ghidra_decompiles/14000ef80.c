// FUN_14000ef80 @ 14000ef80
// callees:


byte FUN_14000ef80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd60) == 0) {
    if ((7 < *(int *)(param_1 + 0x1260)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 7) & 4) != 0)) {
      return ~(byte)((uint)*(undefined4 *)(param_1 + 0x810) >> 0x19) & 1;
    }
    if (((*(uint *)(param_1 + 0x810) & 0x2000000) == 0) &&
       ((*(uint *)(param_1 + 0x80c) & 0x2000000) != 0)) {
      return 1;
    }
  }
  return 0;
}

