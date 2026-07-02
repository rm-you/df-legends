// FUN_1406fd6b0 @ 1406fd6b0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240


undefined8 *
FUN_1406fd6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x70);
  FUN_140709240(puVar1,1,param_3,param_4,uVar2);
  *puVar1 = history_event_item_stolenst::vftable;
  *(undefined2 *)(puVar1 + 5) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0x2a) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0x2c) = 0xffff;
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0xffffffff;
  *(undefined4 *)(puVar1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0xffffffff;
  *(undefined2 *)(puVar1 + 10) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0x52) = 0xffff;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 100) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  return puVar1;
}

