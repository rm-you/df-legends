// FUN_1404914b0 @ 1404914b0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1404914b0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  
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
  local_res8[0] = param_1[7];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0xe) - *(longlong *)(param_1 + 0xc) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = *(undefined8 **)(param_1 + 0xc);
  uVar4 = 0;
  uVar3 = (*(longlong *)(param_1 + 0xe) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0xe) < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
  }
  local_res8[0] = param_1[0x12];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x13];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[8];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[9];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[10];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x14];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x15];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

