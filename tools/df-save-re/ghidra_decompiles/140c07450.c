// FUN_140c07450 @ 140c07450
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140c0bca0 FUN_140c0bca0
//   -> 140071df0 FUN_140071df0
//   -> 1400021b0 FUN_1400021b0


void FUN_140c07450(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[4];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[5];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[6];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xe];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xf];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = (short)param_1[0x10];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 0x42);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,(short)param_1[0x11]);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[0x12];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x13];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x14];
  FUN_1405bb7c0(param_2,local_res8,4);
  if (*(longlong *)(param_1 + 0x16) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    local_res8[0] = (**(code **)**(undefined8 **)(param_1 + 0x16))();
    FUN_1405bb7c0(param_2,local_res8,4);
    (**(code **)(**(longlong **)(param_1 + 0x16) + 8))(*(longlong **)(param_1 + 0x16),param_2);
  }
  local_res8[0] = (uint)(*(longlong *)(param_1 + 10) - *(longlong *)(param_1 + 8) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = *(undefined8 **)(param_1 + 8);
  uVar5 = 0;
  uVar3 = (*(longlong *)(param_1 + 10) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 10) < puVar2) {
    uVar3 = uVar5;
  }
  uVar4 = uVar5;
  if (uVar3 != 0) {
    do {
      puVar1 = (uint *)*puVar2;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_140c0bca0(puVar1 + 1,param_2);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
  }
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x1a) - *(longlong *)(param_1 + 0x18) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  uVar3 = (*(longlong *)(param_1 + 0x1a) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x1a) < puVar2) {
    uVar3 = uVar5;
  }
  if (uVar3 != 0) {
    do {
      FUN_140071df0(*puVar2,param_2);
      uVar5 = uVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar5 < uVar3);
  }
  local_res8[0] = param_1[0x1e];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x20);
  local_res8[0] = param_1[0x26];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x28);
  local_res8[0] = param_1[0x2e];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x2f];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x30];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

