// FUN_140326f70 @ 140326f70
// callees:
//   -> 140002020 FUN_140002020


void FUN_140326f70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xf0);
  if (0xf < *(ulonglong *)(param_1 + 0x108)) {
    FUN_140002020(*puVar1,*(ulonglong *)(param_1 + 0x108) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x108) = 0xf;
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x108)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined8 *)(param_1 + 200);
  if (0xf < *(ulonglong *)(param_1 + 0xe0)) {
    FUN_140002020(*puVar1,*(ulonglong *)(param_1 + 0xe0) + 1,1);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0xf;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0xe0)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  if (0xf < *(ulonglong *)(param_1 + 0xc0)) {
    FUN_140002020(*(undefined8 *)(param_1 + 0xa8),*(ulonglong *)(param_1 + 0xc0) + 1,1);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0xf;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0xc0)) {
    **(undefined1 **)(param_1 + 0xa8) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}

