// FUN_140165e80 @ 140165e80
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140169450 FUN_140169450


undefined8 *
FUN_140165e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x188);
  FUN_140169450(puVar1,1,param_3,param_4,uVar2);
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  *(undefined2 *)(puVar1 + 0x2a) = 0;
  puVar1[0x2e] = 0;
  *puVar1 = building_rollersst::vftable;
  *(undefined4 *)(puVar1 + 0x2f) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x17c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x184) = 50000;
  return puVar1;
}

