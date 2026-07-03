// FUN_140c0c220 @ 140c0c220
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140c0c220(ulonglong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  uVar4 = 0;
  uVar2 = (param_1[1] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar1) {
    uVar2 = uVar4;
  }
  uVar3 = uVar4;
  if (uVar2 != 0) {
    do {
      free((void *)*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  param_1[1] = *param_1;
  puVar1 = (undefined8 *)param_1[3];
  uVar2 = (param_1[4] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[4] < puVar1) {
    uVar2 = uVar4;
  }
  uVar3 = uVar4;
  if (uVar2 != 0) {
    do {
      free((void *)*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  param_1[4] = param_1[3];
  puVar1 = (undefined8 *)param_1[6];
  uVar2 = (param_1[7] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[7] < puVar1) {
    uVar2 = uVar4;
  }
  uVar3 = uVar4;
  if (uVar2 != 0) {
    do {
      free((void *)*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  param_1[7] = param_1[6];
  puVar1 = (undefined8 *)param_1[9];
  uVar2 = (param_1[10] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[10] < puVar1) {
    uVar2 = uVar4;
  }
  if (uVar2 != 0) {
    do {
      free((void *)*puVar1);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar2);
  }
  param_1[10] = param_1[9];
  uVar2 = param_1[9];
  if (uVar2 != 0) {
    FUN_140002020(uVar2,(longlong)(param_1[0xb] - uVar2) >> 3,8);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  uVar2 = param_1[6];
  if (uVar2 != 0) {
    FUN_140002020(uVar2,(longlong)(param_1[8] - uVar2) >> 3,8);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  uVar2 = param_1[3];
  if (uVar2 != 0) {
    FUN_140002020(uVar2,(longlong)(param_1[5] - uVar2) >> 3,8);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  uVar2 = *param_1;
  if (uVar2 != 0) {
    FUN_140002020(uVar2,(longlong)(param_1[2] - uVar2) >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

