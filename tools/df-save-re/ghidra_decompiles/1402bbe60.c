// FUN_1402bbe60 @ 1402bbe60
// callees:
//   -> 140287cf0 FUN_140287cf0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140284710 FUN_140284710
//   -> 1402bc210 FUN_1402bc210
//   -> 140284330 FUN_140284330
//   -> 1402bc530 FUN_1402bc530
//   -> 14000bfc0 FUN_14000bfc0
//   -> 1402caf30 FUN_1402caf30
//   -> 140050150 FUN_140050150
//   -> 1402809b0 FUN_1402809b0
//   -> 140280700 FUN_140280700
//   -> 140284560 FUN_140284560
//   -> 1402cae10 FUN_1402cae10


void FUN_1402bbe60(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  
  FUN_140287cf0();
  FUN_14000b9d0(param_1,param_2[1] - *param_2 >> 3);
  FUN_14000b9d0(param_1 + 3,param_2[4] - param_2[3] >> 3);
  iVar3 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar9 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar4 = operator_new(0xf0);
      uVar5 = FUN_140284710(pvVar4,0);
      *(undefined8 *)(*param_1 + lVar9 * 8) = uVar5;
      FUN_1402bc210(*(undefined8 *)(*param_1 + lVar9 * 8));
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  iVar3 = (int)(param_1[4] - param_1[3] >> 3) + -1;
  lVar9 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar4 = operator_new(0x1c0);
      uVar5 = FUN_140284330(pvVar4);
      *(undefined8 *)(param_1[3] + lVar9 * 8) = uVar5;
      FUN_1402bc530(*(undefined8 *)(param_1[3] + lVar9 * 8),*(undefined8 *)(param_2[3] + lVar9 * 8))
      ;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  FUN_14000bfc0(param_1 + 0xd,param_2 + 0xd);
  FUN_14000bfc0(param_1 + 0x10,param_2 + 0x10);
  FUN_1402caf30(param_1 + 0x13,param_2 + 0x13);
  FUN_140050150(param_1 + 0x16,param_2 + 0x16);
  FUN_140050150(param_1 + 0x19,param_2 + 0x19);
  FUN_14000b9d0(param_1 + 6,param_2[7] - param_2[6] >> 3);
  puVar1 = (undefined8 *)param_1[7];
  puVar2 = (undefined8 *)param_2[6];
  for (puVar10 = (undefined8 *)param_1[6]; puVar10 < puVar1; puVar10 = puVar10 + 1) {
    puVar6 = operator_new(0x2f0);
    FUN_1402809b0(puVar6 + 2);
    *puVar10 = puVar6;
    *puVar6 = *(undefined4 *)*puVar2;
    FUN_140280700();
    puVar2 = puVar2 + 1;
  }
  FUN_14000b9d0(param_1 + 9,param_2[10] - param_2[9] >> 3);
  puVar1 = (undefined8 *)param_1[10];
  puVar2 = (undefined8 *)param_2[9];
  for (puVar10 = (undefined8 *)param_1[9]; puVar10 < puVar1; puVar10 = puVar10 + 1) {
    puVar7 = operator_new(0xe0);
    *(undefined8 *)(puVar7 + 0x10) = 0xf;
    *(undefined8 *)(puVar7 + 0xc) = 0;
    *(undefined1 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 0x24) = 0xf;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(undefined1 *)(puVar7 + 0x18) = 0;
    *(undefined8 *)(puVar7 + 0x34) = 0xf;
    *(undefined8 *)(puVar7 + 0x30) = 0;
    *(undefined1 *)(puVar7 + 0x28) = 0;
    *(undefined8 *)(puVar7 + 0x44) = 0xf;
    *(undefined8 *)(puVar7 + 0x40) = 0;
    *(undefined1 *)(puVar7 + 0x38) = 0;
    *(undefined8 *)(puVar7 + 0x54) = 0xf;
    *(undefined8 *)(puVar7 + 0x50) = 0;
    *(undefined1 *)(puVar7 + 0x48) = 0;
    *(undefined8 *)(puVar7 + 100) = 0xf;
    *(undefined8 *)(puVar7 + 0x60) = 0;
    *(undefined1 *)(puVar7 + 0x58) = 0;
    *puVar7 = 0xffff;
    *(undefined4 *)(puVar7 + 0x14) = 0xffffffff;
    puVar7[0x68] = 0xffff;
    puVar7[0x69] = 0xffff;
    puVar7[0x6a] = 0xffff;
    *(undefined4 *)(puVar7 + 0x6c) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x6e) = 0;
    *puVar10 = puVar7;
    FUN_140284560(puVar7,*puVar2);
    puVar2 = puVar2 + 1;
  }
  *(int *)(param_1 + 0x1c) = (int)param_2[0x1c];
  plVar11 = param_1 + 0x1d;
  lVar13 = (longlong)param_2 - (longlong)param_1;
  lVar9 = 5;
  plVar12 = plVar11;
  do {
    FUN_1402cae10(plVar11,*(longlong *)(lVar13 + 8 + (longlong)plVar12) -
                          *(longlong *)(lVar13 + (longlong)plVar12) >> 3);
    puVar1 = (undefined8 *)plVar12[1];
    puVar2 = *(undefined8 **)(lVar13 + (longlong)plVar12);
    for (puVar10 = (undefined8 *)*plVar12; puVar10 < puVar1; puVar10 = puVar10 + 1) {
      puVar8 = operator_new(0x20);
      *puVar8 = 0xffffffff;
      *(undefined8 *)(puVar8 + 1) = 900;
      *(undefined8 *)(puVar8 + 5) = 0;
      puVar8[7] = 0;
      *puVar10 = puVar8;
      puVar6 = (undefined4 *)*puVar2;
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      puVar8[2] = puVar6[2];
      puVar8[3] = puVar6[3];
      puVar8[4] = puVar6[4];
      puVar8[5] = puVar6[5];
      puVar8[6] = puVar6[6];
      puVar8[7] = puVar6[7];
      puVar2 = puVar2 + 1;
    }
    plVar11 = plVar11 + 3;
    plVar12 = plVar12 + 3;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return;
}

