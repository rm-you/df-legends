// FUN_140162020 @ 140162020
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140161f40 FUN_140161f40


undefined8 *
FUN_140162020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x138);
  FUN_140161f40(puVar1,0,param_3,param_4,uVar2);
  *puVar1 = item_verminst::vftable;
  return puVar1;
}

