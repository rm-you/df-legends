// FUN_1402d8c20 @ 1402d8c20
// callees:
//   -> 14000c110 FUN_14000c110


undefined8 FUN_1402d8c20(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_14000c110(param_1,&DAT_140eb5950);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_14000c110(param_1,&DAT_140e9e484);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_14000c110(param_1,"VESSEL");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_14000c110(param_1,"RELIGION");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = FUN_14000c110(param_1,"MILITARY_UNIT");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = FUN_14000c110(param_1,"TEMPLE");
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = FUN_14000c110(param_1,&DAT_140eb3cb0);
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = FUN_14000c110(param_1,"BATTLE");
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = FUN_14000c110(param_1,"SIEGE");
  if (iVar1 == 0) {
    return 9;
  }
  iVar1 = FUN_14000c110(param_1,&DAT_140eb39e8);
  if (iVar1 == 0) {
    return 10;
  }
  iVar1 = FUN_14000c110(param_1,"BRIDGE");
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = FUN_14000c110(param_1,"TUNNEL");
  if (iVar1 == 0) {
    return 0xc;
  }
  iVar1 = FUN_14000c110(param_1,&DAT_140eb39f0);
  if (iVar1 == 0) {
    return 0xd;
  }
  iVar1 = FUN_14000c110(param_1,"LIBRARY");
  if (iVar1 == 0) {
    return 0xe;
  }
  iVar1 = FUN_14000c110(param_1,"FESTIVAL");
  if (iVar1 == 0) {
    return 0xf;
  }
  iVar1 = FUN_14000c110(param_1,"MERCHANT_COMPANY");
  if (iVar1 == 0) {
    return 0x10;
  }
  iVar1 = FUN_14000c110(param_1,"CRAFT_GUILD");
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x11;
  }
  return uVar2;
}

