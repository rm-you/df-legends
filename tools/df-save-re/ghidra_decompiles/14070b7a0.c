// FUN_14070b7a0 @ 14070b7a0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 1406fc840 FUN_1406fc840
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 1406fd030 FUN_1406fd030
//   -> 1406fd6b0 FUN_1406fd6b0
//   -> 140083b10 FUN_140083b10
//   -> 14048ff90 FUN_14048ff90
//   -> 1406fe4d0 FUN_1406fe4d0


undefined8 *
FUN_14070b7a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 local_res10 [2];
  undefined8 *local_res18;
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,4,param_4,0xfffffffffffffffe);
  switch(local_res10[0]) {
  case 0:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_war_attacked_sitest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0;
    break;
  case 1:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_war_destroyed_sitest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0;
    break;
  case 2:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_created_sitest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 3:
    puVar2 = (undefined8 *)FUN_1406fc840();
    break;
  case 4:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_add_hf_entity_linkst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 5:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_remove_hf_entity_linkst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 6:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_first_contactst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 7:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_first_contact_failedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 8:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_topicagreement_concludedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined2 *)((longlong)puVar2 + 0x34) = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    break;
  case 9:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_topicagreement_rejectedst::vftable;
    *(undefined2 *)(puVar2 + 5) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 10:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_topicagreement_madest::vftable;
    *(undefined2 *)(puVar2 + 5) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0xb:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_war_peace_acceptedst::vftable;
    *(undefined2 *)(puVar2 + 5) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0xc:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_war_peace_rejectedst::vftable;
    *(undefined2 *)(puVar2 + 5) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0xd:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_diplomat_lostst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 0xe:
    puVar2 = operator_new(0x30);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_agreements_voidedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    break;
  case 0xf:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_merchantst::vftable;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    if ((void *)puVar2[7] != (void *)0x0) {
      free((void *)puVar2[7]);
    }
    puVar1 = operator_new(1);
    puVar2[7] = puVar1;
    *puVar1 = 0;
    *(undefined4 *)(puVar2 + 8) = 1;
    break;
  case 0x10:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_hiddenst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x11:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_possessedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0xffffffff;
    break;
  case 0x12:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_createdst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    break;
  case 0x13:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_lostst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x14:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_foundst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    break;
  case 0x15:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_recoveredst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    break;
  case 0x16:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_droppedst::vftable;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    if ((void *)puVar2[7] != (void *)0x0) {
      free((void *)puVar2[7]);
    }
    puVar1 = operator_new(1);
    puVar2[7] = puVar1;
    *puVar1 = 0;
    *(undefined4 *)(puVar2 + 8) = 1;
    break;
  case 0x17:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_reclaim_sitest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    break;
  case 0x18:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_destroyed_sitest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x19:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_site_diedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    break;
  case 0x1a:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_site_retiredst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    break;
  case 0x1b:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_createdst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x1c:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_actionst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x1d:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_incorporatedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0;
    break;
  case 0x1e:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_created_buildingst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    break;
  case 0x1f:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_replaced_buildingst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x20:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_add_hf_site_linkst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x21:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_remove_hf_site_linkst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x22:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_add_hf_hf_linkst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 0x23:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_remove_hf_hf_linkst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 0x24:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_razed_buildingst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 0x25:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 10;
    *puVar2 = history_event_masterpiece_created_arch_designst::vftable;
    *(undefined2 *)(puVar2 + 7) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x3a) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    break;
  case 0x26:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 10;
    *puVar2 = history_event_masterpiece_created_arch_constructst::vftable;
    *(undefined2 *)(puVar2 + 7) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x3a) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    break;
  case 0x27:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 10;
    *puVar2 = history_event_masterpiece_created_itemst::vftable;
    *(undefined2 *)(puVar2 + 7) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x3a) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x3c) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x3e) = 0xffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    break;
  case 0x28:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 10;
    *puVar2 = history_event_masterpiece_created_dye_itemst::vftable;
    *(undefined2 *)(puVar2 + 7) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x3a) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x3c) = 0xffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined2 *)(puVar2 + 9) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0xffffffff;
    break;
  case 0x29:
    puVar2 = operator_new(0x60);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 10;
    *puVar2 = history_event_masterpiece_created_item_improvementst::vftable;
    *(undefined2 *)(puVar2 + 7) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x3a) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x3c) = 0xffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined2 *)(puVar2 + 9) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0xffffffff;
    *(undefined2 *)(puVar2 + 10) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    *(undefined2 *)((longlong)puVar2 + 0x5c) = 0xffff;
    break;
  case 0x2a:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 10;
    *puVar2 = history_event_masterpiece_created_foodst::vftable;
    *(undefined2 *)(puVar2 + 7) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 0x2b:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 10;
    *puVar2 = history_event_masterpiece_created_engravingst::vftable;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined2 *)((longlong)puVar2 + 0x3c) = 0xffff;
    break;
  case 0x2c:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_masterpiece_lostst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    break;
  case 0x2d:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_change_hf_statest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined2 *)((longlong)puVar2 + 0x2c) = 1;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar2 + 8) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x42) = 0xffff;
    break;
  case 0x2e:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_change_hf_jobst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x660066;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x2f:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_war_field_battlest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined2 *)(puVar2 + 7) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x3a) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
    break;
  case 0x30:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_war_plundered_sitest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 2;
    break;
  case 0x31:
    puVar2 = operator_new(0x58);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_war_site_new_leaderst::vftable;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x32:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_war_site_tribute_forcedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    break;
  case 0x33:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_war_site_taken_overst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x34:
    puVar2 = (undefined8 *)FUN_1406fd030();
    break;
  case 0x35:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hist_figure_abductedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x36:
    puVar2 = (undefined8 *)FUN_1406fd6b0();
    break;
  case 0x37:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_razed_buildingst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 0x38:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_creature_devouredst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    break;
  case 0x39:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hist_figure_woundedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar2 + 8) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x42) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x44) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x46) = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    break;
  case 0x3a:
    puVar2 = operator_new(0x68);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hist_figure_simple_battle_eventst::vftable;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    *(undefined2 *)((longlong)puVar2 + 100) = 0xffff;
    break;
  case 0x3b:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_created_world_constructionst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 0x3c:
    puVar2 = operator_new(0x68);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hist_figure_reunionst::vftable;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 100) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    break;
  case 0x3d:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hist_figure_reach_summitst::vftable;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined2 *)(puVar2 + 9) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x4a) = 0xffff;
    break;
  case 0x3e:
    puVar2 = operator_new(0x58);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hist_figure_travelst::vftable;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined2 *)(puVar2 + 10) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x52) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
    break;
  case 0x3f:
    puVar2 = operator_new(0x68);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hist_figure_new_petst::vftable;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    *(undefined2 *)((longlong)puVar2 + 100) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x66) = 0xffff;
    break;
  case 0x40:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_assume_identityst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 0x41:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_create_entity_positionst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined2 *)(puVar2 + 7) = 0xffff;
    break;
  case 0x42:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_change_creature_typest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 0x43:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hist_figure_revivedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined2 *)(puVar2 + 7) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    break;
  case 0x44:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_learns_secretst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x45:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_change_hf_body_statest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined1 *)((longlong)puVar2 + 0x2c) = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar2 + 8) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x42) = 0xffff;
    break;
  case 0x46:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_act_on_buildingst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x47:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_does_interactionst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    break;
  case 0x48:
    puVar2 = operator_new(0x58);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_confrontedst::vftable;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 10) = 0xffffffff;
    *(undefined2 *)((longlong)puVar2 + 0x54) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x56) = 0xffff;
    break;
  case 0x49:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_lawst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    puVar2[6] = 0;
    break;
  case 0x4a:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_gains_secret_goalst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 0x4b:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_storedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x4c:
    puVar2 = operator_new(0x30);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_agreement_formedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    break;
  case 0x4d:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_site_disputest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x4e:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_agreement_concludedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x4f:
    puVar2 = operator_new(0x30);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_insurrection_startedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    break;
  case 0x50:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_insurrection_endedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 0x51:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_attacked_sitest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x52:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_performancest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 0x53:
    puVar2 = operator_new(0x70);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_competitionst::vftable;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 0x54:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_processionst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 0x55:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_ceremonyst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 0x56:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_knowledge_discoveredst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    puVar2[6] = 0;
    break;
  case 0x57:
    puVar2 = operator_new(0x58);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_transformedst::vftable;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 10) = 0xffffffff;
    break;
  case 0x58:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_destroyedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x59:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_relationship_deniedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    break;
  case 0x5a:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_regionpop_incorporated_into_entityst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 0x5b:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_poetic_form_createdst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    break;
  case 0x5c:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_musical_form_createdst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    break;
  case 0x5d:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_dance_form_createdst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    break;
  case 0x5e:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_written_content_composedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    break;
  case 0x5f:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_change_hf_moodst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined2 *)((longlong)puVar2 + 0x2c) = 0xffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar2 + 8) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x42) = 0xffff;
    break;
  case 0x60:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_claim_formedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 2;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    break;
  case 0x61:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_givenst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
    break;
  case 0x62:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_act_on_artifactst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 99:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_recruited_unit_type_for_entityst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined2 *)(puVar2 + 6) = 0x66;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 100:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hfs_formed_reputation_relationshipst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 0x65:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_artifact_copiedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    break;
  case 0x66:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_sneak_into_sitest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x67:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_spotted_leaving_sitest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x68:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_searched_sitest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 0x69:
    puVar2 = operator_new(0x58);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_freedst::vftable;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x6a:
    puVar2 = operator_new(0x58);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hist_figure_simple_actionst::vftable;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 10) = 0xffffffff;
    break;
  case 0x6b:
    puVar2 = operator_new(0x30);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_rampaged_in_sitest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    break;
  case 0x6c:
    puVar2 = operator_new(0x30);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_fled_sitest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    break;
  case 0x6d:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_tactical_situationst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
    break;
  case 0x6e:
    local_res18 = operator_new(0xa8);
    puVar2 = (undefined8 *)FUN_140083b10(local_res18,1);
    break;
  case 0x6f:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_site_surrenderedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x70:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_expels_hfst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 0x71:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_tradest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    break;
  case 0x72:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_add_entity_site_profile_flagst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0;
    break;
  case 0x73:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_gamblest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined8 *)((longlong)puVar2 + 0x34) = 0;
    break;
  case 0x74:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_add_hf_entity_honorst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    break;
  case 0x75:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_dissolvedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x76:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_equipment_purchasest::vftable;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 1;
    break;
  case 0x77:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_modified_buildingst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0;
    break;
  case 0x78:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_building_profile_acquiredst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    break;
  case 0x79:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_preachst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined2 *)(puVar2 + 6) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x7a:
    local_res18 = operator_new(0xd0);
    puVar2 = (undefined8 *)FUN_14048ff90(local_res18,1);
    break;
  case 0x7b:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_breach_feature_layerst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x7c:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_alliance_formedst::vftable;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    break;
  case 0x7d:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_ransomedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    break;
  case 0x7e:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_enslavedst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x7f:
    puVar2 = operator_new(0x38);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_sabotagest::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    break;
  case 0x80:
    puVar2 = operator_new(0x60);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_entity_overthrownst::vftable;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    break;
  case 0x81:
    puVar2 = operator_new(0x50);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hfs_formed_intrigue_relationshipst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 0x82:
    puVar2 = operator_new(0x48);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_failed_intrigue_corruptionst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    break;
  case 0x83:
    puVar2 = (undefined8 *)FUN_1406fe4d0();
    break;
  case 0x84:
    puVar2 = operator_new(0x40);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_failed_frame_attemptst::vftable;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
    break;
  case 0x85:
    puVar2 = operator_new(0x58);
    local_res18 = puVar2;
    FUN_140709240(puVar2,1);
    *puVar2 = history_event_hf_interrogatedst::vftable;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)(puVar2 + 10) = 0;
    break;
  default:
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

