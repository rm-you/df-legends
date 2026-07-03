// FUN_1408de7f0 @ 1408de7f0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new


undefined8 * FUN_1408de7f0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,4);
  switch(local_res10[0]) {
  case 0:
    puVar1 = operator_new(0x18);
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = mental_picture_property_datest::vftable;
    puVar1[2] = 0xffffffffffffffff;
    return puVar1;
  case 1:
    puVar1 = operator_new(0x20);
    *puVar1 = mental_picture_property_actionst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    puVar1[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    return puVar1;
  case 2:
    puVar1 = operator_new(0x20);
    ppuVar2 = mental_picture_property_toolst::vftable;
    break;
  case 3:
    puVar1 = operator_new(0x18);
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = mental_picture_property_emotionst::vftable;
    puVar1[2] = 0xffffffffffffffff;
    return puVar1;
  case 4:
    puVar1 = operator_new(0x18);
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = mental_picture_property_color_patternst::vftable;
    puVar1[2] = 0xffffffffffffffff;
    return puVar1;
  case 5:
    puVar1 = operator_new(0x18);
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = mental_picture_property_shapest::vftable;
    puVar1[2] = 0xffffffffffffffff;
    return puVar1;
  case 6:
    puVar1 = operator_new(0x18);
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = mental_picture_property_adjectivest::vftable;
    puVar1[2] = 0xffffffffffffffff;
    return puVar1;
  case 7:
    puVar1 = operator_new(0x20);
    ppuVar2 = mental_picture_property_positionst::vftable;
    break;
  case 8:
    puVar1 = operator_new(0x20);
    *puVar1 = mental_picture_property_timest::vftable;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    return puVar1;
  default:
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = ppuVar2;
  puVar1[2] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  return puVar1;
}

