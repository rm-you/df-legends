// FUN_1406f9080 @ 1406f9080
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1406f8800 FUN_1406f8800
//   -> 1406f89d0 FUN_1406f89d0
//   -> 1400021b0 FUN_1400021b0
//   -> 1406f8b50 FUN_1406f8b50


void FUN_1406f9080(ulonglong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  local_res8[0] = (uint)((longlong)(param_1[1] - *param_1) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = (undefined8 *)*param_1;
  uVar4 = 0;
  uVar3 = (param_1[1] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar1) {
    uVar3 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar3 != 0) {
    do {
      FUN_1406f8800(*puVar1,param_2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < uVar3);
  }
  local_res8[0] = (uint)((longlong)(param_1[4] - param_1[3]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = (undefined8 *)param_1[3];
  uVar3 = (param_1[4] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[4] < puVar1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      FUN_1406f89d0(*puVar1,param_2);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  local_res8[0] = (uint)param_1[6];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 7);
  local_res8[0] = (uint)param_1[10];
  FUN_1405bb7c0(param_2,local_res8,4);
  if (param_1[0xb] != 0) {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1406f8b50(param_1[0xb],param_2);
    return;
  }
  local_res8[0] = local_res8[0] & 0xffffff00;
  FUN_1405bb7c0(param_2,local_res8,1);
  return;
}

