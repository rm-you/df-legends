// FUN_140303030 @ 140303030
// callees:
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140dfb5bc free
//   -> 140dfb5b4 free


void FUN_140303030(short *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  int iVar3;
  short sVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 4) != 0) {
    sVar4 = 0;
    if (0 < *param_1) {
      do {
        pvVar1 = *(void **)(*(longlong *)(param_1 + 4) + (longlong)sVar4 * 8);
        if (pvVar1 != (void *)0x0) {
          _eh_vector_destructor_iterator_
                    (pvVar1,0x18,*(__uint64 *)((longlong)pvVar1 + -8),FUN_140004550);
          free((__uint64 *)((longlong)pvVar1 + -8));
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 < *param_1);
    }
    free(*(void **)(param_1 + 4));
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  iVar3 = (int)(*(longlong *)(param_1 + 0xc) - *(longlong *)(param_1 + 8) >> 3) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar5 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,1);
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 8);
  param_1[0x14] = 1;
  param_1[0x15] = 0;
  return;
}

