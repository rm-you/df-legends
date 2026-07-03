// FUN_14083cb50 @ 14083cb50
// callees:
//   -> 14083c020 FUN_14083c020
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 14083cc40 FUN_14083cc40


/* WARNING: Removing unreachable block (ram,0x00014083cbc6) */

undefined8 * FUN_14083cb50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  
  FUN_14083c020();
  *param_1 = itemdef_toyst::vftable;
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
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x14] = 0;
  puVar2 = operator_new(1);
  param_1[0x14] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x15) = 1;
  FUN_14083cc40(param_1);
  return param_1;
}

