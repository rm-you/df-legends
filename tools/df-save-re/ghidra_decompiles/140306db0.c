// FUN_140306db0 @ 140306db0
// callees:
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140dfb5bc free
//   -> 140dfb5b4 free


void FUN_140306db0(longlong *param_1)

{
  void *pvVar1;
  short sVar2;
  
  if (*param_1 != 0) {
    sVar2 = 0;
    if (0 < (short)param_1[1]) {
      do {
        pvVar1 = *(void **)(*param_1 + (longlong)sVar2 * 8);
        if (pvVar1 != (void *)0x0) {
          _eh_vector_destructor_iterator_
                    (pvVar1,0x30,*(__uint64 *)((longlong)pvVar1 + -8),FUN_140004720);
          free((__uint64 *)((longlong)pvVar1 + -8));
        }
        sVar2 = sVar2 + 1;
      } while (sVar2 < (short)param_1[1]);
    }
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}

