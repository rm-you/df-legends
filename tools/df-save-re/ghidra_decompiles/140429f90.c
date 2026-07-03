// FUN_140429f90 @ 140429f90
// callees:
//   -> 140002020 FUN_140002020


void FUN_140429f90(longlong param_1)

{
  undefined8 *puVar1;
  
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
  if (0xf < *(ulonglong *)(param_1 + 0x28)) {
    FUN_140002020(*(undefined8 *)(param_1 + 0x10),*(ulonglong *)(param_1 + 0x28) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0xf;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x28)) {
    **(undefined1 **)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}

