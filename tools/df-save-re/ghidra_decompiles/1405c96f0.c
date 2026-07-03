// FUN_1405c96f0 @ 1405c96f0
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> 140281bb0 FUN_140281bb0
//   -> 1405c9450 FUN_1405c9450
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140051e20 FUN_140051e20


void FUN_1405c96f0(undefined8 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  iVar2 = (int)((longlong)(param_1[0x48] - param_1[0x47]) >> 3) + -1;
  lVar6 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      puVar4 = *(undefined8 **)(param_1[0x47] + lVar6 * 8);
      if (puVar4 != (undefined8 *)0x0) {
        if (0xf < (ulonglong)puVar4[3]) {
          FUN_140002020(*puVar4,puVar4[3] + 1,1);
        }
        puVar4[3] = 0xf;
        puVar4[2] = 0;
        puVar3 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar3 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar3 = 0;
        free(puVar4);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  param_1[0x48] = param_1[0x47];
  iVar2 = (int)((longlong)(param_1[0x4b] - param_1[0x4a]) >> 3) + -1;
  lVar6 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(param_1[0x4a] + lVar6 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140281bb0(pvVar1);
        free(pvVar1);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  param_1[0x4b] = param_1[0x4a];
  puVar4 = (undefined8 *)param_1[0xc1];
  uVar7 = (ulonglong)((longlong)param_1[0xc2] + (7 - (longlong)puVar4)) >> 3;
  if ((undefined8 *)param_1[0xc2] < puVar4) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 != (void *)0x0) {
        FUN_1405c9450(pvVar1);
        free(pvVar1);
      }
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  param_1[0xc2] = param_1[0xc1];
  lVar6 = param_1[0xe6];
  if (lVar6 != 0) {
    FUN_140002020(lVar6,param_1[0xe8] - lVar6 >> 2,4);
    param_1[0xe6] = 0;
    param_1[0xe7] = 0;
    param_1[0xe8] = 0;
  }
  lVar6 = param_1[0xe3];
  if (lVar6 != 0) {
    FUN_140002020(lVar6,param_1[0xe5] - lVar6 >> 2,4);
    param_1[0xe3] = 0;
    param_1[0xe4] = 0;
    param_1[0xe5] = 0;
  }
  puVar4 = param_1 + 0xd8;
  if (0xf < (ulonglong)param_1[0xdb]) {
    FUN_140002020(*puVar4,param_1[0xdb] + 1,1);
  }
  param_1[0xdb] = 0xf;
  param_1[0xda] = 0;
  if (0xf < (ulonglong)param_1[0xdb]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = param_1 + 0xd4;
  if (0xf < (ulonglong)param_1[0xd7]) {
    FUN_140002020(*puVar4,param_1[0xd7] + 1,1);
  }
  param_1[0xd7] = 0xf;
  param_1[0xd6] = 0;
  if (0xf < (ulonglong)param_1[0xd7]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = param_1 + 0xd0;
  if (0xf < (ulonglong)param_1[0xd3]) {
    FUN_140002020(*puVar4,param_1[0xd3] + 1,1);
  }
  param_1[0xd3] = 0xf;
  param_1[0xd2] = 0;
  if (0xf < (ulonglong)param_1[0xd3]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = param_1 + 0xcc;
  if (0xf < (ulonglong)param_1[0xcf]) {
    FUN_140002020(*puVar4,param_1[0xcf] + 1,1);
  }
  param_1[0xcf] = 0xf;
  param_1[0xce] = 0;
  if (0xf < (ulonglong)param_1[0xcf]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = param_1 + 200;
  if (0xf < (ulonglong)param_1[0xcb]) {
    FUN_140002020(*puVar4,param_1[0xcb] + 1,1);
  }
  param_1[0xcb] = 0xf;
  param_1[0xca] = 0;
  if (0xf < (ulonglong)param_1[0xcb]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = param_1 + 0xc4;
  if (0xf < (ulonglong)param_1[199]) {
    FUN_140002020(*puVar4,param_1[199] + 1,1);
  }
  param_1[199] = 0xf;
  param_1[0xc6] = 0;
  if (0xf < (ulonglong)param_1[199]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  lVar6 = param_1[0xc1];
  if (lVar6 != 0) {
    FUN_140002020(lVar6,param_1[0xc3] - lVar6 >> 3,8);
    param_1[0xc1] = 0;
    param_1[0xc2] = 0;
    param_1[0xc3] = 0;
  }
  _eh_vector_destructor_iterator_(param_1 + 0x54,0x20,0x1b,FUN_14000c260);
  lVar6 = param_1[0x4a];
  if (lVar6 != 0) {
    FUN_140002020(lVar6,param_1[0x4c] - lVar6 >> 3,8);
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
  }
  lVar6 = param_1[0x47];
  if (lVar6 != 0) {
    FUN_140002020(lVar6,param_1[0x49] - lVar6 >> 3,8);
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
  }
  puVar4 = param_1 + 0x22;
  if (0xf < (ulonglong)param_1[0x25]) {
    FUN_140002020(*puVar4,param_1[0x25] + 1,1);
  }
  param_1[0x25] = 0xf;
  param_1[0x24] = 0;
  if (0xf < (ulonglong)param_1[0x25]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = param_1 + 0x1e;
  if (0xf < (ulonglong)param_1[0x21]) {
    FUN_140002020(*puVar4,param_1[0x21] + 1,1);
  }
  param_1[0x21] = 0xf;
  param_1[0x20] = 0;
  if (0xf < (ulonglong)param_1[0x21]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = param_1 + 0x1a;
  if (0xf < (ulonglong)param_1[0x1d]) {
    FUN_140002020(*puVar4,param_1[0x1d] + 1,1);
  }
  param_1[0x1d] = 0xf;
  param_1[0x1c] = 0;
  if (0xf < (ulonglong)param_1[0x1d]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = param_1 + 0x16;
  if (0xf < (ulonglong)param_1[0x19]) {
    FUN_140002020(*puVar4,param_1[0x19] + 1,1);
  }
  param_1[0x19] = 0xf;
  param_1[0x18] = 0;
  if (0xf < (ulonglong)param_1[0x19]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = param_1 + 0x12;
  if (0xf < (ulonglong)param_1[0x15]) {
    FUN_140002020(*puVar4,param_1[0x15] + 1,1);
  }
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  if (0xf < (ulonglong)param_1[0x15]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = param_1 + 0xe;
  if (0xf < (ulonglong)param_1[0x11]) {
    FUN_140002020(*puVar4,param_1[0x11] + 1,1);
  }
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  if (0xf < (ulonglong)param_1[0x11]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = param_1 + 10;
  if (0xf < (ulonglong)param_1[0xd]) {
    FUN_140002020(*puVar4,param_1[0xd] + 1,1);
  }
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  if (0xf < (ulonglong)param_1[0xd]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
  }
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140051e20(param_1 + 5);
  lVar6 = param_1[5];
  if (lVar6 != 0) {
    FUN_140002020(lVar6,param_1[7] - lVar6 >> 3,8);
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

