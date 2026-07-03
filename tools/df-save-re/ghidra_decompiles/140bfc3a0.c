// FUN_140bfc3a0 @ 140bfc3a0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new


undefined8 * FUN_140bfc3a0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,4);
  switch(local_res10[0]) {
  case 0:
    puVar1 = operator_new(0x38);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_cropst::vftable;
    *(undefined4 *)(puVar1 + 4) = 0;
    return puVar1;
  case 1:
    puVar1 = operator_new(0x40);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_stonest::vftable;
    puVar1[4] = 100;
    return puVar1;
  case 2:
    puVar1 = operator_new(0x58);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar1 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 10) = 0xffffffff;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_metalst::vftable;
    *(undefined4 *)(puVar1 + 4) = 0;
    return puVar1;
  case 3:
    puVar1 = operator_new(0x38);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_woodst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
    return puVar1;
  case 4:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_armor_bodyst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 5:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_armor_pantsst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 6:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_armor_glovesst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 7:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_armor_bootsst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 8:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_armor_helmst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 9:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_clothing_bodyst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 10:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_clothing_pantsst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0xb:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_clothing_glovesst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0xc:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_clothing_bootsst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0xd:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_clothing_helmst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0xe:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_weapon_meleest::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0xf:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_weapon_rangedst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x10:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_anvilst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x11:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_gemsst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x12:
    puVar1 = operator_new(0x28);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_threadst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    return puVar1;
  case 0x13:
    puVar1 = operator_new(0x38);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_clothst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    return puVar1;
  case 0x14:
    puVar1 = operator_new(0x48);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_leatherst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0xffffffff;
    return puVar1;
  case 0x15:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_quiverst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x16:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_backpackst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x17:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_flaskst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x18:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_bagst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x19:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_tablest::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x1a:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_cabinetst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x1b:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_chairst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x1c:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_boxst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x1d:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_bedst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x1e:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_craftsst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x1f:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_meatst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x20:
    puVar1 = operator_new(0x28);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_bonest::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    return puVar1;
  case 0x21:
    puVar1 = operator_new(0x28);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_hornst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    return puVar1;
  case 0x22:
    puVar1 = operator_new(0x28);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_shellst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    return puVar1;
  case 0x23:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_tallowst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x24:
    puVar1 = operator_new(0x28);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_toothst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    return puVar1;
  case 0x25:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_pearlst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x26:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_soapst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x27:
    puVar1 = operator_new(0x30);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_extractst::vftable;
    *(undefined4 *)(puVar1 + 4) = 0;
    return puVar1;
  case 0x28:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_cheesest::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  case 0x29:
    puVar1 = operator_new(0x30);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_skinst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined2 *)(puVar1 + 4) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    return puVar1;
  case 0x2a:
    puVar1 = operator_new(0x28);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_powderst::vftable;
    *(undefined4 *)(puVar1 + 4) = 0;
    return puVar1;
  case 0x2b:
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = resource_allotment_specifier_ammost::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    return puVar1;
  default:
    return (undefined8 *)0x0;
  }
}

