// FUN_140287f40 @ 140287f40
// callees:
//   -> 140002020 FUN_140002020
//   -> 140051e20 FUN_140051e20


void FUN_140287f40(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = param_1[0x34];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x36] - lVar2 >> 2,4);
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
  }
  plVar1 = param_1 + 0x31;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x33] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  lVar2 = param_1[0x2d];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x2f] - lVar2 >> 1,2);
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
  }
  lVar2 = param_1[0x2a];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x2c] - lVar2 >> 1,2);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
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
  plVar1 = param_1 + 0x1f;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x21] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  plVar1 = param_1 + 0x1c;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x1e] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  plVar1 = param_1 + 0x19;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x1b] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  lVar2 = param_1[0x16];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x18] - lVar2 >> 1,2);
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
    FUN_140002020(lVar2,param_1[0x12] - lVar2 >> 1,2);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  lVar2 = param_1[0xd];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0xf] - lVar2 >> 2,4);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puVar3 = param_1 + 8;
  if (0xf < (ulonglong)param_1[0xb]) {
    FUN_140002020(*puVar3,param_1[0xb] + 1,1);
  }
  param_1[0xb] = 0xf;
  param_1[10] = 0;
  if (0xf < (ulonglong)param_1[0xb]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 4;
  if (0xf < (ulonglong)param_1[7]) {
    FUN_140002020(*puVar3,param_1[7] + 1,1);
  }
  param_1[7] = 0xf;
  param_1[6] = 0;
  if (0xf < (ulonglong)param_1[7]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  if (0xf < (ulonglong)param_1[3]) {
    FUN_140002020(*param_1,param_1[3] + 1,1);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  if (0xf < (ulonglong)param_1[3]) {
    *(undefined1 *)*param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  return;
}

