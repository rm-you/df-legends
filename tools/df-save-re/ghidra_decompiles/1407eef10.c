// FUN_1407eef10 @ 1407eef10
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14007cd60 FUN_14007cd60


undefined8 *
FUN_1407eef10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0xf0);
  FUN_14007cd60(puVar1,0,param_3,param_4,uVar2);
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *puVar1 = item_siegeammost::vftable;
  puVar1[0x1c] = 0;
  return puVar1;
}

