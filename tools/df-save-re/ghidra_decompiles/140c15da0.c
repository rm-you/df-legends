// FUN_140c15da0 @ 140c15da0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140c15f30 FUN_140c15f30
//   -> 14000bd10 FUN_14000bd10
//   -> 140c182e0 FUN_140c182e0


void FUN_140c15da0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  int local_res8 [2];
  int local_res20 [2];
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 8,(longlong)local_res8[0]);
  lVar4 = (longlong)(local_res8[0] + -1);
  if (-1 < local_res8[0] + -1) {
    do {
      FUN_1405bba90(param_2,local_res20,4);
      uVar3 = FUN_140c15f30(local_res20[0]);
      *(undefined8 *)(*(longlong *)(param_1 + 8) + lVar4 * 8) = uVar3;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar4 * 8);
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  puVar7 = (ulonglong *)(param_1 + 0x20);
  lVar4 = 4;
  do {
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000bd10(puVar7,(longlong)local_res20[0]);
    uVar2 = puVar7[1];
    for (uVar5 = *puVar7; uVar5 < uVar2; uVar5 = uVar5 + 4) {
      FUN_1405bba90(param_2,uVar5,4);
    }
    puVar7 = puVar7 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_140c182e0(param_1 + 0x80,param_2);
  lVar4 = param_1 + 0x184;
  lVar6 = 3;
  do {
    FUN_1405bba90(param_2,lVar4 + -0xc,4);
    FUN_1405bba90(param_2,lVar4,4);
    lVar4 = lVar4 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_1405bba90(param_2,param_1 + 400,4);
  FUN_1405bba90(param_2,param_1 + 0x194,4);
  return;
}

