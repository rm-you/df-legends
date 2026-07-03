// FUN_1403661b0 @ 1403661b0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140161f40 FUN_140161f40


undefined8 *
FUN_1403661b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x140);
  FUN_140161f40(puVar1,0,param_3,param_4,uVar2);
  *puVar1 = item_petst::vftable;
  *(undefined4 *)(puVar1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x13c) = 0;
  return puVar1;
}

