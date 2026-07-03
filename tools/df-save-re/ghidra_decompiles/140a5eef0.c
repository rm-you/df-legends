// FUN_140a5eef0 @ 140a5eef0
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140002740 FUN_140002740


void FUN_140a5eef0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      free(*(void **)(*(longlong *)(param_1 + 200) + lVar2 * 8));
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 200);
  lVar2 = *(longlong *)(param_1 + 0x250);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x260) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x228);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x238) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x210);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x220) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x1f8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x208) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x208) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x1e0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x1f0) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x1d8) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x1c0) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 200);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xd8) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x98);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xa8) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x90) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN_140002740(param_1);
  return;
}

