// FUN_1407d42d0 @ 1407d42d0
// callees:
//   -> 1400026e0 FUN_1400026e0
//   -> 1400b3970 FUN_1400b3970


int * FUN_1407d42d0(int *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1400026e0();
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
  if (param_2 == '\0') {
    param_1[0x20] = -1;
    *(undefined2 *)(param_1 + 0x21) = 0xffff;
    param_1[0x22] = -1;
    param_1[0x23] = -1;
    param_1[0x27] = -1;
    param_1[0x28] = -1;
    param_1[0x24] = 0;
    param_1[0x25] = -0x3b9aca01;
    param_1[0x26] = 0;
    *(undefined2 *)(param_1 + 0x2b) = 0xffff;
    param_1[0x2c] = -1;
    param_1[0x29] = -1;
    param_1[0x2a] = -1;
    *param_1 = DAT_14167e40c;
    DAT_14167e40c = DAT_14167e40c + 1;
    FUN_1400b3970(param_1,&DAT_141d69178,param_3,param_4,uVar1);
  }
  return param_1;
}

