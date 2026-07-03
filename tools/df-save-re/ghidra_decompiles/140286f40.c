// FUN_140286f40 @ 140286f40
// callees:
//   -> 140071310 FUN_140071310


int FUN_140286f40(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  iVar2 = 0;
  uVar3 = param_1[1] - (longlong)puVar4 >> 3;
  if (uVar3 != 0) {
    do {
      iVar1 = FUN_140071310(*puVar4,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while ((ulonglong)(longlong)iVar2 < uVar3);
  }
  return -1;
}

