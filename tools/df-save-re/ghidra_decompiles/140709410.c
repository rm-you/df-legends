// FUN_140709410 @ 140709410
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 14070a090 FUN_14070a090
//   -> 14075cb20 FUN_14075cb20
//   -> 14075cbb0 FUN_14075cbb0
//   -> 1400021b0 FUN_1400021b0
//   -> 1400020a0 FUN_1400020a0
//   -> 140071f40 FUN_140071f40
//   -> 1406feca0 FUN_1406feca0
//   -> 1406feee0 FUN_1406feee0


void FUN_140709410(ulonglong *param_1,undefined8 param_2)

{
  int *piVar1;
  short sVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int local_res8 [2];
  
  local_res8[0] = (int)((longlong)(param_1[1] - *param_1) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar4 = (undefined8 *)*param_1;
  uVar6 = 0;
  uVar3 = (param_1[1] - (longlong)puVar4) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    uVar3 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar3 != 0) {
    do {
      sVar2 = (*(code *)**(undefined8 **)*puVar4)();
      local_res8[0] = (int)sVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      (**(code **)(*(longlong *)*puVar4 + 0x118))((longlong *)*puVar4,param_2);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 < uVar3);
  }
  local_res8[0] = (int)((longlong)(param_1[0xd] - param_1[0xc]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar4 = (undefined8 *)param_1[0xc];
  uVar3 = (param_1[0xd] - (longlong)puVar4) + 7 >> 3;
  if ((undefined8 *)param_1[0xd] < puVar4) {
    uVar3 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar3 != 0) {
    do {
      FUN_14070a090(*puVar4,param_2);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 < uVar3);
  }
  local_res8[0] = (int)((longlong)(param_1[0x10] - param_1[0xf]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar3 = uVar6;
  uVar5 = uVar6;
  if ((longlong)(param_1[0x10] - param_1[0xf]) >> 3 != 0) {
    do {
      sVar2 = (**(code **)**(undefined8 **)(uVar3 + param_1[0xf]))();
      local_res8[0] = (int)sVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      (**(code **)(**(longlong **)(uVar3 + param_1[0xf]) + 0x10))
                (*(longlong **)(uVar3 + param_1[0xf]),param_2);
      uVar7 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      uVar5 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)((longlong)(param_1[0x10] - param_1[0xf]) >> 3));
  }
  local_res8[0] = (int)((longlong)(param_1[0x49] - param_1[0x48]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar3 = uVar6;
  uVar5 = uVar6;
  if ((longlong)(param_1[0x49] - param_1[0x48]) >> 3 != 0) {
    do {
      piVar1 = *(int **)(uVar5 + param_1[0x48]);
      local_res8[0] = *piVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_14075cb20(piVar1 + 2,param_2);
      FUN_14075cbb0(piVar1 + 0x10,param_2);
      uVar7 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar7;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)((longlong)(param_1[0x49] - param_1[0x48]) >> 3));
  }
  FUN_1400021b0(param_2,param_1 + 0x4b);
  FUN_1400020a0(param_2,param_1 + 0x4e);
  local_res8[0] = (int)param_1[0x51];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(int *)((longlong)param_1 + 0x28c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (int)param_1[0x52];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(int *)((longlong)param_1 + 0x294);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x53);
  local_res8[0] = (int)param_1[0x56];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(int *)((longlong)param_1 + 0x2b4);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (int)param_1[0x57];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(int *)((longlong)param_1 + 700);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (int)param_1[0x58];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(int *)((longlong)param_1 + 0x2c4);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (int)param_1[0x59];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(int *)((longlong)param_1 + 0x2cc);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (int)param_1[0x5a];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(int *)((longlong)param_1 + 0x2d4);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (int)param_1[0x5b];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(int *)((longlong)param_1 + 0x2dc);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (int)param_1[0x5c];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(int *)((longlong)param_1 + 0x2e4);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (int)((longlong)(param_1[10] - param_1[9]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar4 = (undefined8 *)param_1[9];
  uVar3 = (param_1[10] - (longlong)puVar4) + 7 >> 3;
  if ((undefined8 *)param_1[10] < puVar4) {
    uVar3 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar3 != 0) {
    do {
      FUN_140071f40(*puVar4,param_2);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 < uVar3);
  }
  local_res8[0] = (int)((longlong)(param_1[7] - param_1[6]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar4 = (undefined8 *)param_1[6];
  uVar3 = (param_1[7] - (longlong)puVar4) + 7 >> 3;
  if ((undefined8 *)param_1[7] < puVar4) {
    uVar3 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar3 != 0) {
    do {
      FUN_1406feca0(*puVar4,param_2);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 < uVar3);
  }
  local_res8[0] = (int)((longlong)(param_1[0x5e] - param_1[0x5d]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar4 = (undefined8 *)param_1[0x5d];
  uVar3 = (ulonglong)((longlong)param_1[0x5e] + (7 - (longlong)puVar4)) >> 3;
  if ((undefined8 *)param_1[0x5e] < puVar4) {
    uVar3 = uVar6;
  }
  if (uVar3 != 0) {
    do {
      FUN_1406feee0(*puVar4,param_2);
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 < uVar3);
  }
  return;
}

