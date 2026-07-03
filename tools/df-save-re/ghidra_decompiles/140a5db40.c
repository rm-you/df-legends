// FUN_140a5db40 @ 140a5db40
// callees:
//   -> 140a5d2c0 FUN_140a5d2c0
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_140a5db40(longlong *param_1)

{
  void *pvVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar5 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*param_1 + lVar5 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140a5d2c0(pvVar1);
        free(pvVar1);
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  param_1[1] = *param_1;
  iVar2 = (int)(param_1[0x4517] - param_1[0x4516] >> 3) + -1;
  lVar5 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(param_1[0x4516] + lVar5 * 8);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  param_1[0x4517] = param_1[0x4516];
  plVar4 = param_1 + 0xabe;
  lVar5 = 0x33;
  do {
    lVar6 = 0x33;
    plVar3 = plVar4;
    do {
      if ((void *)plVar3[-0xa29] != (void *)0x0) {
        free((void *)plVar3[-0xa29]);
      }
      if ((void *)*plVar3 != (void *)0x0) {
        free((void *)*plVar3);
      }
      plVar3 = plVar3 + 0x33;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    plVar4 = plVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  lVar5 = param_1[0x82e8];
  if (lVar5 != 0) {
    FUN_140002020(lVar5,param_1[0x82ea] - lVar5 >> 3,8);
    param_1[0x82e8] = 0;
    param_1[0x82e9] = 0;
    param_1[0x82ea] = 0;
  }
  lVar5 = param_1[0x4516];
  if (lVar5 != 0) {
    FUN_140002020(lVar5,param_1[0x4518] - lVar5 >> 3,8);
    param_1[0x4516] = 0;
    param_1[0x4517] = 0;
    param_1[0x4518] = 0;
  }
  _eh_vector_destructor_iterator_(param_1 + 0x2c9c,0x40,0x121,FUN_140a5d490);
  _eh_vector_destructor_iterator_(param_1 + 0x14e7,0xa8,0x121,FUN_140a5d980);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    FUN_140002020(lVar5,param_1[2] - lVar5 >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

