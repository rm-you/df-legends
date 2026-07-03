// FUN_140c181b0 @ 140c181b0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140c14580 FUN_140c14580
//   -> 1405bb630 FUN_1405bb630
//   -> 1400021b0 FUN_1400021b0


void FUN_140c181b0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int local_res8 [2];
  
  lVar4 = 7;
  plVar2 = param_1;
  do {
    iVar3 = (int)(plVar2[1] - *plVar2 >> 3);
    local_res8[0] = iVar3;
    FUN_1405bb7c0(param_2,local_res8,4);
    lVar1 = 0;
    if (0 < (longlong)iVar3) {
      do {
        FUN_140c14580(*(undefined8 *)(*plVar2 + lVar1 * 8),param_2);
        lVar1 = lVar1 + 1;
      } while (lVar1 < iVar3);
    }
    plVar2 = plVar2 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_1405bb630(param_2,param_1 + 0x15);
  local_res8[0] = (int)param_1[0x19];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x1a);
  local_res8[0] = (int)param_1[0x1d];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(int *)((longlong)param_1 + 0xec);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (int)param_1[0x1e];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

