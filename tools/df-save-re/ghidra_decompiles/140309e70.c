// FUN_140309e70 @ 140309e70
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405bb630 FUN_1405bb630
//   -> 140303b00 FUN_140303b00


void FUN_140309e70(ulonglong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int local_res8 [2];
  
  iVar2 = (int)((longlong)(param_1[4] - param_1[3]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar7 = 0;
  uVar5 = uVar7;
  if (0 < iVar2) {
    do {
      plVar1 = *(longlong **)(param_1[3] + uVar5 * 8);
      iVar3 = (int)(plVar1[1] - *plVar1 >> 3);
      local_res8[0] = iVar3;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar7;
      if (0 < (longlong)iVar3) {
        do {
          FUN_1405bb630(param_2,*(undefined8 *)(*plVar1 + uVar6 * 8));
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < (longlong)iVar3);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[7] - param_1[6]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < iVar2) {
    do {
      plVar1 = *(longlong **)(param_1[6] + uVar5 * 8);
      iVar3 = (int)(plVar1[1] - *plVar1 >> 3);
      local_res8[0] = iVar3;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar7;
      if (0 < (longlong)iVar3) {
        do {
          FUN_1405bb630(param_2,*(undefined8 *)(*plVar1 + uVar6 * 8));
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < (longlong)iVar3);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[10] - param_1[9]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < iVar2) {
    do {
      plVar1 = *(longlong **)(param_1[9] + uVar5 * 8);
      iVar3 = (int)(plVar1[1] - *plVar1 >> 3);
      local_res8[0] = iVar3;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar7;
      if (0 < (longlong)iVar3) {
        do {
          FUN_1405bb630(param_2,*(undefined8 *)(*plVar1 + uVar6 * 8));
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < (longlong)iVar3);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0xd] - param_1[0xc]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < iVar2) {
    do {
      plVar1 = *(longlong **)(param_1[0xc] + uVar5 * 8);
      iVar3 = (int)(plVar1[1] - *plVar1 >> 3);
      local_res8[0] = iVar3;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar7;
      if (0 < (longlong)iVar3) {
        do {
          FUN_1405bb630(param_2,*(undefined8 *)(*plVar1 + uVar6 * 8));
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < (longlong)iVar3);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x10] - param_1[0xf]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < iVar2) {
    do {
      plVar1 = *(longlong **)(param_1[0xf] + uVar5 * 8);
      iVar3 = (int)(plVar1[1] - *plVar1 >> 3);
      local_res8[0] = iVar3;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar7;
      if (0 < (longlong)iVar3) {
        do {
          FUN_1405bb630(param_2,*(undefined8 *)(*plVar1 + uVar6 * 8));
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < (longlong)iVar3);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x13] - param_1[0x12]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < iVar2) {
    do {
      plVar1 = *(longlong **)(param_1[0x12] + uVar5 * 8);
      iVar3 = (int)(plVar1[1] - *plVar1 >> 3);
      local_res8[0] = iVar3;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar7;
      if (0 < (longlong)iVar3) {
        do {
          FUN_1405bb630(param_2,*(undefined8 *)(*plVar1 + uVar6 * 8));
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < (longlong)iVar3);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x16] - param_1[0x15]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < iVar2) {
    do {
      plVar1 = *(longlong **)(param_1[0x15] + uVar5 * 8);
      iVar3 = (int)(plVar1[1] - *plVar1 >> 3);
      local_res8[0] = iVar3;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar7;
      if (0 < (longlong)iVar3) {
        do {
          FUN_1405bb630(param_2,*(undefined8 *)(*plVar1 + uVar6 * 8));
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < (longlong)iVar3);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x19] - param_1[0x18]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < iVar2) {
    do {
      plVar1 = *(longlong **)(param_1[0x18] + uVar5 * 8);
      iVar3 = (int)(plVar1[1] - *plVar1 >> 3);
      local_res8[0] = iVar3;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar7;
      if (0 < (longlong)iVar3) {
        do {
          FUN_1405bb630(param_2,*(undefined8 *)(*plVar1 + uVar6 * 8));
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < (longlong)iVar3);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x1c] - param_1[0x1b]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x1b] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x1f] - param_1[0x1e]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x1e] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x22] - param_1[0x21]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x21] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x25] - param_1[0x24]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x24] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x28] - param_1[0x27]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x27] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x2b] - param_1[0x2a]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x2a] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x2e] - param_1[0x2d]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x2d] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x31] - param_1[0x30]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x30] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x34] - param_1[0x33]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x33] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x37] - param_1[0x36]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x36] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x3a] - param_1[0x39]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x39] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x3d] - param_1[0x3c]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x3c] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x40] - param_1[0x3f]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x3f] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x43] - param_1[0x42]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x42] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x46] - param_1[0x45]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x45] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x49] - param_1[0x48]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x48] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x4c] - param_1[0x4b]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x4b] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x4f] - param_1[0x4e]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x4e] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x52] - param_1[0x51]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x51] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  iVar2 = (int)((longlong)(param_1[0x55] - param_1[0x54]) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(param_1[0x54] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  local_res8[0] = (int)((longlong)(param_1[1] - *param_1) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar4 = (undefined8 *)*param_1;
  uVar5 = (ulonglong)((longlong)param_1[1] + (7 - (longlong)puVar4)) >> 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    uVar5 = uVar7;
  }
  if (uVar5 != 0) {
    do {
      FUN_140303b00(*puVar4,param_2);
      uVar7 = uVar7 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar7 < uVar5);
  }
  return;
}

