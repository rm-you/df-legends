// FUN_1400b9e90 @ 1400b9e90
// callees:
//   -> 140dfb5c4 operator_new


undefined8 * FUN_1400b9e90(int param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  
  if (param_1 == 0) {
    puVar1 = operator_new(0x20);
    ppuVar2 = art_image_element_creaturest::vftable;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  else {
    if (param_1 == 1) {
      puVar1 = operator_new(0x18);
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      *puVar1 = art_image_element_plantst::vftable;
      return puVar1;
    }
    if (param_1 == 2) {
      puVar1 = operator_new(0x18);
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      *puVar1 = art_image_element_treest::vftable;
      return puVar1;
    }
    if (param_1 != 3) {
      if (param_1 != 4) {
        return (undefined8 *)0x0;
      }
      puVar1 = operator_new(0x20);
      *(undefined2 *)(puVar1 + 2) = 0xffff;
      *(undefined2 *)((longlong)puVar1 + 0x12) = 0xffff;
      *(undefined2 *)((longlong)puVar1 + 0x16) = 0xffff;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
      *(undefined2 *)((longlong)puVar1 + 0x14) = 0xffff;
      *puVar1 = art_image_element_itemst::vftable;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      return puVar1;
    }
    puVar1 = operator_new(0x18);
    ppuVar2 = art_image_element_shapest::vftable;
  }
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0x14) = 0xffff;
  *puVar1 = ppuVar2;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  return puVar1;
}

