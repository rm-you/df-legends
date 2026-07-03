// FUN_140607a50 @ 140607a50
// callees:
//   -> 140330050 FUN_140330050
//   -> 140dfb5b4 free


void FUN_140607a50(longlong param_1)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0x280) - *(longlong *)(param_1 + 0x278) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      _Memory = *(void **)(*(longlong *)(param_1 + 0x278) + lVar2 * 8);
      if (_Memory != (void *)0x0) {
        FUN_140330050(_Memory);
        free(_Memory);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x278);
  return;
}

