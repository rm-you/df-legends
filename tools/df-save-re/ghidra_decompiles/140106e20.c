// FUN_140106e20 @ 140106e20
// callees:


void FUN_140106e20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[9];
  param_1[9] = uVar1;
  switch(uVar1) {
  case 0:
  case 1:
  case 3:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    break;
  case 2:
  case 5:
  case 0xd:
  case 0xe:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
  case 0x1f:
  case 0x20:
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    break;
  case 4:
  case 6:
  case 8:
  case 0xf:
  case 0x11:
  case 0x19:
  case 0x1d:
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    break;
  case 0x21:
    *param_1 = *param_2;
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  return;
}

