// FUN_140c1df50 @ 140c1df50
// callees:
//   -> 140002020 FUN_140002020


void FUN_140c1df50(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x14] - lVar1 >> 2,4);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x11] - lVar1 >> 2,4);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xe] - lVar1 >> 2,4);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xb] - lVar1 >> 2,4);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
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
  if (0xf < (ulonglong)param_1[3]) {
    *(undefined1 *)*param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  return;
}

