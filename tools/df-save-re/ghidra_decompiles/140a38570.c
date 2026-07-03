// FUN_140a38570 @ 140a38570
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140a389f0 FUN_140a389f0
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140051e20 FUN_140051e20


void FUN_140a38570(undefined8 *param_1)

{
  void *_Dst;
  longlong *plVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  iVar3 = (int)(DAT_141d77948 - DAT_141d77940 >> 3) + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3;
    do {
      if (*(undefined8 **)(DAT_141d77940 + lVar4 * 8) == param_1) {
        _Dst = (void *)(DAT_141d77940 + (longlong)iVar3 * 8);
        pvVar2 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar2,DAT_141d77948 - (longlong)pvVar2);
        DAT_141d77948 = DAT_141d77948 + -8;
        break;
      }
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  uVar7 = 0;
  uVar5 = uVar7;
  uVar9 = uVar7;
  if ((longlong)(param_1[0xb] - param_1[10]) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar5 + param_1[10]);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      uVar8 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)((longlong)(param_1[0xb] - param_1[10]) >> 3));
  }
  param_1[0xb] = param_1[10];
  uVar5 = uVar7;
  uVar9 = uVar7;
  if ((longlong)(param_1[0xe] - param_1[0xd]) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar5 + param_1[0xd]);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,1);
      }
      uVar8 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)((longlong)(param_1[0xe] - param_1[0xd]) >> 3));
  }
  param_1[0xe] = param_1[0xd];
  puVar6 = (undefined8 *)param_1[0x2c];
  uVar5 = (ulonglong)((longlong)param_1[0x2d] + (7 - (longlong)puVar6)) >> 3;
  if ((undefined8 *)param_1[0x2d] < puVar6) {
    uVar5 = uVar7;
  }
  if (uVar5 != 0) {
    do {
      pvVar2 = (void *)*puVar6;
      if (pvVar2 != (void *)0x0) {
        FUN_140a389f0(pvVar2);
        free(pvVar2);
      }
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  param_1[0x2d] = param_1[0x2c];
  lVar4 = param_1[0x2c];
  if (lVar4 != 0) {
    FUN_140002020(lVar4,param_1[0x2e] - lVar4 >> 3,8);
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
  }
  puVar6 = param_1 + 0x28;
  if (0xf < (ulonglong)param_1[0x2b]) {
    FUN_140002020(*puVar6,param_1[0x2b] + 1,1);
  }
  param_1[0x2b] = 0xf;
  param_1[0x2a] = 0;
  if (0xf < (ulonglong)param_1[0x2b]) {
    puVar6 = (undefined8 *)*puVar6;
  }
  *(undefined1 *)puVar6 = 0;
  plVar1 = param_1 + 0x25;
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,param_1[0x27] - lVar4 >> 3,8);
    *plVar1 = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  lVar4 = param_1[0x20];
  if (lVar4 != 0) {
    FUN_140002020(lVar4,param_1[0x22] - lVar4 >> 2,4);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  lVar4 = param_1[0x1d];
  if (lVar4 != 0) {
    FUN_140002020(lVar4,param_1[0x1f] - lVar4 >> 2,4);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  lVar4 = param_1[0x1a];
  if (lVar4 != 0) {
    FUN_140002020(lVar4,param_1[0x1c] - lVar4 >> 2,4);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  lVar4 = param_1[0x17];
  if (lVar4 != 0) {
    FUN_140002020(lVar4,param_1[0x19] - lVar4 >> 2,4);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  lVar4 = param_1[0x14];
  if (lVar4 != 0) {
    FUN_140002020(lVar4,param_1[0x16] - lVar4 >> 2,4);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  plVar1 = param_1 + 0x11;
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,param_1[0x13] - lVar4 >> 3,8);
    *plVar1 = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar4 = param_1[0xd];
  if (lVar4 != 0) {
    FUN_140002020(lVar4,param_1[0xf] - lVar4 >> 3,8);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar4 = param_1[10];
  if (lVar4 != 0) {
    FUN_140002020(lVar4,param_1[0xc] - lVar4 >> 3,8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
  }
  puVar6 = param_1 + 4;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0xf < (ulonglong)param_1[7]) {
    FUN_140002020(*puVar6,param_1[7] + 1,1);
  }
  param_1[7] = 0xf;
  param_1[6] = 0;
  if (0xf < (ulonglong)param_1[7]) {
    puVar6 = (undefined8 *)*puVar6;
  }
  *(undefined1 *)puVar6 = 0;
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

