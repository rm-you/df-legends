// FUN_140210800 @ 140210800
// callees:
//   -> 140dfb5c4 operator_new
//   -> 1409f0530 FUN_1409f0530


undefined8 *
FUN_140210800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x98);
  FUN_1409f0530(puVar1,0,param_3,param_4,uVar2);
  *puVar1 = proj_unitst::vftable;
  return puVar1;
}

