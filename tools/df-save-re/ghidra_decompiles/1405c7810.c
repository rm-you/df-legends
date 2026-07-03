// FUN_1405c7810 @ 1405c7810
// callees:
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140002020 FUN_140002020
//   -> 140281510 FUN_140281510
//   -> 140051e20 FUN_140051e20
//   -> 140dfb5b4 free


void FUN_1405c7810(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  _eh_vector_destructor_iterator_(param_1 + 0xa5,0x20,6,FUN_14000c260);
  puVar3 = param_1 + 0xa1;
  if (0xf < (ulonglong)param_1[0xa4]) {
    FUN_140002020(*puVar3,param_1[0xa4] + 1,1);
  }
  param_1[0xa4] = 0xf;
  param_1[0xa3] = 0;
  if (0xf < (ulonglong)param_1[0xa4]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  lVar2 = param_1[0x9e];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0xa0] - lVar2 >> 1,2);
    param_1[0x9e] = 0;
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
  }
  plVar1 = param_1 + 0x9a;
  FUN_140281510(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x9c] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
  }
  plVar1 = param_1 + 0x94;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x96] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
  }
  puVar3 = param_1 + 0x90;
  if (0xf < (ulonglong)param_1[0x93]) {
    FUN_140002020(*puVar3,param_1[0x93] + 1,1);
  }
  param_1[0x93] = 0xf;
  param_1[0x92] = 0;
  if (0xf < (ulonglong)param_1[0x93]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x8c;
  if (0xf < (ulonglong)param_1[0x8f]) {
    FUN_140002020(*puVar3,param_1[0x8f] + 1,1);
  }
  param_1[0x8f] = 0xf;
  param_1[0x8e] = 0;
  if (0xf < (ulonglong)param_1[0x8f]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x88;
  if (0xf < (ulonglong)param_1[0x8b]) {
    FUN_140002020(*puVar3,param_1[0x8b] + 1,1);
  }
  param_1[0x8b] = 0xf;
  param_1[0x8a] = 0;
  if (0xf < (ulonglong)param_1[0x8b]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  plVar1 = param_1 + 0x84;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x86] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
  }
  plVar1 = param_1 + 0x81;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x83] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
  }
  plVar1 = param_1 + 0x7e;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x80] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
  }
  plVar1 = param_1 + 0x7b;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x7d] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
  }
  plVar1 = param_1 + 0x78;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x7a] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
  }
  lVar2 = param_1[0x75];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x77] - lVar2 >> 2,4);
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
  }
  lVar2 = param_1[0x72];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x74] - lVar2 >> 1,2);
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    param_1[0x74] = 0;
  }
  lVar2 = param_1[0x6f];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x71] - lVar2 >> 1,2);
    param_1[0x6f] = 0;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
  }
  lVar2 = param_1[0x6c];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x6e] - lVar2 >> 1,2);
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
  }
  plVar1 = param_1 + 0x69;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x6b] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
  }
  puVar3 = param_1 + 0x65;
  if (0xf < (ulonglong)param_1[0x68]) {
    FUN_140002020(*puVar3,param_1[0x68] + 1,1);
  }
  param_1[0x68] = 0xf;
  param_1[0x67] = 0;
  if (0xf < (ulonglong)param_1[0x68]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x61;
  if (0xf < (ulonglong)param_1[100]) {
    FUN_140002020(*puVar3,param_1[100] + 1,1);
  }
  param_1[100] = 0xf;
  param_1[99] = 0;
  if (0xf < (ulonglong)param_1[100]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x5d;
  if (0xf < (ulonglong)param_1[0x60]) {
    FUN_140002020(*puVar3,param_1[0x60] + 1,1);
  }
  param_1[0x60] = 0xf;
  param_1[0x5f] = 0;
  if (0xf < (ulonglong)param_1[0x60]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x59;
  if (0xf < (ulonglong)param_1[0x5c]) {
    FUN_140002020(*puVar3,param_1[0x5c] + 1,1);
  }
  param_1[0x5c] = 0xf;
  param_1[0x5b] = 0;
  if (0xf < (ulonglong)param_1[0x5c]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x55;
  if (0xf < (ulonglong)param_1[0x58]) {
    FUN_140002020(*puVar3,param_1[0x58] + 1,1);
  }
  param_1[0x58] = 0xf;
  param_1[0x57] = 0;
  if (0xf < (ulonglong)param_1[0x58]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  if ((void *)param_1[0x52] != (void *)0x0) {
    free((void *)param_1[0x52]);
  }
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x2f,0x20,6,FUN_14000c260);
  _eh_vector_destructor_iterator_(param_1 + 0x17,0x20,6,FUN_14000c260);
  puVar3 = param_1 + 0xc;
  if (0xf < (ulonglong)param_1[0xf]) {
    FUN_140002020(*puVar3,param_1[0xf] + 1,1);
  }
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  if (0xf < (ulonglong)param_1[0xf]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
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
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    *(undefined1 *)*param_1 = 0;
  }
  return;
}

