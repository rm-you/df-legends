// FUN_140366f70 @ 140366f70
// callees:
//   -> 140dfb5c4 operator_new
//   -> 1400b3970 FUN_1400b3970


int * FUN_140366f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  piVar1 = operator_new(0x40);
  piVar1[0xd] = -0x752f7530;
  *(undefined2 *)(piVar1 + 0xe) = 0x8ad0;
  *piVar1 = DAT_14167ec40;
  DAT_14167ec40 = DAT_14167ec40 + 1;
  piVar1[1] = -1;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar1[8] = 0;
  piVar1[9] = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  piVar1[0xc] = -1;
  piVar1[0xf] = 0;
  FUN_1400b3970(piVar1,&DAT_141d69208,param_3,param_4,uVar2);
  return piVar1;
}

