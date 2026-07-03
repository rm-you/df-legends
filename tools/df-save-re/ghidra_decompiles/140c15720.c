// FUN_140c15720 @ 140c15720
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 140c17d60 FUN_140c17d60
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140367260 FUN_140367260
//   -> 140c15da0 FUN_140c15da0
//   -> 140c15f30 FUN_140c15f30
//   -> 14000bd10 FUN_14000bd10
//   -> 140c19d90 FUN_140c19d90


void FUN_140c15720(longlong param_1,undefined8 param_2,undefined1 param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4,param_4,0xfffffffffffffffe);
  FUN_140315ac0(param_1 + 8,param_2);
  FUN_1405bb6d0(param_2,param_1 + 0x80);
  FUN_140c17d60(param_1 + 0xd0,param_2);
  FUN_1405bba90(param_2,param_1 + 0xe8,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0xa0,(longlong)local_res18[0]);
  uVar8 = 0;
  uVar6 = uVar8;
  uVar7 = uVar8;
  if (0 < local_res18[0]) {
    do {
      pvVar3 = operator_new(0x198);
      uVar4 = FUN_140367260(pvVar3);
      *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0xa0)) = uVar4;
      FUN_140c15da0(*(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0xa0)),param_2,
                    param_4 & 0xffffffff);
      uVar9 = (int)uVar7 + 1;
      uVar6 = uVar6 + 8;
      uVar7 = (ulonglong)uVar9;
    } while ((int)uVar9 < local_res18[0]);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0xb8,(longlong)local_res18[0]);
  uVar6 = uVar8;
  uVar7 = uVar8;
  if (0 < local_res18[0]) {
    do {
      FUN_1405bba90(param_2,local_res20,4);
      uVar4 = FUN_140c15f30(local_res20[0]);
      *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0xb8)) = uVar4;
      plVar1 = *(longlong **)(uVar6 + *(longlong *)(param_1 + 0xb8));
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_4 & 0xffffffff);
      uVar9 = (int)uVar7 + 1;
      uVar6 = uVar6 + 8;
      uVar7 = (ulonglong)uVar9;
    } while ((int)uVar9 < local_res18[0]);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0xf0,(longlong)local_res18[0]);
  uVar6 = uVar8;
  if (0 < local_res18[0]) {
    do {
      puVar5 = operator_new(8);
      *puVar5 = 0xffffffff;
      puVar5[1] = 0;
      *(undefined4 **)(uVar6 + *(longlong *)(param_1 + 0xf0)) = puVar5;
      lVar2 = *(longlong *)(uVar6 + *(longlong *)(param_1 + 0xf0));
      FUN_1405bba90(param_2,lVar2,4);
      FUN_1405bba90(param_2,lVar2 + 4,4);
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
      uVar6 = uVar6 + 8;
    } while ((int)uVar9 < local_res18[0]);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 0x108,(longlong)local_res20[0]);
  uVar6 = *(ulonglong *)(param_1 + 0x110);
  for (uVar7 = *(ulonglong *)(param_1 + 0x108); uVar7 < uVar6; uVar7 = uVar7 + 4) {
    FUN_1405bba90(param_2,uVar7,4);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 0x120,(longlong)local_res20[0]);
  uVar6 = *(ulonglong *)(param_1 + 0x128);
  for (uVar7 = *(ulonglong *)(param_1 + 0x120); uVar7 < uVar6; uVar7 = uVar7 + 4) {
    FUN_1405bba90(param_2,uVar7,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x138,4);
  FUN_1405bba90(param_2,param_1 + 0x13c,4);
  FUN_140c19d90(param_1 + 0x140,param_2);
  FUN_1405bba90(param_2,param_1 + 0x1b8,2);
  FUN_1405bba90(param_2,param_1 + 0x1ba,2);
  FUN_1405bba90(param_2,param_1 + 0x1bc,4);
  FUN_1405bba90(param_2,param_1 + 0x1c0,4);
  FUN_1405bba90(param_2,param_1 + 0x1c4,4);
  if ((int)param_4 < 0x62c) {
    *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0x1c8,4);
  }
  return;
}

