// FUN_140da8550 @ 140da8550
// callees:
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140004650 FUN_140004650
//   -> 1407ad2c0 FUN_1407ad2c0
//   -> 140620120 FUN_140620120
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 140d89d60 FUN_140d89d60
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_140da8550(undefined8 param_1,undefined8 *param_2,short param_3,int param_4,uint param_5,
             char param_6,short param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_78;
  param_2[2] = 0;
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar1 = 0;
  if (param_4 == -1) {
    if ((param_5 & 1) != 0) {
      FUN_14000c9f0(param_2,"plant",5);
      return 1;
    }
    if ((param_5 >> 0xc & 1) != 0) {
      FUN_14000c9f0(param_2,&DAT_140ee6918,4);
      return 1;
    }
    if ((param_5 & 0x82) != 0) {
      if (param_6 == '\0') {
        uVar5 = 4;
        pcVar3 = "wood";
      }
      else {
        uVar5 = 6;
        pcVar3 = "wooden";
      }
      FUN_14000c9f0(param_2,pcVar3,uVar5);
      return 1;
    }
    if ((param_5 & 4) != 0) {
      FUN_14000c9f0(param_2,"cloth",5);
      return 1;
    }
    if ((param_5 & 8) != 0) {
      FUN_14000c9f0(param_2,&DAT_140f63920,4);
      return 1;
    }
    if ((param_5 & 0x20) != 0) {
      FUN_14000c9f0(param_2,&DAT_140ee699c,4);
      return 1;
    }
    if ((param_5 & 0x10) != 0) {
      FUN_14000c9f0(param_2,"leather",7);
      return 1;
    }
    if ((param_5 & 0x40) != 0) {
      FUN_14000c9f0(param_2,"shell",5);
      return 1;
    }
    if ((param_5 >> 8 & 1) != 0) {
      FUN_14000c9f0(param_2,&DAT_140f63928,4);
      return 1;
    }
    if ((param_5 >> 9 & 1) != 0) {
      FUN_14000c9f0(param_2,"ivory/tooth",0xb);
      return 1;
    }
    if ((param_5 >> 10 & 1) != 0) {
      FUN_14000c9f0(param_2,&DAT_140ee6a40,4);
      return 1;
    }
    if ((param_5 >> 0xb & 1) != 0) {
      FUN_14000c9f0(param_2,"pearl",5);
      return 1;
    }
  }
  if ((((ushort)(param_3 - 0xdbU) < 200) &&
      (lVar2 = FUN_140004650(&DAT_141d7a048,param_4), lVar2 != 0)) &&
     (*(char *)(lVar2 + 0xaa) != '\0')) {
    local_38 = 0xf;
    local_40 = 0;
    local_50 = 0;
    lVar2 = FUN_1407ad2c0(lVar2);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x72) != '\0')) {
      FUN_140620120(lVar2,&local_50,1,0);
    }
    FUN_14000cb40(param_2,&local_50,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2,&DAT_140e5e008,3);
    if (0xf < local_38) {
      FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
    }
  }
  lVar2 = FUN_140d89d60(param_1,param_3);
  if (lVar2 == 0) {
    FUN_14000c9f0(param_2,"unknown material",0x10);
    uVar5 = 0;
  }
  else {
    if (*(longlong *)(lVar2 + 0x518) != 0) {
      FUN_14000cb40(param_2,lVar2 + 0x508,0,0xffffffffffffffff);
      FUN_14000c9f0(param_2,&DAT_140e59864);
    }
    lVar4 = (longlong)param_7 * 0x20 + 0x178;
    if (param_6 == '\0') {
      lVar4 = (longlong)param_7 * 0x20 + 0xb8;
    }
    FUN_14000cb40(param_2,lVar4 + lVar2,0,0xffffffffffffffff);
    uVar5 = 1;
  }
  return uVar5;
}

