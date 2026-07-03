// FUN_1400f1a20 @ 1400f1a20
// callees:
//   -> 140002020 FUN_140002020


void FUN_1400f1a20(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x88) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  puVar2 = (undefined8 *)(param_1 + 0x50);
  if (0xf < *(ulonglong *)(param_1 + 0x68)) {
    FUN_140002020(*puVar2,*(ulonglong *)(param_1 + 0x68) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x68) = 0xf;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x68)) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    FUN_140002020(*(undefined8 *)(param_1 + 0x30),*(ulonglong *)(param_1 + 0x48) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0xf;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    **(undefined1 **)(param_1 + 0x30) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}

