// FUN_1404bb680 @ 1404bb680
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140050410 FUN_140050410
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 14000bd10 FUN_14000bd10
//   -> 140dfc99c memset


undefined8 * FUN_1404bb680(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *local_res10;
  
  uVar5 = 0;
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar3 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  plVar2 = param_1 + 0x71;
  *plVar2 = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x74] = 0;
  puVar3 = param_1 + 0x76;
  param_1[0x79] = 0xf;
  param_1[0x78] = 0;
  if (0xf < (ulonglong)param_1[0x79]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x7a,0x120,0x12,FUN_1401baca0,FUN_1401b8440);
  _eh_vector_constructor_iterator_(param_1 + 0x302,0x120,0x12,FUN_1401baca0,FUN_1401b8440);
  _eh_vector_constructor_iterator_(param_1 + 0x58a,0x18,0x12,FUN_1400025a0,FUN_140051de0);
  _eh_vector_constructor_iterator_(param_1 + 0x5c0,0x18,0x12,FUN_1400025a0,FUN_140051de0);
  _eh_vector_constructor_iterator_(param_1 + 0x5f6,0x18,0x12,FUN_1400025a0,FUN_140051de0);
  param_1[0x70d] = 0;
  param_1[0x70e] = 0;
  param_1[0x70f] = 0;
  param_1[0x710] = 0;
  param_1[0x711] = 0;
  param_1[0x712] = 0;
  param_1[0x731] = 0;
  param_1[0x732] = 0;
  param_1[0x733] = 0;
  param_1[0x73f] = 0;
  param_1[0x740] = 0;
  param_1[0x741] = 0;
  param_1[0x742] = 0;
  param_1[0x743] = 0;
  param_1[0x744] = 0;
  param_1[0x745] = 0;
  param_1[0x746] = 0;
  param_1[0x747] = 0;
  param_1[0x748] = 0;
  param_1[0x749] = 0;
  param_1[0x74a] = 0;
  param_1[0x74b] = 0;
  param_1[0x74c] = 0;
  param_1[0x74d] = 0;
  param_1[0x75e] = 0;
  param_1[0x75f] = 0;
  param_1[0x760] = 0;
  param_1[0x761] = 0;
  param_1[0x762] = 0;
  param_1[0x763] = 0;
  param_1[0x764] = 0;
  param_1[0x765] = 0;
  param_1[0x766] = 0;
  param_1[0x767] = 0;
  param_1[0x768] = 0;
  param_1[0x769] = 0;
  param_1[0x76b] = 0;
  param_1[0x76c] = 0;
  param_1[0x76d] = 0;
  param_1[0x76e] = 0;
  param_1[0x76f] = 0;
  param_1[0x770] = 0;
  param_1[0x771] = 0;
  param_1[0x772] = 0;
  param_1[0x773] = 0;
  local_res10 = param_1;
  if ((&local_res10 < DAT_141d6e198) && (DAT_141d6e190 <= &local_res10)) {
    lVar4 = (longlong)&local_res10 - (longlong)DAT_141d6e190;
    if (DAT_141d6e198 == DAT_141d6e1a0) {
      FUN_140050410(&DAT_141d6e190);
    }
    if (DAT_141d6e198 != (undefined8 **)0x0) {
      *DAT_141d6e198 = DAT_141d6e190[lVar4 >> 3];
    }
  }
  else {
    if (DAT_141d6e198 == DAT_141d6e1a0) {
      FUN_140050410(&DAT_141d6e190);
    }
    if (DAT_141d6e198 != (undefined8 **)0x0) {
      *DAT_141d6e198 = param_1;
    }
  }
  DAT_141d6e198 = DAT_141d6e198 + 1;
  param_1[0x76a] = 0xffffffffffffffff;
  if ((void *)param_1[0x74] != (void *)0x0) {
    free((void *)param_1[0x74]);
  }
  puVar3 = operator_new(0xe);
  param_1[0x74] = puVar3;
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  *(undefined2 *)((longlong)puVar3 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x75) = 0xe;
  FUN_14000bd10(plVar2,(longlong)(int)(DAT_141d6dbe8 - DAT_141d6dbe0 >> 3));
  uVar8 = uVar5;
  if (param_1[0x72] - *plVar2 >> 2 != 0) {
    do {
      *(undefined4 *)(uVar5 + *plVar2) = 0;
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 4;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 < (ulonglong)(param_1[0x72] - *plVar2 >> 2));
  }
  lVar4 = 8;
  puVar3 = param_1 + 0x62c;
  do {
    *puVar3 = 0x10000000100;
    puVar3[1] = 0x10000000100;
    puVar3[2] = 0x10000000100;
    puVar1 = puVar3 + 8;
    puVar3[3] = 0x10000000100;
    puVar3[4] = 0x10000000100;
    puVar3[5] = 0x10000000100;
    puVar3[6] = 0x10000000100;
    puVar3[7] = 0x10000000100;
    lVar4 = lVar4 + -1;
    puVar3 = puVar1;
  } while (lVar4 != 0);
  *puVar1 = 0x10000000100;
  param_1[0x66d] = 0x10000000100;
  param_1[0x66e] = 0x10000000100;
  param_1[0x66f] = 0x10000000100;
  param_1[0x670] = 0x10000000100;
  *(undefined4 *)(param_1 + 0x671) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x338c) = 0x10000000100;
  *(undefined8 *)((longlong)param_1 + 0x3394) = 0x10000000100;
  *(undefined8 *)((longlong)param_1 + 0x339c) = 0x10000000100;
  *(undefined8 *)((longlong)param_1 + 0x33a4) = 0x10000000100;
  *(undefined8 *)((longlong)param_1 + 0x33ac) = 0x10000000100;
  *(undefined8 *)((longlong)param_1 + 0x33b4) = 0x10000000100;
  *(undefined8 *)((longlong)param_1 + 0x33bc) = 0x10000000100;
  *(undefined4 *)((longlong)param_1 + 0x33cc) = 5;
  param_1[0x67a] = 0;
  *(undefined2 *)(param_1 + 0x67b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33da) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33db) = 0;
  *(undefined2 *)((longlong)param_1 + 0x33e3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33e5) = 0;
  param_1[0x74e] = 0;
  param_1[0x74f] = 0;
  param_1[0x750] = 0;
  param_1[0x751] = 0;
  param_1[0x752] = 0;
  memset(param_1 + 0x753,0,0x50);
  *(undefined4 *)((longlong)param_1 + 0x33c4) = 7;
  *(undefined2 *)(param_1 + 0x679) = 1;
  memset(param_1 + 0x67d,0,0x132);
  memset(param_1 + 0x713,0,0x87);
  memset((void *)((longlong)param_1 + 0x391f),0,0x62);
  *(undefined8 *)((longlong)param_1 + 0x351a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3522) = 0;
  *(undefined4 *)((longlong)param_1 + 0x385c) = 0x32;
  *(undefined4 *)(param_1 + 0x70c) = 500;
  *(undefined4 *)((longlong)param_1 + 0x3864) = 3;
  puVar6 = (undefined2 *)((longlong)param_1 + 0x352a);
  for (lVar4 = 0x16; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar3 = param_1 + 0x6cb;
  lVar4 = 0x40;
  do {
    *(undefined4 *)(puVar3 + -0x20) = 0;
    *(undefined4 *)puVar3 = 0xffff8ad0;
    *(undefined4 *)(puVar3 + 0x20) = 0xffff8ad0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 4);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x70b) = 0;
  memset(param_1 + 0x734,0,0x54);
  *(undefined4 *)(param_1 + 0x75d) = 0;
  return param_1;
}

