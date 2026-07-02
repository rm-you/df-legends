// FUN_1406fd030 @ 1406fd030
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240


undefined8 *
FUN_1406fd030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x70);
  FUN_140709240(puVar1,1,param_3,param_4,uVar2);
  *puVar1 = history_event_body_abusedst::vftable;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0xffffffff;
  *(undefined4 *)(puVar1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar1 + 0xb) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0x5a) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0x5c) = 4;
  *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 100) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0xffffffff;
  return puVar1;
}

