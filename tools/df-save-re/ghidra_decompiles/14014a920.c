// FUN_14014a920 @ 14014a920
// callees:
//   -> 140050540 FUN_140050540
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14014a920(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
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
  puVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar5 = 0;
  local_38 = 0xf;
  local_50 = 0;
  do {
    do {
      local_40 = 0;
      puVar3 = &local_50;
      if (0xf < local_38) {
        puVar3 = (undefined1 *)CONCAT71(uStack_4f,local_50);
      }
      *puVar3 = 0;
      if (param_2[2] == 0) goto LAB_14014aa7a;
      *param_3 = *param_3 + 1;
      uVar1 = param_2[2];
      if (uVar1 < (ulonglong)(longlong)*param_3) goto LAB_14014aa7a;
      puVar4 = param_2;
      puVar5 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar4 = (undefined8 *)*param_2;
        puVar5 = (undefined8 *)*param_2;
      }
      for (pcVar6 = (char *)((longlong)puVar5 + (longlong)*param_3);
          ((pcVar6 < (char *)((longlong)puVar4 + uVar1) && (*pcVar6 != ':')) && (*pcVar6 != ']'));
          pcVar6 = pcVar6 + 1) {
        FUN_140050540(&local_50,1);
        *param_3 = *param_3 + 1;
      }
      if (local_40 == 0) goto LAB_14014aa7a;
      if (param_1[2] != 0) {
        FUN_14000c9f0(param_1,&DAT_140e7aaf8,1);
      }
      FUN_14000cb40(param_1,&local_50,0,0xffffffffffffffff);
    } while ((ulonglong)param_2[2] <= (ulonglong)(longlong)*param_3);
    puVar5 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar5 = (undefined8 *)*param_2;
    }
  } while (*(char *)((longlong)puVar5 + (longlong)*param_3) != ']');
LAB_14014aa7a:
  lVar2 = param_1[2];
  if (0xf < local_38) {
    FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
  }
  return lVar2 != 0;
}

