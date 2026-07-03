// FUN_140492d60 @ 140492d60
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140492990 FUN_140492990


void FUN_140492d60(ulonglong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  
  local_res8[0] = (undefined4)((longlong)(param_1[1] - *param_1) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = (undefined8 *)*param_1;
  uVar4 = 0;
  uVar6 = (param_1[1] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar1) {
    uVar6 = uVar4;
  }
  uVar5 = uVar4;
  if (uVar6 != 0) {
    do {
      FUN_140492990(*puVar1,param_2);
      uVar5 = uVar5 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar5 < uVar6);
  }
  local_res8[0] = (undefined4)param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0x44);
  FUN_1405bb7c0(param_2,local_res8,4);
  if (0 < *(int *)((longlong)param_1 + 0x44)) {
    puVar2 = (undefined4 *)((longlong)param_1 + 0x1c);
    do {
      local_res8[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      puVar2 = puVar2 + 1;
    } while ((int)uVar3 < *(int *)((longlong)param_1 + 0x44));
  }
  return;
}

