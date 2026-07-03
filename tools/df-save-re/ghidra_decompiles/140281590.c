// FUN_140281590 @ 140281590
// callees:
//   -> 140071310 FUN_140071310


undefined8 FUN_140281590(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar5 = (int)(param_1[1] - lVar1 >> 3) + -1;
  if (-1 < iVar5) {
    lVar3 = (longlong)iVar5;
    puVar4 = (undefined8 *)(lVar1 + lVar3 * 8);
    do {
      iVar2 = FUN_140071310(*puVar4,param_2);
      if (iVar2 == 0) {
        return *(undefined8 *)(lVar1 + (longlong)iVar5 * 8);
      }
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return 0;
}

