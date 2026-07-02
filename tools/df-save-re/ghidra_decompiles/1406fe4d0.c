// FUN_1406fe4d0 @ 1406fe4d0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240


undefined8 *
FUN_1406fe4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x80);
  FUN_140709240(puVar1,1,param_3,param_4,uVar2);
  *puVar1 = history_event_hf_convictedst::vftable;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[5] = 0xffffffffffffffff;
  puVar1[6] = 0xffffffffffffffff;
  puVar1[10] = 0xffffffffffffffff;
  puVar1[0xb] = 0xffffffffffffffff;
  puVar1[0xc] = 0xffffffffffffffff;
  puVar1[0xd] = 0xffffffffffffffff;
  return puVar1;
}

