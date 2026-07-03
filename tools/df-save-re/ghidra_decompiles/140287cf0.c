// FUN_140287cf0 @ 140287cf0
// callees:
//   -> 140dfb5b4 free
//   -> 140284830 FUN_140284830
//   -> 140287f40 FUN_140287f40
//   -> 140280c10 FUN_140280c10
//   -> 1402882f0 FUN_1402882f0
//   -> 140286fb0 FUN_140286fb0


void FUN_140287cf0(longlong *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  puVar8 = (ulonglong *)(param_1 + 0x1d);
  lVar4 = 5;
  uVar6 = 0;
  do {
    puVar3 = (undefined8 *)*puVar8;
    uVar5 = (puVar8[1] - (longlong)puVar3) + 7 >> 3;
    if ((undefined8 *)puVar8[1] < puVar3) {
      uVar5 = uVar6;
    }
    uVar7 = uVar6;
    if (uVar5 != 0) {
      do {
        free((void *)*puVar3);
        uVar7 = uVar7 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar7 < uVar5);
    }
    puVar8[1] = *puVar8;
    puVar8 = puVar8 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  iVar2 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*param_1 + lVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140284830(pvVar1);
        free(pvVar1);
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  param_1[1] = *param_1;
  iVar2 = (int)(param_1[4] - param_1[3] >> 3) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(param_1[3] + lVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140287f40(pvVar1);
        free(pvVar1);
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  param_1[4] = param_1[3];
  param_1[0xe] = param_1[0xd];
  param_1[0x11] = param_1[0x10];
  param_1[0x14] = param_1[0x13];
  param_1[0x17] = param_1[0x16];
  param_1[0x1a] = param_1[0x19];
  param_1[0x2d] = param_1[0x2c];
  param_1[0x30] = param_1[0x2f];
  puVar3 = (undefined8 *)param_1[6];
  uVar5 = (param_1[7] - (longlong)puVar3) + 7U >> 3;
  if ((undefined8 *)param_1[7] < puVar3) {
    uVar5 = uVar6;
  }
  uVar7 = uVar6;
  if (uVar5 != 0) {
    do {
      pvVar1 = (void *)*puVar3;
      if (pvVar1 != (void *)0x0) {
        FUN_140280c10((longlong)pvVar1 + 8);
        free(pvVar1);
      }
      puVar3 = puVar3 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  param_1[7] = param_1[6];
  puVar3 = (undefined8 *)param_1[9];
  uVar5 = (param_1[10] - (longlong)puVar3) + 7U >> 3;
  if ((undefined8 *)param_1[10] < puVar3) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      pvVar1 = (void *)*puVar3;
      if (pvVar1 != (void *)0x0) {
        FUN_1402882f0(pvVar1);
        free(pvVar1);
      }
      puVar3 = puVar3 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  param_1[10] = param_1[9];
  pvVar1 = (void *)param_1[0x39];
  if (pvVar1 != (void *)0x0) {
    FUN_140286fb0(pvVar1);
    free(pvVar1);
  }
  param_1[0x39] = 0;
  return;
}

