// FUN_140051c50 @ 140051c50
// callees:
//   -> 140071310 FUN_140071310
//   -> 140051b70 FUN_140051b70


int FUN_140051c50(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  iVar2 = (int)(param_1[1] - *param_1 >> 3) + -1;
  if (-1 < iVar2) {
    lVar4 = (longlong)iVar2;
    puVar3 = (undefined8 *)(*param_1 + lVar4 * 8);
    do {
      iVar1 = FUN_140071310(*puVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  FUN_140051b70(param_1,param_2);
  return (int)(param_1[1] - *param_1 >> 3) + -1;
}

