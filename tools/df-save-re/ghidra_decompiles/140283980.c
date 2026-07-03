// FUN_140283980 @ 140283980
// callees:
//   -> 140283a30 FUN_140283a30
//   -> 140dfb5b4 free
//   -> 140051e20 FUN_140051e20


void FUN_140283980(longlong param_1)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      _Memory = *(void **)(*(longlong *)(param_1 + 0x20) + lVar2 * 8);
      if (_Memory != (void *)0x0) {
        FUN_140283a30(_Memory);
        free(_Memory);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  FUN_140051e20(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
  FUN_140051e20(param_1 + 0x68);
  FUN_140051e20(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x98);
  FUN_140051e20(param_1 + 0xb0);
  return;
}

