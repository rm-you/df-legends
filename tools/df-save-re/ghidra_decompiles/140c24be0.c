// FUN_140c24be0 @ 140c24be0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_140c24be0(undefined2 *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*param_1);
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1400021b0(param_2,param_1 + 4);
  puVar1 = param_1 + 0x10;
  lVar2 = 4;
  do {
    FUN_1400021b0(param_2,puVar1);
    puVar1 = puVar1 + 0xc;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_res8[0] = *(undefined4 *)(param_1 + 0x40);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x44);
  FUN_1400021b0(param_2,param_1 + 0x50);
  return;
}

