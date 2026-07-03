// FUN_140845860 @ 140845860
// callees:


void FUN_140845860(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)param_2;
  if (param_2 < param_3) {
    lVar3 = uVar2 * 8;
    do {
      if ((ulonglong)(param_1[1] - *param_1 >> 3) <= (ulonglong)(longlong)(int)uVar2) {
        return;
      }
      (**(code **)(**(longlong **)(lVar3 + *param_1) + 0x18))();
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      lVar3 = lVar3 + 8;
    } while ((int)uVar1 < param_3);
  }
  return;
}

