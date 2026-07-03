// FUN_14013c130 @ 14013c130
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_14013c130(longlong *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  if (*param_1 != 0) {
    local_res8[0] = *(undefined4 *)(*param_1 + 0x1c);
  }
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0x14);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

