// FUN_140c256d0 @ 140c256d0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400031f0 FUN_1400031f0
//   -> 1400021b0 FUN_1400021b0
//   -> 1400020a0 FUN_1400020a0
//   -> 1407efcd0 FUN_1407efcd0


void FUN_140c256d0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 2));
  FUN_1405bb7c0(param_2,local_res8,2);
  puVar1 = param_1 + 3;
  lVar2 = 6;
  do {
    FUN_1400031f0(puVar1,param_2);
    puVar1 = puVar1 + 7;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_res8[0] = param_1[0x2d];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x2e);
  FUN_1400021b0(param_2,param_1 + 0x34);
  local_res8[0] = param_1[0x3a];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400020a0(param_2,param_1 + 0x3c);
  FUN_1400021b0(param_2,param_1 + 0x42);
  FUN_1400021b0(param_2,param_1 + 0x48);
  FUN_1400021b0(param_2,param_1 + 0x4e);
  FUN_1400021b0(param_2,param_1 + 0x54);
  FUN_1407efcd0(param_1 + 0x5a,param_2);
  FUN_1400021b0(param_2,param_1 + 0x62);
  local_res8[0] = param_1[0x68];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x69];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

