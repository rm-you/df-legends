// FUN_1407db210 @ 1407db210
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> 140051e20 FUN_140051e20


void FUN_1407db210(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  plVar3 = (longlong *)param_1[10];
  uVar6 = 0;
  uVar4 = (param_1[0xb] - (longlong)plVar3) + 7U >> 3;
  if ((longlong *)param_1[0xb] < plVar3) {
    uVar4 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)*plVar3;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      plVar3 = plVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  param_1[0xb] = param_1[10];
  plVar3 = (longlong *)param_1[0xd];
  uVar4 = (param_1[0xe] - (longlong)plVar3) + 7U >> 3;
  if ((longlong *)param_1[0xe] < plVar3) {
    uVar4 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)*plVar3;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      plVar3 = plVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  param_1[0xe] = param_1[0xd];
  plVar3 = (longlong *)param_1[0x10];
  uVar4 = (ulonglong)((longlong)param_1[0x11] + (7 - (longlong)plVar3)) >> 3;
  if ((longlong *)param_1[0x11] < plVar3) {
    uVar4 = uVar6;
  }
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)*plVar3;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      plVar3 = plVar3 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  param_1[0x11] = param_1[0x10];
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x12] - lVar2 >> 3,8);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  lVar2 = param_1[0xd];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0xf] - lVar2 >> 3,8);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar2 = param_1[10];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0xc] - lVar2 >> 3,8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
  }
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140051e20(param_1 + 5);
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[7] - lVar2 >> 3,8);
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if (0xf < (ulonglong)param_1[3]) {
    FUN_140002020(*param_1,param_1[3] + 1,1);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    *(undefined1 *)*param_1 = 0;
  }
  return;
}

