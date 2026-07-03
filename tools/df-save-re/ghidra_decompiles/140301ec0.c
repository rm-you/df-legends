// FUN_140301ec0 @ 140301ec0
// callees:
//   -> 140002020 FUN_140002020


void FUN_140301ec0(ulonglong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar2 = (longlong *)*param_1;
  uVar4 = 0;
  uVar3 = (param_1[1] - (longlong)plVar2) + 7 >> 3;
  if ((longlong *)param_1[1] < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x78))(plVar1,1);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  param_1[1] = *param_1;
  uVar3 = *param_1;
  if (uVar3 != 0) {
    FUN_140002020(uVar3,(longlong)(param_1[2] - uVar3) >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

