// FUN_14014a750 @ 14014a750
// callees:
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140050540 FUN_140050540
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14014a750(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_78;
  param_1[2] = 0;
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar4 = 0;
  FUN_14000c9f0(param_1,&DAT_140e7aaf4,1);
  local_38 = 0xf;
  local_50 = 0;
  do {
    do {
      local_40 = 0;
      puVar2 = &local_50;
      if (0xf < local_38) {
        puVar2 = (undefined1 *)CONCAT71(uStack_4f,local_50);
      }
      *puVar2 = 0;
      if (param_2[2] == 0) goto LAB_14014a8ba;
      *param_3 = *param_3 + 1;
      uVar1 = param_2[2];
      if (uVar1 < (ulonglong)(longlong)*param_3) goto LAB_14014a8ba;
      puVar3 = param_2;
      puVar4 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar3 = (undefined8 *)*param_2;
        puVar4 = (undefined8 *)*param_2;
      }
      for (pcVar5 = (char *)((longlong)puVar4 + (longlong)*param_3);
          ((pcVar5 < (char *)((longlong)puVar3 + uVar1) && (*pcVar5 != ':')) && (*pcVar5 != ']'));
          pcVar5 = pcVar5 + 1) {
        FUN_140050540(&local_50,1);
        *param_3 = *param_3 + 1;
      }
      if (local_40 == 0) goto LAB_14014a8ba;
      if (1 < (ulonglong)param_1[2]) {
        FUN_14000c9f0(param_1,&DAT_140e7aaf8,1);
      }
      FUN_14000cb40(param_1,&local_50,0,0xffffffffffffffff);
    } while ((ulonglong)param_2[2] <= (ulonglong)(longlong)*param_3);
    puVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
  } while (*(char *)((longlong)puVar4 + (longlong)*param_3) != ']');
LAB_14014a8ba:
  FUN_14000c9f0(param_1,&DAT_140e7aafc,1);
  uVar1 = param_1[2];
  if (0xf < local_38) {
    FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
  }
  return 2 < uVar1;
}

