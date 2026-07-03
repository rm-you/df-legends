// FUN_140da80f0 @ 140da80f0
// callees:
//   -> 140d89d60 FUN_140d89d60
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140004650 FUN_140004650
//   -> 1407ad2c0 FUN_1407ad2c0
//   -> 140620120 FUN_140620120
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140da80f0(undefined8 param_1,undefined8 *param_2,short param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined7 uVar4;
  undefined7 extraout_var;
  undefined8 *puVar2;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_78;
  lVar1 = FUN_140d89d60(param_1,param_3,param_4);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar4 = (undefined7)((ulonglong)lVar1 >> 8);
    if (*(longlong *)(lVar1 + 0x70) == 0) {
      param_2[2] = 0;
      puVar2 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar2 = (undefined8 *)*param_2;
      }
      *(undefined1 *)puVar2 = 0;
      if ((((ushort)(param_3 - 0xdbU) < 200) &&
          (lVar1 = FUN_140004650(&DAT_141d7a048,param_4), lVar1 != 0)) &&
         (*(char *)(lVar1 + 0xaa) != '\0')) {
        local_38 = 0xf;
        local_40 = 0;
        local_50 = 0;
        lVar1 = FUN_1407ad2c0(lVar1);
        if ((lVar1 != 0) && (*(char *)(lVar1 + 0x72) != '\0')) {
          FUN_140620120(lVar1,&local_50,1,0);
        }
        FUN_14000cb40(param_2,&local_50,0,0xffffffffffffffff);
        FUN_14000c9f0(param_2,&DAT_140e5e008,3);
        if (0xf < local_38) {
          FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
        }
      }
      lVar1 = FUN_140d89d60(param_1,param_3,param_4);
      if (lVar1 == 0) {
        FUN_14000c9f0(param_2,"unknown material",0x10);
        uVar4 = extraout_var_01;
      }
      else {
        if (*(longlong *)(lVar1 + 0x518) != 0) {
          FUN_14000cb40(param_2,lVar1 + 0x508,0,0xffffffffffffffff);
          FUN_14000c9f0(param_2,&DAT_140e59864,1);
        }
        FUN_14000cb40(param_2,lVar1 + 0xb8,0,0xffffffffffffffff);
        uVar4 = extraout_var_00;
      }
    }
    else if (param_2 != (undefined8 *)(lVar1 + 0x60)) {
      FUN_14000c8b0(param_2,(undefined8 *)(lVar1 + 0x60),0,0xffffffffffffffff);
      uVar4 = extraout_var;
    }
    uVar3 = CONCAT71(uVar4,1);
  }
  return uVar3;
}

