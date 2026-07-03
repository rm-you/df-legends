// FUN_140364e00 @ 140364e00
// callees:
//   -> 1401b7b90 FUN_1401b7b90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new


void FUN_140364e00(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  FUN_1401b7b90();
  puVar4 = (undefined4 *)(param_1 + 4);
  lVar7 = 8;
  lVar9 = param_2 - param_1;
  lVar6 = 8;
  do {
    puVar4[-1] = *(undefined4 *)(lVar9 + -4 + (longlong)puVar4);
    *puVar4 = *(undefined4 *)(lVar9 + (longlong)puVar4);
    puVar4[1] = *(undefined4 *)(lVar9 + 4 + (longlong)puVar4);
    puVar4[2] = *(undefined4 *)(lVar9 + 8 + (longlong)puVar4);
    puVar4[3] = *(undefined4 *)(lVar9 + 0xc + (longlong)puVar4);
    puVar4[4] = *(undefined4 *)(lVar9 + 0x10 + (longlong)puVar4);
    puVar4[5] = *(undefined4 *)(lVar9 + 0x14 + (longlong)puVar4);
    puVar4[6] = *(undefined4 *)(lVar9 + 0x18 + (longlong)puVar4);
    puVar4[7] = *(undefined4 *)(lVar9 + 0x1c + (longlong)puVar4);
    puVar4 = puVar4 + 9;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar4 = (undefined4 *)(param_1 + 0x124);
  do {
    puVar4[-1] = *(undefined4 *)((longlong)puVar4 + lVar9 + -4);
    *puVar4 = *(undefined4 *)((longlong)puVar4 + lVar9);
    puVar4[1] = *(undefined4 *)((longlong)puVar4 + lVar9 + 4);
    puVar4[2] = *(undefined4 *)((longlong)puVar4 + lVar9 + 8);
    puVar4[3] = *(undefined4 *)((longlong)puVar4 + lVar9 + 0xc);
    puVar4[4] = *(undefined4 *)((longlong)puVar4 + lVar9 + 0x10);
    puVar4[5] = *(undefined4 *)((longlong)puVar4 + lVar9 + 0x14);
    puVar4[6] = *(undefined4 *)((longlong)puVar4 + lVar9 + 0x18);
    puVar4[7] = *(undefined4 *)((longlong)puVar4 + lVar9 + 0x1c);
    puVar4 = puVar4 + 9;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar3 = (int)(*(longlong *)(param_2 + 0x248) - *(longlong *)(param_2 + 0x240) >> 3);
  if (0 < iVar3) {
    FUN_14000b9d0(param_1 + 0x240,(longlong)iVar3);
    puVar1 = *(undefined8 **)(param_1 + 0x248);
    puVar2 = *(undefined8 **)(param_2 + 0x240);
    for (puVar8 = *(undefined8 **)(param_1 + 0x240); puVar8 < puVar1; puVar8 = puVar8 + 1) {
      puVar5 = operator_new(0x3c);
      *puVar5 = 0xffffffff;
      *(undefined8 *)(puVar5 + 1) = 0;
      *(undefined8 *)(puVar5 + 3) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 5) = 0;
      *(undefined8 *)(puVar5 + 7) = 0xffffffffffffffff;
      puVar5[9] = 0xffffffff;
      puVar5[0xc] = 0xffffffff;
      *puVar8 = puVar5;
      puVar4 = (undefined4 *)*puVar2;
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar5[3] = puVar4[3];
      puVar5[4] = puVar4[4];
      puVar5[5] = puVar4[5];
      puVar5[6] = puVar4[6];
      puVar5[7] = puVar4[7];
      puVar5[8] = puVar4[8];
      puVar5[9] = puVar4[9];
      puVar5[10] = puVar4[10];
      puVar5[0xb] = puVar4[0xb];
      puVar5[0xc] = puVar4[0xc];
      puVar5[0xd] = puVar4[0xd];
      puVar5[0xe] = puVar4[0xe];
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

