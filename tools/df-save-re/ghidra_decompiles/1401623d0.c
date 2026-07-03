// FUN_1401623d0 @ 1401623d0
// callees:


uint FUN_1401623d0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x118);
  if ((uVar1 >> 10 & 1) != 0) {
    return (uVar1 >> 0x12) << 8;
  }
  if ((*(longlong *)(param_1 + 0xd60) == 0) && ((uVar1 >> 0xc & 1) == 0)) {
    if ((8 < *(int *)(param_1 + 0x1260)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 8) & 4) != 0)) {
      return (uint)((~(*(byte *)(param_1 + 0x810) >> 5) & 1) == 0);
    }
    if (((*(byte *)(param_1 + 0x810) & 0x20) != 0) || ((*(byte *)(param_1 + 0x80c) & 0x20) == 0)) {
      return 1;
    }
  }
  return 0;
}

