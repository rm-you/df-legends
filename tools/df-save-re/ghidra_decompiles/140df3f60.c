// FUN_140df3f60 @ 140df3f60
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 1400026e0 FUN_1400026e0


undefined8 *
FUN_140df3f60(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 *local_res18;
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,2,param_4,0xfffffffffffffffe);
  if ((short)local_res10[0] == 0) {
    puVar1 = operator_new(0xd0);
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *puVar1 = world_construction_roadst::vftable;
    local_res18 = puVar1;
    FUN_1400026e0(puVar1 + 0xb);
  }
  else if ((short)local_res10[0] == 1) {
    puVar1 = operator_new(0xd0);
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *puVar1 = world_construction_tunnelst::vftable;
    local_res18 = puVar1;
    FUN_1400026e0(puVar1 + 0xb);
  }
  else if ((short)local_res10[0] == 2) {
    puVar1 = operator_new(0xd0);
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *puVar1 = world_construction_bridgest::vftable;
    local_res18 = puVar1;
    FUN_1400026e0(puVar1 + 0xb);
  }
  else if ((short)local_res10[0] == 3) {
    puVar1 = operator_new(0xd0);
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *puVar1 = world_construction_wallst::vftable;
    local_res18 = puVar1;
    FUN_1400026e0(puVar1 + 0xb);
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}

