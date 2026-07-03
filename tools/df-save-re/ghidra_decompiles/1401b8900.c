// FUN_1401b8900 @ 1401b8900
// callees:
//   -> 14007de50 FUN_14007de50
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_1401b8900(longlong *param_1)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  puVar5 = (undefined8 *)param_1[0xc];
  uVar8 = 0;
  uVar7 = (param_1[0xd] - (longlong)puVar5) + 7U >> 3;
  if ((undefined8 *)param_1[0xd] < puVar5) {
    uVar7 = uVar8;
  }
  uVar6 = uVar8;
  if (uVar7 != 0) {
    do {
      pvVar2 = (void *)*puVar5;
      if (pvVar2 != (void *)0x0) {
        FUN_14007de50(pvVar2);
        free(pvVar2);
      }
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  param_1[0xd] = param_1[0xc];
  puVar5 = (undefined8 *)param_1[0x16];
  uVar7 = (ulonglong)(param_1[0x17] + (7 - (longlong)puVar5)) >> 3;
  if ((undefined8 *)param_1[0x17] < puVar5) {
    uVar7 = uVar8;
  }
  uVar6 = uVar8;
  if (uVar7 != 0) {
    do {
      pvVar2 = (void *)*puVar5;
      if (pvVar2 != (void *)0x0) {
        lVar3 = *(longlong *)((longlong)pvVar2 + 0x30);
        if (lVar3 != 0) {
          FUN_140002020(lVar3,*(longlong *)((longlong)pvVar2 + 0x40) - lVar3 >> 2,4);
          *(undefined8 *)((longlong)pvVar2 + 0x30) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x38) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x40) = 0;
        }
        free(pvVar2);
      }
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  param_1[0x17] = param_1[0x16];
  puVar4 = (undefined8 *)param_1[0x1e];
  for (puVar5 = (undefined8 *)param_1[0x1d]; puVar5 < puVar4; puVar5 = puVar5 + 1) {
    pvVar2 = (void *)*puVar5;
    if (pvVar2 != (void *)0x0) {
      iVar1 = *(int *)((longlong)pvVar2 + 4);
      if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) || (iVar1 == 3)) {
        free(*(void **)((longlong)pvVar2 + 0x10));
      }
      *(undefined4 *)((longlong)pvVar2 + 4) = 0xffffffff;
      free(pvVar2);
    }
  }
  param_1[0x1e] = param_1[0x1d];
  puVar5 = (undefined8 *)param_1[0x21];
  uVar7 = (ulonglong)(param_1[0x22] + (7 - (longlong)puVar5)) >> 3;
  if ((undefined8 *)param_1[0x22] < puVar5) {
    uVar7 = uVar8;
  }
  if (uVar7 != 0) {
    do {
      free((void *)*puVar5);
      uVar8 = uVar8 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar8 < uVar7);
  }
  param_1[0x22] = param_1[0x21];
  lVar3 = param_1[0x21];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0x23] - lVar3 >> 3,8);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  lVar3 = param_1[0x1d];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0x1f] - lVar3 >> 3,8);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  lVar3 = param_1[0x1a];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0x1c] - lVar3 >> 2,4);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  lVar3 = param_1[0x16];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0x18] - lVar3 >> 3,8);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  lVar3 = param_1[0x13];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0x15] - lVar3 >> 3,8);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar3 = param_1[0x10];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0x12] - lVar3 >> 3,8);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  lVar3 = param_1[0xc];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0xe] - lVar3 >> 3,8);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar3 = param_1[9];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0xb] - lVar3 >> 2,4);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[8] - lVar3 >> 2,4);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[5] - lVar3 >> 2,4);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[2] - lVar3 >> 2,4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

