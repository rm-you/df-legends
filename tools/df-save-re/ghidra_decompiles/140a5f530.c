// FUN_140a5f530 @ 140a5f530
// callees:
//   -> 140a5aca0 FUN_140a5aca0
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140002740 FUN_140002740


void FUN_140a5f530(longlong param_1)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      _Memory = *(void **)(*(longlong *)(param_1 + 0xc0) + lVar2 * 8);
      if (_Memory != (void *)0x0) {
        FUN_140a5aca0(_Memory);
        free(_Memory);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
  lVar2 = *(longlong *)(param_1 + 0xc0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xd0) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xb8) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xa0) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x88) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  FUN_140002740(param_1);
  return;
}

