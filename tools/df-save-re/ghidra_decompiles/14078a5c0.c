// FUN_14078a5c0 @ 14078a5c0
// callees:
//   -> 140002020 FUN_140002020


void FUN_14078a5c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x68) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    FUN_140002020(*(undefined8 *)(param_1 + 0x18),*(ulonglong *)(param_1 + 0x30) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    **(undefined1 **)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

