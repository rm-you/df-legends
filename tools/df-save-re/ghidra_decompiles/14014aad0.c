// FUN_14014aad0 @ 14014aad0
// callees:
//   -> 140050540 FUN_140050540


bool FUN_14014aad0(undefined8 *param_1,undefined8 *param_2,int *param_3,char param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  param_1[2] = 0;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar2 = 0;
  if (param_2[2] != 0) {
    *param_3 = *param_3 + 1;
    uVar1 = param_2[2];
    if ((ulonglong)(longlong)*param_3 <= uVar1) {
      puVar2 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar2 = (undefined8 *)*param_2;
        param_2 = (undefined8 *)*param_2;
      }
      for (pcVar3 = (char *)((longlong)*param_3 + (longlong)puVar2);
          ((pcVar3 < (char *)(uVar1 + (longlong)param_2) && (*pcVar3 != param_4)) &&
          (*pcVar3 != ']')); pcVar3 = pcVar3 + 1) {
        FUN_140050540(param_1,1);
        *param_3 = *param_3 + 1;
      }
      return param_1[2] != 0;
    }
  }
  return false;
}

