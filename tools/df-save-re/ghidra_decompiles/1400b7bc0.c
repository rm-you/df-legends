// FUN_1400b7bc0 @ 1400b7bc0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_1400b7bc0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400021b0(param_2,param_1 + 2);
  FUN_1400021b0(param_2,param_1 + 8);
  FUN_1400021b0(param_2,param_1 + 0xe);
  FUN_1400021b0(param_2,param_1 + 0x14);
  local_res18[0] = param_1[0x1dc];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1dd];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1de];
  FUN_1405bb7c0(param_2,local_res18,4);
  iVar2 = 0;
  if (0 < (int)param_1[0x1de]) {
    puVar1 = param_1 + 0xb0;
    puVar3 = param_1 + 0x1a;
    puVar4 = param_1 + 0x114;
    do {
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,*(undefined1 *)puVar3);
      FUN_1405bb7c0(param_2,local_res18,1);
      local_res18[0]._0_2_ = *(undefined2 *)(puVar1 + -100);
      FUN_1405bb7c0(param_2,local_res18,2);
      local_res18[0] = CONCAT22(local_res18[0]._2_2_,*(undefined2 *)puVar1);
      FUN_1405bb7c0(param_2,local_res18,2);
      local_res18[0] = *puVar4;
      FUN_1405bb7c0(param_2,local_res18,4);
      iVar2 = iVar2 + 1;
      puVar1 = (undefined4 *)((longlong)puVar1 + 2);
      puVar4 = puVar4 + 1;
      puVar3 = (undefined4 *)((longlong)puVar3 + 1);
    } while (iVar2 < (int)param_1[0x1de]);
  }
  local_res18[0] = param_1[0x1df];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1e0];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1e1];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1e2];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1e3];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1e4];
  FUN_1405bb7c0(param_2,local_res18,4);
  return;
}

