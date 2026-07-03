// FUN_140c15f30 @ 140c15f30
// callees:
//   -> 140dfb5c4 operator_new


undefined8 * FUN_140c15f30(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  
  switch(param_1) {
  case 0:
    puVar1 = operator_new(0x30);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = squad_order_movest::vftable;
    *(undefined2 *)((longlong)puVar1 + 0x24) = 0x8ad0;
    puVar1[1] = 0xffffffffffffffff;
    puVar1[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    *(undefined4 *)(puVar1 + 4) = 0x8ad08ad0;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    return puVar1;
  case 1:
    puVar1 = operator_new(0x70);
    puVar1[1] = 0xffffffffffffffff;
    puVar1[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = squad_order_kill_listst::vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xd] = 0xf;
    puVar1[0xc] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    return puVar1;
  case 2:
    puVar1 = operator_new(0x38);
    puVar1[1] = 0xffffffffffffffff;
    puVar1[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = squad_order_defend_burrowsst::vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    return puVar1;
  case 3:
    puVar1 = operator_new(0x28);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = squad_order_patrol_routest::vftable;
    puVar1[1] = 0xffffffffffffffff;
    puVar1[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    return puVar1;
  case 4:
    puVar1 = operator_new(0x20);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = squad_order_trainst::vftable;
    puVar1[1] = 0xffffffffffffffff;
    puVar1[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    return puVar1;
  case 5:
    puVar1 = operator_new(0x48);
    ppuVar2 = squad_order_drive_entity_off_sitest::vftable;
    break;
  case 6:
    puVar1 = operator_new(0x48);
    ppuVar2 = squad_order_cause_trouble_for_entityst::vftable;
    break;
  case 7:
    puVar1 = operator_new(0x48);
    ppuVar2 = squad_order_kill_hfst::vftable;
    break;
  case 8:
    puVar1 = operator_new(0x48);
    ppuVar2 = squad_order_drive_armies_from_sitest::vftable;
    break;
  case 9:
    puVar1 = operator_new(0x30);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    ppuVar2 = squad_order_retrieve_artifactst::vftable;
    goto LAB_140c16157;
  case 10:
    puVar1 = operator_new(0x30);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    ppuVar2 = squad_order_raid_sitest::vftable;
    goto LAB_140c16157;
  case 0xb:
    puVar1 = operator_new(0x30);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    ppuVar2 = squad_order_rescue_hfst::vftable;
LAB_140c16157:
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    puVar1[2] = 0xffffffffffffffff;
    puVar1[1] = 0xffffffffffffffff;
    *puVar1 = ppuVar2;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x8ad08ad0;
    *(undefined2 *)(puVar1 + 5) = 0x8ad0;
    return puVar1;
  default:
    return (undefined8 *)0x0;
  }
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  puVar1[2] = 0xffffffffffffffff;
  puVar1[1] = 0xffffffffffffffff;
  *puVar1 = ppuVar2;
  puVar1[8] = 0xf;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  return puVar1;
}

