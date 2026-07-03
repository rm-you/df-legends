// FUN_140301e40 @ 140301e40
// callees:
//   -> 140071310 FUN_140071310


undefined8 FUN_140301e40(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)*param_1;
  iVar3 = 0;
  uVar4 = param_1[1] - (longlong)puVar1 >> 3;
  puVar5 = puVar1;
  if (uVar4 != 0) {
    do {
      iVar2 = FUN_140071310(*puVar5,param_2);
      if (iVar2 == 0) {
        return puVar1[iVar3];
      }
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while ((ulonglong)(longlong)iVar3 < uVar4);
  }
  return 0;
}

