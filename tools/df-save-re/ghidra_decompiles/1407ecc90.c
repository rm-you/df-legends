// FUN_1407ecc90 @ 1407ecc90
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14007cd60 FUN_14007cd60


undefined8 *
FUN_1407ecc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0xf8);
  FUN_14007cd60(puVar1,0,param_3,param_4,uVar2);
  *puVar1 = item_foodst::vftable;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0xd4) = 0xffff;
  *(undefined4 *)(puVar1 + 0x1e) = 0;
  return puVar1;
}

