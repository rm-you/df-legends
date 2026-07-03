// FUN_1400b6560 @ 1400b6560
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 1400b5340 FUN_1400b5340
//   -> 140071f40 FUN_140071f40
//   -> 1400b4b80 FUN_1400b4b80
//   -> 1400b4d50 FUN_1400b4d50
//   -> 1400b5010 FUN_1400b5010
//   -> 1400b56c0 FUN_1400b56c0
//   -> 1400b5850 FUN_1400b5850
//   -> 1400b5ad0 FUN_1400b5ad0
//   -> 1400b5c90 FUN_1400b5c90
//   -> 1400b47f0 FUN_1400b47f0


void FUN_1400b6560(uint *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined1 local_res8 [8];
  uint local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1e];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x30];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[3];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[4];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[5];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[6];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[7];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400021b0(param_2,param_1 + 8);
  switch(param_1[0x30]) {
  case 1:
  case 0x14:
    puVar2 = *(uint **)(param_1 + 0x2e);
    local_res18[0] = *puVar2;
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = puVar2[1];
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = puVar2[2];
    goto LAB_1400b68a0;
  case 2:
    FUN_1400b5340(*(undefined8 *)(param_1 + 0x2e),param_2);
    break;
  case 3:
  case 8:
  case 9:
  case 10:
    break;
  case 4:
  case 0x12:
  case 0x15:
  case 0x16:
    puVar2 = *(uint **)(param_1 + 0x2e);
    local_res18[0] = *puVar2;
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = puVar2[1];
    goto LAB_1400b68a0;
  case 5:
    FUN_140071f40(*(undefined8 *)(param_1 + 0x2e),param_2);
    break;
  case 6:
    FUN_1400b4b80(*(undefined8 *)(param_1 + 0x2e),param_2);
    break;
  case 7:
    FUN_1400b4d50(*(undefined8 *)(param_1 + 0x2e),param_2);
    break;
  case 0xb:
    FUN_1400b56c0(*(undefined8 *)(param_1 + 0x2e),param_2);
    break;
  case 0xc:
    FUN_1400b5850(*(undefined8 *)(param_1 + 0x2e),param_2);
    break;
  case 0xd:
    FUN_1400b5ad0(*(undefined8 *)(param_1 + 0x2e),param_2);
    break;
  case 0xe:
    FUN_1400b5c90(*(undefined8 *)(param_1 + 0x2e),param_2);
    break;
  case 0xf:
    FUN_1400b5010(*(undefined8 *)(param_1 + 0x2e),param_2);
    break;
  case 0x10:
    local_res18[0] = **(uint **)(param_1 + 0x2e);
    goto LAB_1400b68a0;
  case 0x11:
  case 0x18:
    puVar2 = *(uint **)(param_1 + 0x2e);
    local_res18[0] = *puVar2;
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = puVar2[1];
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = puVar2[2];
    goto LAB_1400b6885;
  case 0x13:
    lVar1 = *(longlong *)(param_1 + 0x2e);
    FUN_1400021b0(param_2,lVar1);
    local_res18[0] = *(uint *)(lVar1 + 0x18);
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = *(uint *)(lVar1 + 0x1c);
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = *(uint *)(lVar1 + 0x20);
    goto LAB_1400b68a0;
  case 0x17:
    puVar2 = *(uint **)(param_1 + 0x2e);
    local_res18[0] = *puVar2;
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = puVar2[2];
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = puVar2[1];
LAB_1400b6885:
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = puVar2[3];
LAB_1400b68a0:
    FUN_1405bb7c0(param_2,local_res18,4);
    break;
  default:
    goto switchD_1400b669c_default;
  }
switchD_1400b669c_default:
  local_res18[0] = param_1[0xe];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0xf];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x10];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x11];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x12];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x13];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400021b0(param_2,param_1 + 0x18);
  FUN_1400021b0(param_2,param_1 + 0x20);
  FUN_1400021b0(param_2,param_1 + 0x26);
  if (*(longlong *)(param_1 + 0x2c) == 0) {
    local_res18[0] = local_res18[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res18,1);
  }
  else {
    local_res8[0] = 1;
    FUN_1405bb7c0(param_2,local_res8,1);
    FUN_1400b47f0(*(undefined8 *)(param_1 + 0x2c),param_2);
  }
  local_res18[0] = param_1[0x14];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x15];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x16];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x17];
  FUN_1405bb7c0(param_2,local_res18,4);
  return;
}

