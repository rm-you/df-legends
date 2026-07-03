// FUN_140b853c0 @ 140b853c0
// callees:
//   -> 1405bb630 FUN_1405bb630
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140b853c0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_res18 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bb630(param_2,param_1);
  local_res18[0] = *(undefined4 *)(param_1 + 0x38);
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = *(undefined4 *)(param_1 + 0x34);
  FUN_1405bb7c0(param_2,local_res18,4);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    puVar1 = (undefined4 *)(param_1 + 0x20);
    do {
      local_res18[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res18,4);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

