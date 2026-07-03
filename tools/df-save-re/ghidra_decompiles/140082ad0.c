// FUN_140082ad0 @ 140082ad0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240


undefined8 *
FUN_140082ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x38);
  FUN_140709240(puVar1,0,param_3,param_4,uVar2);
  *puVar1 = history_event_assume_identityst::vftable;
  puVar1[5] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  return puVar1;
}

