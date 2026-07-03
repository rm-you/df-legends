// FUN_1408dc950 @ 1408dc950
// callees:
//   -> 14000d7e0 FUN_14000d7e0


undefined4 FUN_1408dc950(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3 != 0) {
    iVar1 = FUN_14000d7e0(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3);
    return *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 4);
  }
  return 0xffffffff;
}

