// FUN_1400b9340 @ 1400b9340
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


/* WARNING: Removing unreachable block (ram,0x0001400b936d) */

undefined8 * FUN_1400b9340(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = art_image_propertyst::vftable;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  puVar1 = operator_new(1);
  param_1[1] = puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  *param_1 = art_image_property_intransitive_verbst::vftable;
  return param_1;
}

