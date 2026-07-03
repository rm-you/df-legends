// FUN_14007af10 @ 14007af10
// callees:
//   -> 1400743a0 FUN_1400743a0
//   -> 140dfb5b4 free
//   -> 1400745b0 FUN_1400745b0
//   -> 140073d50 FUN_140073d50
//   -> 140073b50 FUN_140073b50
//   -> 14007b120 FUN_14007b120


void FUN_14007af10(longlong *param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  param_1[9] = 1;
  uVar5 = 0;
  lVar3 = *param_1;
  lVar2 = param_1[1] - lVar3;
  while (lVar2 >> 3 != 0) {
    pvVar1 = *(void **)(lVar3 + -8 + (lVar2 >> 3) * 8);
    if (pvVar1 != (void *)0x0) {
      FUN_1400743a0(pvVar1);
      free(pvVar1);
    }
    lVar3 = *param_1;
    lVar2 = param_1[1] - lVar3;
  }
  lVar3 = param_1[7] - param_1[6];
  while (lVar3 >> 3 != 0) {
    pvVar1 = *(void **)(param_1[6] + -8 + (param_1[7] - param_1[6] >> 3) * 8);
    if (pvVar1 != (void *)0x0) {
      FUN_1400745b0(pvVar1);
      free(pvVar1);
    }
    lVar3 = param_1[7] - param_1[6];
  }
  puVar4 = (undefined8 *)param_1[0xf];
  uVar7 = (ulonglong)(param_1[0x10] + (7 - (longlong)puVar4)) >> 3;
  if ((undefined8 *)param_1[0x10] < puVar4) {
    uVar7 = uVar5;
  }
  uVar6 = uVar5;
  if (uVar7 != 0) {
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 != (void *)0x0) {
        FUN_140073d50(pvVar1);
        free(pvVar1);
      }
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  param_1[0x10] = param_1[0xf];
  puVar4 = (undefined8 *)param_1[0x12];
  uVar7 = (ulonglong)(param_1[0x13] + (7 - (longlong)puVar4)) >> 3;
  if ((undefined8 *)param_1[0x13] < puVar4) {
    uVar7 = uVar5;
  }
  uVar6 = uVar5;
  if (uVar7 != 0) {
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 != (void *)0x0) {
        FUN_140073b50(pvVar1);
        free(pvVar1);
      }
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  param_1[0x13] = param_1[0x12];
  puVar4 = (undefined8 *)param_1[0x15];
  uVar7 = (ulonglong)(param_1[0x16] + (7 - (longlong)puVar4)) >> 3;
  if ((undefined8 *)param_1[0x16] < puVar4) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 != (void *)0x0) {
        FUN_14007b120(pvVar1);
        free(pvVar1);
      }
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  param_1[0x16] = param_1[0x15];
  return;
}

