// FUN_1406f9200 @ 1406f9200
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1406f8900 FUN_1406f8900
//   -> 140002250 FUN_140002250
//   -> 14000bd10 FUN_14000bd10
//   -> 1406f8d00 FUN_1406f8d00


void FUN_1406f9200(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int local_res8 [4];
  int local_res18 [2];
  undefined4 *local_res20;
  
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1,(longlong)local_res8[0]);
  puVar1 = (undefined8 *)param_1[1];
  for (puVar4 = (undefined8 *)*param_1; puVar4 < puVar1; puVar4 = puVar4 + 1) {
    local_res20 = operator_new(0x58);
    *(undefined8 *)(local_res20 + 2) = 0;
    *(undefined8 *)(local_res20 + 4) = 0;
    *(undefined8 *)(local_res20 + 6) = 0;
    *(undefined8 *)(local_res20 + 8) = 0;
    *(undefined8 *)(local_res20 + 10) = 0;
    *(undefined8 *)(local_res20 + 0xc) = 0;
    *(undefined8 *)(local_res20 + 0xe) = 0xffffffffffffffff;
    local_res20[0x10] = 0;
    *local_res20 = 0xffffffff;
    local_res20[0x12] = 0;
    local_res20[0x13] = 0xffffffff;
    *puVar4 = local_res20;
    FUN_1406f8900(local_res20,param_2,param_3);
  }
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 3,(longlong)local_res8[0]);
  puVar1 = (undefined8 *)param_1[4];
  for (puVar4 = (undefined8 *)param_1[3]; puVar4 < puVar1; puVar4 = puVar4 + 1) {
    puVar3 = operator_new(0x48);
    *(undefined8 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 6) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 10) = 0;
    *(undefined8 *)(puVar3 + 0xc) = 0;
    *(undefined8 *)(puVar3 + 0xe) = 0xffffffffffffffff;
    puVar3[0x10] = 0;
    *puVar3 = 0xffffffff;
    *puVar4 = puVar3;
    local_res20 = puVar3;
    FUN_1405bba90(param_2,puVar3,4);
    FUN_1405bba90(param_2,puVar3 + 0xe,4);
    FUN_1405bba90(param_2,puVar3 + 0xf,4);
    FUN_1405bba90(param_2,puVar3 + 0x10,4);
    FUN_140002250(param_2,puVar3 + 2);
    FUN_140002250(param_2,puVar3 + 8);
  }
  FUN_1405bba90(param_2,param_1 + 6,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 7,(longlong)local_res18[0]);
  uVar2 = param_1[8];
  for (uVar5 = param_1[7]; uVar5 < uVar2; uVar5 = uVar5 + 4) {
    FUN_1405bba90(param_2,uVar5,4);
  }
  FUN_1405bba90(param_2,param_1 + 10,4);
  if ((0x61e < param_3) && (FUN_1405bba90(param_2,local_res18,1), (char)local_res18[0] != '\0')) {
    local_res20 = operator_new(0x60);
    *(undefined8 *)(local_res20 + 0xc) = 0;
    *(undefined8 *)(local_res20 + 0xe) = 0;
    *(undefined8 *)(local_res20 + 0x10) = 0;
    *(undefined8 *)(local_res20 + 0x12) = 0;
    *(undefined8 *)(local_res20 + 0x14) = 0;
    *(undefined8 *)(local_res20 + 0x16) = 0;
    *local_res20 = 0;
    *(undefined8 *)(local_res20 + 1) = 0xffffffffffffffff;
    *(undefined8 *)(local_res20 + 3) = 0xffffffffffffffff;
    *(undefined8 *)(local_res20 + 5) = 0xffffffffffffffff;
    *(undefined8 *)(local_res20 + 7) = 0xffffffffffffffff;
    local_res20[9] = 0xffffffff;
    local_res20[10] = 0;
    param_1[0xb] = local_res20;
    FUN_1406f8d00(local_res20,param_2,param_3);
  }
  return;
}

