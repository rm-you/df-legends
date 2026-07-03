// FUN_140c19d90 @ 140c19d90
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140c1a090 FUN_140c1a090
//   -> 14000bd10 FUN_14000bd10


void FUN_140c19d90(longlong *param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  local_res20[0] = param_4;
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  uVar2 = 0;
  uVar3 = uVar2;
  if (0 < local_res18[0]) {
    do {
      puVar1 = operator_new(0x30);
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *puVar1 = 0xffff;
      puVar1[1] = 0xffff;
      puVar1[2] = 0xffff;
      puVar1[3] = 0xffff;
      *(undefined4 *)(puVar1 + 4) = 0xffffffff;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 3;
      *(undefined2 **)(uVar2 + *param_1) = puVar1;
      FUN_140c1a090(*(undefined8 *)(uVar2 + *param_1),param_2);
      uVar4 = (int)uVar3 + 1;
      uVar2 = uVar2 + 8;
      uVar3 = (ulonglong)uVar4;
    } while ((int)uVar4 < local_res18[0]);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 3,(longlong)local_res20[0]);
  uVar2 = param_1[4];
  for (uVar3 = param_1[3]; uVar3 < uVar2; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 6,(longlong)local_res20[0]);
  uVar2 = param_1[7];
  for (uVar3 = param_1[6]; uVar3 < uVar2; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 9,(longlong)local_res20[0]);
  uVar2 = param_1[10];
  for (uVar3 = param_1[9]; uVar3 < uVar2; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 0xc,(longlong)local_res20[0]);
  uVar2 = param_1[0xd];
  for (uVar3 = param_1[0xc]; uVar3 < uVar2; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  return;
}

