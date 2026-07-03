// FUN_140296990 @ 140296990
// callees:
//   -> 140280670 FUN_140280670
//   -> 140c1dac0 FUN_140c1dac0
//   -> 14000c110 FUN_14000c110
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140296990(longlong param_1,ushort param_2,undefined8 *param_3,int param_4,int param_5,
                  undefined8 *param_6,int param_7,undefined8 param_8)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_58 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_78;
  local_48 = param_6;
  local_50 = param_3;
  lVar3 = FUN_140280670(param_1,param_3);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0xa8) == '\0') {
      FUN_140c1dac0(lVar3,param_8);
    }
    param_4 = *(short *)(lVar3 + 0x44) * param_5 + param_4;
    if (((-1 < param_4) &&
        (param_4 < (int)(*(longlong *)(lVar3 + 0x50) - *(longlong *)(lVar3 + 0x48) >> 2))) &&
       (param_2 < 0x12)) {
      lVar1 = (longlong)(short)param_2 + (longlong)param_7 * 0x12;
      *(undefined4 *)(param_1 + 0x1e8 + lVar1 * 4) =
           *(undefined4 *)((longlong)param_4 * 4 + *(longlong *)(lVar3 + 0x48));
      *(undefined4 *)(param_1 + 0x398 + lVar1 * 4) =
           *(undefined4 *)((longlong)param_4 * 4 + *(longlong *)(lVar3 + 0x78));
      iVar2 = FUN_14000c110(param_6,"ADD_COLOR");
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x207e + lVar1) = 1;
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

