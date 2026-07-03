// FUN_1400c1210 @ 1400c1210
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14007cd60 FUN_14007cd60


undefined8 *
FUN_1400c1210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0xe8);
  FUN_14007cd60(puVar1,0,param_3,param_4,uVar2);
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *puVar1 = item_clothst::vftable;
  *(undefined2 *)(puVar1 + 0x16) = 0x1a3;
  *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 10000;
  return puVar1;
}

