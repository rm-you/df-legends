// FUN_140296680 @ 140296680
// callees:
//   -> 140280670 FUN_140280670
//   -> 140c1dac0 FUN_140c1dac0
//   -> 140071310 FUN_140071310
//   -> 140dfb5c4 operator_new
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050410 FUN_140050410
//   -> 14000c110 FUN_14000c110
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140296680(longlong param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5,
                  undefined8 *param_6,int param_7,undefined8 param_8)

{
  ulonglong *puVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_68 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_98;
  local_50 = param_6;
  local_6c = param_7;
  local_60 = param_2;
  local_58 = param_3;
  lVar5 = FUN_140280670(param_1,param_3);
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0xa8) == '\0') {
      FUN_140c1dac0(lVar5,param_8);
    }
    local_70 = *(short *)(lVar5 + 0x44) * param_5 + param_4;
    if ((-1 < local_70) &&
       (local_70 < (int)(*(longlong *)(lVar5 + 0x50) - *(longlong *)(lVar5 + 0x48) >> 2))) {
      puVar1 = (ulonglong *)(param_1 + 0x2450);
      iVar9 = (int)((longlong)(*(longlong *)(param_1 + 0x2458) - *puVar1) >> 3) + -1;
      lVar8 = (longlong)iVar9;
      if (-1 < iVar9) {
        puVar6 = (undefined8 *)(*puVar1 + lVar8 * 8);
        do {
          iVar4 = FUN_140071310(*puVar6,param_2);
          if (iVar4 == 0) {
            puVar6 = *(undefined8 **)(*puVar1 + (longlong)iVar9 * 8);
            if (puVar6 != (undefined8 *)0x0) goto LAB_140296865;
            break;
          }
          iVar9 = iVar9 + -1;
          puVar6 = puVar6 + -1;
          lVar8 = lVar8 + -1;
        } while (-1 < lVar8);
      }
      puVar6 = operator_new(0x58);
      puVar6[3] = 0xf;
      puVar6[2] = 0;
      puVar7 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar7 = (undefined8 *)*puVar6;
      }
      *(undefined1 *)puVar7 = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      *(undefined4 *)(puVar6 + 10) = 0;
      *(undefined2 *)((longlong)puVar6 + 0x54) = 0;
      local_78 = puVar6;
      if (puVar6 != param_2) {
        FUN_14000c8b0(puVar6,param_2,0,0xffffffffffffffff);
      }
      ppuVar2 = *(undefined8 ***)(param_1 + 0x2458);
      if ((&local_78 < ppuVar2) && (ppuVar3 = (undefined8 **)*puVar1, ppuVar3 <= &local_78)) {
        if (ppuVar2 == *(undefined8 ***)(param_1 + 0x2460)) {
          FUN_140050410(puVar1);
        }
        if (*(undefined8 **)(param_1 + 0x2458) != (undefined8 *)0x0) {
          **(undefined8 **)(param_1 + 0x2458) =
               *(undefined8 *)(*puVar1 + ((longlong)&local_78 - (longlong)ppuVar3 >> 3) * 8);
        }
      }
      else {
        if (ppuVar2 == *(undefined8 ***)(param_1 + 0x2460)) {
          FUN_140050410(puVar1);
        }
        if (*(undefined8 **)(param_1 + 0x2458) != (undefined8 *)0x0) {
          **(undefined8 **)(param_1 + 0x2458) = puVar6;
        }
      }
      *(longlong *)(param_1 + 0x2458) = *(longlong *)(param_1 + 0x2458) + 8;
LAB_140296865:
      lVar8 = (longlong)local_6c;
      *(undefined4 *)((longlong)puVar6 + lVar8 * 4 + 0x20) =
           *(undefined4 *)((longlong)local_70 * 4 + *(longlong *)(lVar5 + 0x48));
      *(undefined4 *)((longlong)puVar6 + lVar8 * 4 + 0x38) =
           *(undefined4 *)((longlong)local_70 * 4 + *(longlong *)(lVar5 + 0x78));
      iVar9 = FUN_14000c110(param_6,"ADD_COLOR");
      if (iVar9 == 0) {
        *(undefined1 *)(lVar8 + 0x50 + (longlong)puVar6) = 1;
      }
    }
  }
  if (0xf < (ulonglong)param_2[3]) {
    FUN_140002020(*param_2,param_2[3] + 1,1);
  }
  param_2[3] = 0xf;
  param_2[2] = 0;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)param_2 = 0;
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

