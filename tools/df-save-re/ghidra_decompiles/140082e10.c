// FUN_140082e10 @ 140082e10
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240


undefined8 *
FUN_140082e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x50);
  FUN_140709240(puVar1,0,param_3,param_4,uVar2);
  *puVar1 = history_event_artifact_givenst::vftable;
  puVar1[5] = 0xffffffffffffffff;
  puVar1[6] = 0xffffffffffffffff;
  puVar1[7] = 0xffffffffffffffff;
  puVar1[8] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
  return puVar1;
}

