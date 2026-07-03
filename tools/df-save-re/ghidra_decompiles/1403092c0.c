// FUN_1403092c0 @ 1403092c0
// callees:
//   -> 140002020 FUN_140002020
//   -> 140164a20 FUN_140164a20


void FUN_1403092c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20b0);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x20c0) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x20b0) = 0;
    *(undefined8 *)(param_1 + 0x20b8) = 0;
    *(undefined8 *)(param_1 + 0x20c0) = 0;
  }
  FUN_140164a20(param_1 + 0x2040);
  lVar1 = *(longlong *)(param_1 + 800);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x330) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
  }
  return;
}

