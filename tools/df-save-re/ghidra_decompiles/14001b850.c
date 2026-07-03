// FUN_14001b850 @ 14001b850
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 14001bc40 FUN_14001bc40


void FUN_14001b850(longlong param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int local_res18 [4];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,2);
  FUN_1405bba90(param_2,param_1 + 0x24,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 8,(longlong)local_res18[0]);
  iVar5 = 0;
  if (0 < local_res18[0]) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      uVar3 = FUN_14001bc40(param_2);
      *(undefined8 *)(lVar1 + lVar4) = uVar3;
      plVar2 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 8));
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_4);
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar5 < local_res18[0]);
  }
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  return;
}

