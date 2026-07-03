// FUN_1401961d0 @ 1401961d0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1401670e0 FUN_1401670e0
//   -> 140dfb5c4 operator_new
//   -> 1400c3b60 FUN_1400c3b60
//   -> 140167030 FUN_140167030
//   -> 1400c3d70 FUN_1400c3d70
//   -> 140169450 FUN_140169450
//   -> 140167610 FUN_140167610
//   -> 140167aa0 FUN_140167aa0
//   -> 1400c3530 FUN_1400c3530
//   -> 140165380 FUN_140165380
//   -> 1401656b0 FUN_1401656b0
//   -> 140167e30 FUN_140167e30
//   -> 140165260 FUN_140165260
//   -> 1401672b0 FUN_1401672b0
//   -> 140165a00 FUN_140165a00
//   -> 140165e80 FUN_140165e80
//   -> 1401664e0 FUN_1401664e0
//   -> 140166900 FUN_140166900
//   -> 140166c80 FUN_140166c80
//   -> 140164e00 FUN_140164e00
//   -> 1400c2f30 FUN_1400c2f30


undefined8 *
FUN_1401961d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 *local_res18;
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,4,param_4,0xfffffffffffffffe);
  switch(local_res10[0]) {
  case 0:
    puVar1 = (undefined8 *)FUN_1401670e0();
    break;
  case 1:
    local_res18 = operator_new(0x1d0);
    puVar1 = (undefined8 *)FUN_1400c3b60(local_res18,1);
    break;
  case 2:
    local_res18 = operator_new(0x1b0);
    puVar1 = (undefined8 *)FUN_1400c3d70(local_res18,1);
    break;
  case 3:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_coffinst::vftable;
    *(undefined2 *)(puVar1 + 0x2f) = 0;
    break;
  case 4:
    puVar1 = (undefined8 *)FUN_140167610();
    break;
  case 5:
    local_res18 = operator_new(0x288);
    puVar1 = (undefined8 *)FUN_140167aa0(local_res18,1);
    break;
  case 6:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_tradedepotst::vftable;
    *(undefined4 *)(puVar1 + 0x2f) = 0;
    break;
  case 7:
    puVar1 = operator_new(0x188);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_shopst::vftable;
    puVar1[0x2f] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x184) = 1;
    break;
  case 8:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_doorst::vftable;
    *(undefined4 *)(puVar1 + 0x2f) = 0x50;
    break;
  case 9:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_floodgatest::vftable;
    *(undefined2 *)(puVar1 + 0x2f) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x17a) = 0;
    break;
  case 10:
    local_res18 = operator_new(0x1a0);
    puVar1 = (undefined8 *)FUN_1400c3530(local_res18,1);
    break;
  case 0xb:
    puVar1 = (undefined8 *)FUN_140165380();
    break;
  case 0xc:
    puVar1 = (undefined8 *)FUN_1401656b0();
    break;
  case 0xd:
    local_res18 = operator_new(0x278);
    puVar1 = (undefined8 *)FUN_140167e30(local_res18,1);
    break;
  case 0xe:
    puVar1 = (undefined8 *)FUN_140165260();
    break;
  case 0xf:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_statuest::vftable;
    *(undefined2 *)(puVar1 + 0x2f) = 0;
    break;
  case 0x10:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *(undefined2 *)(puVar1 + 0x2f) = 0;
    *puVar1 = building_window_glassst::vftable;
    break;
  case 0x11:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *(undefined2 *)(puVar1 + 0x2f) = 0;
    *puVar1 = building_window_gemst::vftable;
    break;
  case 0x12:
    puVar1 = (undefined8 *)FUN_1401672b0();
    break;
  case 0x13:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_bridgest::vftable;
    *(undefined4 *)(puVar1 + 0x2f) = 0xff000000;
    break;
  case 0x14:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_road_dirtst::vftable;
    break;
  case 0x15:
    puVar1 = operator_new(0x188);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_road_pavedst::vftable;
    *(undefined2 *)(puVar1 + 0x30) = 500;
    break;
  case 0x16:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_siegeenginest::vftable;
    *(undefined2 *)((longlong)puVar1 + 0x17a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17c) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x17e) = 0;
    break;
  case 0x17:
    local_res18 = operator_new(0x2d0);
    puVar1 = (undefined8 *)FUN_140165a00(local_res18,1);
    break;
  case 0x18:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_animaltrapst::vftable;
    *(undefined2 *)(puVar1 + 0x2f) = 0xffff;
    *(undefined2 *)((longlong)puVar1 + 0x17a) = 0;
    break;
  case 0x19:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_supportst::vftable;
    *(undefined2 *)(puVar1 + 0x2f) = 0;
    break;
  case 0x1a:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_archerytargetst::vftable;
    *(undefined1 *)(puVar1 + 0x2f) = 2;
    break;
  case 0x1b:
    puVar1 = operator_new(400);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_chainst::vftable;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    *(undefined2 *)(puVar1 + 0x31) = 0;
    break;
  case 0x1c:
    puVar1 = (undefined8 *)FUN_140166c80();
    break;
  case 0x1d:
    local_res18 = operator_new(0x990);
    puVar1 = (undefined8 *)FUN_140164e00(local_res18,1);
    break;
  case 0x1e:
    local_res18 = operator_new(0x200);
    puVar1 = (undefined8 *)FUN_1400c2f30(local_res18,1);
    break;
  case 0x1f:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_weaponst::vftable;
    *(undefined2 *)(puVar1 + 0x2f) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17a) = 0;
    break;
  case 0x20:
    puVar1 = operator_new(0x178);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_wagonst::vftable;
    break;
  case 0x21:
    puVar1 = (undefined8 *)FUN_1401664e0();
    break;
  case 0x22:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_constructionst::vftable;
    break;
  case 0x23:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_hatchst::vftable;
    *(undefined4 *)(puVar1 + 0x2f) = 0x50;
    break;
  case 0x24:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_grate_wallst::vftable;
    *(undefined2 *)(puVar1 + 0x2f) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x17a) = 0;
    break;
  case 0x25:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_grate_floorst::vftable;
    *(undefined2 *)(puVar1 + 0x2f) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x17a) = 0;
    break;
  case 0x26:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_bars_verticalst::vftable;
    *(undefined2 *)(puVar1 + 0x2f) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x17a) = 0;
    break;
  case 0x27:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_bars_floorst::vftable;
    *(undefined2 *)(puVar1 + 0x2f) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x17a) = 0;
    break;
  case 0x28:
    puVar1 = operator_new(0x188);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_gear_assemblyst::vftable;
    *(undefined4 *)(puVar1 + 0x2f) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x17c) = 0;
    break;
  case 0x29:
    puVar1 = operator_new(0x188);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_axle_horizontalst::vftable;
    *(undefined4 *)(puVar1 + 0x2f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x17c) = 0;
    break;
  case 0x2a:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_axle_verticalst::vftable;
    *(undefined4 *)(puVar1 + 0x2f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x17c) = 0;
    break;
  case 0x2b:
    puVar1 = operator_new(0x188);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_water_wheelst::vftable;
    *(undefined4 *)(puVar1 + 0x2f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x17c) = 0;
    *(undefined2 *)(puVar1 + 0x30) = 0;
    break;
  case 0x2c:
    puVar1 = (undefined8 *)FUN_140166900();
    break;
  case 0x2d:
    puVar1 = (undefined8 *)FUN_140167030();
    break;
  case 0x2e:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_slabst::vftable;
    *(undefined2 *)(puVar1 + 0x2f) = 0;
    break;
  case 0x2f:
    puVar1 = operator_new(0x178);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_nestst::vftable;
    break;
  case 0x30:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_nest_boxst::vftable;
    *(undefined4 *)(puVar1 + 0x2f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x17c) = 0;
    break;
  case 0x31:
    puVar1 = operator_new(400);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_hivest::vftable;
    puVar1[0x2f] = 3;
    puVar1[0x30] = 0;
    *(undefined4 *)(puVar1 + 0x31) = 0;
    break;
  case 0x32:
    puVar1 = (undefined8 *)FUN_140165e80();
    break;
  case 0x33:
    puVar1 = operator_new(0x180);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_instrumentst::vftable;
    *(undefined4 *)(puVar1 + 0x2f) = 0;
    break;
  case 0x34:
    puVar1 = operator_new(0x178);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_bookcasest::vftable;
    break;
  case 0x35:
    puVar1 = operator_new(400);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_display_furniturest::vftable;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    break;
  case 0x36:
    puVar1 = operator_new(0x178);
    local_res18 = puVar1;
    FUN_140169450(puVar1,1);
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2e] = 0;
    *puVar1 = building_offering_placest::vftable;
    break;
  default:
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}

