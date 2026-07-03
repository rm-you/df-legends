// FUN_14001bc40 @ 14001bc40
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1400118f0 FUN_1400118f0
//   -> 140011b50 FUN_140011b50
//   -> 140dfb5c4 operator_new
//   -> 140012050 FUN_140012050
//   -> 1400122b0 FUN_1400122b0
//   -> 140012480 FUN_140012480
//   -> 1400128f0 FUN_1400128f0
//   -> 140012c60 FUN_140012c60
//   -> 140014b20 FUN_140014b20
//   -> 140015780 FUN_140015780
//   -> 140016050 FUN_140016050
//   -> 140015e80 FUN_140015e80
//   -> 140018790 FUN_140018790
//   -> 140015a20 FUN_140015a20
//   -> 140016440 FUN_140016440
//   -> 1400166d0 FUN_1400166d0
//   -> 140016ae0 FUN_140016ae0
//   -> 140016d50 FUN_140016d50
//   -> 1400169d0 FUN_1400169d0
//   -> 140015d60 FUN_140015d60
//   -> 140017850 FUN_140017850
//   -> 140017a60 FUN_140017a60
//   -> 1400133d0 FUN_1400133d0


undefined8 * FUN_14001bc40(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  void *local_res18;
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,2);
  switch((undefined2)local_res10[0]) {
  case 0:
    puVar1 = (undefined8 *)FUN_1400118f0();
    return puVar1;
  case 1:
    puVar1 = (undefined8 *)FUN_140011b50();
    return puVar1;
  case 2:
    local_res18 = operator_new(0xd0);
    puVar1 = (undefined8 *)FUN_140012050(local_res18);
    return puVar1;
  case 3:
    puVar1 = (undefined8 *)FUN_1400122b0();
    return puVar1;
  case 4:
    puVar1 = (undefined8 *)FUN_140012480();
    return puVar1;
  case 5:
    puVar1 = (undefined8 *)FUN_1400128f0();
    return puVar1;
  case 6:
    puVar1 = (undefined8 *)FUN_140012c60();
    return puVar1;
  case 7:
    local_res18 = operator_new(0x358);
    puVar1 = (undefined8 *)FUN_140014b20(local_res18);
    return puVar1;
  case 8:
    puVar1 = operator_new(0x70);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *puVar1 = activity_event_conflictst::vftable;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar1 + 100) = 0xffffffff;
    puVar1[0xd] = 0;
    return puVar1;
  case 9:
    puVar1 = operator_new(0x70);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *puVar1 = activity_event_guardst::vftable;
    puVar1[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined2 *)((longlong)puVar1 + 100) = 0x8ad0;
    *(undefined4 *)(puVar1 + 0xc) = 0x8ad08ad0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    return puVar1;
  case 10:
    puVar1 = operator_new(0x90);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *puVar1 = activity_event_reunionst::vftable;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x7c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x84) = 0;
    return puVar1;
  case 0xb:
    puVar1 = (undefined8 *)FUN_140015780();
    return puVar1;
  case 0xc:
    puVar1 = (undefined8 *)FUN_140016050();
    return puVar1;
  case 0xd:
    puVar1 = (undefined8 *)FUN_140015e80();
    return puVar1;
  case 0xe:
    local_res18 = operator_new(0x178);
    puVar1 = (undefined8 *)FUN_140018790(local_res18);
    return puVar1;
  case 0xf:
    puVar1 = (undefined8 *)FUN_140015a20();
    return puVar1;
  case 0x10:
    puVar1 = (undefined8 *)FUN_140016440();
    return puVar1;
  case 0x11:
    puVar1 = (undefined8 *)FUN_1400166d0();
    return puVar1;
  case 0x12:
    puVar1 = (undefined8 *)FUN_140016ae0();
    return puVar1;
  case 0x13:
    puVar1 = operator_new(0x58);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *puVar1 = activity_event_fill_service_orderst::vftable;
    puVar1[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    puVar1[9] = 0xffffffffffffffff;
    puVar1[10] = 0xffffffffffffffff;
    return puVar1;
  case 0x14:
    puVar1 = (undefined8 *)FUN_140016d50();
    return puVar1;
  case 0x15:
    puVar1 = operator_new(0x70);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *puVar1 = activity_event_copy_written_contentst::vftable;
    puVar1[9] = 0xffffffffffffffff;
    puVar1[10] = 0xffffffffffffffff;
    puVar1[0xb] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 100) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
    return puVar1;
  case 0x16:
    puVar1 = (undefined8 *)FUN_1400169d0();
    return puVar1;
  case 0x17:
    local_res18 = operator_new(0xf0);
    puVar1 = (undefined8 *)FUN_140015d60(local_res18);
    return puVar1;
  case 0x18:
    local_res18 = operator_new(0xf8);
    puVar1 = (undefined8 *)FUN_140017850(local_res18);
    return puVar1;
  case 0x19:
    local_res18 = operator_new(0x110);
    puVar1 = (undefined8 *)FUN_140017a60(local_res18);
    return puVar1;
  case 0x1a:
    puVar1 = (undefined8 *)FUN_1400133d0();
    return puVar1;
  case 0x1b:
    puVar1 = operator_new(0x60);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *puVar1 = activity_event_store_objectst::vftable;
    *(undefined2 *)(puVar1 + 10) = 0x8ad0;
    puVar1[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x8ad08ad0;
    *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
    return puVar1;
  default:
    return (undefined8 *)0x0;
  }
}

