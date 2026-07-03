// FUN_1407f0050 @ 1407f0050
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new


undefined8 * FUN_1407f0050(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,4);
  switch(local_res10[0]) {
  case 0:
    puVar1 = operator_new(0x38);
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = itemimprovement_art_imagest::vftable;
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0x2c) = 0xffff;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
    return puVar1;
  case 1:
    puVar1 = operator_new(0x30);
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *puVar1 = itemimprovement_coveredst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
    return puVar1;
  case 2:
    puVar1 = operator_new(0x28);
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *puVar1 = itemimprovement_rings_hangingst::vftable;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    return puVar1;
  case 3:
    puVar1 = operator_new(0x30);
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *puVar1 = itemimprovement_bandsst::vftable;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    return puVar1;
  case 4:
    puVar1 = operator_new(0x28);
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *puVar1 = itemimprovement_spikesst::vftable;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    return puVar1;
  case 5:
    puVar1 = operator_new(0x30);
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *puVar1 = itemimprovement_itemspecificst::vftable;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    return puVar1;
  case 6:
    puVar1 = operator_new(0x40);
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *puVar1 = itemimprovement_threadst::vftable;
    *(undefined2 *)(puVar1 + 5) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    return puVar1;
  case 7:
    puVar1 = operator_new(0x28);
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *puVar1 = itemimprovement_clothst::vftable;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    return puVar1;
  case 8:
    puVar1 = operator_new(0x58);
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *puVar1 = itemimprovement_sewn_imagest::vftable;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0x2c) = 0xffff;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined2 *)(puVar1 + 8) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar1 + 9) = 0xffffffff;
    return puVar1;
  case 9:
    puVar1 = operator_new(0x48);
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *puVar1 = itemimprovement_pagesst::vftable;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 5) = 1;
    return puVar1;
  case 10:
    puVar1 = operator_new(0x40);
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = itemimprovement_illustrationst::vftable;
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0x2c) = 0xffff;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    return puVar1;
  case 0xb:
    puVar1 = operator_new(0x48);
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *puVar1 = itemimprovement_instrument_piecest::vftable;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    puVar1[8] = 0xf;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
    return puVar1;
  case 0xc:
    puVar1 = operator_new(0x40);
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *puVar1 = itemimprovement_writingst::vftable;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    return puVar1;
  case 0xd:
    puVar1 = operator_new(0x30);
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = itemimprovement_image_setst::vftable;
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    return puVar1;
  default:
    return (undefined8 *)0x0;
  }
}

