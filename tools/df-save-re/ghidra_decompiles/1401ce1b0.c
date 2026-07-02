// FUN_1401ce1b0 @ 1401ce1b0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140002250 FUN_140002250


void FUN_1401ce1b0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int local_res18 [4];
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x10,(longlong)local_res18[0]);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  for (puVar5 = *(undefined8 **)(param_1 + 0x10); puVar5 < puVar2; puVar5 = puVar5 + 1) {
    puVar3 = operator_new(0x10);
    puVar3[1] = 0xffffffff;
    puVar3[2] = 0xffffffff;
    puVar3[3] = 0;
    *puVar3 = 0xffffffff;
    *puVar5 = puVar3;
    FUN_1405bba90(param_2,puVar3,4);
    FUN_1405bba90(param_2,puVar3 + 1,4);
    FUN_1405bba90(param_2,puVar3 + 2,4);
    FUN_1405bba90(param_2,puVar3 + 3,4);
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 9) {
    puVar4 = operator_new(8);
    puVar4[1] = 0xffffffff;
    puVar3 = puVar4 + 1;
    *puVar4 = 0xffffffff;
    *(undefined4 **)(param_1 + 0x28) = puVar4;
    FUN_1405bba90(param_2,puVar4,4);
  }
  else {
    if (iVar1 == 0xe) {
      puVar5 = operator_new(0x18);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *(undefined8 **)(param_1 + 0x28) = puVar5;
      FUN_140002250(param_2,puVar5);
      goto LAB_1401ce3d0;
    }
    if (iVar1 != 0xf) goto LAB_1401ce3d0;
    puVar4 = operator_new(0xc);
    puVar4[1] = 0xffffffff;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar3 = puVar4 + 2;
    *(undefined4 **)(param_1 + 0x28) = puVar4;
    FUN_1405bba90(param_2,puVar4,4);
    FUN_1405bba90(param_2,puVar4 + 1,4);
  }
  FUN_1405bba90(param_2,puVar3,4);
LAB_1401ce3d0:
  if (0x672 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x44,4);
    FUN_1405bba90(param_2,param_1 + 0x48,4);
  }
  if (0x673 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x4c,4);
    FUN_1405bba90(param_2,param_1 + 0x50,4);
  }
  if (0x687 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x30,4);
    FUN_1405bba90(param_2,param_1 + 0x34,4);
    FUN_1405bba90(param_2,param_1 + 0x38,4);
    FUN_1405bba90(param_2,param_1 + 0x3c,4);
  }
  if (0x6a8 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x40,4);
  }
  return;
}

