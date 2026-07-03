// FUN_140c26340 @ 140c26340
// callees:


bool FUN_140c26340(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xd60) == 0) && ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
    if ((5 < *(int *)(param_1 + 0x1260)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 5) & 4) != 0)) {
      return (~(byte)((uint)*(undefined4 *)(param_1 + 0x810) >> 0x1d) & 1) == 0;
    }
    if (((*(uint *)(param_1 + 0x810) & 0x20000000) != 0) ||
       ((*(uint *)(param_1 + 0x80c) & 0x20000000) == 0)) {
      return true;
    }
  }
  return false;
}

