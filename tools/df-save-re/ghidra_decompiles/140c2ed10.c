// FUN_140c2ed10 @ 140c2ed10
// callees:
//   -> 140c2d840 FUN_140c2d840
//   -> 14000cb40 FUN_14000cb40
//   -> 140050540 FUN_140050540
//   -> 140669610 FUN_140669610
//   -> 14014b430 FUN_14014b430
//   -> 140002020 FUN_140002020
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_140c2ed10(undefined8 *param_1,undefined2 param_2,short param_3,undefined2 param_4,
                  char param_5,short param_6)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auStack_108 [32];
  char *local_e8;
  undefined2 local_e0;
  undefined1 local_d8;
  char local_d0;
  char local_c8 [8];
  undefined8 local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  longlong local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_c0 = 0xfffffffffffffffe;
  local_58 = DAT_1410b5008 ^ (ulonglong)auStack_108;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  if (param_6 == -2) {
    if (DAT_1410b67dc == 1) {
      if (DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3 != 0) {
        param_6 = *(short *)(*DAT_141c66fe8 + 0xa4);
        goto LAB_140c2edb3;
      }
    }
    else {
      param_6 = DAT_141c36b8c;
      if (DAT_1410b67dc == 0) goto LAB_140c2edb3;
    }
    param_6 = -1;
  }
LAB_140c2edb3:
  local_80 = 0xf;
  local_88 = 0;
  local_98 = 0;
  local_a0 = 0xf;
  local_a8 = 0;
  local_b8 = 0;
  local_c8[0] = '\0';
  local_d0 = param_5;
  local_d8 = 0;
  local_e8 = local_c8;
  local_e0 = param_4;
  FUN_140c2d840(&local_98,&local_b8,param_2,param_3);
  if (local_a8 != 0) {
    FUN_14000cb40(param_1,&local_b8,0,0xffffffffffffffff);
    FUN_140050540(param_1,1,0x20);
  }
  if ((param_3 != param_6) && (local_c8[0] == '\0')) {
    local_60 = 0xf;
    local_68 = 0;
    local_78 = 0;
    FUN_140669610(param_3,&local_78,0,param_4);
    if (param_5 != '\0') {
      FUN_14014b430(&local_78);
    }
    FUN_14000cb40(param_1,&local_78,0,0xffffffffffffffff);
    if (local_88 != 0) {
      FUN_140050540(param_1,1,0x20);
    }
    if (0xf < local_60) {
      FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
    }
  }
  if (local_88 != 0) {
    FUN_14000cb40(param_1,&local_98,0,0xffffffffffffffff);
  }
  if ((param_3 == param_6) && (local_88 == 0)) {
    bVar2 = param_1[2] == 0;
    if (param_5 == '\0') {
      FUN_14000c9f0(param_1,"peasant",7);
    }
    else {
      FUN_14000c9f0(param_1,"Peasant",7);
    }
  }
  else {
    bVar2 = false;
  }
  if (0xf < local_a0) {
    FUN_140002020(CONCAT71(uStack_b7,local_b8),local_a0 + 1,1);
  }
  local_a0 = 0xf;
  local_a8 = 0;
  local_b8 = 0;
  if (0xf < local_80) {
    FUN_140002020(CONCAT71(uStack_97,local_98),local_80 + 1,1);
  }
  return bVar2;
}

