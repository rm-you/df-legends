// FUN_140ad7c40 @ 140ad7c40
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140ad7c40(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar4 = 0;
  if (*(longlong *)(param_1 + 2) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    iVar3 = (param_1[1] + 1) * (*param_1 + 1);
    lVar5 = lVar4;
    if (0 < iVar3) {
      do {
        local_res8[0] = *(uint *)(*(longlong *)(param_1 + 2) + lVar5 * 4);
        FUN_1405bb7c0(param_2,local_res8,4);
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar3);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    iVar3 = (param_1[1] + 1) * (*param_1 + 1);
    lVar5 = lVar4;
    if (0 < iVar3) {
      do {
        local_res8[0] = *(uint *)(*(longlong *)(param_1 + 4) + lVar5 * 4);
        FUN_1405bb7c0(param_2,local_res8,4);
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar3);
    }
  }
  if (*(longlong *)(param_1 + 6) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    uVar1 = param_1[1];
    uVar2 = *param_1;
    lVar5 = lVar4;
    if (0 < (int)(uVar1 * uVar2)) {
      do {
        local_res8[0] = *(uint *)(*(longlong *)(param_1 + 6) + lVar5 * 4);
        FUN_1405bb7c0(param_2,local_res8,4);
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)(uVar1 * uVar2));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    iVar3 = (param_1[1] + 1) * (*param_1 + 1);
    if (0 < iVar3) {
      do {
        local_res8[0] =
             CONCAT31(local_res8[0]._1_3_,*(undefined1 *)(lVar4 + *(longlong *)(param_1 + 8)));
        FUN_1405bb7c0(param_2,local_res8,1);
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    return;
  }
  local_res8[0] = local_res8[0] & 0xffffff00;
  FUN_1405bb7c0(param_2,local_res8,1);
  return;
}

