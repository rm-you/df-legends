// FUN_1401ba700 @ 1401ba700
// callees:
//   -> 140dfb5b4 free


void FUN_1401ba700(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = 0x6b;
  plVar4 = param_1;
  do {
    iVar1 = (int)(plVar4[1] - *plVar4 >> 3) + -1;
    lVar2 = (longlong)iVar1;
    if (-1 < iVar1) {
      do {
        free(*(void **)(*plVar4 + lVar2 * 8));
        lVar2 = lVar2 + -1;
      } while (-1 < lVar2);
    }
    plVar4[1] = *plVar4;
    plVar4 = plVar4 + 3;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x142] = param_1[0x141];
  param_1[0x145] = param_1[0x144];
  param_1[0x148] = param_1[0x147];
  return;
}

