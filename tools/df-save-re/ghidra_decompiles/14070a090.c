// FUN_14070a090 @ 14070a090
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 1400022f0 FUN_1400022f0
//   -> 14070a5d0 FUN_14070a5d0
//   -> 1406fb080 FUN_1406fb080


void FUN_14070a090(undefined2 *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  local_res8[0]._0_2_ = *param_1;
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,param_1[2]);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)(param_1 + 3));
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = *(uint *)(param_1 + 4);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 6);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 10);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xc);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xe);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x10);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x12);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x14);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x16);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x18);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x1a);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1403159b0(param_1 + 0x1c,param_2);
  local_res8[0] = *(uint *)(param_1 + 0x58);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x5a);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x5c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x5e);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x60);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x72);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x6c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x6e);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400022f0(param_1 + 100,param_2);
  local_res8[0] = *(uint *)(param_1 + 0x70);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x74) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar3 = 0;
  uVar2 = uVar3;
  uVar5 = uVar3;
  if (*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x74) >> 3 != 0) {
    do {
      uVar1 = (**(code **)**(undefined8 **)(uVar2 + *(longlong *)(param_1 + 0x74)))();
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,uVar1);
      FUN_1405bb7c0(param_2,local_res8,2);
      (**(code **)(**(longlong **)(uVar2 + *(longlong *)(param_1 + 0x74)) + 0x10))
                (*(longlong **)(uVar2 + *(longlong *)(param_1 + 0x74)),param_2);
      uVar4 = (int)uVar5 + 1;
      uVar2 = uVar2 + 8;
      uVar5 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x74) >> 3));
  }
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x84) - *(longlong *)(param_1 + 0x80) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar2 = uVar3;
  uVar5 = uVar3;
  if (*(longlong *)(param_1 + 0x84) - *(longlong *)(param_1 + 0x80) >> 3 != 0) {
    do {
      uVar1 = (**(code **)**(undefined8 **)(uVar2 + *(longlong *)(param_1 + 0x80)))();
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,uVar1);
      FUN_1405bb7c0(param_2,local_res8,2);
      (**(code **)(**(longlong **)(uVar2 + *(longlong *)(param_1 + 0x80)) + 0x10))
                (*(longlong **)(uVar2 + *(longlong *)(param_1 + 0x80)),param_2);
      uVar4 = (int)uVar5 + 1;
      uVar2 = uVar2 + 8;
      uVar5 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x84) - *(longlong *)(param_1 + 0x80) >> 3));
  }
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x8c) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar2 = uVar3;
  if (*(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x8c) >> 3 != 0) {
    do {
      uVar1 = (**(code **)**(undefined8 **)(uVar3 + *(longlong *)(param_1 + 0x8c)))();
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,uVar1);
      FUN_1405bb7c0(param_2,local_res8,2);
      (**(code **)(**(longlong **)(uVar3 + *(longlong *)(param_1 + 0x8c)) + 0x10))
                (*(longlong **)(uVar3 + *(longlong *)(param_1 + 0x8c)),param_2);
      uVar3 = uVar3 + 8;
      uVar4 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x8c) >> 3));
  }
  if (*(longlong *)(param_1 + 0x98) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_14070a5d0(*(undefined8 *)(param_1 + 0x98),param_2);
  }
  if (*(longlong *)(param_1 + 0x9c) != 0) {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1406fb080(*(undefined8 *)(param_1 + 0x9c),param_2);
    return;
  }
  local_res8[0] = local_res8[0] & 0xffffff00;
  FUN_1405bb7c0(param_2,local_res8,1);
  return;
}

