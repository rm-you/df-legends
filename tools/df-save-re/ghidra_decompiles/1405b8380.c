// FUN_1405b8380 @ 1405b8380
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 1405b71a0 FUN_1405b71a0


undefined8 *
FUN_1405b8380(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 *local_res18;
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,2,param_4,0xfffffffffffffffe);
  switch((undefined2)local_res10[0]) {
  case 0:
    puVar1 = operator_new(0x48);
    local_res18 = puVar1;
    FUN_1405b71a0(puVar1,1);
    *puVar1 = feature_init_outdoor_riverst::vftable;
    puVar1[8] = 0;
    break;
  case 1:
    puVar1 = operator_new(0x48);
    local_res18 = puVar1;
    FUN_1405b71a0(puVar1,1);
    *puVar1 = feature_init_cavest::vftable;
    puVar1[8] = 0;
    break;
  case 2:
    puVar1 = operator_new(0x48);
    local_res18 = puVar1;
    FUN_1405b71a0(puVar1,1);
    *puVar1 = feature_init_pitst::vftable;
    puVar1[8] = 0;
    break;
  case 3:
    puVar1 = operator_new(0x48);
    local_res18 = puVar1;
    FUN_1405b71a0(puVar1,1);
    *puVar1 = feature_init_magma_poolst::vftable;
    puVar1[8] = 0;
    break;
  case 4:
    puVar1 = operator_new(0x48);
    local_res18 = puVar1;
    FUN_1405b71a0(puVar1,1);
    *puVar1 = feature_init_volcanost::vftable;
    puVar1[8] = 0;
    break;
  case 5:
    puVar1 = operator_new(0x50);
    local_res18 = puVar1;
    FUN_1405b71a0(puVar1,1);
    *puVar1 = feature_init_deep_special_tubest::vftable;
    puVar1[9] = 0;
    break;
  case 6:
    puVar1 = operator_new(0x50);
    local_res18 = puVar1;
    FUN_1405b71a0(puVar1,1);
    *puVar1 = feature_init_deep_surface_portalst::vftable;
    puVar1[9] = 0;
    *(undefined2 *)(puVar1 + 8) = 6;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0xffffffff;
    break;
  case 7:
    puVar1 = operator_new(0x50);
    local_res18 = puVar1;
    FUN_1405b71a0(puVar1,1);
    *puVar1 = feature_init_subterranean_from_layerst::vftable;
    puVar1[9] = 0;
    break;
  case 8:
    puVar1 = operator_new(0x50);
    local_res18 = puVar1;
    FUN_1405b71a0(puVar1,1);
    *puVar1 = feature_init_magma_core_from_layerst::vftable;
    puVar1[9] = 0;
    break;
  case 9:
    puVar1 = operator_new(0x58);
    local_res18 = puVar1;
    FUN_1405b71a0(puVar1,1);
    *puVar1 = feature_init_underworld_from_layerst::vftable;
    puVar1[10] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x44) = 6;
    *(undefined4 *)(puVar1 + 9) = 0xffffffff;
    break;
  default:
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}

