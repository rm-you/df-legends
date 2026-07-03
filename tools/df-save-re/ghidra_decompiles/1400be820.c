// FUN_1400be820 @ 1400be820
// callees:
//   -> 140002020 FUN_140002020


void FUN_1400be820(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  plVar2 = (longlong *)*param_1;
  uVar5 = 0;
  uVar3 = (param_1[1] - (longlong)plVar2) + 7 >> 3;
  if ((longlong *)param_1[1] < plVar2) {
    uVar3 = uVar5;
  }
  uVar4 = uVar5;
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  param_1[1] = *param_1;
  plVar2 = (longlong *)param_1[4];
  uVar3 = (param_1[5] - (longlong)plVar2) + 7 >> 3;
  if ((longlong *)param_1[5] < plVar2) {
    uVar3 = uVar5;
  }
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      plVar2 = plVar2 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  param_1[5] = param_1[4];
  uVar3 = param_1[4];
  if (uVar3 != 0) {
    FUN_140002020(uVar3,(longlong)(param_1[6] - uVar3) >> 3,8,param_4,uVar6);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  uVar3 = *param_1;
  if (uVar3 != 0) {
    FUN_140002020(uVar3,(longlong)(param_1[2] - uVar3) >> 3,8,param_4,uVar6);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

