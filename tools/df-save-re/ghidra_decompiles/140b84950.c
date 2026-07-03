// FUN_140b84950 @ 140b84950
// callees:
//   -> 1405bb630 FUN_1405bb630
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140b847d0 FUN_140b847d0


void FUN_140b84950(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  uint local_res18 [4];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bb630(param_2,param_1);
  local_res18[0] = (uint)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  uVar4 = 0;
  uVar6 = (*(longlong *)(param_1 + 0x28) - (longlong)puVar1) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x28) < puVar1) {
    uVar6 = uVar4;
  }
  uVar5 = uVar4;
  if (uVar6 != 0) {
    do {
      FUN_140b847d0(*puVar1,param_2);
      uVar5 = uVar5 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar5 < uVar6);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_res8[0] = 1;
    FUN_1405bb7c0(param_2,local_res8,1);
    local_res18[0] = *(uint *)(param_1 + 0x48);
    FUN_1405bb7c0(param_2,local_res18,4);
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        lVar2 = (longlong)(int)uVar4 * 0x20;
        FUN_1405bb630(param_2,*(longlong *)(param_1 + 0x38) + lVar2);
        FUN_1405bb630(param_2,*(longlong *)(param_1 + 0x40) + lVar2);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < *(int *)(param_1 + 0x48));
    }
    return;
  }
  local_res18[0] = local_res18[0] & 0xffffff00;
  FUN_1405bb7c0(param_2,local_res18,1);
  return;
}

