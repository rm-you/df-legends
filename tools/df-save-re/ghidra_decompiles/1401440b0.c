// FUN_1401440b0 @ 1401440b0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 140002250 FUN_140002250
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1401434b0 FUN_1401434b0
//   -> 1405bb6d0 FUN_1405bb6d0


void FUN_1401440b0(longlong param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  int local_res18 [4];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_140315ac0(param_1 + 8,param_2);
  FUN_1405bba90(param_2,param_1 + 0x80,4);
  FUN_1405bba90(param_2,param_1 + 0x84,4);
  FUN_1405bba90(param_2,param_1 + 0x88,4);
  FUN_1405bba90(param_2,param_1 + 0x8c,4);
  FUN_1405bba90(param_2,param_1 + 0x90,4);
  FUN_1405bba90(param_2,param_1 + 0x94,4);
  FUN_1405bba90(param_2,param_1 + 0x98,4);
  FUN_1405bba90(param_2,param_1 + 0x9c,4);
  FUN_1405bba90(param_2,param_1 + 0xa0,4);
  FUN_1405bba90(param_2,param_1 + 0xa4,4);
  FUN_1405bba90(param_2,param_1 + 0xa8,4);
  FUN_1405bba90(param_2,param_1 + 0xac,4);
  FUN_1405bba90(param_2,param_1 + 0xb0,4);
  FUN_1405bba90(param_2,param_1 + 0xb4,4);
  FUN_1405bba90(param_2,param_1 + 0xb8,4);
  FUN_140002250(param_2,param_1 + 0xc0);
  FUN_1405bba90(param_2,param_1 + 0xd8,4);
  FUN_1405bba90(param_2,param_1 + 0xdc,4);
  FUN_1405bba90(param_2,param_1 + 0xe0,4);
  if (0x5ec < param_4) {
    FUN_1405bba90(param_2,param_1 + 0xe4,4);
  }
  FUN_140002250(param_2,param_1 + 0xe8);
  FUN_140002250(param_2,param_1 + 0x100);
  FUN_140002250(param_2,param_1 + 0x118);
  FUN_140002250(param_2,param_1 + 0x130);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x148,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x150);
  for (puVar4 = *(undefined8 **)(param_1 + 0x148); puVar4 < puVar1; puVar4 = puVar4 + 1) {
    puVar2 = operator_new(0xb8);
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x1a) = 0;
    *(undefined8 *)(puVar2 + 0x1c) = 0;
    *(undefined8 *)(puVar2 + 0x1e) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x22) = 0;
    *(undefined8 *)(puVar2 + 0x24) = 0;
    *(undefined8 *)(puVar2 + 0x26) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x2a) = 0;
    *puVar2 = 0;
    puVar2[1] = 1;
    puVar2[2] = 1;
    *(undefined8 *)(puVar2 + 3) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 5) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 7) = 0xffffffffffffffff;
    puVar2[0x10] = 0;
    *(undefined8 *)(puVar2 + 0x11) = 0xffffffffffffffff;
    puVar2[0x13] = 0xffffffff;
    puVar2[0x2c] = 0xffffffff;
    *puVar4 = puVar2;
    FUN_1401434b0(puVar2,param_2);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x160,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x168);
  for (puVar4 = *(undefined8 **)(param_1 + 0x160); puVar4 < puVar1; puVar4 = puVar4 + 1) {
    puVar3 = operator_new(0x88);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0xf;
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined8 *)(puVar3 + 0x48) = 0;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    *(undefined8 *)(puVar3 + 0x58) = 0;
    *(undefined8 *)(puVar3 + 0x60) = 0;
    *(undefined8 *)(puVar3 + 0x68) = 0;
    *(undefined8 *)(puVar3 + 0x70) = 0;
    *(undefined8 *)(puVar3 + 0x78) = 0;
    *(undefined4 *)(puVar3 + 0x80) = 0;
    *puVar4 = puVar3;
    FUN_1405bb6d0(param_2,puVar3);
    FUN_140002250(param_2,puVar3 + 0x20);
    FUN_140002250(param_2,puVar3 + 0x38);
    FUN_140002250(param_2,puVar3 + 0x50);
    FUN_140002250(param_2,puVar3 + 0x68);
    FUN_1405bba90(param_2,puVar3 + 0x80,4);
  }
  return;
}

