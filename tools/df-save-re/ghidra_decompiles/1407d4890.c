// FUN_1407d4890 @ 1407d4890
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1406f8900 FUN_1406f8900
//   -> 140002250 FUN_140002250


void FUN_1407d4890(longlong param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int local_res18 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_140315ac0(param_1 + 8,param_2);
  FUN_1405bba90(param_2,param_1 + 0x80,4);
  FUN_1405bba90(param_2,param_1 + 0x84,2);
  FUN_1405bba90(param_2,param_1 + 0x88,4);
  if (param_4 < 0x628) {
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0x8c,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x90,4);
  FUN_1405bba90(param_2,param_1 + 0x94,4);
  FUN_1405bba90(param_2,param_1 + 0x98,4);
  if (param_4 < 0x623) {
    *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0x9c,4);
  }
  if (param_4 < 0x626) {
    *(undefined2 *)(param_1 + 0xac) = 0xffff;
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0xac,2);
    FUN_1405bba90(param_2,param_1 + 0xb0,4);
    FUN_1405bba90(param_2,param_1 + 0xa0,4);
  }
  if (param_4 < 0x691) {
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0xa4,4);
    FUN_1405bba90(param_2,param_1 + 0xa8,4);
  }
  if (0x628 < param_4) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000b9d0(param_1 + 0xb8,(longlong)local_res18[0]);
    puVar1 = *(undefined8 **)(param_1 + 0xc0);
    for (puVar3 = *(undefined8 **)(param_1 + 0xb8); puVar3 < puVar1; puVar3 = puVar3 + 1) {
      puVar2 = operator_new(0x58);
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 10) = 0;
      *(undefined8 *)(puVar2 + 0xc) = 0;
      puVar2[0xe] = 0xffffffff;
      puVar2[0xf] = 0xffffffff;
      puVar2[0x10] = 0;
      *puVar2 = 0xffffffff;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0xffffffff;
      *puVar3 = puVar2;
      FUN_1406f8900(puVar2,param_2,param_4);
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000b9d0(param_1 + 0xd0,(longlong)local_res18[0]);
    puVar1 = *(undefined8 **)(param_1 + 0xd8);
    for (puVar3 = *(undefined8 **)(param_1 + 0xd0); puVar3 < puVar1; puVar3 = puVar3 + 1) {
      puVar2 = operator_new(0x48);
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 10) = 0;
      *(undefined8 *)(puVar2 + 0xc) = 0;
      puVar2[0xe] = 0xffffffff;
      puVar2[0xf] = 0xffffffff;
      puVar2[0x10] = 0;
      *puVar2 = 0xffffffff;
      *puVar3 = puVar2;
      FUN_1405bba90(param_2,puVar2,4);
      FUN_1405bba90(param_2,puVar2 + 0xe,4);
      FUN_1405bba90(param_2,puVar2 + 0xf,4);
      FUN_1405bba90(param_2,puVar2 + 0x10,4);
      FUN_140002250(param_2,puVar2 + 2);
      FUN_140002250(param_2,puVar2 + 8);
    }
  }
  return;
}

