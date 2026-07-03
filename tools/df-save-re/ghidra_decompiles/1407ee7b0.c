// FUN_1407ee7b0 @ 1407ee7b0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14007cd60 FUN_14007cd60


undefined8 *
FUN_1407ee7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0xe8);
  FUN_14007cd60(puVar1,0,param_3,param_4,uVar2);
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *puVar1 = item_totemst::vftable;
  *(undefined2 *)(puVar1 + 0x1c) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0xe2) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0xe4) = 0xffff;
  return puVar1;
}

