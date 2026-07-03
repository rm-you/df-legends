// FUN_14013c4b0 @ 14013c4b0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new


undefined8 * FUN_14013c4b0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,2);
  if ((short)local_res10[0] == 0) {
    puVar1 = operator_new(0x48);
    *puVar1 = creation_zone_pwg_alteration_location_deathst::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    return puVar1;
  }
  if ((short)local_res10[0] == 1) {
    puVar1 = operator_new(0x38);
    *puVar1 = creation_zone_pwg_alteration_campst::vftable;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *(undefined2 *)(puVar1 + 5) = 0xffff;
    *(undefined2 *)((longlong)puVar1 + 0x2a) = 0xffff;
    *(undefined2 *)((longlong)puVar1 + 0x2c) = 0xffff;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    return puVar1;
  }
  if ((short)local_res10[0] == 2) {
    puVar1 = operator_new(0x18);
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = creation_zone_pwg_alteration_srb_ruinedst::vftable;
    return puVar1;
  }
  if ((short)local_res10[0] != 3) {
    return (undefined8 *)0x0;
  }
  puVar1 = operator_new(0x18);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = creation_zone_pwg_alteration_srp_ruinedst::vftable;
  return puVar1;
}

