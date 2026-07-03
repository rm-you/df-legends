// FUN_140adbba0 @ 140adbba0
// callees:
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140dfb5bc free
//   -> 140dfb5b4 free


void FUN_140adbba0(longlong param_1)

{
  void *pvVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x483a8) != 0) {
    uVar2 = *(int *)(param_1 + 0xa0) + 0xf >> 4;
    lVar3 = 0;
    if (0 < (short)uVar2) {
      uVar4 = (ulonglong)(uVar2 & 0xffff);
      do {
        pvVar1 = *(void **)(lVar3 + *(longlong *)(param_1 + 0x483a8));
        if (pvVar1 != (void *)0x0) {
          _eh_vector_destructor_iterator_
                    (pvVar1,0x20,*(__uint64 *)((longlong)pvVar1 + -8),FUN_140a5b560);
          free((__uint64 *)((longlong)pvVar1 + -8));
        }
        lVar3 = lVar3 + 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    free(*(void **)(param_1 + 0x483a8));
    *(undefined8 *)(param_1 + 0x483a8) = 0;
  }
  return;
}

