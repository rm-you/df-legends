// FUN_140296510 @ 140296510
// callees:
//   -> 140280670 FUN_140280670
//   -> 140c1dac0 FUN_140c1dac0
//   -> 14000c110 FUN_14000c110
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140296510(longlong param_1,uint param_2,undefined8 *param_3,int param_4,int param_5,
                  undefined8 *param_6,undefined8 param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_58 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_78;
  lVar3 = (longlong)(int)param_2;
  local_48 = param_6;
  local_50 = param_3;
  lVar2 = FUN_140280670(param_1,param_3);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0xa8) == '\0') {
      FUN_140c1dac0(lVar2,param_7);
    }
    param_4 = *(short *)(lVar2 + 0x44) * param_5 + param_4;
    if (((-1 < param_4) &&
        (param_4 < (int)(*(longlong *)(lVar2 + 0x50) - *(longlong *)(lVar2 + 0x48) >> 2))) &&
       (param_2 < 6)) {
      *(undefined4 *)(param_1 + 0x1b8 + lVar3 * 4) =
           *(undefined4 *)((longlong)param_4 * 4 + *(longlong *)(lVar2 + 0x48));
      *(undefined4 *)(param_1 + 0x1d0 + lVar3 * 4) =
           *(undefined4 *)((longlong)param_4 * 4 + *(longlong *)(lVar2 + 0x78));
      iVar1 = FUN_14000c110(param_6,"ADD_COLOR");
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x2078 + lVar3) = 1;
      }
    }
  }
  if (0xf < (ulonglong)param_3[3]) {
    FUN_140002020(*param_3,param_3[3] + 1,1);
  }
  param_3[3] = 0xf;
  param_3[2] = 0;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  *(undefined1 *)param_3 = 0;
  if (0xf < (ulonglong)param_6[3]) {
    FUN_140002020(*param_6,param_6[3] + 1,1);
  }
  param_6[3] = 0xf;
  param_6[2] = 0;
  if ((ulonglong)param_6[3] < 0x10) {
    *(undefined1 *)param_6 = 0;
  }
  else {
    *(undefined1 *)*param_6 = 0;
  }
  return;
}

