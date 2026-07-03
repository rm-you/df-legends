// FUN_140a5be40 @ 140a5be40
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140bfc3a0 FUN_140bfc3a0
//   -> 140dfb5c4 operator_new
//   -> 140002250 FUN_140002250


void FUN_140a5be40(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  int local_res20 [2];
  
  FUN_1405bba90(param_2,param_1,4);
  puVar9 = (ulonglong *)(param_1 + 0x10);
  lVar7 = param_1 + 8;
  lVar8 = 100;
  do {
    uVar6 = 0;
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000b9d0(lVar7,(longlong)local_res20[0]);
    puVar4 = (undefined8 *)puVar9[-1];
    uVar5 = (*puVar9 - (longlong)puVar4) + 7 >> 3;
    if ((undefined8 *)*puVar9 < puVar4) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      do {
        plVar2 = (longlong *)FUN_140bfc3a0(param_2);
        *puVar4 = plVar2;
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3);
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar6 < uVar5);
    }
    lVar7 = lVar7 + 0x18;
    puVar9 = puVar9 + 3;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_1405bba90(param_2,param_1 + 0x968,4);
  FUN_1405bba90(param_2,param_1 + 0x96c,4);
  FUN_1405bba90(param_2,param_1 + 0x970,4);
  FUN_1405bba90(param_2,param_1 + 0x974,4);
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 0x978,(longlong)local_res20[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x980);
  for (puVar4 = *(undefined8 **)(param_1 + 0x978); puVar4 < puVar1; puVar4 = puVar4 + 1) {
    puVar3 = operator_new(0x50);
    *(undefined8 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 6) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 10) = 0;
    *(undefined8 *)(puVar3 + 0xc) = 0;
    *(undefined8 *)(puVar3 + 0xe) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x12) = 0;
    *puVar3 = 0xffffffff;
    *puVar4 = puVar3;
    FUN_1405bba90(param_2,puVar3,4);
    FUN_140002250(param_2,puVar3 + 2);
    FUN_140002250(param_2,puVar3 + 8);
    FUN_140002250(param_2,puVar3 + 0xe);
  }
  return;
}

