// FUN_140c15c30 @ 140c15c30
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 140c181b0 FUN_140c181b0


void FUN_140c15c30(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar2 = (int)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar2 = iVar2 + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      local_res8[0] =
           (**(code **)(**(longlong **)(*(longlong *)(param_1 + 2) + lVar3 * 8) + 0x18))();
      FUN_1405bb7c0(param_2,local_res8,4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 2) + lVar3 * 8);
      (**(code **)(*plVar1 + 8))(plVar1,param_2);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  piVar4 = param_1 + 8;
  lVar3 = 4;
  do {
    FUN_1400021b0(param_2,piVar4);
    piVar4 = piVar4 + 6;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_140c181b0(param_1 + 0x20,param_2);
  piVar4 = param_1 + 0x61;
  lVar3 = 3;
  do {
    local_res8[0] = piVar4[-3];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = *piVar4;
    FUN_1405bb7c0(param_2,local_res8,4);
    piVar4 = piVar4 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  local_res8[0] = param_1[100];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x65];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

