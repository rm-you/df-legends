// FUN_140c24510 @ 140c24510
// callees:
//   -> 140c24940 FUN_140c24940
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140c24510(longlong param_1)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      _Memory = *(void **)(*(longlong *)(param_1 + 0x30) + lVar2 * 8);
      if (_Memory != (void *)0x0) {
        FUN_140c24940(_Memory);
        free(_Memory);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x60) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x40) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x20) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

