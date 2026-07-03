// FUN_1402882f0 @ 1402882f0
// callees:
//   -> 140002020 FUN_140002020


void FUN_1402882f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xb0);
  if (0xf < *(ulonglong *)(param_1 + 200)) {
    FUN_140002020(*puVar1,*(ulonglong *)(param_1 + 200) + 1,1);
  }
  *(undefined8 *)(param_1 + 200) = 0xf;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (0xf < *(ulonglong *)(param_1 + 200)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x90);
  if (0xf < *(ulonglong *)(param_1 + 0xa8)) {
    FUN_140002020(*puVar1,*(ulonglong *)(param_1 + 0xa8) + 1,1);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0xf;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0xa8)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x70);
  if (0xf < *(ulonglong *)(param_1 + 0x88)) {
    FUN_140002020(*puVar1,*(ulonglong *)(param_1 + 0x88) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x88) = 0xf;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x88)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x50);
  if (0xf < *(ulonglong *)(param_1 + 0x68)) {
    FUN_140002020(*puVar1,*(ulonglong *)(param_1 + 0x68) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x68) = 0xf;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x68)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x30);
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    FUN_140002020(*puVar1,*(ulonglong *)(param_1 + 0x48) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0xf;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
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

