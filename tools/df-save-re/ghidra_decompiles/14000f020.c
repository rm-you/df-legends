// FUN_14000f020 @ 14000f020
// callees:


bool FUN_14000f020(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd60) == 0) {
    if ((0xd < *(int *)(param_1 + 0x1260)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 0xd) & 8) != 0)) {
      return (~(byte)(*(uint *)(param_1 + 0x810) >> 0x16) & 1) == 0;
    }
    if (((*(uint *)(param_1 + 0x810) & 0x400000) != 0) ||
       ((*(uint *)(param_1 + 0x80c) & 0x400000) == 0)) {
      return true;
    }
  }
  return false;
}

