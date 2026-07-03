// FUN_140c23ae0 @ 140c23ae0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405bb630 FUN_1405bb630
//   -> 140c23490 FUN_140c23490
//   -> 1400021b0 FUN_1400021b0


void FUN_140c23ae0(uint *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint local_res8 [2];
  undefined1 local_res18 [8];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[4];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_1_ = (char)param_1[5];
  FUN_1405bb7c0(param_2,local_res8,1);
  FUN_1405bb630(param_2,param_1 + 6);
  FUN_1405bb630(param_2,param_1 + 0xe);
  FUN_1405bb630(param_2,param_1 + 0x16);
  local_res8[0]._0_1_ = (undefined1)param_1[0x1e];
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)((longlong)param_1 + 0x79);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)((longlong)param_1 + 0x7a);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)((longlong)param_1 + 0x7b);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = (undefined1)param_1[0x1f];
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)((longlong)param_1 + 0x7d);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)((longlong)param_1 + 0x7e);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)((longlong)param_1 + 0x7f));
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = param_1[0x20];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x21];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x22];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x23];
  FUN_1405bb7c0(param_2,local_res8,4);
  if (*(longlong *)(param_1 + 0x24) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_140c23490(*(undefined8 *)(param_1 + 0x24),param_2);
  }
  if (*(longlong *)(param_1 + 0x26) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    lVar1 = *(longlong *)(param_1 + 0x26);
    lVar2 = 0;
    do {
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(lVar1 + lVar2 * 2));
      FUN_1405bb7c0(param_2,local_res8,2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < 0x32);
  }
  local_res8[0] = param_1[0x28];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x29];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x2a);
  FUN_1400021b0(param_2,param_1 + 0x30);
  local_res8[0] = param_1[0x36];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x38];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x39];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x3a);
  FUN_1400021b0(param_2,param_1 + 0x40);
  return;
}

