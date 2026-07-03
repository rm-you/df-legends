// FUN_1402d2b50 @ 1402d2b50
// callees:
//   -> 14000c110 FUN_14000c110


undefined8 FUN_1402d2b50(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_14000c110(param_1,"MERCENARY");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_14000c110(param_1,"FORMER_MERCENARY");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_14000c110(param_1,"ENEMY");
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = FUN_14000c110(param_1,"CRIMINAL");
  if (iVar1 == 0) {
    return 9;
  }
  uVar2 = FUN_14000c110(param_1,"MEMBER");
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = FUN_14000c110(param_1,"FORMER_MEMBER");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_14000c110(param_1,"SLAVE");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = FUN_14000c110(param_1,"FORMER_SLAVE");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = FUN_14000c110(param_1,"PRISONER");
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = FUN_14000c110(param_1,"FORMER_PRISONER");
  if (iVar1 == 0) {
    return 7;
  }
  return 0xffffffff;
}

