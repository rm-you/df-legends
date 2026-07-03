// FUN_1400b9590 @ 1400b9590
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0


void FUN_1400b9590(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  local_res8[0] = *(uint *)(param_1 + 6);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (uint)(param_1[1] - *param_1 >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar2 = 0;
  uVar1 = uVar2;
  uVar4 = uVar2;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      local_res8[0] = (**(code **)(**(longlong **)(uVar1 + *param_1) + 0x10))();
      FUN_1405bb7c0(param_2,local_res8,4);
      (**(code **)**(undefined8 **)(uVar1 + *param_1))(*(undefined8 **)(uVar1 + *param_1),param_2);
      uVar3 = (int)uVar4 + 1;
      uVar1 = uVar1 + 8;
      uVar4 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  local_res8[0] = (uint)(param_1[4] - param_1[3] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar1 = uVar2;
  if (param_1[4] - param_1[3] >> 3 != 0) {
    do {
      local_res8[0] = (**(code **)(**(longlong **)(uVar2 + param_1[3]) + 0x10))();
      FUN_1405bb7c0(param_2,local_res8,4);
      (**(code **)**(undefined8 **)(uVar2 + param_1[3]))
                (*(undefined8 **)(uVar2 + param_1[3]),param_2);
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar1 + 1;
      uVar1 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(param_1[4] - param_1[3] >> 3));
  }
  FUN_1403159b0(param_1 + 7,param_2);
  local_res8[0] = *(uint *)(param_1 + 0x16);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0xb4));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(uint *)(param_1 + 0x17);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0xbc));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(uint *)(param_1 + 0x18);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0xc4);
  FUN_1405bb7c0(param_2,local_res8,4);
  if (param_1[0x19] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    local_res8[0] = (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
    FUN_1405bb7c0(param_2,local_res8,4);
    (*(code *)**(undefined8 **)param_1[0x19])((undefined8 *)param_1[0x19],param_2);
  }
  local_res8[0] = *(uint *)(param_1 + 0x1a);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0xd4);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x1b);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0xdc));
  FUN_1405bb7c0(param_2,local_res8,2);
  return;
}

