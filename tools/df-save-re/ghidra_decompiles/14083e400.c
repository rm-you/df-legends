// FUN_14083e400 @ 14083e400
// callees:
//   -> 14083c020 FUN_14083c020
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 14000c780 FUN_14000c780
//   -> 14083e580 FUN_14083e580


undefined8 *
FUN_14083e400(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  FUN_14083c020();
  *param_1 = itemdef_ammost::vftable;
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
  puVar1 = param_1 + 0x18;
  param_1[0x1b] = 0xf;
  param_1[0x1a] = 0;
  puVar2 = puVar1;
  if (0xf < (ulonglong)param_1[0x1b]) {
    puVar2 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if ((void *)param_1[0x1c] != (void *)0x0) {
    free((void *)param_1[0x1c]);
  }
  puVar3 = operator_new(1);
  param_1[0x1c] = puVar3;
  *puVar3 = 0;
  *(undefined4 *)(param_1 + 0x1d) = 1;
  FUN_14000c780(puVar1,&DAT_140f2df8c,4,param_4,uVar4);
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0xffffffff;
  FUN_14083e580(param_1);
  return param_1;
}

