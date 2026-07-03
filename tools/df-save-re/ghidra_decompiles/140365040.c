// FUN_140365040 @ 140365040
// callees:
//   -> 1401b7eb0 FUN_1401b7eb0
//   -> EXTERNAL:000000e1 memmove
//   -> 14000bfc0 FUN_14000bfc0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140050150 FUN_140050150
//   -> 140364e00 FUN_140364e00


void FUN_140365040(undefined8 *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  FUN_1401b7eb0();
  memmove(param_1 + 0x10,param_2 + 0x10,100);
  FUN_14000bfc0(param_1 + 0x21,param_2 + 0x21);
  FUN_14000b9d0(param_1 + 0x1e,param_2[0x1f] - param_2[0x1e] >> 3);
  puVar9 = (undefined8 *)param_1[0x1f];
  puVar2 = (undefined8 *)param_2[0x1e];
  for (puVar11 = (undefined8 *)param_1[0x1e]; puVar11 < puVar9; puVar11 = puVar11 + 1) {
    puVar3 = operator_new(4);
    *puVar3 = 0xffff;
    puVar3[1] = 0xffff;
    *puVar11 = puVar3;
    puVar1 = (undefined2 *)*puVar2;
    *puVar3 = *puVar1;
    puVar3[1] = puVar1[1];
    puVar2 = puVar2 + 1;
  }
  FUN_14000b9d0(param_1,param_2[1] - *param_2 >> 3);
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)*param_2;
  for (puVar11 = (undefined8 *)*param_1; puVar11 < puVar9; puVar11 = puVar11 + 1) {
    puVar4 = operator_new(8);
    *puVar4 = 0xffffffff;
    puVar4[1] = 0;
    *puVar11 = puVar4;
    puVar6 = (undefined4 *)*puVar2;
    *puVar4 = *puVar6;
    puVar4[1] = puVar6[1];
    puVar2 = puVar2 + 1;
  }
  FUN_14000b9d0(param_1 + 3,param_2[4] - param_2[3] >> 3);
  puVar9 = (undefined8 *)param_1[3];
  uVar10 = 0;
  puVar11 = (undefined8 *)param_2[3];
  uVar13 = (param_1[4] - (longlong)puVar9) + 7U >> 3;
  if ((undefined8 *)param_1[4] < puVar9) {
    uVar13 = uVar10;
  }
  if (uVar13 != 0) {
    do {
      puVar3 = operator_new(4);
      *puVar9 = puVar3;
      uVar10 = uVar10 + 1;
      puVar1 = (undefined2 *)*puVar11;
      puVar11 = puVar11 + 1;
      puVar9 = puVar9 + 1;
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
    } while (uVar10 < uVar13);
  }
  FUN_14000b9d0(param_1 + 6,param_2[7] - param_2[6] >> 3);
  puVar9 = (undefined8 *)param_1[7];
  puVar2 = (undefined8 *)param_2[6];
  for (puVar11 = (undefined8 *)param_1[6]; puVar11 < puVar9; puVar11 = puVar11 + 1) {
    puVar4 = operator_new(0x28);
    *puVar4 = 0xffffffff;
    *(undefined8 *)(puVar4 + 1) = 0;
    puVar4[3] = 0xffffffff;
    puVar4[4] = 0xffffffff;
    *(undefined8 *)(puVar4 + 5) = 0;
    puVar4[7] = 0;
    puVar4[8] = 0xffffffff;
    puVar4[9] = 0xffffffff;
    *puVar11 = puVar4;
    puVar6 = (undefined4 *)*puVar2;
    *puVar4 = *puVar6;
    puVar4[1] = puVar6[1];
    puVar4[2] = puVar6[2];
    puVar4[3] = puVar6[3];
    puVar4[4] = puVar6[4];
    puVar4[5] = puVar6[5];
    puVar4[6] = puVar6[6];
    puVar4[7] = puVar6[7];
    puVar4[8] = puVar6[8];
    puVar4[9] = puVar6[9];
    puVar2 = puVar2 + 1;
  }
  FUN_14000b9d0(param_1 + 9,param_2[10] - param_2[9] >> 3);
  puVar2 = (undefined8 *)param_1[10];
  puVar11 = (undefined8 *)param_2[9];
  for (puVar9 = (undefined8 *)param_1[9]; puVar9 < puVar2; puVar9 = puVar9 + 1) {
    puVar4 = operator_new(0x30);
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[2] = 0xffffffff;
    puVar4[10] = 0;
    *puVar9 = puVar4;
    puVar6 = (undefined4 *)*puVar11;
    *puVar4 = *puVar6;
    puVar4[1] = puVar6[1];
    puVar4[2] = puVar6[2];
    FUN_140050150(puVar4 + 4,puVar6 + 4);
    puVar11 = puVar11 + 1;
    puVar4[10] = puVar6[10];
  }
  lVar12 = 8;
  FUN_14000b9d0(param_1 + 0xd,param_2[0xe] - param_2[0xd] >> 3);
  puVar9 = (undefined8 *)param_1[0xe];
  puVar2 = (undefined8 *)param_2[0xd];
  for (puVar11 = (undefined8 *)param_1[0xd]; puVar11 < puVar9; puVar11 = puVar11 + 1) {
    puVar4 = operator_new(0x18);
    *puVar4 = 0xffffffff;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 0xffffffff;
    puVar4[3] = 0xffffffff;
    puVar4[4] = 0xffffffff;
    puVar4[5] = 0;
    *puVar11 = puVar4;
    puVar6 = (undefined4 *)*puVar2;
    *puVar4 = *puVar6;
    puVar4[1] = puVar6[1];
    puVar4[2] = puVar6[2];
    puVar4[3] = puVar6[3];
    puVar4[4] = puVar6[4];
    puVar4[5] = puVar6[5];
    puVar2 = puVar2 + 1;
  }
  FUN_14000b9d0(param_1 + 0x27,param_2[0x28] - param_2[0x27] >> 3);
  puVar9 = (undefined8 *)param_1[0x28];
  puVar2 = (undefined8 *)param_2[0x27];
  for (puVar11 = (undefined8 *)param_1[0x27]; puVar11 < puVar9; puVar11 = puVar11 + 1) {
    puVar4 = operator_new(0x10);
    puVar4[1] = 0xffffffff;
    puVar4[2] = 0;
    puVar4[3] = 1;
    *puVar11 = puVar4;
    puVar6 = (undefined4 *)*puVar2;
    *puVar4 = *puVar6;
    puVar4[1] = puVar6[1];
    puVar4[2] = puVar6[2];
    puVar4[3] = puVar6[3];
    puVar2 = puVar2 + 1;
  }
  memmove(param_1 + 0x10,param_2 + 0x10,100);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0xe4);
  *(int *)(param_1 + 0x1d) = (int)param_2[0x1d];
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  *(int *)(param_1 + 0x24) = (int)param_2[0x24];
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  *(int *)(param_1 + 0x26) = (int)param_2[0x26];
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x124);
  *(int *)(param_1 + 0x25) = (int)param_2[0x25];
  *(int *)(param_1 + 0x2a) = (int)param_2[0x2a];
  *(int *)(param_1 + 0x30) = (int)param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
  *(int *)(param_1 + 0x2c) = (int)param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
  if (param_2[0x2d] != 0) {
    pvVar5 = operator_new(600);
    lVar7 = (longlong)pvVar5 + 8;
    lVar8 = lVar12;
    do {
      *(undefined4 *)(lVar7 + -8) = 0xffffffff;
      *(undefined8 *)(lVar7 + -4) = 0;
      *(undefined4 *)(lVar7 + 4) = 0xffffffff;
      *(undefined4 *)(lVar7 + 8) = 0xffffffff;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined4 *)(lVar7 + 0x14) = 0xffffffff;
      *(undefined4 *)(lVar7 + 0x18) = 0xffffffff;
      lVar7 = lVar7 + 0x24;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    puVar6 = (undefined4 *)((longlong)pvVar5 + 0x120);
    do {
      *puVar6 = 0xffffffff;
      *(undefined8 *)(puVar6 + 1) = 0;
      puVar6[3] = 0xffffffff;
      puVar6[4] = 0xffffffff;
      *(undefined8 *)(puVar6 + 5) = 0;
      puVar6[7] = 0xffffffff;
      puVar6[8] = 0xffffffff;
      puVar6 = puVar6 + 9;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *(undefined8 *)((longlong)pvVar5 + 0x240) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x248) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x250) = 0;
    param_1[0x2d] = pvVar5;
    FUN_140364e00(pvVar5,param_2[0x2d]);
  }
  *(int *)(param_1 + 0x2e) = (int)param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)((longlong)param_2 + 0x174);
  *(int *)(param_1 + 0x2f) = (int)param_2[0x2f];
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)((longlong)param_2 + 0x17c);
  return;
}

