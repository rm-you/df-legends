// FUN_1401b36e0 @ 1401b36e0
// callees:
//   -> 140071310 FUN_140071310


int FUN_1401b36e0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar4 = (int)(param_1[1] - *param_1 >> 3) + -1;
  if (-1 < iVar4) {
    lVar2 = (longlong)iVar4;
    puVar3 = (undefined8 *)(*param_1 + lVar2 * 8);
    do {
      iVar1 = FUN_140071310(*puVar3,param_2);
      if (iVar1 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return -1;
}

