// FUN_1401504c0 @ 1401504c0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240


undefined8 *
FUN_1401504c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x38);
  FUN_140709240(puVar1,0,param_3,param_4,uVar2);
  *puVar1 = history_event_masterpiece_lostst::vftable;
  *(undefined4 *)(puVar1 + 5) = 0xffffffff;
  return puVar1;
}

