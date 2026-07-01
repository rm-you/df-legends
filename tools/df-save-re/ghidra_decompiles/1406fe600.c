// FUN_1406fe600 @ 1406fe600
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140762be0 FUN_140762be0


undefined8 *
FUN_1406fe600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0xd0);
  FUN_140762be0(puVar1,1,param_3,param_4,uVar2);
  *puVar1 = history_event_collection_abductionst::vftable;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 100) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar1 + 0xe) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0x72) = 0xffff;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  return puVar1;
}

