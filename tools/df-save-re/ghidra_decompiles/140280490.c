// FUN_140280490 @ 140280490
// callees:
//   -> 140071310 FUN_140071310


undefined8 FUN_140280490(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  iVar1 = (int)(param_1[1] - *param_1 >> 3) + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1;
    puVar3 = (undefined8 *)(*param_1 + lVar2 * 8);
    do {
      iVar1 = FUN_140071310(*puVar3,param_2);
      if (iVar1 == 0) {
        return 1;
      }
      puVar3 = puVar3 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return 0;
}

