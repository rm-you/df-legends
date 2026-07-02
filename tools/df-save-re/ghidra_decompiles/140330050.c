// FUN_140330050 @ 140330050
// callees:
//   -> 140002020 FUN_140002020
//   -> 140002740 FUN_140002740


void FUN_140330050(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x140);
  if (0xf < *(ulonglong *)(param_1 + 0x158)) {
    FUN_140002020(*puVar1,*(ulonglong *)(param_1 + 0x158) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x158) = 0xf;
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x158)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x78);
  if (0xf < *(ulonglong *)(param_1 + 0x90)) {
    FUN_140002020(*puVar1,*(ulonglong *)(param_1 + 0x90) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x90) = 0xf;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x90)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_140002740(param_1);
  return;
}

