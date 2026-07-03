// FUN_140812440 @ 140812440
// callees:
//   -> 1400026e0 FUN_1400026e0
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 140050d90 FUN_140050d90


/* WARNING: Removing unreachable block (ram,0x000140812529) */

int * FUN_140812440(int *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1400026e0(param_1 + 2);
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
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
  param_1[0x26] = -1000000;
  param_1[0x27] = -1000000;
  param_1[0x28] = -1000000;
  param_1[0x29] = -1;
  param_1[0x2a] = -1;
  param_1[0x2b] = -1;
  param_1[0x2c] = -1;
  param_1[0x2d] = -1;
  param_1[0x2e] = -1;
  param_1[0x2f] = -1;
  param_1[0x42] = -1;
  param_1[0x43] = -1;
  param_1[0x44] = -1;
  param_1[0x45] = -1;
  param_1[0x46] = -1;
  param_1[0x47] = -1;
  param_1[0x48] = -1;
  if (param_2 == '\0') {
    puVar1 = operator_new(3);
    *(undefined2 **)(param_1 + 0x20) = puVar1;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    param_1[0x22] = 3;
    *param_1 = DAT_14155b280;
    DAT_14155b280 = DAT_14155b280 + 1;
    FUN_140050d90(param_1,&DAT_141c68010,param_3,param_4,uVar2);
  }
  return param_1;
}

