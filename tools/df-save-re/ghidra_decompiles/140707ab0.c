// FUN_140707ab0 @ 140707ab0
// callees:
//   -> 140dfb5c4 operator_new


undefined8 * FUN_140707ab0(undefined2 param_1)

{
  undefined8 *puVar1;
  
  switch(param_1) {
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

