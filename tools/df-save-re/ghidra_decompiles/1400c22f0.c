// FUN_1400c22f0 @ 1400c22f0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14007cd60 FUN_14007cd60
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


undefined8 *
FUN_1400c22f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = operator_new(0xf8);
  FUN_14007cd60(puVar1,0,param_3,param_4,uVar3);
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *puVar1 = item_glovesst::vftable;
  *(undefined4 *)(puVar1 + 0x1e) = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  if ((void *)puVar1[0x1d] != (void *)0x0) {
    free((void *)puVar1[0x1d]);
  }
  puVar2 = operator_new(1);
  puVar1[0x1d] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(puVar1 + 0x1e) = 1;
  return puVar1;
}

