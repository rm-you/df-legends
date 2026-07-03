// FUN_140c0c6e0 @ 140c0c6e0
// callees:
//   -> 140dfb5b4 free
//   -> 140c0c220 FUN_140c0c220
//   -> 1401b7d10 FUN_1401b7d10
//   -> 140002020 FUN_140002020
//   -> 140002740 FUN_140002740


void FUN_140c0c6e0(longlong param_1)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0x220) - *(longlong *)(param_1 + 0x218) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      free(*(void **)(*(longlong *)(param_1 + 0x218) + lVar2 * 8));
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_1 + 0x218);
  iVar1 = (int)(*(longlong *)(param_1 + 0x238) - *(longlong *)(param_1 + 0x230) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      free(*(void **)(*(longlong *)(param_1 + 0x230) + lVar2 * 8));
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x230);
  _Memory = *(void **)(param_1 + 0x3d0);
  if (_Memory != (void *)0x0) {
    FUN_140c0c220(_Memory);
    free(_Memory);
    *(undefined8 *)(param_1 + 0x3d0) = 0;
  }
  FUN_1401b7d10(param_1 + 0x248);
  lVar2 = *(longlong *)(param_1 + 0x230);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x240) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x218);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x228) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  FUN_140002740(param_1 + 8);
  return;
}

