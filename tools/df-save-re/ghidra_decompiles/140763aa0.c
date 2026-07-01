// FUN_140763aa0 @ 140763aa0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1406fe560 FUN_1406fe560
//   -> 140dfb5c4 operator_new
//   -> 140084b20 FUN_140084b20
//   -> 140762be0 FUN_140762be0
//   -> 1406fe600 FUN_1406fe600
//   -> 140086050 FUN_140086050


undefined8 *
FUN_140763aa0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_res10 [2];
  undefined8 *local_res18;
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,4,param_4,0xfffffffffffffffe);
  switch(local_res10[0]) {
  case 0:
    puVar2 = (undefined8 *)FUN_1406fe560();
    break;
  case 1:
    local_res18 = operator_new(0x300);
    puVar2 = (undefined8 *)FUN_140084b20(local_res18,1);
    break;
  case 2:
    puVar2 = operator_new(0x88);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_duelst::vftable;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 100) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xd) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar2 + 0xe) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x72) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x74) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xf) = 0xffffffff;
    *(undefined1 *)(puVar2 + 0x10) = 1;
    *(undefined4 *)((longlong)puVar2 + 0x7c) = 0;
    break;
  case 3:
    puVar2 = operator_new(0xa0);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_site_conqueredst::vftable;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 100) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x9c) = 0;
    break;
  case 4:
    puVar2 = (undefined8 *)FUN_1406fe600();
    break;
  case 5:
    local_res18 = operator_new(0x1c0);
    puVar2 = (undefined8 *)FUN_140086050(local_res18,1);
    break;
  case 6:
    puVar2 = operator_new(0x98);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_beast_attackst::vftable;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 100) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xd) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar2 + 0xe) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x72) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x74) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x12) = 0;
    break;
  case 7:
    puVar2 = operator_new(0x80);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_journeyst::vftable;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *(undefined4 *)(puVar2 + 0xf) = 0;
    break;
  case 8:
    puVar2 = operator_new(0x70);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_insurrectionst::vftable;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    break;
  case 9:
    puVar2 = operator_new(0x70);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_occasionst::vftable;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    break;
  case 10:
    puVar2 = operator_new(0x78);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_performancest::vftable;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    break;
  case 0xb:
    puVar2 = operator_new(0x78);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_competitionst::vftable;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    break;
  case 0xc:
    puVar2 = operator_new(0x78);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_processionst::vftable;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    break;
  case 0xd:
    puVar2 = operator_new(0x78);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_ceremonyst::vftable;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    break;
  case 0xe:
    puVar2 = operator_new(0x90);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_purgest::vftable;
    puVar1 = puVar2 + 0xd;
    puVar2[0x10] = 0xf;
    puVar2[0xf] = 0;
    if (0xf < (ulonglong)puVar2[0x10]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x11) = 0;
    break;
  case 0xf:
    puVar2 = operator_new(0xa0);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_raidst::vftable;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 100) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xd) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar2 + 0xe) = 0xffff;
    *(undefined2 *)((longlong)puVar2 + 0x72) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x74) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xf) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x13) = 0;
    break;
  case 0x10:
    puVar2 = operator_new(0x70);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_persecutionst::vftable;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 100) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    break;
  case 0x11:
    puVar2 = operator_new(0x70);
    local_res18 = puVar2;
    FUN_140762be0(puVar2,1);
    *puVar2 = history_event_collection_entity_overthrownst::vftable;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 100) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    break;
  default:
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

