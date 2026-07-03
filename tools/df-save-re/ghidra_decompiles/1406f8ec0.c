// FUN_1406f8ec0 @ 1406f8ec0
// callees:
//   -> 1406f94b0 FUN_1406f94b0
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> 1406f8a70 FUN_1406f8a70


void FUN_1406f8ec0(ulonglong *param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  plVar3 = (longlong *)*param_1;
  uVar6 = 0;
  uVar5 = (param_1[1] - (longlong)plVar3) + 7 >> 3;
  if ((longlong *)param_1[1] < plVar3) {
    uVar5 = uVar6;
  }
  uVar7 = uVar6;
  if (uVar5 != 0) {
    do {
      if (*plVar3 != 0) {
        FUN_1406f94b0();
      }
      plVar3 = plVar3 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  param_1[1] = *param_1;
  puVar4 = (undefined8 *)param_1[3];
  uVar5 = (param_1[4] - (longlong)puVar4) + 7 >> 3;
  if ((undefined8 *)param_1[4] < puVar4) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 != (void *)0x0) {
        lVar2 = *(longlong *)((longlong)pvVar1 + 0x20);
        if (lVar2 != 0) {
          FUN_140002020(lVar2,*(longlong *)((longlong)pvVar1 + 0x30) - lVar2 >> 2,4);
          *(undefined8 *)((longlong)pvVar1 + 0x20) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x28) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x30) = 0;
        }
        lVar2 = *(longlong *)((longlong)pvVar1 + 8);
        if (lVar2 != 0) {
          FUN_140002020(lVar2,*(longlong *)((longlong)pvVar1 + 0x18) - lVar2 >> 2,4);
          *(undefined8 *)((longlong)pvVar1 + 8) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
        }
        free(pvVar1);
      }
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  param_1[4] = param_1[3];
  pvVar1 = (void *)param_1[0xb];
  if (pvVar1 != (void *)0x0) {
    FUN_1406f8a70(pvVar1);
    free(pvVar1);
    param_1[0xb] = 0;
  }
  uVar5 = param_1[7];
  if (uVar5 != 0) {
    FUN_140002020(uVar5,(longlong)(param_1[9] - uVar5) >> 2,4);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  uVar5 = param_1[3];
  if (uVar5 != 0) {
    FUN_140002020(uVar5,(longlong)(param_1[5] - uVar5) >> 3,8);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  uVar5 = *param_1;
  if (uVar5 != 0) {
    FUN_140002020(uVar5,(longlong)(param_1[2] - uVar5) >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

