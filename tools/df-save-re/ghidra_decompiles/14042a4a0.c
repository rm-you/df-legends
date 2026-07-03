// FUN_14042a4a0 @ 14042a4a0
// callees:
//   -> 140002020 FUN_140002020
//   -> 140164fc0 FUN_140164fc0


void FUN_14042a4a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x7a0);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x7b0) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0x7a0) = 0;
    *(undefined8 *)(param_1 + 0x7a8) = 0;
    *(undefined8 *)(param_1 + 0x7b0) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x788);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x798) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0x788) = 0;
    *(undefined8 *)(param_1 + 0x790) = 0;
    *(undefined8 *)(param_1 + 0x798) = 0;
  }
  FUN_140164fc0(param_1 + 0x30);
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

