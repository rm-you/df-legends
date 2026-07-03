// FUN_140143cc0 @ 140143cc0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 1400021b0 FUN_1400021b0
//   -> 1401432e0 FUN_1401432e0
//   -> 1405bb630 FUN_1405bb630


void FUN_140143cc0(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1403159b0(param_1 + 2,param_2);
  local_res18[0] = param_1[0x20];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x21];
  FUN_1405bb7c0(param_2,local_res18,4);
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
  local_res18[0] = param_1[0x28];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x29];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2a];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2b];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2c];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2d];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2e];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400021b0(param_2,param_1 + 0x30);
  local_res18[0] = param_1[0x36];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x37];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x38];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x39];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400021b0(param_2,param_1 + 0x3a);
  FUN_1400021b0(param_2,param_1 + 0x40);
  FUN_1400021b0(param_2,param_1 + 0x46);
  FUN_1400021b0(param_2,param_1 + 0x4c);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x54) - *(longlong *)(param_1 + 0x52) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  uVar6 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x52);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x54) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x54) < puVar2) {
    uVar5 = uVar6;
  }
  uVar4 = uVar6;
  if (uVar5 != 0) {
    do {
      FUN_1401432e0(*puVar2,param_2);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar5);
  }
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x5a) - *(longlong *)(param_1 + 0x58) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  plVar3 = *(longlong **)(param_1 + 0x58);
  uVar5 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x5a) + (7 - (longlong)plVar3)) >> 3;
  if (*(longlong **)(param_1 + 0x5a) < plVar3) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar3;
      FUN_1405bb630(param_2,lVar1);
      FUN_1400021b0(param_2,lVar1 + 0x20);
      FUN_1400021b0(param_2,lVar1 + 0x38);
      FUN_1400021b0(param_2,lVar1 + 0x50);
      FUN_1400021b0(param_2,lVar1 + 0x68);
      local_res18[0] = *(undefined4 *)(lVar1 + 0x80);
      FUN_1405bb7c0(param_2,local_res18,4);
      uVar6 = uVar6 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar6 < uVar5);
  }
  return;
}

