// FUN_1407075a0 @ 1407075a0
// callees:
//   -> 140dfb5c4 operator_new


undefined8 * FUN_1407075a0(undefined2 param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  
  switch(param_1) {
  case 0:
    puVar1 = operator_new(0x10);
    *puVar1 = histfig_entity_link_memberst::vftable;
    return puVar1;
  case 1:
    puVar1 = operator_new(0x10);
    *puVar1 = histfig_entity_link_former_memberst::vftable;
    return puVar1;
  case 2:
    puVar1 = operator_new(0x10);
    *puVar1 = histfig_entity_link_mercenaryst::vftable;
    return puVar1;
  case 3:
    puVar1 = operator_new(0x10);
    *puVar1 = histfig_entity_link_former_mercenaryst::vftable;
    return puVar1;
  case 4:
    puVar1 = operator_new(0x10);
    *puVar1 = histfig_entity_link_slavest::vftable;
    return puVar1;
  case 5:
    puVar1 = operator_new(0x10);
    *puVar1 = histfig_entity_link_former_slavest::vftable;
    return puVar1;
  case 6:
    puVar1 = operator_new(0x10);
    *puVar1 = histfig_entity_link_prisonerst::vftable;
    return puVar1;
  case 7:
    puVar1 = operator_new(0x10);
    *puVar1 = histfig_entity_link_former_prisonerst::vftable;
    return puVar1;
  case 8:
    puVar1 = operator_new(0x10);
    *puVar1 = histfig_entity_link_enemyst::vftable;
    return puVar1;
  case 9:
    puVar1 = operator_new(0x10);
    *puVar1 = histfig_entity_link_criminalst::vftable;
    return puVar1;
  case 10:
    puVar1 = operator_new(0x18);
    *puVar1 = histfig_entity_link_positionst::vftable;
    puVar1[2] = 0xffffffffffffffff;
    return puVar1;
  case 0xb:
    puVar1 = operator_new(0x20);
    ppuVar2 = histfig_entity_link_former_positionst::vftable;
    break;
  case 0xc:
    puVar1 = operator_new(0x18);
    *puVar1 = histfig_entity_link_position_claimst::vftable;
    puVar1[2] = 0xffffffffffffffff;
    return puVar1;
  case 0xd:
    puVar1 = operator_new(0x20);
    ppuVar2 = histfig_entity_link_squadst::vftable;
    break;
  case 0xe:
    puVar1 = operator_new(0x20);
    ppuVar2 = histfig_entity_link_former_squadst::vftable;
    break;
  case 0xf:
    puVar1 = operator_new(0x18);
    *puVar1 = histfig_entity_link_occupationst::vftable;
    puVar1[2] = 0xffffffffffffffff;
    return puVar1;
  case 0x10:
    puVar1 = operator_new(0x20);
    ppuVar2 = histfig_entity_link_former_occupationst::vftable;
    break;
  default:
    return (undefined8 *)0x0;
  }
  *puVar1 = ppuVar2;
  puVar1[2] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  return puVar1;
}

