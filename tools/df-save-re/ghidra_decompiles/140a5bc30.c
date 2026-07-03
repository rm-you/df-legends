// FUN_140a5bc30 @ 140a5bc30
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_140a5bc30(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar7 = 0;
  puVar6 = (ulonglong *)(param_1 + 2);
  lVar5 = 100;
  do {
    local_res8[0] = (undefined4)((longlong)(puVar6[1] - *puVar6) >> 3);
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar2 = (undefined8 *)*puVar6;
    uVar3 = (puVar6[1] - (longlong)puVar2) + 7 >> 3;
    if ((undefined8 *)puVar6[1] < puVar2) {
      uVar3 = uVar7;
    }
    uVar4 = uVar7;
    if (uVar3 != 0) {
      do {
        local_res8[0] = (*(code *)**(undefined8 **)*puVar2)();
        FUN_1405bb7c0(param_2,local_res8,4);
        (**(code **)(*(longlong *)*puVar2 + 8))((longlong *)*puVar2,param_2);
        uVar4 = uVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar4 < uVar3);
    }
    puVar6 = puVar6 + 3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  local_res8[0] = param_1[0x25a];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x25b];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x25c];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x25d];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x260) - *(longlong *)(param_1 + 0x25e) >> 3)
  ;
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = *(undefined8 **)(param_1 + 0x25e);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x260) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x260) < puVar2) {
    uVar3 = uVar7;
  }
  if (uVar3 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_1400021b0(param_2,puVar1 + 2);
      FUN_1400021b0(param_2,puVar1 + 8);
      FUN_1400021b0(param_2,puVar1 + 0xe);
      uVar7 = uVar7 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar7 < uVar3);
  }
  return;
}

