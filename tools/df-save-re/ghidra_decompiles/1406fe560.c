// FUN_1406fe560 @ 1406fe560
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140762be0 FUN_140762be0
//   -> 1400026e0 FUN_1400026e0
//   -> 14007f5f0 FUN_14007f5f0


undefined8 *
FUN_1406fe560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(600);
  FUN_140762be0(puVar1,1,param_3,param_4,uVar2);
  *puVar1 = history_event_collection_warst::vftable;
  FUN_1400026e0(puVar1 + 0xc);
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  FUN_14007f5f0(puVar1 + 0x24);
  return puVar1;
}

