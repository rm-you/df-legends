// FUN_140c0bac0 @ 140c0bac0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140c0b790 FUN_140c0b790
//   -> 140babde0 FUN_140babde0
//   -> 140dfb5c4 operator_new
//   -> 1400026e0 FUN_1400026e0


undefined8 *
FUN_140c0bac0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 *local_res18;
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,4,param_4,0xfffffffffffffffe);
  switch(local_res10[0]) {
  case 1:
    puVar1 = (undefined8 *)FUN_140c0b790();
    break;
  case 2:
    puVar1 = (undefined8 *)FUN_140babde0();
    break;
  case 3:
    puVar1 = operator_new(8);
    *puVar1 = site_realization_building_info_castle_courtyardst::vftable;
    break;
  default:
    puVar1 = (undefined8 *)0x0;
    break;
  case 7:
    puVar1 = operator_new(0x88);
    *puVar1 = site_realization_building_info_shop_housest::vftable;
    local_res18 = puVar1;
    FUN_1400026e0(puVar1 + 2);
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    break;
  case 9:
    puVar1 = operator_new(0x10);
    *puVar1 = site_realization_building_info_market_squarest::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    break;
  case 0x10:
    puVar1 = operator_new(0x50);
    *puVar1 = site_realization_building_info_trenchesst::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffff8ad0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffff8ad0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffff8ad0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0xffff8ad0;
    break;
  case 0x11:
    puVar1 = operator_new(0x88);
    *puVar1 = site_realization_building_info_tree_housest::vftable;
    local_res18 = puVar1;
    FUN_1400026e0(puVar1 + 2);
    puVar1[1] = 0xffffffffffffffff;
    break;
  case 0x12:
    puVar1 = operator_new(0x10);
    *puVar1 = site_realization_building_info_hillock_housest::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    break;
  case 0x1a:
    puVar1 = operator_new(0x10);
    *puVar1 = site_realization_building_info_shrinest::vftable;
    puVar1[1] = 0xffffffffffffffff;
  }
  return puVar1;
}

