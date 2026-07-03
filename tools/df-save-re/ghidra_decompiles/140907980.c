// FUN_140907980 @ 140907980
// callees:
//   -> 140ced130 FUN_140ced130
//   -> 140dfb5b4 free


void FUN_140907980(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  void *_Memory;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *param_1;
  iVar4 = (int)(param_1[1] - lVar1 >> 3) + -1;
  if (-1 < iVar4) {
    lVar2 = (longlong)iVar4;
    plVar3 = (longlong *)(lVar1 + lVar2 * 8);
    while (*plVar3 != param_2) {
      iVar4 = iVar4 + -1;
      plVar3 = plVar3 + -1;
      lVar2 = lVar2 + -1;
      if (lVar2 < 0) {
        return;
      }
    }
    _Memory = *(void **)(lVar1 + (longlong)iVar4 * 8);
    if (_Memory != (void *)0x0) {
      FUN_140ced130(_Memory);
      free(_Memory);
      return;
    }
  }
  return;
}

