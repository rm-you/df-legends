// FUN_1400983f0 @ 1400983f0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 14007f1b0 FUN_14007f1b0
//   -> 140002380 FUN_140002380
//   -> 14000bd10 FUN_14000bd10
//   -> 140c0bdb0 FUN_140c0bdb0
//   -> 14007bc80 FUN_14007bc80


void FUN_1400983f0(longlong param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,2);
  FUN_1405bba90(param_2,param_1 + 6,2);
  FUN_1405bba90(param_2,param_1 + 8,2);
  FUN_1405bba90(param_2,param_1 + 10,2);
  FUN_1405bba90(param_2,param_1 + 0xc,2);
  FUN_1405bba90(param_2,param_1 + 0xe,2);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x20,(longlong)local_res18[0]);
  uVar12 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  for (puVar6 = *(undefined8 **)(param_1 + 0x20); puVar6 < puVar2; puVar6 = puVar6 + 1) {
    puVar4 = operator_new(0x68);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x12) = 0;
    *(undefined8 *)(puVar4 + 0x14) = 0;
    *puVar4 = 0xffffffff;
    *(undefined8 *)(puVar4 + 1) = 0;
    *(undefined8 *)(puVar4 + 3) = 0;
    *(undefined8 *)(puVar4 + 5) = 0;
    puVar4[7] = 0xfff0bdc0;
    puVar4[8] = 0xfff0bdc0;
    puVar4[9] = 0xfff0bdc0;
    *(undefined8 *)(puVar4 + 10) = 0;
    *(undefined8 *)(puVar4 + 0xc) = 100;
    puVar4[0xe] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0xffffffff;
    puVar4[0x18] = 0x10;
    *puVar6 = puVar4;
    FUN_14007f1b0(puVar4,param_2,param_4);
  }
  FUN_1405bba90(param_2,param_1 + 0x10,2);
  FUN_1405bba90(param_2,param_1 + 0x5c,4);
  FUN_140002380(param_1 + 0x68,param_2);
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 0x78,(longlong)local_res20[0]);
  uVar9 = *(ulonglong *)(param_1 + 0x80);
  for (uVar7 = *(ulonglong *)(param_1 + 0x78); uVar7 < uVar9; uVar7 = uVar7 + 4) {
    FUN_1405bba90(param_2,uVar7,4);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 0x90,(longlong)local_res20[0]);
  uVar9 = *(ulonglong *)(param_1 + 0x98);
  for (uVar7 = *(ulonglong *)(param_1 + 0x90); uVar7 < uVar9; uVar7 = uVar7 + 4) {
    FUN_1405bba90(param_2,uVar7,4);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 0xa8,(longlong)local_res20[0]);
  uVar9 = *(ulonglong *)(param_1 + 0xb0);
  for (uVar7 = *(ulonglong *)(param_1 + 0xa8); uVar7 < uVar9; uVar7 = uVar7 + 4) {
    FUN_1405bba90(param_2,uVar7,4);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 0xc0,(longlong)local_res20[0]);
  uVar9 = *(ulonglong *)(param_1 + 200);
  for (uVar7 = *(ulonglong *)(param_1 + 0xc0); uVar7 < uVar9; uVar7 = uVar7 + 4) {
    FUN_1405bba90(param_2,uVar7,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0xd8,4);
  FUN_1405bba90(param_2,param_1 + 0xdc,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x38,(longlong)local_res18[0]);
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  for (puVar6 = *(undefined8 **)(param_1 + 0x38); puVar6 < puVar2; puVar6 = puVar6 + 1) {
    puVar4 = operator_new(0x2c);
    *(undefined8 *)(puVar4 + 1) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 3) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 5) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 7) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 9) = 0xffffffffffffffff;
    *puVar4 = 0;
    *puVar6 = puVar4;
    FUN_1405bba90(param_2,puVar4,4);
    FUN_140c0bdb0(puVar4 + 1,param_2);
  }
  FUN_1405bba90(param_2,param_1 + 0xe0,4);
  FUN_1405bba90(param_2,param_1 + 0x50,4);
  if (0x632 < param_4) {
    FUN_1405bba90(param_2,param_1 + 0x54,4);
  }
  FUN_1405bba90(param_2,param_1 + 0xe4,4);
  FUN_1405bba90(param_2,param_1 + 0xec,4);
  FUN_1405bba90(param_2,param_1 + 0xe8,4);
  FUN_14007bc80(param_1 + 0xf0,param_2);
  FUN_14007bc80(param_1 + 0x108,param_2);
  if (0x69d < param_4) {
    FUN_1405bba90(param_2,param_1 + 0x58,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x120,2);
  FUN_1405bba90(param_2,param_1 + 0x122,2);
  FUN_1405bba90(param_2,param_1 + 0x124,2);
  FUN_1405bba90(param_2,param_1 + 0x128,4);
  if (0x648 < param_4) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000b9d0(param_1 + 0x130,(longlong)local_res18[0]);
    puVar8 = *(ulonglong **)(param_1 + 0x130);
    uVar9 = (ulonglong)((longlong)*(ulonglong **)(param_1 + 0x138) + (7 - (longlong)puVar8)) >> 3;
    if (*(ulonglong **)(param_1 + 0x138) < puVar8) {
      uVar9 = uVar12;
    }
    uVar7 = uVar12;
    if (uVar9 != 0) {
      do {
        FUN_1405bba90(param_2,local_res18,4);
        iVar5 = (int)(DAT_141c67370 - DAT_141c67368 >> 3);
        uVar11 = uVar12;
        if (((iVar5 != 0) && (local_res18[0] != -1)) && (iVar5 = iVar5 + -1, iVar10 = 0, -1 < iVar5)
           ) {
          do {
            iVar3 = iVar10 + iVar5 >> 1;
            uVar11 = *(ulonglong *)(DAT_141c67368 + (longlong)iVar3 * 8);
            iVar1 = *(int *)(uVar11 + 0x1c);
            if (iVar1 == local_res18[0]) break;
            if (local_res18[0] < iVar1) {
              iVar5 = iVar3 + -1;
            }
            else {
              iVar10 = iVar3 + 1;
            }
            uVar11 = uVar12;
          } while (iVar10 <= iVar5);
        }
        *puVar8 = uVar11;
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar7 < uVar9);
    }
  }
  return;
}

