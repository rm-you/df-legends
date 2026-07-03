// FUN_140846a40 @ 140846a40
// callees:
//   -> 140858a80 FUN_140858a80


int * FUN_140846a40(int *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = param_1 + 0x14;
  param_1[0x1a] = 0xf;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x1a)) {
    piVar1 = *(int **)piVar1;
  }
  *(undefined1 *)piVar1 = 0;
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
  param_1[7] = -0x752f7530;
  *(undefined2 *)(param_1 + 8) = 0x8ad0;
  param_1[9] = -1;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  param_1[0xd] = -1;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  param_1[0x10] = 0;
  param_1[0x11] = -1;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  param_1[6] = -1;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 0xffff;
  param_1[0x12] = 0;
  param_1[0x1c] = 0;
  param_1[0x4a] = 0;
  param_1[0x1e] = -1;
  param_1[4] = -1;
  param_1[0x4b] = -0x752f7530;
  *(undefined2 *)(param_1 + 0x4c) = 0x8ad0;
  param_1[0x4d] = -1;
  param_1[0x4e] = -1;
  param_1[0x4f] = -1;
  param_1[0x50] = -1;
  uVar2 = FUN_140858a80(&DAT_141c68048,param_1,param_3,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 2) = uVar2;
  if (param_2 == '\0') {
    *param_1 = DAT_141699294;
    DAT_141699294 = DAT_141699294 + 1;
  }
  return param_1;
}

