// FUN_140cc11f0 @ 140cc11f0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140cc5070 FUN_140cc5070


void FUN_140cc11f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int local_res18 [2];
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_140002250(param_2,param_1 + 8);
  FUN_1405bba90(param_2,param_1 + 0x20,2);
  FUN_1405bba90(param_2,param_1 + 0x22,2);
  FUN_1405bba90(param_2,param_1 + 0x24,2);
  FUN_1405bba90(param_2,param_1 + 0x26,2);
  FUN_1405bba90(param_2,param_1 + 0x28,2);
  if (0x5b1 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x2a,2);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x30,(longlong)local_res18[0]);
  uVar3 = 0;
  uVar5 = uVar3;
  uVar6 = uVar3;
  if (0 < local_res18[0]) {
    do {
      pvVar2 = operator_new(0x24);
      *(void **)(uVar6 + *(longlong *)(param_1 + 0x30)) = pvVar2;
      FUN_140cc5070(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar6),param_2);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < local_res18[0]);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x48,(longlong)local_res18[0]);
  uVar5 = uVar3;
  if (0 < local_res18[0]) {
    do {
      pvVar2 = operator_new(0x10);
      *(void **)(uVar5 + *(longlong *)(param_1 + 0x48)) = pvVar2;
      lVar1 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x48));
      FUN_1405bba90(param_2,lVar1,4);
      FUN_1405bba90(param_2,lVar1 + 4,4);
      FUN_1405bba90(param_2,lVar1 + 8,4);
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
      uVar5 = uVar5 + 8;
    } while ((int)uVar4 < local_res18[0]);
  }
  return;
}

