// FUN_1403168a0 @ 1403168a0
// callees:
//   -> 1405bb630 FUN_1405bb630
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400022f0 FUN_1400022f0
//   -> 140301b50 FUN_140301b50
//   -> 1400020a0 FUN_1400020a0


void FUN_1403168a0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  lVar3 = 2;
  lVar2 = param_1;
  do {
    FUN_1405bb630(param_2,lVar2);
    lVar2 = lVar2 + 0x20;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x40));
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1400022f0(param_1 + 0x48,param_2);
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar4 = 0;
  if (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3 != 0) {
    lVar2 = 0;
    do {
      FUN_140301b50(*(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x58)),param_2);
      lVar2 = lVar2 + 8;
      iVar4 = iVar4 + 1;
    } while ((ulonglong)(longlong)iVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3));
  }
  local_res8[0] = *(uint *)(param_1 + 0x80);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x70);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x74);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x78);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x7c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x84);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x88));
  FUN_1405bb7c0(param_2,local_res8,2);
  uVar1 = (uint)(*(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0x90) >> 3);
  local_res8[0] = uVar1;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar2 = 0;
  if (0 < (longlong)(int)uVar1) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)uVar1);
  }
  uVar1 = (uint)(*(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xa8) >> 3);
  local_res8[0] = uVar1;
  FUN_1405bb7c0(param_2,local_res8,4);
  if (0 < (longlong)(int)uVar1) {
    lVar2 = 0;
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)uVar1);
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1400020a0(param_2,*(undefined8 *)(param_1 + 0xc0));
  }
  if (*(longlong *)(param_1 + 200) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1400020a0(param_2,*(undefined8 *)(param_1 + 200));
  }
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1400020a0(param_2,*(undefined8 *)(param_1 + 0xd0));
  }
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0xd8);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0xda);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0xdc));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(uint *)(param_1 + 0xe0);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0xe4);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0xe6);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0xe8));
  FUN_1405bb7c0(param_2,local_res8,2);
  return;
}

