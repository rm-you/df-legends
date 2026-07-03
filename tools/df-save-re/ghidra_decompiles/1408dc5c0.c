// FUN_1408dc5c0 @ 1408dc5c0
// callees:
//   -> 14000d7e0 FUN_14000d7e0


undefined4 FUN_1408dc5c0(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3 != 0) {
    iVar1 = FUN_14000d7e0(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3);
    return *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 4);
  }
  return 0xffffffff;
}

