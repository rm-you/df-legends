// FUN_1402d23a0 @ 1402d23a0
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402d23a0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14000c110(param_1,"ART_IMAGE");
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = FUN_14000c110(param_1,"COVERED");
  if ((iVar1 == 0) || (iVar1 = FUN_14000c110(param_1,"GLAZED"), iVar1 == 0)) {
    return 1;
  }
  iVar1 = FUN_14000c110(param_1,"RINGS_HANGING");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_14000c110(param_1,"BANDS");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_14000c110(param_1,"SPIKES");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = FUN_14000c110(param_1,"SPECIFIC");
  if ((iVar1 == 0) || (iVar1 = FUN_14000c110(param_1,"ITEMSPECIFIC"), iVar1 == 0)) {
    return 5;
  }
  iVar1 = FUN_14000c110(param_1,"THREAD");
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = FUN_14000c110(param_1,"CLOTH");
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = FUN_14000c110(param_1,"SEWN_IMAGE");
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = FUN_14000c110(param_1,"PAGES");
  if (iVar1 == 0) {
    return 9;
  }
  iVar1 = FUN_14000c110(param_1,"ILLUSTRATION");
  if (iVar1 == 0) {
    return 10;
  }
  iVar1 = FUN_14000c110(param_1,"INSTRUMENT_PIECE");
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = FUN_14000c110(param_1,"WRITING");
  if (iVar1 == 0) {
    return 0xc;
  }
  iVar1 = FUN_14000c110(param_1,"IMAGE_SET");
  if (iVar1 == 0) {
    return 0xd;
  }
  local_18 = 0xf;
  local_20 = 0;
  local_30 = 0;
  FUN_14000c780(&local_30,"Unrecognized Item Improvement Token: ",0x25);
  FUN_14000cb40(&local_30,param_1,0,0xffffffffffffffff);
  FUN_14014a240(&local_30);
  if (0xf < local_18) {
    FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
  }
  return 0xffffffff;
}

