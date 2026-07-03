// FUN_140097ed0 @ 140097ed0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 14007efc0 FUN_14007efc0
//   -> 1400022f0 FUN_1400022f0
//   -> 1400021b0 FUN_1400021b0
//   -> 140c0bca0 FUN_140c0bca0
//   -> 1405bb630 FUN_1405bb630


void FUN_140097ed0(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int local_res18 [2];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0]._0_2_ = (short)param_1[1];
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 6);
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0]._0_2_ = (undefined2)param_1[2];
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 10);
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0]._0_2_ = (undefined2)param_1[3];
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0] = CONCAT22(local_res18[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0xe));
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0] = (int)(*(longlong *)(param_1 + 10) - *(longlong *)(param_1 + 8) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar7 = 0;
  uVar6 = (*(longlong *)(param_1 + 10) - (longlong)puVar3) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 10) < puVar3) {
    uVar6 = uVar7;
  }
  uVar5 = uVar7;
  if (uVar6 != 0) {
    do {
      FUN_14007efc0(*puVar3,param_2);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar6);
  }
  local_res18[0] = CONCAT22(local_res18[0]._2_2_,(short)param_1[4]);
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0] = param_1[0x17];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400022f0(param_1 + 0x1a,param_2);
  FUN_1400021b0(param_2,param_1 + 0x1e);
  FUN_1400021b0(param_2,param_1 + 0x24);
  FUN_1400021b0(param_2,param_1 + 0x2a);
  FUN_1400021b0(param_2,param_1 + 0x30);
  local_res18[0] = param_1[5];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x36];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x37];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[6];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0xe) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar3 = *(undefined8 **)(param_1 + 0xe);
  uVar6 = (*(longlong *)(param_1 + 0x10) - (longlong)puVar3) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x10) < puVar3) {
    uVar6 = uVar7;
  }
  uVar5 = uVar7;
  if (uVar6 != 0) {
    do {
      piVar1 = (int *)*puVar3;
      local_res18[0] = *piVar1;
      FUN_1405bb7c0(param_2,local_res18,4);
      FUN_140c0bca0(piVar1 + 1,param_2);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar6);
  }
  local_res18[0] = param_1[0x38];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x14];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x15];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x39];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x3b];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x3a];
  FUN_1405bb7c0(param_2,local_res18,4);
  iVar2 = (int)(*(longlong *)(param_1 + 0x3e) - *(longlong *)(param_1 + 0x3c) >> 3);
  local_res18[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res18,4);
  uVar6 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x3c) + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)iVar2);
  }
  iVar2 = (int)(*(longlong *)(param_1 + 0x44) - *(longlong *)(param_1 + 0x42) >> 3);
  local_res18[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res18,4);
  uVar6 = uVar7;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x42) + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)iVar2);
  }
  local_res18[0] = param_1[0x16];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0]._0_2_ = (short)param_1[0x48];
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 0x122);
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0] = CONCAT22(local_res18[0]._2_2_,(short)param_1[0x49]);
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0] = param_1[0x4a];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (int)(*(longlong *)(param_1 + 0x4e) - *(longlong *)(param_1 + 0x4c) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  plVar4 = *(longlong **)(param_1 + 0x4c);
  uVar6 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x4e) + (7 - (longlong)plVar4)) >> 3;
  if (*(longlong **)(param_1 + 0x4e) < plVar4) {
    uVar6 = uVar7;
  }
  if (uVar6 != 0) {
    do {
      local_res18[0] = *(int *)(*plVar4 + 0x1c);
      FUN_1405bb7c0(param_2,local_res18,4);
      uVar7 = uVar7 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar7 < uVar6);
  }
  return;
}

