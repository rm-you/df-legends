// FUN_140280c10 @ 140280c10
// callees:
//   -> 140002020 FUN_140002020
//   -> 140051e20 FUN_140051e20


void FUN_140280c10(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = param_1 + 0x58;
  if (0xf < (ulonglong)param_1[0x5b]) {
    FUN_140002020(*plVar2,param_1[0x5b] + 1,1);
  }
  param_1[0x5b] = 0xf;
  param_1[0x5a] = 0;
  if (0xf < (ulonglong)param_1[0x5b]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0x55;
  FUN_140051e20(plVar2);
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x57] - lVar1 >> 3,8);
    *plVar2 = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
  }
  lVar1 = param_1[0x52];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x54] - lVar1 >> 2,4);
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
  }
  lVar1 = param_1[0x4f];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x51] - lVar1 >> 2,4);
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
  }
  plVar2 = param_1 + 0x4c;
  FUN_140051e20(plVar2);
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x4e] - lVar1 >> 3,8);
    *plVar2 = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
  }
  lVar1 = param_1[0x49];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x4b] - lVar1 >> 2,4);
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
  }
  lVar1 = param_1[0x46];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x48] - lVar1 >> 2,4);
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
  }
  plVar2 = param_1 + 0x43;
  FUN_140051e20(plVar2);
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x45] - lVar1 >> 3,8);
    *plVar2 = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
  }
  lVar1 = param_1[0x3f];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x41] - lVar1 >> 2,4);
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
  }
  lVar1 = param_1[0x3c];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x3e] - lVar1 >> 2,4);
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
  }
  plVar2 = param_1 + 0x37;
  if (0xf < (ulonglong)param_1[0x3a]) {
    FUN_140002020(*plVar2,param_1[0x3a] + 1,1);
  }
  param_1[0x3a] = 0xf;
  param_1[0x39] = 0;
  if (0xf < (ulonglong)param_1[0x3a]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0x33;
  if (0xf < (ulonglong)param_1[0x36]) {
    FUN_140002020(*plVar2,param_1[0x36] + 1,1);
  }
  param_1[0x36] = 0xf;
  param_1[0x35] = 0;
  if (0xf < (ulonglong)param_1[0x36]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0x2f;
  if (0xf < (ulonglong)param_1[0x32]) {
    FUN_140002020(*plVar2,param_1[0x32] + 1,1);
  }
  param_1[0x32] = 0xf;
  param_1[0x31] = 0;
  if (0xf < (ulonglong)param_1[0x32]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0x2b;
  if (0xf < (ulonglong)param_1[0x2e]) {
    FUN_140002020(*plVar2,param_1[0x2e] + 1,1);
  }
  param_1[0x2e] = 0xf;
  param_1[0x2d] = 0;
  if (0xf < (ulonglong)param_1[0x2e]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0x27;
  if (0xf < (ulonglong)param_1[0x2a]) {
    FUN_140002020(*plVar2,param_1[0x2a] + 1,1);
  }
  param_1[0x2a] = 0xf;
  param_1[0x29] = 0;
  if (0xf < (ulonglong)param_1[0x2a]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0x23;
  if (0xf < (ulonglong)param_1[0x26]) {
    FUN_140002020(*plVar2,param_1[0x26] + 1,1);
  }
  param_1[0x26] = 0xf;
  param_1[0x25] = 0;
  if (0xf < (ulonglong)param_1[0x26]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0x1f;
  if (0xf < (ulonglong)param_1[0x22]) {
    FUN_140002020(*plVar2,param_1[0x22] + 1,1);
  }
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  if (0xf < (ulonglong)param_1[0x22]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0x1b;
  if (0xf < (ulonglong)param_1[0x1e]) {
    FUN_140002020(*plVar2,param_1[0x1e] + 1,1);
  }
  param_1[0x1e] = 0xf;
  param_1[0x1d] = 0;
  if (0xf < (ulonglong)param_1[0x1e]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0x16;
  if (0xf < (ulonglong)param_1[0x19]) {
    FUN_140002020(*plVar2,param_1[0x19] + 1,1);
  }
  param_1[0x19] = 0xf;
  param_1[0x18] = 0;
  if (0xf < (ulonglong)param_1[0x19]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0x12;
  if (0xf < (ulonglong)param_1[0x15]) {
    FUN_140002020(*plVar2,param_1[0x15] + 1,1);
  }
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  if (0xf < (ulonglong)param_1[0x15]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0xe;
  if (0xf < (ulonglong)param_1[0x11]) {
    FUN_140002020(*plVar2,param_1[0x11] + 1,1);
  }
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  if (0xf < (ulonglong)param_1[0x11]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 10;
  if (0xf < (ulonglong)param_1[0xd]) {
    FUN_140002020(*plVar2,param_1[0xd] + 1,1);
  }
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  if (0xf < (ulonglong)param_1[0xd]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 6;
  if (0xf < (ulonglong)param_1[9]) {
    FUN_140002020(*plVar2,param_1[9] + 1,1);
  }
  param_1[9] = 0xf;
  param_1[8] = 0;
  if (0xf < (ulonglong)param_1[9]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
  FUN_140051e20(param_1 + 3);
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[5] - lVar1 >> 3,8);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  FUN_140051e20(param_1);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1 >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

