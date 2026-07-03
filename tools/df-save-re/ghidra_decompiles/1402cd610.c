// FUN_1402cd610 @ 1402cd610
// callees:
//   -> 140071310 FUN_140071310


undefined8 FUN_1402cd610(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)(param_1[1] - lVar1 >> 3) + -1;
  if (-1 < iVar3) {
    lVar5 = (longlong)iVar3;
    plVar4 = (longlong *)(lVar1 + lVar5 * 8);
    do {
      iVar2 = FUN_140071310(*plVar4 + 8,param_2);
      if (iVar2 == 0) {
        return *(undefined8 *)(lVar1 + (longlong)iVar3 * 8);
      }
      iVar3 = iVar3 + -1;
      plVar4 = plVar4 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return 0;
}

