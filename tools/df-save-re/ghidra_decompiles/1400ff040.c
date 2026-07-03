// FUN_1400ff040 @ 1400ff040
// callees:
//   -> 140002020 FUN_140002020


void FUN_1400ff040(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x80) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  puVar2 = (undefined8 *)(param_1 + 0x48);
  if (0xf < *(ulonglong *)(param_1 + 0x60)) {
    FUN_140002020(*puVar2,*(ulonglong *)(param_1 + 0x60) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x60) = 0xf;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x60)) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x40)) {
    FUN_140002020(*(undefined8 *)(param_1 + 0x28),*(ulonglong *)(param_1 + 0x40) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x40) = 0xf;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x40)) {
    **(undefined1 **)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

