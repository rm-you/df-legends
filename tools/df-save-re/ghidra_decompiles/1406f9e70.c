// FUN_1406f9e70 @ 1406f9e70
// callees:
//   -> 1406fa170 FUN_1406fa170
//   -> 140dfb5b4 free
//   -> 1406fa0f0 FUN_1406fa0f0
//   -> 140002020 FUN_140002020


void FUN_1406f9e70(longlong *param_1)

{
  void *_Memory;
  longlong lVar1;
  longlong *plVar2;
  
  _Memory = (void *)param_1[0x29];
  if (_Memory != (void *)0x0) {
    FUN_1406fa170(_Memory);
    free(_Memory);
  }
  if (param_1[0x2a] != 0) {
    FUN_1406fa0f0();
  }
  plVar2 = param_1 + 0x24;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  if (0xf < (ulonglong)param_1[0x27]) {
    FUN_140002020(*plVar2,param_1[0x27] + 1,1);
  }
  param_1[0x27] = 0xf;
  param_1[0x26] = 0;
  if (0xf < (ulonglong)param_1[0x27]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  lVar1 = param_1[0x1f];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x21] - lVar1 >> 2,4);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  lVar1 = param_1[0x1c];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x1e] - lVar1 >> 2,4);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  lVar1 = param_1[0x19];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x1b] - lVar1 >> 2,4);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  plVar2 = param_1 + 0x14;
  if (0xf < (ulonglong)param_1[0x17]) {
    FUN_140002020(*plVar2,param_1[0x17] + 1,1);
  }
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  if (0xf < (ulonglong)param_1[0x17]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0x10;
  if (0xf < (ulonglong)param_1[0x13]) {
    FUN_140002020(*plVar2,param_1[0x13] + 1,1);
  }
  param_1[0x13] = 0xf;
  param_1[0x12] = 0;
  if (0xf < (ulonglong)param_1[0x13]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0xc;
  if (0xf < (ulonglong)param_1[0xf]) {
    FUN_140002020(*plVar2,param_1[0xf] + 1,1);
  }
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  if (0xf < (ulonglong)param_1[0xf]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[8] - lVar1 >> 3,8);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[5] - lVar1 >> 3,8);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1 >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

