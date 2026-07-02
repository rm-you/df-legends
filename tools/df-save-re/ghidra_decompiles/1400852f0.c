// FUN_1400852f0 @ 1400852f0
// callees:
//   -> 140083cb0 FUN_140083cb0
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1400852f0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_140083cb0();
  local_res8[0] = *(undefined4 *)(param_1 + 0x60);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 100);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x68);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x6c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x70);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x72));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined4 *)(param_1 + 0x74);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x78);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)(param_1 + 0x80));
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = *(undefined4 *)(param_1 + 0x7c);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

