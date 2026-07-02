// FUN_1406f57a0 @ 1406f57a0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1406f5550 FUN_1406f5550


void FUN_1406f57a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  if (0x673 < param_3) {
    FUN_1405bba90(param_2,param_1,4);
  }
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    FUN_1406f5550(param_1 + 0x14,param_2,param_3);
    goto switchD_1406f583d_default;
  case 1:
  case 3:
    FUN_1405bba90(param_2,param_1 + 0x14,4);
    FUN_1405bba90(param_2,param_1 + 0x18,4);
    FUN_1405bba90(param_2,param_1 + 0x1c,4);
    lVar1 = param_1 + 0x20;
    break;
  case 2:
  case 4:
    FUN_1405bba90(param_2,param_1 + 0x14,4);
    FUN_1405bba90(param_2,param_1 + 0x18,4);
    lVar1 = param_1 + 0x1c;
    break;
  case 5:
    FUN_1405bba90(param_2,param_1 + 0x14,4);
    FUN_1405bba90(param_2,param_1 + 0x18,4);
    FUN_1405bba90(param_2,param_1 + 0x1c,4);
    FUN_1405bba90(param_2,param_1 + 0x20,4);
    lVar1 = param_1 + 0x24;
    break;
  default:
    goto switchD_1406f583d_default;
  }
  FUN_1405bba90(param_2,lVar1,4);
switchD_1406f583d_default:
  if (0x673 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x28,4);
  }
  return;
}

