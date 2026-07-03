// FUN_1400b47f0 @ 1400b47f0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400b4540 FUN_1400b4540
//   -> 1405bb630 FUN_1405bb630
//   -> 1400021b0 FUN_1400021b0


void FUN_1400b47f0(ulonglong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = (undefined4)((longlong)(param_1[1] - *param_1) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = (undefined8 *)*param_1;
  uVar3 = 0;
  uVar2 = (param_1[1] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_1400b4540(*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  local_res8[0] = (undefined4)param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)param_1[4];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0x24);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1405bb630(param_2,param_1 + 5);
  local_res8[0] = (undefined4)param_1[9];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0x4c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)param_1[10];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0xb);
  local_res8[0] = (undefined4)param_1[0xe];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0x74);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

