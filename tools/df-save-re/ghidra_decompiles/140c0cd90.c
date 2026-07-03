// FUN_140c0cd90 @ 140c0cd90
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 1400031f0 FUN_1400031f0
//   -> 140c0c440 FUN_140c0c440
//   -> 1406f61a0 FUN_1406f61a0
//   -> 140c0c850 FUN_140c0c850


void FUN_140c0cd90(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  undefined4 local_38 [4];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1403159b0(param_1 + 2,param_2);
  local_res8[0] = param_1[0x20];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,(char)param_1[0x21]);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0x86));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[0x22];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x23];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x24];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x25];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x26];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x27];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x28];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x29];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x2a];
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = param_1 + 0x2b;
  lVar5 = 0xd;
  do {
    FUN_1400031f0(puVar1,param_2);
    puVar1 = puVar1 + 7;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x86) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar3 = 0;
  uVar2 = uVar3;
  uVar6 = uVar3;
  if (*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x86) >> 3 != 0) {
    do {
      FUN_140c0c440(*(undefined8 *)(uVar2 + *(longlong *)(param_1 + 0x86)),param_2);
      uVar4 = (int)uVar6 + 1;
      uVar2 = uVar2 + 8;
      uVar6 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x86) >> 3));
  }
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x8e) - *(longlong *)(param_1 + 0x8c) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar2 = uVar3;
  if (*(longlong *)(param_1 + 0x8e) - *(longlong *)(param_1 + 0x8c) >> 3 != 0) {
    do {
      local_res18[0] = **(undefined2 **)(uVar3 + *(longlong *)(param_1 + 0x8c));
      FUN_1405bb7c0(param_2,local_res18,2);
      local_58[0] = *(undefined4 *)(*(longlong *)(uVar3 + *(longlong *)(param_1 + 0x8c)) + 4);
      FUN_1405bb7c0(param_2,local_58,4);
      local_50[0] = *(undefined4 *)(*(longlong *)(uVar3 + *(longlong *)(param_1 + 0x8c)) + 8);
      FUN_1405bb7c0(param_2,local_50,4);
      local_48[0] = *(undefined4 *)(*(longlong *)(uVar3 + *(longlong *)(param_1 + 0x8c)) + 0xc);
      FUN_1405bb7c0(param_2,local_48,4);
      local_40[0] = *(undefined4 *)(*(longlong *)(uVar3 + *(longlong *)(param_1 + 0x8c)) + 0x10);
      FUN_1405bb7c0(param_2,local_40,4);
      local_res20[0] = *(undefined2 *)(*(longlong *)(uVar3 + *(longlong *)(param_1 + 0x8c)) + 0x14);
      FUN_1405bb7c0(param_2,local_res20,2);
      local_res8[0] =
           CONCAT31(local_res8[0]._1_3_,
                    *(undefined1 *)(*(longlong *)(uVar3 + *(longlong *)(param_1 + 0x8c)) + 0x16));
      FUN_1405bb7c0(param_2,local_res8,1);
      local_38[0] = *(undefined4 *)(*(longlong *)(uVar3 + *(longlong *)(param_1 + 0x8c)) + 0x18);
      FUN_1405bb7c0(param_2,local_38,4);
      uVar3 = uVar3 + 8;
      uVar4 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x8e) - *(longlong *)(param_1 + 0x8c) >> 3));
  }
  FUN_1406f61a0(param_1 + 0x92,param_2);
  if (*(longlong *)(param_1 + 0xf4) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = CONCAT11(local_res18[0]._1_1_,1);
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_140c0c850(*(undefined8 *)(param_1 + 0xf4),param_2);
  }
  return;
}

