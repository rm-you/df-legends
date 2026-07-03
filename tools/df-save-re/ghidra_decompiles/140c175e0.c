// FUN_140c175e0 @ 140c175e0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1406f5380 FUN_1406f5380


void FUN_140c175e0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_res8 [8];
  int local_res18 [4];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  if (*param_1 == 0) {
    local_res18[0] = (uint)local_res18[0]._1_3_ << 8;
    FUN_1405bb7c0(param_2,local_res18,1);
  }
  else {
    local_res8[0] = 1;
    FUN_1405bb7c0(param_2,local_res8,1);
    local_res18[0] = (**(code **)(*(longlong *)*param_1 + 0x18))();
    FUN_1405bb7c0(param_2,local_res18,4);
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_2);
  }
  local_res18[0] = (int)param_1[1];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1406f5380(param_2,param_1 + 2);
  return;
}

