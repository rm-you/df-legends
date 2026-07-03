// FUN_140c01650 @ 140c01650
// callees:
//   -> 1400021b0 FUN_1400021b0
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140b0cc80 FUN_140b0cc80
//   -> 140c0bca0 FUN_140c0bca0
//   -> 140071f40 FUN_140071f40


void FUN_140c01650(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  
  FUN_1400021b0(param_2,param_1);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar4 = 0;
  uVar2 = uVar4;
  uVar6 = uVar4;
  if (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3 != 0) {
    do {
      FUN_140b0cc80(*(undefined8 *)(uVar2 + *(longlong *)(param_1 + 0x30)),param_2);
      uVar5 = (int)uVar6 + 1;
      uVar2 = uVar2 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3));
  }
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar2 = uVar4;
  uVar6 = uVar4;
  if (*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3 != 0) {
    do {
      puVar1 = *(undefined4 **)(uVar2 + *(longlong *)(param_1 + 0x48));
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_140c0bca0(puVar1 + 1,param_2);
      uVar5 = (int)uVar6 + 1;
      uVar2 = uVar2 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3));
  }
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  uVar2 = (*(longlong *)(param_1 + 0x20) - (longlong)puVar3) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x20) < puVar3) {
    uVar2 = uVar4;
  }
  uVar6 = uVar4;
  if (uVar2 != 0) {
    do {
      local_res8[0] = *(undefined4 *)*puVar3;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar2);
  }
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  uVar2 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x68) + (7 - (longlong)puVar3)) >> 3;
  if (*(undefined8 **)(param_1 + 0x68) < puVar3) {
    uVar2 = uVar4;
  }
  if (uVar2 != 0) {
    do {
      FUN_140071f40(*puVar3,param_2);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}

