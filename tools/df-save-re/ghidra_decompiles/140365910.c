// FUN_140365910 @ 140365910
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140161780 FUN_140161780


undefined8 *
FUN_140365910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0xc0);
  FUN_140161780(puVar1,0,param_3,param_4,uVar2);
  *puVar1 = item_drinkst::vftable;
  *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
  return puVar1;
}

