// FUN_14007b120 @ 14007b120
// callees:
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020


void FUN_14007b120(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = param_1 + 0x22;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x24] - lVar2 >> 3,8);
    *plVar1 = 0;
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
    FUN_140002020(lVar2,param_1[0x1e] - lVar2 >> 2,4);
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
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x17] - lVar2 >> 2,4);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  puVar3 = param_1 + 5;
  if (0xf < (ulonglong)param_1[8]) {
    FUN_140002020(*puVar3,param_1[8] + 1,1);
  }
  param_1[8] = 0xf;
  param_1[7] = 0;
  if (0xf < (ulonglong)param_1[8]) {
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

