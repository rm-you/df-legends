// FUN_140c178a0 @ 140c178a0
// callees:
//   -> 1405bb630 FUN_1405bb630
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140c175e0 FUN_140c175e0


void FUN_140c178a0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  int local_res18 [4];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bb630(param_2,param_1);
  local_res18[0]._0_2_ = *(undefined2 *)(param_1 + 0x20);
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0] = CONCAT22(local_res18[0]._2_2_,*(undefined2 *)(param_1 + 0x22));
  FUN_1405bb7c0(param_2,local_res18,2);
  iVar1 = (int)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3);
  local_res18[0] = iVar1;
  FUN_1405bb7c0(param_2,local_res18,4);
  iVar1 = iVar1 + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      FUN_140c175e0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar2 * 8),param_2);
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  iVar1 = (int)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 3);
  local_res18[0] = iVar1;
  FUN_1405bb7c0(param_2,local_res18,4);
  iVar1 = iVar1 + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      local_res18[0] = **(int **)(*(longlong *)(param_1 + 0x40) + lVar2 * 8);
      FUN_1405bb7c0(param_2,local_res18,4);
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}

