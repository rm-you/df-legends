// FUN_140a5c620 @ 140a5c620
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 14013c130 FUN_14013c130
//   -> 14013c320 FUN_14013c320
//   -> 1400020a0 FUN_1400020a0


void FUN_140a5c620(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 2);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 10) - *(longlong *)(param_1 + 8) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar6 = 0;
  uVar5 = (*(longlong *)(param_1 + 10) - (longlong)puVar3) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 10) < puVar3) {
    uVar5 = uVar6;
  }
  uVar4 = uVar6;
  if (uVar5 != 0) {
    do {
      FUN_14013c130(*puVar3,param_2);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < uVar5);
  }
  FUN_1400021b0(param_2,param_1 + 0x2c);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x34) - *(longlong *)(param_1 + 0x32) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = *(undefined8 **)(param_1 + 0x32);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x34) + (7 - (longlong)puVar3)) >> 3;
  if (*(undefined8 **)(param_1 + 0x34) < puVar3) {
    uVar5 = uVar6;
  }
  uVar4 = uVar6;
  if (uVar5 != 0) {
    do {
      FUN_14013c320(*puVar3,param_2);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < uVar5);
  }
  FUN_1400021b0(param_2,param_1 + 0xe);
  FUN_1400021b0(param_2,param_1 + 0x14);
  FUN_1400021b0(param_2,param_1 + 0x1a);
  FUN_1400021b0(param_2,param_1 + 0x20);
  FUN_1400020a0(param_2,param_1 + 0x26);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x3a) - *(longlong *)(param_1 + 0x38) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x3a) + (7 - (longlong)puVar3)) >> 3;
  if (*(undefined8 **)(param_1 + 0x3a) < puVar3) {
    uVar5 = uVar6;
  }
  uVar4 = uVar6;
  if (uVar5 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar3;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[3];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < uVar5);
  }
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x3e) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = *(undefined8 **)(param_1 + 0x3e);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x40) + (7 - (longlong)puVar3)) >> 3;
  if (*(undefined8 **)(param_1 + 0x40) < puVar3) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      uVar2 = (*(code *)**(undefined8 **)*puVar3)();
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,uVar2);
      FUN_1405bb7c0(param_2,local_res8,2);
      (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,param_2);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar5);
  }
  local_res8[0] = param_1[0x45];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x46];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400020a0(param_2,param_1 + 0x48);
  FUN_1400020a0(param_2,param_1 + 0x4e);
  FUN_1400020a0(param_2,param_1 + 0x54);
  FUN_1400021b0(param_2,param_1 + 0x5a);
  FUN_1400021b0(param_2,param_1 + 0x60);
  FUN_1400021b0(param_2,param_1 + 0x66);
  FUN_1400020a0(param_2,param_1 + 0x6c);
  FUN_1400020a0(param_2,param_1 + 0x72);
  FUN_1400020a0(param_2,param_1 + 0x78);
  FUN_1400021b0(param_2,param_1 + 0x7e);
  return;
}

