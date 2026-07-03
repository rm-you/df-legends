// FUN_140491a50 @ 140491a50
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400020a0 FUN_1400020a0
//   -> 140491210 FUN_140491210
//   -> 1405bb630 FUN_1405bb630


void FUN_140491a50(undefined4 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 1));
  FUN_1405bb7c0(param_2,local_res8,2);
  plVar1 = (longlong *)(param_1 + 0x56);
  lVar6 = 7;
  puVar5 = param_1 + 0x2c;
  do {
    FUN_1400020a0(param_2,puVar5 + -0x2a);
    FUN_1400020a0(param_2,puVar5);
    local_res8[0] = (undefined4)(plVar1[1] - *plVar1 >> 3);
    FUN_1405bb7c0(param_2,local_res8,4);
    lVar4 = *plVar1;
    iVar2 = 0;
    if (plVar1[1] - lVar4 >> 3 != 0) {
      lVar3 = 0;
      do {
        FUN_140491210(*(undefined8 *)(lVar4 + lVar3),param_2);
        lVar4 = *plVar1;
        lVar3 = lVar3 + 8;
        iVar2 = iVar2 + 1;
      } while ((ulonglong)(longlong)iVar2 < (ulonglong)(plVar1[1] - lVar4 >> 3));
    }
    puVar5 = puVar5 + 6;
    plVar1 = plVar1 + 3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_1405bb630(param_2,param_1 + 0x80);
  local_res8[0] = param_1[0x88];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

