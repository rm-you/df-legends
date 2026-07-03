// FUN_140304ad0 @ 140304ad0
// callees:
//   -> 140002020 FUN_140002020


void FUN_140304ad0(longlong param_1)

{
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

