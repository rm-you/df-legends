// FUN_140072c20 @ 140072c20
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140071bc0 FUN_140071bc0
//   -> 1400723b0 FUN_1400723b0


void FUN_140072c20(undefined4 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_res18 [2];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar1 = *(undefined8 **)(param_1 + 2);
  uVar4 = 0;
  uVar3 = (*(longlong *)(param_1 + 4) - (longlong)puVar1) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 4) < puVar1) {
    uVar3 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar3 != 0) {
    do {
      FUN_140071bc0(*puVar1,param_2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < uVar3);
  }
  local_res18[0] = param_1[8];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0xc) - *(longlong *)(param_1 + 10) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar1 = *(undefined8 **)(param_1 + 10);
  uVar3 = (*(longlong *)(param_1 + 0xc) - (longlong)puVar1) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0xc) < puVar1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      FUN_1400723b0(*puVar1,param_2);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  local_res18[0] = param_1[0x10];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x11];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x12];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x13];
  FUN_1405bb7c0(param_2,local_res18,4);
  return;
}

