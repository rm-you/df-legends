// FUN_14083e880 @ 14083e880
// callees:
//   -> 14083c020 FUN_14083c020
//   -> 14083e960 FUN_14083e960


undefined8 * FUN_14083e880(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_14083c020();
  *param_1 = itemdef_siegeammost::vftable;
  puVar1 = param_1 + 0xc;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  if (0xf < (ulonglong)param_1[0xf]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0x10;
  param_1[0x13] = 0xf;
  param_1[0x12] = 0;
  if (0xf < (ulonglong)param_1[0x13]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0x14;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  if (0xf < (ulonglong)param_1[0x17]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_14083e960(param_1);
  return param_1;
}

