// FUN_1407d45d0 @ 1407d45d0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 1406f8800 FUN_1406f8800
//   -> 1406f89d0 FUN_1406f89d0


void FUN_1407d45d0(undefined4 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1403159b0(param_1 + 2,param_2);
  local_res18[0] = param_1[0x20];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = CONCAT22(local_res18[0]._2_2_,*(undefined2 *)(param_1 + 0x21));
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0] = param_1[0x22];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x23];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x24];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x25];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x26];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x27];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = CONCAT22(local_res18[0]._2_2_,*(undefined2 *)(param_1 + 0x2b));
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0] = param_1[0x2c];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x28];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x29];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2a];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x2e) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  uVar4 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x2e);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x30) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x30) < puVar1) {
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
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x36) - *(longlong *)(param_1 + 0x34) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar1 = *(undefined8 **)(param_1 + 0x34);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x36) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x36) < puVar1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      FUN_1406f89d0(*puVar1,param_2);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}

