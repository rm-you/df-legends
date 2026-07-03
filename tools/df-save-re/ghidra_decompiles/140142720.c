// FUN_140142720 @ 140142720
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140142080 FUN_140142080
//   -> 140141f50 FUN_140141f50
//   -> 1400021b0 FUN_1400021b0
//   -> 1401422c0 FUN_1401422c0


void FUN_140142720(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_res18 [2];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar2 = *(undefined8 **)(param_1 + 4);
  uVar6 = 0;
  uVar5 = (*(longlong *)(param_1 + 6) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 6) < puVar2) {
    uVar5 = uVar6;
  }
  uVar3 = uVar6;
  if (uVar5 != 0) {
    do {
      FUN_140142080(*puVar2,param_2);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar5);
  }
  FUN_140141f50(param_1 + 0x56,param_2);
  puVar1 = param_1 + 10;
  lVar4 = 0x16;
  do {
    local_res18[0] = CONCAT22(local_res18[0]._2_2_,*(undefined2 *)puVar1);
    FUN_1405bb7c0(param_2,local_res18,2);
    puVar1 = (undefined4 *)((longlong)puVar1 + 2);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar1 = param_1 + 0x15;
  lVar4 = 0x40;
  do {
    local_res18[0] = *puVar1;
    FUN_1405bb7c0(param_2,local_res18,4);
    puVar1 = puVar1 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  local_res18[0] = param_1[0x5c];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400021b0(param_2,param_1 + 0x5e);
  local_res18[0] = param_1[100];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x65];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x66];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x6a) - *(longlong *)(param_1 + 0x68) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x6a) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x6a) < puVar2) {
    uVar5 = uVar6;
  }
  uVar3 = uVar6;
  if (uVar5 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      local_res18[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res18,4);
      local_res18[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res18,4);
      local_res18[0] = puVar1[2];
      FUN_1405bb7c0(param_2,local_res18,4);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar5);
  }
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x6e) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar2 = *(undefined8 **)(param_1 + 0x6e);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x70) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x70) < puVar2) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      FUN_1401422c0(*puVar2,param_2);
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar6 < uVar5);
  }
  return;
}

