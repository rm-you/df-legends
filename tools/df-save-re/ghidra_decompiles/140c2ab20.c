// FUN_140c2ab20 @ 140c2ab20
// callees:
//   -> 140c83ab0 FUN_140c83ab0
//   -> 140c26640 FUN_140c26640
//   -> 140c2a430 FUN_140c2a430


void FUN_140c2ab20(longlong param_1,longlong param_2,undefined1 param_3)

{
  short sVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3 * 8;
    do {
      plVar2 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x3f8));
      if (*plVar2 == param_2) {
        sVar1 = (short)plVar2[1];
        if ((sVar1 == 6) || (sVar1 == 9)) {
          FUN_140c83ab0(param_1);
        }
        FUN_140c26640(param_1,iVar3);
      }
      lVar4 = lVar4 + -8;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  FUN_140c2a430(param_1,param_2,param_3);
  return;
}

