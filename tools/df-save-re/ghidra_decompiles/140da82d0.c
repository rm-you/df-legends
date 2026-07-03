// FUN_140da82d0 @ 140da82d0
// callees:
//   -> 140d89d60 FUN_140d89d60
//   -> 14000c110 FUN_14000c110
//   -> 1402cbb00 FUN_1402cbb00
//   -> 14014cac0 FUN_14014cac0
//   -> 140002020 FUN_140002020
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140004650 FUN_140004650
//   -> 1407ad2c0 FUN_1407ad2c0
//   -> 140620120 FUN_140620120
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_140da82d0(undefined8 param_1,undefined8 *param_2,short param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_88;
  lVar2 = FUN_140d89d60(param_1,param_3,param_4);
  if (lVar2 != 0) {
    if ((param_5 == '\0') ||
       (puVar4 = (undefined8 *)(lVar2 + 0x40), *(longlong *)(lVar2 + 0x50) == 0)) {
      if (*(longlong *)(lVar2 + 0x30) == 0) {
        param_2[2] = 0;
        puVar4 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar4 = (undefined8 *)*param_2;
        }
        *(undefined1 *)puVar4 = 0;
        if ((((ushort)(param_3 - 0xdbU) < 200) &&
            (lVar2 = FUN_140004650(&DAT_141d7a048,param_4), lVar2 != 0)) &&
           (*(char *)(lVar2 + 0xaa) != '\0')) {
          local_48 = 0xf;
          local_50 = 0;
          local_60 = 0;
          lVar2 = FUN_1407ad2c0(lVar2);
          if ((lVar2 != 0) && (*(char *)(lVar2 + 0x72) != '\0')) {
            FUN_140620120(lVar2,&local_60,1,0);
          }
          FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
          FUN_14000c9f0(param_2,&DAT_140e5e008,3);
          if (0xf < local_48) {
            FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
          }
        }
        lVar2 = FUN_140d89d60(param_1,param_3,param_4);
        if (lVar2 == 0) {
          FUN_14000c9f0(param_2,"unknown material",0x10);
        }
        else {
          if (*(longlong *)(lVar2 + 0x518) != 0) {
            FUN_14000cb40(param_2,lVar2 + 0x508,0,0xffffffffffffffff);
            FUN_14000c9f0(param_2,&DAT_140e59864,1);
          }
          FUN_14000cb40(param_2,lVar2 + 0xb8,0,0xffffffffffffffff);
        }
      }
      else if (param_2 != (undefined8 *)(lVar2 + 0x20)) {
        FUN_14000c8b0(param_2,(undefined8 *)(lVar2 + 0x20),0,0xffffffffffffffff);
      }
    }
    else {
      iVar1 = FUN_14000c110(puVar4,&DAT_140ea7a78);
      if (iVar1 == 0) {
        uVar3 = FUN_1402cbb00(&local_60,lVar2 + 0x20,0x73);
        FUN_14014cac0(param_2,uVar3);
        if (0xf < local_48) {
          FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
        }
      }
      else if (param_2 != puVar4) {
        FUN_14000c8b0(param_2,puVar4,0,0xffffffffffffffff);
      }
    }
    return 1;
  }
  return 0;
}

