// FUN_140d1f990 @ 140d1f990
// callees:
//   -> 140071310 FUN_140071310


int FUN_140d1f990(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar3 = (undefined8 *)*param_1;
  iVar4 = 0;
  puVar1 = (undefined8 *)param_1[1];
  while( true ) {
    if (puVar1 <= puVar3) {
      return -1;
    }
    iVar2 = FUN_140071310(*puVar3,param_2);
    if (iVar2 == 0) break;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

