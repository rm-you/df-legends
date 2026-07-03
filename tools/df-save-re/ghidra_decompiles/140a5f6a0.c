// FUN_140a5f6a0 @ 140a5f6a0
// callees:
//   -> 140002020 FUN_140002020
//   -> 140002740 FUN_140002740


void FUN_140a5f6a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xb8) - lVar1 >> 1,2);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xa0) - lVar1 >> 1,2);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  FUN_140002740(param_1);
  return;
}

