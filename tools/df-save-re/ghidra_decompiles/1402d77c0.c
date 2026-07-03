// FUN_1402d77c0 @ 1402d77c0
// callees:
//   -> 14000c110 FUN_14000c110


undefined1 FUN_1402d77c0(undefined8 param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_14000c110(param_1,"FORCED");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_14000c110(param_1,"UNCOMMON");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_14000c110(param_1,&DAT_140eb5454);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  return uVar2;
}

