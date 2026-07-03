// FUN_14042a030 @ 14042a030
// callees:
//   -> 140002020 FUN_140002020


void FUN_14042a030(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x38) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    FUN_140002020(*(undefined8 *)(param_1 + 8),*(ulonglong *)(param_1 + 0x20) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    **(undefined1 **)(param_1 + 8) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

