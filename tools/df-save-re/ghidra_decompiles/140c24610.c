// FUN_140c24610 @ 140c24610
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 140c24330 FUN_140c24330


void FUN_140c24610(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 4);
  local_res8[0] = param_1[10];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x12));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0xe) - *(longlong *)(param_1 + 0xc) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar1 = (int)(*(longlong *)(param_1 + 0xe) - *(longlong *)(param_1 + 0xc) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      FUN_140c24330(*(undefined8 *)(*(longlong *)(param_1 + 0xc) + lVar2 * 8),param_2);
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  local_res8[0] = param_1[0x13];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x14);
  return;
}

