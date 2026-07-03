// FUN_1406fb1b0 @ 1406fb1b0
// callees:
//   -> 14009d500 FUN_14009d500
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 1401b8900 FUN_1401b8900


void FUN_1406fb1b0(ulonglong *param_1)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined8 *)*param_1;
  uVar6 = 0;
  uVar5 = (param_1[1] - (longlong)puVar3) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar3) {
    uVar5 = uVar6;
  }
  uVar4 = uVar6;
  if (uVar5 != 0) {
    do {
      pvVar1 = (void *)*puVar3;
      if (pvVar1 != (void *)0x0) {
        FUN_14009d500(pvVar1);
        free(pvVar1);
      }
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  param_1[1] = *param_1;
  puVar3 = (undefined8 *)param_1[3];
  uVar5 = (param_1[4] - (longlong)puVar3) + 7 >> 3;
  if ((undefined8 *)param_1[4] < puVar3) {
    uVar5 = uVar6;
  }
  uVar4 = uVar6;
  if (uVar5 != 0) {
    do {
      pvVar1 = (void *)*puVar3;
      if (pvVar1 != (void *)0x0) {
        FUN_14009d500(pvVar1);
        free(pvVar1);
      }
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  param_1[4] = param_1[3];
  puVar3 = (undefined8 *)param_1[6];
  uVar5 = (param_1[7] - (longlong)puVar3) + 7 >> 3;
  if ((undefined8 *)param_1[7] < puVar3) {
    uVar5 = uVar6;
  }
  uVar4 = uVar6;
  if (uVar5 != 0) {
    do {
      pvVar1 = (void *)*puVar3;
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
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  param_1[7] = param_1[6];
  puVar3 = (undefined8 *)param_1[0xc];
  uVar5 = (param_1[0xd] - (longlong)puVar3) + 7 >> 3;
  if ((undefined8 *)param_1[0xd] < puVar3) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      free((void *)*puVar3);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar5);
  }
  param_1[0xd] = param_1[0xc];
  pvVar1 = (void *)param_1[0x10];
  if (pvVar1 != (void *)0x0) {
    FUN_1401b8900(pvVar1);
    free(pvVar1);
    param_1[0x10] = 0;
  }
  uVar5 = param_1[0xc];
  if (uVar5 != 0) {
    FUN_140002020(uVar5,(longlong)(param_1[0xe] - uVar5) >> 3,8);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  uVar5 = param_1[9];
  if (uVar5 != 0) {
    FUN_140002020(uVar5,(longlong)(param_1[0xb] - uVar5) >> 2,4);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  uVar5 = param_1[6];
  if (uVar5 != 0) {
    FUN_140002020(uVar5,(longlong)(param_1[8] - uVar5) >> 3,8);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
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

