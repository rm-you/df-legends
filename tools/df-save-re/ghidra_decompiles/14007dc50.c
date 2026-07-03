// FUN_14007dc50 @ 14007dc50
// callees:


byte FUN_14007dc50(longlong param_1)

{
  if ((1 < *(int *)(param_1 + 0x1260)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 1) & 8) != 0)) {
    return ~(*(byte *)(param_1 + 0x810) >> 1) & 1;
  }
  if (((*(byte *)(param_1 + 0x810) & 2) == 0) && ((*(byte *)(param_1 + 0x80c) & 2) != 0)) {
    return 1;
  }
  return 0;
}

