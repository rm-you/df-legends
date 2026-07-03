// FUN_1400723b0 @ 1400723b0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140002ca0 FUN_140002ca0
//   -> 140071df0 FUN_140071df0
//   -> 140071f40 FUN_140071f40
//   -> 140071fe0 FUN_140071fe0
//   -> 1400021b0 FUN_1400021b0
//   -> 140072090 FUN_140072090


void FUN_1400723b0(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[6];
  FUN_1405bb7c0(param_2,local_res8,4);
  switch(param_1[6]) {
  case 0:
    FUN_140002ca0(*(undefined8 *)(param_1 + 4),param_2);
    return;
  case 1:
    FUN_140071df0(*(undefined8 *)(param_1 + 4),param_2);
    return;
  case 2:
    FUN_140071df0(*(undefined8 *)(param_1 + 4),param_2);
    return;
  case 3:
    FUN_140071f40(*(undefined8 *)(param_1 + 4),param_2);
    return;
  case 4:
    FUN_140071df0(*(undefined8 *)(param_1 + 4),param_2);
    return;
  case 5:
    FUN_140071df0(*(undefined8 *)(param_1 + 4),param_2);
    return;
  case 6:
  case 8:
  case 9:
  case 0xd:
  case 0xf:
    puVar2 = *(undefined4 **)(param_1 + 4);
    local_res8[0] = *puVar2;
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar2[1];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar2[2];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar2[3];
    break;
  case 7:
    FUN_140071fe0(*(undefined8 *)(param_1 + 4),param_2);
    return;
  case 10:
    FUN_140071df0(*(undefined8 *)(param_1 + 4),param_2);
    return;
  case 0xb:
    lVar1 = *(longlong *)(param_1 + 4);
    FUN_1400021b0(param_2,lVar1);
    local_res8[0] = *(undefined4 *)(lVar1 + 0x18);
    break;
  case 0xc:
    FUN_140072090(*(undefined8 *)(param_1 + 4),param_2);
    return;
  case 0xe:
    FUN_140071f40(*(undefined8 *)(param_1 + 4),param_2);
    return;
  default:
    goto switchD_140072445_default;
  }
  FUN_1405bb7c0(param_2,local_res8,4);
switchD_140072445_default:
  return;
}

