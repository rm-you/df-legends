// FUN_140282330 @ 140282330
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14013b960 FUN_14013b960


undefined8 *
FUN_140282330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x380);
  FUN_14013b960(puVar1,0,param_3,param_4,uVar2);
  *puVar1 = item_corpsepiecest::vftable;
  return puVar1;
}

