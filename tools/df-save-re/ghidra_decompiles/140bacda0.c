// FUN_140bacda0 @ 140bacda0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140bacda0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 local_res8 [2];
  
  lVar2 = 0;
  do {
    local_res8[0] = *(undefined4 *)(param_1 + lVar2 * 4);
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = *(undefined4 *)(param_1 + 0xc0 + lVar2 * 4);
    FUN_1405bb7c0(param_2,local_res8,4);
    lVar2 = lVar2 + 1;
  } while (lVar2 < 0x30);
  local_res8[0] = *(undefined4 *)(param_1 + 0x180);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x184);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x188);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x18c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_1_ = *(char *)(param_1 + 0x1b8) != '\0';
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)(param_1 + 0x1b9);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)(param_1 + 0x1ba);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)(param_1 + 0x1bb);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)(param_1 + 0x1bc));
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x1be));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined4 *)(param_1 + 400);
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar2 = *(longlong *)(param_1 + 0x198);
  uVar1 = 0xffffffff;
  if (lVar2 == 0) {
    local_res8[0] = 0xffffffff;
    uVar3 = 0xffffffff;
  }
  else {
    local_res8[0] = *(undefined4 *)(lVar2 + 0x180);
    uVar3 = *(undefined4 *)(lVar2 + 0x184);
  }
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = uVar3;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  if (lVar2 == 0) {
    local_res8[0] = 0xffffffff;
    uVar3 = 0xffffffff;
  }
  else {
    local_res8[0] = *(undefined4 *)(lVar2 + 0x180);
    uVar3 = *(undefined4 *)(lVar2 + 0x184);
  }
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = uVar3;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  if (lVar2 == 0) {
    local_res8[0] = 0xffffffff;
    uVar3 = 0xffffffff;
  }
  else {
    local_res8[0] = *(undefined4 *)(lVar2 + 0x180);
    uVar3 = *(undefined4 *)(lVar2 + 0x184);
  }
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = uVar3;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x180);
    uVar3 = *(undefined4 *)(lVar2 + 0x184);
  }
  local_res8[0] = uVar1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = uVar3;
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

