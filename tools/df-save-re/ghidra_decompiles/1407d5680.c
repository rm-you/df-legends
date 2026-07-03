// FUN_1407d5680 @ 1407d5680
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 14000bed0 FUN_14000bed0


void FUN_1407d5680(longlong param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  local_res20[0] = param_4;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 8,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar4 = *(undefined8 **)(param_1 + 8); puVar4 < puVar1; puVar4 = puVar4 + 1) {
    puVar3 = operator_new(0x10);
    puVar3[1] = 0xffffffff;
    puVar3[2] = 0xffffffff;
    puVar3[3] = 1;
    *puVar3 = 3;
    *puVar4 = puVar3;
    FUN_1405bba90(param_2,puVar3,4);
    FUN_1405bba90(param_2,puVar3 + 1,4);
    FUN_1405bba90(param_2,puVar3 + 2,4);
    FUN_1405bba90(param_2,puVar3 + 3,4);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bed0(param_1 + 0x20,(longlong)local_res20[0]);
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  for (uVar5 = *(ulonglong *)(param_1 + 0x20); uVar5 < uVar2; uVar5 = uVar5 + 2) {
    FUN_1405bba90(param_2,uVar5,2);
  }
  return;
}

