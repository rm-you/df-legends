// FUN_140288af0 @ 140288af0
// callees:
//   -> 140002020 FUN_140002020


void FUN_140288af0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 0x11;
  if (0xf < (ulonglong)param_1[0x14]) {
    FUN_140002020(*puVar2,param_1[0x14] + 1,1);
  }
  param_1[0x14] = 0xf;
  param_1[0x13] = 0;
  if (0xf < (ulonglong)param_1[0x14]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xf] - lVar1 >> 2,4);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xc] - lVar1 >> 1,2);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[9] - lVar1 >> 1,2);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[6] - lVar1 >> 1,2);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
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

