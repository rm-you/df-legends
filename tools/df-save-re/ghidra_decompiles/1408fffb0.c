// FUN_1408fffb0 @ 1408fffb0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 14048c550 FUN_14048c550
//   -> 1408ff2a0 FUN_1408ff2a0
//   -> 1400032c0 FUN_1400032c0
//   -> 1408fed30 FUN_1408fed30


void FUN_1408fffb0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int local_res18 [4];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_140315ac0(param_1 + 8,param_2);
  FUN_1405bba90(param_2,param_1 + 0x80,4);
  FUN_1405bba90(param_2,param_1 + 0x84,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x88,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x90);
  for (puVar5 = *(undefined8 **)(param_1 + 0x88); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    pvVar2 = operator_new(0xe0);
    uVar3 = FUN_14048c550(pvVar2);
    *puVar5 = uVar3;
    FUN_1408ff2a0(uVar3,param_2);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0xa0,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0xa8);
  for (puVar5 = *(undefined8 **)(param_1 + 0xa0); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    puVar4 = operator_new(0x1c);
    *puVar4 = 0xffffffff;
    *(undefined8 *)(puVar4 + 1) = 0;
    puVar4[3] = 1;
    puVar4[4] = 1;
    *(undefined8 *)(puVar4 + 5) = 0xffffffffffffffff;
    *puVar5 = puVar4;
    FUN_1400032c0(puVar4,param_2);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0xb8,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  for (puVar5 = *(undefined8 **)(param_1 + 0xb8); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    pvVar2 = operator_new(0x28);
    *(undefined8 *)((longlong)pvVar2 + 8) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
    *(undefined4 *)((longlong)pvVar2 + 0x20) = 0;
    *puVar5 = pvVar2;
    FUN_1408fed30(pvVar2,param_2);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0xd0,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0xd8);
  for (puVar5 = *(undefined8 **)(param_1 + 0xd0); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    pvVar2 = operator_new(0x18);
    *(undefined4 *)((longlong)pvVar2 + 0xc) = 0;
    *(undefined4 *)((longlong)pvVar2 + 0x10) = 1;
    *(undefined4 *)((longlong)pvVar2 + 0x14) = 1;
    *puVar5 = pvVar2;
    FUN_1405bba90(param_2,pvVar2,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 4,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 8,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 0xc,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 0x10,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 0x14,4);
  }
  FUN_1405bba90(param_2,param_1 + 0xe8,4);
  FUN_1405bba90(param_2,param_1 + 0xec,4);
  FUN_1405bba90(param_2,param_1 + 0xf0,4);
  FUN_1405bba90(param_2,param_1 + 0xf4,4);
  FUN_1405bba90(param_2,param_1 + 0xf8,4);
  FUN_1405bba90(param_2,param_1 + 0xfc,4);
  FUN_1405bba90(param_2,param_1 + 0x100,4);
  FUN_1405bba90(param_2,param_1 + 0x104,4);
  FUN_1405bba90(param_2,param_1 + 0x108,4);
  FUN_1405bba90(param_2,param_1 + 0x10c,4);
  FUN_1405bba90(param_2,param_1 + 0x110,4);
  FUN_1405bba90(param_2,param_1 + 0x114,4);
  FUN_1405bba90(param_2,param_1 + 0x118,4);
  FUN_1405bba90(param_2,param_1 + 0x11c,4);
  FUN_1405bba90(param_2,param_1 + 0x120,4);
  return;
}

