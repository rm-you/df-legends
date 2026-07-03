// FUN_140282540 @ 140282540
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140282540(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      free(*(void **)(*(longlong *)(param_1 + 0xe0) + lVar2 * 8));
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xf0) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 200);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xd8) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xc0) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x98);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xa8) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x90) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x78) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x60) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x48) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x30) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x18) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

