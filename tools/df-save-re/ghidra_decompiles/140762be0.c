// FUN_140762be0 @ 140762be0
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


/* WARNING: Removing unreachable block (ram,0x000140762c3c) */

undefined8 * FUN_140762be0(undefined8 *param_1,char param_2)

{
  undefined1 *puVar1;
  
  *param_1 = history_event_collectionst::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[9] = 0;
  param_1[7] = 0xffffffffffffffff;
  param_1[8] = 0xffffffffffffffff;
  if (param_2 == '\0') {
    puVar1 = operator_new(1);
    param_1[9] = puVar1;
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 10) = 1;
    *(int *)(param_1 + 0xb) = DAT_14169746c;
    DAT_14169746c = DAT_14169746c + 1;
  }
  return param_1;
}

