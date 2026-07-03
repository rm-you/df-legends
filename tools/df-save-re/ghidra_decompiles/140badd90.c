// FUN_140badd90 @ 140badd90
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140bad300 FUN_140bad300
//   -> 140badb90 FUN_140badb90


void FUN_140badd90(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x12];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x13];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x14];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x15];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x16];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x17];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x18];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x19];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x1a];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x1b];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x22];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x23];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x24];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x25];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x1e) - *(longlong *)(param_1 + 0x1c) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = *(undefined8 **)(param_1 + 0x1c);
  uVar4 = 0;
  uVar5 = (*(longlong *)(param_1 + 0x1e) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x1e) < puVar2) {
    uVar5 = uVar4;
  }
  uVar3 = uVar4;
  if (uVar5 != 0) {
    do {
      FUN_140bad300(*puVar2,param_2);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar5);
  }
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 6) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = *(undefined8 **)(param_1 + 6);
  uVar5 = (*(longlong *)(param_1 + 8) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 8) < puVar2) {
    uVar5 = uVar4;
  }
  uVar3 = uVar4;
  if (uVar5 != 0) {
    do {
      FUN_140badb90(*puVar2,param_2);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar5);
  }
  local_res8[0] = param_1[0x26];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x27];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x28];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x29];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0xe) - *(longlong *)(param_1 + 0xc) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = *(undefined8 **)(param_1 + 0xc);
  uVar5 = (*(longlong *)(param_1 + 0xe) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0xe) < puVar2) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[3];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar5);
  }
  return;
}

