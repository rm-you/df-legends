// FUN_140004a90 @ 140004a90
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 1400039b0 FUN_1400039b0
//   -> 140003800 FUN_140003800
//   -> 1400026e0 FUN_1400026e0
//   -> 140003d70 FUN_140003d70
//   -> 140004470 FUN_140004470
//   -> 140003cd0 FUN_140003cd0
//   -> 140004110 FUN_140004110
//   -> 140003ec0 FUN_140003ec0
//   -> 140003b10 FUN_140003b10


undefined8 *
FUN_140004a90(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 *local_res18;
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,2,param_4,0xfffffffffffffffe);
  switch((undefined2)local_res10[0]) {
  case 0:
    local_res18 = operator_new(0x150);
    puVar1 = (undefined8 *)FUN_1400039b0(local_res18);
    break;
  case 1:
    puVar1 = operator_new(0x130);
    local_res18 = puVar1;
    FUN_140003800(puVar1);
    *puVar1 = abstract_building_keepst::vftable;
    FUN_1400026e0(puVar1 + 0x17);
    break;
  case 2:
    local_res18 = operator_new(0x188);
    puVar1 = (undefined8 *)FUN_140003d70(local_res18);
    break;
  case 3:
    puVar1 = operator_new(0x130);
    local_res18 = puVar1;
    FUN_140003800(puVar1);
    *puVar1 = abstract_building_dark_towerst::vftable;
    FUN_1400026e0(puVar1 + 0x17);
    break;
  case 4:
    puVar1 = operator_new(0x130);
    local_res18 = puVar1;
    FUN_140003800(puVar1);
    *puVar1 = abstract_building_marketst::vftable;
    FUN_1400026e0(puVar1 + 0x17);
    break;
  case 5:
    puVar1 = operator_new(0x168);
    local_res18 = puVar1;
    FUN_140003800(puVar1);
    *puVar1 = abstract_building_tombst::vftable;
    FUN_1400026e0(puVar1 + 0x17);
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    *(undefined4 *)(puVar1 + 0x2c) = 0xf;
    break;
  case 6:
    local_res18 = operator_new(0x178);
    puVar1 = (undefined8 *)FUN_140004470(local_res18);
    break;
  case 7:
    local_res18 = operator_new(0x138);
    puVar1 = (undefined8 *)FUN_140003cd0(local_res18);
    break;
  case 8:
    local_res18 = operator_new(0x1a0);
    puVar1 = (undefined8 *)FUN_140004110(local_res18);
    break;
  case 9:
    local_res18 = operator_new(0x1a8);
    puVar1 = (undefined8 *)FUN_140003ec0(local_res18);
    break;
  case 10:
    puVar1 = operator_new(0x130);
    local_res18 = puVar1;
    FUN_140003800(puVar1);
    *puVar1 = abstract_building_counting_housest::vftable;
    FUN_1400026e0(puVar1 + 0x17);
    break;
  case 0xb:
    local_res18 = operator_new(0x180);
    puVar1 = (undefined8 *)FUN_140003b10(local_res18);
    break;
  case 0xc:
    puVar1 = operator_new(0x138);
    local_res18 = puVar1;
    FUN_140003800(puVar1);
    *puVar1 = abstract_building_towerst::vftable;
    FUN_1400026e0(puVar1 + 0x17);
    *(undefined4 *)(puVar1 + 0x26) = 0;
    break;
  default:
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}

