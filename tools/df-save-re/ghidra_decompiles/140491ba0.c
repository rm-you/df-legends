// FUN_140491ba0 @ 140491ba0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000bed0 FUN_14000bed0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140491370 FUN_140491370
//   -> 1405bb6d0 FUN_1405bb6d0


void FUN_140491ba0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,2);
  plVar7 = (longlong *)(param_1 + 0x160);
  lVar5 = param_1 + 0x158;
  lVar8 = 7;
  do {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bed0(plVar7 + -0x2b,(longlong)local_res18[0]);
    uVar1 = plVar7[-0x2a];
    for (uVar3 = plVar7[-0x2b]; uVar3 < uVar1; uVar3 = uVar3 + 2) {
      FUN_1405bba90(param_2,uVar3,2);
    }
    FUN_1405bba90(param_2,local_res8,4);
    FUN_14000bed0(plVar7 + -0x16,(longlong)local_res8[0]);
    uVar1 = plVar7[-0x15];
    for (uVar3 = plVar7[-0x16]; uVar3 < uVar1; uVar3 = uVar3 + 2) {
      FUN_1405bba90(param_2,uVar3,2);
    }
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000b9d0(lVar5,(longlong)local_res20[0]);
    iVar6 = 0;
    if (*plVar7 - plVar7[-1] >> 3 != 0) {
      lVar4 = 0;
      do {
        puVar2 = operator_new(0x20);
        *puVar2 = 0xff01;
        puVar2[1] = 0xffff;
        *(undefined4 *)(puVar2 + 2) = 0xffffffff;
        puVar2[4] = 0xffff;
        puVar2[5] = 0xffff;
        puVar2[6] = 0xffff;
        puVar2[7] = 0xffff;
        puVar2[10] = 0xffff;
        *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
        puVar2[0xe] = 0xffff;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined2 **)(lVar4 + plVar7[-1]) = puVar2;
        FUN_140491370(*(undefined8 *)(plVar7[-1] + lVar4),param_2);
        lVar4 = lVar4 + 8;
        iVar6 = iVar6 + 1;
      } while ((ulonglong)(longlong)iVar6 < (ulonglong)(*plVar7 - plVar7[-1] >> 3));
    }
    lVar5 = lVar5 + 0x18;
    plVar7 = plVar7 + 3;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_1405bb6d0(param_2,param_1 + 0x200);
  FUN_1405bba90(param_2,param_1 + 0x220,4);
  return;
}

