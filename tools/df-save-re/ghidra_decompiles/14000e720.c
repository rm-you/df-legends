// FUN_14000e720 @ 14000e720
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_14000e720(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_1405bba90(param_2,param_1 + 0x24,4);
  switch(*(undefined4 *)(param_1 + 0x24)) {
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
    FUN_1405bba90(param_2,param_1,4);
    FUN_1405bba90(param_2,param_1 + 4,4);
    FUN_1405bba90(param_2,param_1 + 8,4);
    lVar1 = param_1 + 0xc;
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
    FUN_1405bba90(param_2,param_1,4);
    lVar1 = param_1 + 4;
    break;
  case 4:
  case 6:
  case 8:
  case 0xf:
  case 0x11:
  case 0x19:
  case 0x1d:
    FUN_1405bba90(param_2,param_1,4);
    FUN_1405bba90(param_2,param_1 + 4,4);
    lVar1 = param_1 + 8;
    break;
  case 0x21:
    lVar1 = param_1;
    break;
  default:
    goto switchD_14000e765_default;
  }
  FUN_1405bba90(param_2,lVar1,4);
switchD_14000e765_default:
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  return;
}

