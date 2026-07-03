// FUN_140df4150 @ 140df4150
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140b05a40 FUN_140b05a40


void FUN_140df4150(short *param_1,undefined8 param_2)

{
  longlong *plVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  short sVar6;
  longlong lVar7;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  local_res8[0]._0_2_ = *param_1;
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,param_1[1]);
  FUN_1405bb7c0(param_2,local_res8,2);
  lVar7 = 0;
  if (*(longlong *)(param_1 + 4) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    if (0 < *param_1) {
      sVar2 = param_1[1];
      sVar6 = 0;
      do {
        if (0 < sVar2) {
          sVar4 = 0;
          do {
            FUN_140b05a40(*(longlong *)((longlong)sVar6 * 8 + *(longlong *)(param_1 + 4)) +
                          (longlong)sVar4 * 0x18,param_2);
            sVar2 = param_1[1];
            sVar4 = sVar4 + 1;
          } while (sVar4 < sVar2);
        }
        sVar6 = sVar6 + 1;
      } while (sVar6 < *param_1);
    }
  }
  uVar5 = (uint)(*(longlong *)(param_1 + 0xc) - *(longlong *)(param_1 + 8) >> 3);
  local_res8[0] = uVar5;
  FUN_1405bb7c0(param_2,local_res8,4);
  if (0 < (longlong)(int)uVar5) {
    do {
      uVar3 = (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 8) + lVar7 * 8))();
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,uVar3);
      FUN_1405bb7c0(param_2,local_res8,2);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar7 * 8);
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uVar5);
  }
  local_res8[0] = *(uint *)(param_1 + 0x14);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

