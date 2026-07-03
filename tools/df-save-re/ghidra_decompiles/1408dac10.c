// FUN_1408dac10 @ 1408dac10
// callees:
//   -> 1408da530 FUN_1408da530


void FUN_1408dac10(longlong *param_1,int param_2,int param_3)

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
      FUN_1408da530(*(undefined8 *)(lVar3 + *param_1),uVar2 & 0xffffffff);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      lVar3 = lVar3 + 8;
    } while ((int)uVar1 < param_3);
  }
  return;
}

