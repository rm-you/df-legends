// FUN_140c230a0 @ 140c230a0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140c218a0 FUN_140c218a0
//   -> 140c21fc0 FUN_140c21fc0
//   -> 140c22320 FUN_140c22320
//   -> 140c22500 FUN_140c22500
//   -> 140c22cc0 FUN_140c22cc0
//   -> 140c21b60 FUN_140c21b60
//   -> 140c221b0 FUN_140c221b0
//   -> 140c226f0 FUN_140c226f0
//   -> 140c228e0 FUN_140c228e0
//   -> 140c22ab0 FUN_140c22ab0


void FUN_140c230a0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 1,4);
  switch(*param_1) {
  case 0:
    FUN_140c218a0(param_1 + 2,param_2);
    return;
  case 1:
    FUN_140c21fc0(param_1 + 2,param_2);
    return;
  case 2:
    FUN_140c22320(param_1 + 2,param_2);
    return;
  case 3:
    FUN_140c22500(param_1 + 2,param_2);
    return;
  case 4:
    FUN_1405bba90(param_2,param_1 + 2,2);
    FUN_1405bba90(param_2,(longlong)param_1 + 10,2);
    param_1 = param_1 + 3;
    uVar1 = 2;
    goto LAB_140c232e7;
  case 5:
    FUN_140c22cc0(param_1 + 2,param_2);
    return;
  case 6:
    FUN_1405bba90(param_2,param_1 + 2,2);
    FUN_1405bba90(param_2,(longlong)param_1 + 10,2);
    FUN_1405bba90(param_2,param_1 + 3,2);
    param_1 = param_1 + 4;
    break;
  case 7:
    FUN_140c21b60(param_1 + 2,param_2,param_3);
    return;
  case 8:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x13:
  case 0x16:
  case 0x17:
    param_1 = param_1 + 2;
    break;
  case 9:
  case 10:
    FUN_1405bba90(param_2,param_1 + 2,4);
    FUN_1405bba90(param_2,param_1 + 3,4);
    param_1 = param_1 + 4;
    break;
  case 0xb:
    FUN_140c221b0(param_1 + 2,param_2);
    return;
  case 0xc:
  case 0x11:
    FUN_1405bba90(param_2,param_1 + 2,4);
    param_1 = param_1 + 3;
    break;
  case 0x10:
    FUN_140c22500(param_1 + 2,param_2);
    return;
  case 0x12:
    FUN_140c226f0(param_1 + 2,param_2);
    return;
  case 0x14:
    FUN_140c228e0(param_1 + 2,param_2);
    return;
  case 0x15:
    FUN_140c22ab0(param_1 + 2,param_2);
    return;
  default:
    goto switchD_140c230f8_default;
  }
  uVar1 = 4;
LAB_140c232e7:
  FUN_1405bba90(param_2,param_1,uVar1);
switchD_140c230f8_default:
  return;
}

