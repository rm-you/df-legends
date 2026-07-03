// FUN_14048c8d0 @ 14048c8d0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 1407eff80 FUN_1407eff80


undefined8 *
FUN_14048c8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0xb8);
  FUN_1407eff80(puVar1,0,param_3,param_4,uVar2);
  *(undefined4 *)(puVar1 + 0x13) = 0x2742;
  *(undefined4 *)(puVar1 + 0xf) = 1;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined2 *)((longlong)puVar1 + 0x9c) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xa4) = 0xffffffff;
  *puVar1 = item_fishst::vftable;
  puVar1[0x16] = 0;
  return puVar1;
}

