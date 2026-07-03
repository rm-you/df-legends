// FUN_1405c9450 @ 1405c9450
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_1405c9450(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  puVar2 = (undefined8 *)param_1[0x22];
  uVar3 = (ulonglong)((longlong)param_1[0x23] + (7 - (longlong)puVar2)) >> 3;
  if ((undefined8 *)param_1[0x23] < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      free((void *)*puVar2);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
  }
  param_1[0x23] = param_1[0x22];
  lVar1 = param_1[0x22];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x24] - lVar1 >> 3,8);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
  }
  puVar2 = param_1 + 0x1c;
  if (0xf < (ulonglong)param_1[0x1f]) {
    FUN_140002020(*puVar2,param_1[0x1f] + 1,1);
  }
  param_1[0x1f] = 0xf;
  param_1[0x1e] = 0;
  if (0xf < (ulonglong)param_1[0x1f]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = param_1 + 0x18;
  if (0xf < (ulonglong)param_1[0x1b]) {
    FUN_140002020(*puVar2,param_1[0x1b] + 1,1);
  }
  param_1[0x1b] = 0xf;
  param_1[0x1a] = 0;
  if (0xf < (ulonglong)param_1[0x1b]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = param_1 + 0x14;
  if (0xf < (ulonglong)param_1[0x17]) {
    FUN_140002020(*puVar2,param_1[0x17] + 1,1);
  }
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  if (0xf < (ulonglong)param_1[0x17]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = param_1 + 0x10;
  if (0xf < (ulonglong)param_1[0x13]) {
    FUN_140002020(*puVar2,param_1[0x13] + 1,1);
  }
  param_1[0x13] = 0xf;
  param_1[0x12] = 0;
  if (0xf < (ulonglong)param_1[0x13]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = param_1 + 0xc;
  if (0xf < (ulonglong)param_1[0xf]) {
    FUN_140002020(*puVar2,param_1[0xf] + 1,1);
  }
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  if (0xf < (ulonglong)param_1[0xf]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = param_1 + 8;
  if (0xf < (ulonglong)param_1[0xb]) {
    FUN_140002020(*puVar2,param_1[0xb] + 1,1);
  }
  param_1[0xb] = 0xf;
  param_1[10] = 0;
  if (0xf < (ulonglong)param_1[0xb]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = param_1 + 4;
  if (0xf < (ulonglong)param_1[7]) {
    FUN_140002020(*puVar2,param_1[7] + 1,1);
  }
  param_1[7] = 0xf;
  param_1[6] = 0;
  if (0xf < (ulonglong)param_1[7]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
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

