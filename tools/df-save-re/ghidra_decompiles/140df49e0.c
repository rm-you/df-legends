// FUN_140df49e0 @ 140df49e0
// callees:
//   -> 1400b3970 FUN_1400b3970


int * FUN_140df49e0(int *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  
  piVar1 = param_1 + 2;
  param_1[8] = 0xf;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (0xf < *(ulonglong *)(param_1 + 8)) {
    piVar1 = *(int **)piVar1;
  }
  *(undefined1 *)piVar1 = 0;
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
  if (param_2 == '\0') {
    param_1[10] = 1;
    param_1[0xb] = 1;
    param_1[0x18] = -1;
    param_1[0x19] = -1;
    param_1[0x1a] = 10;
    param_1[0x1b] = -1;
    param_1[0x28] = -1;
    param_1[0x29] = 0;
    *param_1 = DAT_14167ec44;
    DAT_14167ec44 = DAT_14167ec44 + 1;
    FUN_1400b3970(param_1,&DAT_141d69148,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}

