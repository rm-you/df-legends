// FUN_140c22dc0 @ 140c22dc0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140c217c0 FUN_140c217c0
//   -> 140c21940 FUN_140c21940
//   -> 140c21e40 FUN_140c21e40
//   -> 140c22250 FUN_140c22250
//   -> 140c223b0 FUN_140c223b0
//   -> 140c22b60 FUN_140c22b60
//   -> 140c219d0 FUN_140c219d0
//   -> 140c220d0 FUN_140c220d0
//   -> 140c225e0 FUN_140c225e0
//   -> 140c227b0 FUN_140c227b0
//   -> 140c229b0 FUN_140c229b0


void FUN_140c22dc0(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  switch(*param_1) {
  case 0:
    FUN_140c217c0(param_1 + 2,param_2);
    return;
  case 1:
    FUN_140c21e40(param_1 + 2,param_2);
    return;
  case 2:
    FUN_140c22250(param_1 + 2,param_2);
    return;
  case 3:
    FUN_140c223b0(param_1 + 2,param_2);
    return;
  case 4:
    local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 2);
    FUN_1405bb7c0(param_2,local_res8,2);
    local_res8[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 10);
    FUN_1405bb7c0(param_2,local_res8,2);
    local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 3));
    uVar1 = 2;
    goto LAB_140c2301a;
  case 5:
    FUN_140c22b60(param_1 + 2,param_2);
    return;
  case 6:
    FUN_140c21940(param_1 + 2,param_2);
    return;
  case 7:
    FUN_140c219d0(param_1 + 2,param_2);
    return;
  case 8:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x13:
  case 0x16:
  case 0x17:
    local_res8[0] = param_1[2];
    break;
  case 9:
  case 10:
    local_res8[0] = param_1[2];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = param_1[3];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = param_1[4];
    break;
  case 0xb:
    FUN_140c220d0(param_1 + 2,param_2);
    return;
  case 0xc:
  case 0x11:
    local_res8[0] = param_1[2];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = param_1[3];
    break;
  case 0x10:
    FUN_140c223b0(param_1 + 2,param_2);
    return;
  case 0x12:
    FUN_140c225e0(param_1 + 2,param_2);
    return;
  case 0x14:
    FUN_140c227b0(param_1 + 2,param_2);
    return;
  case 0x15:
    FUN_140c229b0(param_1 + 2,param_2);
    return;
  default:
    goto switchD_140c22e24_default;
  }
  uVar1 = 4;
LAB_140c2301a:
  FUN_1405bb7c0(param_2,local_res8,uVar1);
switchD_140c22e24_default:
  return;
}

