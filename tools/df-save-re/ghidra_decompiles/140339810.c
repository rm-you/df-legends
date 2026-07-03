// FUN_140339810 @ 140339810
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 1400020a0 FUN_1400020a0
//   -> 1400021b0 FUN_1400021b0


void FUN_140339810(undefined2 *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined4 local_res8 [2];
  undefined1 local_res18 [8];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x40);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *param_1;
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = param_1[0x42];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = param_1[0x43];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = param_1[0x44];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = param_1[0x45];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = param_1[0x46];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = param_1[0x47];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = param_1[0x48];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = param_1[0x49];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = param_1[0x4a];
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1403159b0(param_1 + 4,param_2);
  FUN_1400020a0(param_2,param_1 + 0x4c);
  FUN_1400020a0(param_2,param_1 + 0x58);
  FUN_1400020a0(param_2,param_1 + 100);
  FUN_1400020a0(param_2,param_1 + 0x70);
  FUN_1400021b0(param_2,param_1 + 0x7c);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_res8[0]._0_2_ = (ushort)local_res8[0] & 0xff00;
    FUN_1405bb7c0(param_2,local_res8,1);
    return;
  }
  local_res18[0] = 1;
  FUN_1405bb7c0(param_2,local_res18,1);
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x88))();
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,uVar1);
  FUN_1405bb7c0(param_2,local_res8,2);
                    /* WARNING: Could not recover jumptable at 0x000140339a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x88) + 8))(*(longlong **)(param_1 + 0x88),param_2,1);
  return;
}

