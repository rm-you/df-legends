// FUN_1401685d0 @ 1401685d0
// callees:
//   -> 140002020 FUN_140002020


void FUN_1401685d0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xf0) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xa0) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  puVar2 = (undefined8 *)(param_1 + 0x60);
  if (0xf < *(ulonglong *)(param_1 + 0x78)) {
    FUN_140002020(*puVar2,*(ulonglong *)(param_1 + 0x78) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x78) = 0xf;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x78)) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x58)) {
    FUN_140002020(*(undefined8 *)(param_1 + 0x40),*(ulonglong *)(param_1 + 0x58) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x58) = 0xf;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x58)) {
    **(undefined1 **)(param_1 + 0x40) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}

