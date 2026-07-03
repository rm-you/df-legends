// FUN_140c182e0 @ 140c182e0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140c14680 FUN_140c14680
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 14000bd10 FUN_14000bd10


void FUN_140c182e0(longlong *param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 *local_res8;
  int local_res18 [4];
  
  lVar7 = 7;
  plVar5 = param_1;
  plVar6 = param_1;
  local_res18[0] = param_3;
  do {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000b9d0(plVar6,(longlong)local_res18[0]);
    iVar4 = 0;
    if (0 < local_res18[0]) {
      lVar2 = 0;
      do {
        local_res8 = operator_new(0x38);
        *(undefined8 *)(local_res8 + 6) = 0;
        *(undefined8 *)(local_res8 + 8) = 0;
        *(undefined8 *)(local_res8 + 10) = 0;
        *(undefined2 *)(local_res8 + 1) = 0xffff;
        *(undefined2 *)((longlong)local_res8 + 6) = 0xffff;
        *(undefined2 *)(local_res8 + 2) = 0xffff;
        *(undefined2 *)((longlong)local_res8 + 10) = 0xffff;
        local_res8[3] = 0xffffffff;
        local_res8[4] = 0xffffffff;
        local_res8[0xc] = 0;
        *local_res8 = 0xffffffff;
        *(undefined4 **)(lVar2 + *plVar5) = local_res8;
        FUN_140c14680(*(undefined8 *)(*plVar5 + lVar2),param_2);
        iVar4 = iVar4 + 1;
        lVar2 = lVar2 + 8;
      } while (iVar4 < local_res18[0]);
    }
    plVar6 = plVar6 + 3;
    plVar5 = plVar5 + 3;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  FUN_1405bb6d0(param_2,param_1 + 0x15);
  FUN_1405bba90(param_2,param_1 + 0x19,4);
  FUN_1405bba90(param_2,&local_res8,4);
  FUN_14000bd10(param_1 + 0x1a,(longlong)(int)local_res8);
  uVar1 = param_1[0x1b];
  for (uVar3 = param_1[0x1a]; uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x1d,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0xec,4);
  FUN_1405bba90(param_2,param_1 + 0x1e,4);
  return;
}

