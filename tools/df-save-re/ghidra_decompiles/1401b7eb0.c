// FUN_1401b7eb0 @ 1401b7eb0
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 1401b7b90 FUN_1401b7b90


void FUN_1401b7eb0(ulonglong *param_1)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  puVar3 = (undefined8 *)param_1[0x1e];
  uVar4 = (ulonglong)((longlong)param_1[0x1f] + (7 - (longlong)puVar3)) >> 3;
  if ((undefined8 *)param_1[0x1f] < puVar3) {
    uVar4 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar4 != 0) {
    do {
      free((void *)*puVar3);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar4);
  }
  param_1[0x1f] = param_1[0x1e];
  puVar3 = (undefined8 *)*param_1;
  uVar4 = (param_1[1] - (longlong)puVar3) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar3) {
    uVar4 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar4 != 0) {
    do {
      free((void *)*puVar3);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar4);
  }
  param_1[1] = *param_1;
  puVar3 = (undefined8 *)param_1[3];
  uVar4 = (param_1[4] - (longlong)puVar3) + 7 >> 3;
  if ((undefined8 *)param_1[4] < puVar3) {
    uVar4 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar4 != 0) {
    do {
      free((void *)*puVar3);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar4);
  }
  param_1[4] = param_1[3];
  puVar3 = (undefined8 *)param_1[6];
  uVar4 = (param_1[7] - (longlong)puVar3) + 7 >> 3;
  if ((undefined8 *)param_1[7] < puVar3) {
    uVar4 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar4 != 0) {
    do {
      free((void *)*puVar3);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar4);
  }
  param_1[7] = param_1[6];
  puVar3 = (undefined8 *)param_1[9];
  uVar4 = (param_1[10] - (longlong)puVar3) + 7 >> 3;
  if ((undefined8 *)param_1[10] < puVar3) {
    uVar4 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar4 != 0) {
    do {
      pvVar1 = (void *)*puVar3;
      if (pvVar1 != (void *)0x0) {
        lVar2 = *(longlong *)((longlong)pvVar1 + 0x10);
        if (lVar2 != 0) {
          FUN_140002020(lVar2,*(longlong *)((longlong)pvVar1 + 0x20) - lVar2 >> 2,4);
          *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x20) = 0;
        }
        free(pvVar1);
      }
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  param_1[10] = param_1[9];
  puVar3 = (undefined8 *)param_1[0xd];
  uVar4 = (param_1[0xe] - (longlong)puVar3) + 7 >> 3;
  if ((undefined8 *)param_1[0xe] < puVar3) {
    uVar4 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar4 != 0) {
    do {
      free((void *)*puVar3);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar4);
  }
  param_1[0xe] = param_1[0xd];
  puVar3 = (undefined8 *)param_1[0x27];
  uVar4 = (ulonglong)((longlong)param_1[0x28] + (7 - (longlong)puVar3)) >> 3;
  if ((undefined8 *)param_1[0x28] < puVar3) {
    uVar4 = uVar6;
  }
  if (uVar4 != 0) {
    do {
      free((void *)*puVar3);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar4);
  }
  param_1[0x28] = param_1[0x27];
  if ((void *)param_1[0x2b] != (void *)0x0) {
    free((void *)param_1[0x2b]);
    param_1[0x2b] = 0;
  }
  pvVar1 = (void *)param_1[0x2d];
  if (pvVar1 != (void *)0x0) {
    FUN_1401b7b90(pvVar1);
    lVar2 = *(longlong *)((longlong)pvVar1 + 0x240);
    if (lVar2 != 0) {
      FUN_140002020(lVar2,*(longlong *)((longlong)pvVar1 + 0x250) - lVar2 >> 3,8);
      *(undefined8 *)((longlong)pvVar1 + 0x240) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x248) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x250) = 0;
    }
    free(pvVar1);
    param_1[0x2d] = 0;
  }
  return;
}

