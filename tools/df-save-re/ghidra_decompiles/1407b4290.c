// FUN_1407b4290 @ 1407b4290
// callees:
//   -> 1400021b0 FUN_1400021b0
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1406fab40 FUN_1406fab40
//   -> 1401cdee0 FUN_1401cdee0
//   -> 1406fad80 FUN_1406fad80
//   -> 1406f55f0 FUN_1406f55f0


void FUN_1407b4290(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  
  FUN_1400021b0(param_2,param_1);
  FUN_1400021b0(param_2,param_1 + 0x18);
  FUN_1400021b0(param_2,param_1 + 0x30);
  FUN_1400021b0(param_2,param_1 + 0x48);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar2 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0xb8) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0xb8) < puVar1) {
    uVar3 = uVar2;
  }
  uVar4 = uVar2;
  if (uVar3 != 0) {
    do {
      FUN_1406fab40(*puVar1,param_2);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  local_res8[0] = *(undefined4 *)(param_1 + 200);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x88) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x88) < puVar1) {
    uVar3 = uVar2;
  }
  uVar4 = uVar2;
  if (uVar3 != 0) {
    do {
      local_res8[0] = *(undefined4 *)*puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0xa0) - *(longlong *)(param_1 + 0x98) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0xa0) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0xa0) < puVar1) {
    uVar3 = uVar2;
  }
  uVar4 = uVar2;
  if (uVar3 != 0) {
    do {
      local_res8[0] = *(undefined4 *)*puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  uVar3 = (*(longlong *)(param_1 + 0x68) - (longlong)puVar1) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x68) < puVar1) {
    uVar3 = uVar2;
  }
  uVar4 = uVar2;
  if (uVar3 != 0) {
    do {
      FUN_1401cdee0(*puVar1,param_2);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  local_res8[0] = *(undefined4 *)(param_1 + 0x78);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0xd0);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0xe8) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = *(undefined8 **)(param_1 + 0xe8);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0xf0) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0xf0) < puVar1) {
    uVar3 = uVar2;
  }
  uVar4 = uVar2;
  if (uVar3 != 0) {
    do {
      FUN_1406fad80(*puVar1,param_2);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  local_res8[0] = *(undefined4 *)(param_1 + 0x100);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x110) - *(longlong *)(param_1 + 0x108) >> 3)
  ;
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = *(undefined8 **)(param_1 + 0x108);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x110) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x110) < puVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      FUN_1406f55f0(*puVar1,param_2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < uVar3);
  }
  local_res8[0] = *(undefined4 *)(param_1 + 0x120);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x124);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x128);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

