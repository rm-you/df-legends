// FUN_140a40f30 @ 140a40f30
// callees:
//   -> 140dfb5c4 operator_new


undefined8 * FUN_140a40f30(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  
  switch(param_1) {
  case 0:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_artifactst::vftable;
    return puVar1;
  case 1:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_is_artifactst::vftable;
    return puVar1;
  case 2:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_nemesisst::vftable;
    return puVar1;
  case 3:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_is_nemesisst::vftable;
    return puVar1;
  case 4:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_itemst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    return puVar1;
  case 5:
    puVar1 = operator_new(0x18);
    *puVar1 = general_ref_item_typest::vftable;
    return puVar1;
  case 6:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_coinbatchst::vftable;
    return puVar1;
  case 7:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_mapsquarest::vftable;
    return puVar1;
  case 8:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_entity_art_imagest::vftable;
    return puVar1;
  case 9:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_contains_unitst::vftable;
    return puVar1;
  case 10:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_contains_itemst::vftable;
    return puVar1;
  case 0xb:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_contained_in_itemst::vftable;
    return puVar1;
  case 0xc:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_projectilest::vftable;
    return puVar1;
  case 0xd:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_unitst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    return puVar1;
  case 0xe:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_milkeest::vftable;
    return puVar1;
  case 0xf:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_traineest::vftable;
    return puVar1;
  case 0x10:
    puVar1 = operator_new(0x18);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_itemownerst::vftable;
    *(undefined4 *)(puVar1 + 2) = 0;
    return puVar1;
  case 0x11:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_tradebringerst::vftable;
    return puVar1;
  case 0x12:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_holderst::vftable;
    return puVar1;
  case 0x13:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_workerst::vftable;
    return puVar1;
  case 0x14:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_cageest::vftable;
    return puVar1;
  case 0x15:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_beateest::vftable;
    return puVar1;
  case 0x16:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_foodreceiverst::vftable;
    return puVar1;
  case 0x17:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_kidnapeest::vftable;
    return puVar1;
  case 0x18:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_patientst::vftable;
    return puVar1;
  case 0x19:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_infantst::vftable;
    return puVar1;
  case 0x1a:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_slaughtereest::vftable;
    return puVar1;
  case 0x1b:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_sheareest::vftable;
    return puVar1;
  case 0x1c:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_suckeest::vftable;
    return puVar1;
  case 0x1d:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_reporteest::vftable;
    return puVar1;
  case 0x1e:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_buildingst::vftable;
    return puVar1;
  case 0x1f:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_building_civzone_assignedst::vftable;
    return puVar1;
  case 0x20:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_building_triggerst::vftable;
    return puVar1;
  case 0x21:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_building_triggertargetst::vftable;
    return puVar1;
  case 0x22:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_building_chainst::vftable;
    return puVar1;
  case 0x23:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_building_cagedst::vftable;
    return puVar1;
  case 0x24:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_building_holderst::vftable;
    return puVar1;
  case 0x25:
    puVar1 = operator_new(0x18);
    *puVar1 = general_ref_building_well_tagst::vftable;
    return puVar1;
  case 0x26:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_building_use_target_1st::vftable;
    return puVar1;
  case 0x27:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_building_use_target_2st::vftable;
    return puVar1;
  case 0x28:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_building_destinationst::vftable;
    return puVar1;
  case 0x29:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_building_nest_boxst::vftable;
    return puVar1;
  case 0x2a:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_entityst::vftable;
    return puVar1;
  case 0x2b:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_entity_stolenst::vftable;
    return puVar1;
  case 0x2c:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_entity_offeredst::vftable;
    return puVar1;
  case 0x2d:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_entity_itemownerst::vftable;
    return puVar1;
  case 0x2e:
    puVar1 = operator_new(0x18);
    *puVar1 = general_ref_locationst::vftable;
    return puVar1;
  case 0x2f:
    puVar1 = operator_new(0x18);
    *puVar1 = general_ref_interactionst::vftable;
    puVar1[1] = 0xffffffffffffffff;
    puVar1[2] = 0xffffffffffffffff;
    return puVar1;
  case 0x30:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_abstract_buildingst::vftable;
    return puVar1;
  case 0x31:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_historical_eventst::vftable;
    return puVar1;
  case 0x32:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_spherest::vftable;
    return puVar1;
  case 0x33:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_sitest::vftable;
    return puVar1;
  case 0x34:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_subregionst::vftable;
    return puVar1;
  case 0x35:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_feature_layerst::vftable;
    return puVar1;
  case 0x36:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_historical_figurest::vftable;
    return puVar1;
  case 0x37:
    puVar1 = operator_new(0x18);
    *puVar1 = general_ref_entity_popst::vftable;
    puVar1[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    return puVar1;
  case 0x38:
    puVar1 = operator_new(0x20);
    *puVar1 = general_ref_creaturest::vftable;
    puVar1[1] = 0xffffffffffffffff;
    puVar1[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 3) = 0;
    return puVar1;
  case 0x39:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_riderst::vftable;
    return puVar1;
  case 0x3a:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_climberst::vftable;
    return puVar1;
  case 0x3b:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_geldeest::vftable;
    return puVar1;
  case 0x3c:
    puVar1 = operator_new(0x10);
    ppuVar2 = general_ref_knowledge_scholar_flagst::vftable;
    break;
  case 0x3d:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_activity_eventst::vftable;
    return puVar1;
  case 0x3e:
    puVar1 = operator_new(0x10);
    ppuVar2 = general_ref_value_levelst::vftable;
    break;
  case 0x3f:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_languagest::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    return puVar1;
  case 0x40:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_written_contentst::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    return puVar1;
  case 0x41:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_poetic_formst::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    return puVar1;
  case 0x42:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_musical_formst::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    return puVar1;
  case 0x43:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_dance_formst::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    return puVar1;
  case 0x44:
    puVar1 = operator_new(0x10);
    *puVar1 = general_ref_building_display_furniturest::vftable;
    return puVar1;
  case 0x45:
    puVar1 = operator_new(0x10);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = general_ref_unit_interrogateest::vftable;
    return puVar1;
  default:
    return (undefined8 *)0x0;
  }
  *puVar1 = ppuVar2;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  return puVar1;
}

