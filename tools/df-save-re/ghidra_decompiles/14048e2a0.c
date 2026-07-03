// FUN_14048e2a0 @ 14048e2a0
// callees:
//   -> 140071310 FUN_140071310


int FUN_14048e2a0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = (int)(param_1[1] - *param_1 >> 3) + -1;
  if (-1 < iVar4) {
    lVar2 = (longlong)iVar4;
    plVar3 = (longlong *)(*param_1 + lVar2 * 8);
    do {
      iVar1 = FUN_140071310(*plVar3 + 8,param_2);
      if (iVar1 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + -1;
      plVar3 = plVar3 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return -1;
}

