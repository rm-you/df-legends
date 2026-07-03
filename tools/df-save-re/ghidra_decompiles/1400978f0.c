// FUN_1400978f0 @ 1400978f0
// callees:
//   -> 1400b3970 FUN_1400b3970
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


int * FUN_1400978f0(int *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
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
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
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
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x38] = -1;
  param_1[0x17] = -1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x36] = -1;
  param_1[0x37] = -1;
  param_1[0x14] = 0;
  param_1[0x15] = 10000;
  param_1[0x39] = 100;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x16] = 0x10;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 10) = 0xffff;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0xffff;
  if (param_2 == '\0') {
    *param_1 = DAT_141c2fd90;
    DAT_141c2fd90 = DAT_141c2fd90 + 1;
    FUN_1400b3970(param_1,&DAT_141d69250,param_3,param_4,0xfffffffffffffffe);
    if (*(void **)(param_1 + 0x1a) != (void *)0x0) {
      free(*(void **)(param_1 + 0x1a));
    }
    puVar1 = operator_new(4);
    *(undefined4 **)(param_1 + 0x1a) = puVar1;
    *puVar1 = 0;
    param_1[0x1c] = 4;
    *(undefined2 *)(param_1 + 0x48) = 0x39;
    *(undefined2 *)((longlong)param_1 + 0x122) = 0xffff;
    if (DAT_141d77ba8 - (longlong)DAT_141d77ba0 >> 1 == 0) {
      *(undefined2 *)(param_1 + 0x49) = 0xffff;
      param_1[0x4a] = -1;
    }
    else {
      *(undefined2 *)(param_1 + 0x49) = *DAT_141d77ba0;
      param_1[0x4a] = *DAT_141d77f48;
    }
  }
  return param_1;
}

