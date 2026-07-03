// FUN_1402d7450 @ 1402d7450
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402d7450(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14000c110(param_1,"STONE");
  if (((iVar1 == 0) || (iVar1 = FUN_14000c110(param_1,"METAL"), iVar1 == 0)) ||
     (iVar1 = FUN_14000c110(param_1,"INORGANIC"), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_14000c110(param_1,"AMBER");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_14000c110(param_1,"CORAL");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_14000c110(param_1,"GLASS_GREEN");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_14000c110(param_1,"GLASS_CLEAR");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = FUN_14000c110(param_1,"GLASS_CRYSTAL");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = FUN_14000c110(param_1,"WATER");
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = FUN_14000c110(param_1,&DAT_140eb54dc);
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = FUN_14000c110(param_1,"POTASH");
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = FUN_14000c110(param_1,&DAT_140eb555c);
  if (iVar1 == 0) {
    return 9;
  }
  iVar1 = FUN_14000c110(param_1,"PEARLASH");
  if (iVar1 == 0) {
    return 10;
  }
  iVar1 = FUN_14000c110(param_1,&DAT_140eb5524);
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = FUN_14000c110(param_1,&DAT_140eb553c);
  if (iVar1 == 0) {
    return 0xc;
  }
  iVar1 = FUN_14000c110(param_1,"VOMIT");
  if (iVar1 == 0) {
    return 0xd;
  }
  iVar1 = FUN_14000c110(param_1,&DAT_140eb3d7c);
  if (iVar1 == 0) {
    return 0xe;
  }
  iVar1 = FUN_14000c110(param_1,"FILTH_B");
  if (iVar1 == 0) {
    return 0xf;
  }
  iVar1 = FUN_14000c110(param_1,"FILTH_Y");
  if (iVar1 == 0) {
    return 0x10;
  }
  iVar1 = FUN_14000c110(param_1,"UNKNOWN_SUBSTANCE");
  if (iVar1 == 0) {
    return 0x11;
  }
  iVar1 = FUN_14000c110(param_1,"GRIME");
  if (iVar1 == 0) {
    return 0x12;
  }
  iVar1 = FUN_14000c110(param_1,&DAT_140e8cc54);
  if ((iVar1 != 0) && (iVar1 = FUN_14000c110(param_1,"GET_MATERIAL_FROM_REAGENT"), iVar1 != 0)) {
    local_18 = 0xf;
    local_20 = 0;
    local_30 = 0;
    FUN_14000c8b0(&local_30,param_2,0,0xffffffffffffffff);
    if (local_20 != 0) {
      FUN_14000c9f0(&local_30,&DAT_140e7aaf8,1);
    }
    FUN_14000c9f0(&local_30,"Unrecognized Material Token: ",0x1d);
    FUN_14000cb40(&local_30,param_1,0,0xffffffffffffffff);
    FUN_14014a240(&local_30);
    if (0xf < local_18) {
      FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
    }
    return 0xffff;
  }
  return 0xffffffffffffffff;
}

