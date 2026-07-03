// FUN_140106f30 @ 140106f30
// callees:


uint FUN_140106f30(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x118) >> 10 & 1) != 0) {
    return (*(uint *)(param_1 + 0x118) >> 0x12) << 8;
  }
  if (*(longlong *)(param_1 + 0xd60) == 0) {
    if ((8 < *(int *)(param_1 + 0x1260)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 8) & 0x80) != 0)) {
      return (uint)((~(byte)(*(uint *)(param_1 + 0x810) >> 0xc) & 1) == 0);
    }
    if (((*(uint *)(param_1 + 0x810) & 0x1000) != 0) || ((*(uint *)(param_1 + 0x80c) & 0x1000) == 0)
       ) {
      return 1;
    }
  }
  return 0;
}

