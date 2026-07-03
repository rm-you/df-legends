// FUN_1403021d0 @ 1403021d0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new


void FUN_1403021d0(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  void *pvVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  uVar5 = 0;
  uVar4 = uVar5;
  uVar6 = uVar5;
  if (0 < local_res18[0]) {
    do {
      pvVar2 = operator_new(0xc);
      *(void **)(uVar6 + *param_1) = pvVar2;
      lVar1 = *(longlong *)(uVar6 + *param_1);
      FUN_1405bba90(param_2,lVar1,4);
      FUN_1405bba90(param_2,lVar1 + 4,4);
      FUN_1405bba90(param_2,lVar1 + 8,4);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar6 = uVar6 + 8;
    } while ((int)uVar3 < local_res18[0]);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 3,(longlong)local_res18[0]);
  uVar4 = uVar5;
  uVar6 = uVar5;
  if (0 < local_res18[0]) {
    do {
      pvVar2 = operator_new(0xc);
      *(void **)(uVar6 + param_1[3]) = pvVar2;
      lVar1 = *(longlong *)(uVar6 + param_1[3]);
      FUN_1405bba90(param_2,lVar1,4);
      FUN_1405bba90(param_2,lVar1 + 4,4);
      FUN_1405bba90(param_2,lVar1 + 8,4);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar6 = uVar6 + 8;
    } while ((int)uVar3 < local_res18[0]);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 6,(longlong)local_res18[0]);
  uVar4 = uVar5;
  if (0 < local_res18[0]) {
    do {
      pvVar2 = operator_new(8);
      *(void **)(uVar4 + param_1[6]) = pvVar2;
      lVar1 = *(longlong *)(uVar4 + param_1[6]);
      FUN_1405bba90(param_2,lVar1,4);
      FUN_1405bba90(param_2,lVar1 + 4,4);
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
      uVar4 = uVar4 + 8;
    } while ((int)uVar3 < local_res18[0]);
  }
  return;
}

