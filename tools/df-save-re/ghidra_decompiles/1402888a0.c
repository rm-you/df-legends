// FUN_1402888a0 @ 1402888a0
// callees:
//   -> 140002020 FUN_140002020


void FUN_1402888a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xa8) - lVar1 >> 1,2);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x90) - lVar1 >> 1,2);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (0xf < *(ulonglong *)(param_1 + 0x70)) {
    FUN_140002020(*(undefined8 *)(param_1 + 0x58),*(ulonglong *)(param_1 + 0x70) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0xf;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x70)) {
    **(undefined1 **)(param_1 + 0x58) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  return;
}

