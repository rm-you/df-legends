// FUN_1406f98f0 @ 1406f98f0
// callees:
//   -> 140dfb5b4 free
//   -> 14009d500 FUN_14009d500
//   -> 140002020 FUN_140002020
//   -> 14000e930 FUN_14000e930


void FUN_1406f98f0(longlong *param_1)

{
  void *_Memory;
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined8 *)param_1[10];
  uVar5 = 0;
  uVar4 = (param_1[0xb] - (longlong)puVar3) + 7U >> 3;
  if ((undefined8 *)param_1[0xb] < puVar3) {
    uVar4 = uVar5;
  }
  uVar6 = uVar5;
  if (uVar4 != 0) {
    do {
      free((void *)*puVar3);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar4);
  }
  param_1[0xb] = param_1[10];
  puVar3 = (undefined8 *)param_1[0x1c];
  uVar4 = (ulonglong)(param_1[0x1d] + (7 - (longlong)puVar3)) >> 3;
  if ((undefined8 *)param_1[0x1d] < puVar3) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      _Memory = (void *)*puVar3;
      if (_Memory != (void *)0x0) {
        FUN_14009d500(_Memory);
        free(_Memory);
      }
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  param_1[0x1d] = param_1[0x1c];
  if ((void *)param_1[0x28] != (void *)0x0) {
    free((void *)param_1[0x28]);
    param_1[0x28] = 0;
  }
  plVar1 = (longlong *)param_1[0x29];
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      FUN_140002020(lVar2,plVar1[2] - lVar2 >> 2,4);
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
    }
    free(plVar1);
    param_1[0x29] = 0;
  }
  plVar1 = (longlong *)param_1[0x2a];
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      FUN_140002020(lVar2,plVar1[2] - lVar2 >> 3,8);
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
    }
    free(plVar1);
    param_1[0x2a] = 0;
  }
  lVar2 = param_1[0x2b];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x2d] - lVar2 >> 2,4);
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
  }
  lVar2 = param_1[0x25];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x27] - lVar2 >> 2,4);
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  lVar2 = param_1[0x22];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x24] - lVar2 >> 2,4);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
  }
  lVar2 = param_1[0x1f];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x21] - lVar2 >> 2,4);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  lVar2 = param_1[0x1c];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x1e] - lVar2 >> 3,8);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  lVar2 = param_1[0x19];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x1b] - lVar2 >> 2,4);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  lVar2 = param_1[0x16];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x18] - lVar2 >> 2,4);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  lVar2 = param_1[0x13];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x15] - lVar2 >> 2,4);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x12] - lVar2 >> 2,4);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  FUN_14000e930(param_1 + 0xd);
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
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[9] - lVar2 >> 2,4);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[6] - lVar2 >> 2,4);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[2] - lVar2 >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

