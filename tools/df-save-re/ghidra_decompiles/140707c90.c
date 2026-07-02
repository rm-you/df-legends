// FUN_140707c90 @ 140707c90
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new


undefined8 * FUN_140707c90(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,2);
  switch((undefined2)local_res10[0]) {
  case 0:
    puVar1 = operator_new(0x20);
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0xffffffffffffffff;
    *puVar1 = histfig_site_link_occupationst::vftable;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    return puVar1;
  case 1:
    puVar1 = operator_new(0x18);
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0xffffffffffffffff;
    *puVar1 = histfig_site_link_seat_of_powerst::vftable;
    return puVar1;
  case 2:
    puVar1 = operator_new(0x18);
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0xffffffffffffffff;
    *puVar1 = histfig_site_link_hangoutst::vftable;
    return puVar1;
  case 3:
    puVar1 = operator_new(0x18);
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0xffffffffffffffff;
    *puVar1 = histfig_site_link_home_site_abstract_buildingst::vftable;
    return puVar1;
  case 4:
    puVar1 = operator_new(0x18);
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0xffffffffffffffff;
    *puVar1 = histfig_site_link_home_site_realization_buildingst::vftable;
    return puVar1;
  case 5:
    puVar1 = operator_new(0x18);
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0xffffffffffffffff;
    *puVar1 = histfig_site_link_lairst::vftable;
    return puVar1;
  case 6:
    puVar1 = operator_new(0x18);
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0xffffffffffffffff;
    *puVar1 = histfig_site_link_home_site_realization_sulst::vftable;
    return puVar1;
  case 7:
    puVar1 = operator_new(0x18);
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0xffffffffffffffff;
    *puVar1 = histfig_site_link_home_site_saved_civzonest::vftable;
    return puVar1;
  case 8:
    puVar1 = operator_new(0x18);
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0xffffffffffffffff;
    *puVar1 = histfig_site_link_prison_abstract_buildingst::vftable;
    return puVar1;
  case 9:
    puVar1 = operator_new(0x18);
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0xffffffffffffffff;
    *puVar1 = histfig_site_link_prison_site_building_profilest::vftable;
    return puVar1;
  default:
    return (undefined8 *)0x0;
  }
}

