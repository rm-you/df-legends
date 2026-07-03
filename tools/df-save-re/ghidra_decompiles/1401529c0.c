// FUN_1401529c0 @ 1401529c0
// callees:


void FUN_1401529c0(uint *param_1,short param_2,short param_3,char param_4)

{
  undefined2 *puVar1;
  uint *puVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  longlong lVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  longlong lVar15;
  
  lVar15 = (longlong)param_2 * 0x10 + (longlong)param_3;
  puVar1 = (undefined2 *)((longlong)param_1 + lVar15 * 2 + 0x1594);
  *puVar1 = 12000;
  lVar15 = lVar15 * 2 + 0x1794;
  *(undefined2 *)(lVar15 + (longlong)param_1) = 12000;
  uVar7 = param_2 - 1;
  *param_1 = *param_1 | 2;
  puVar2 = (uint *)(DAT_141d6cf68 + (longlong)(short)param_1[0x23] * 4);
  *puVar2 = *puVar2 | 5;
  sVar9 = (short)param_1[0x22] >> 4;
  sVar8 = *(short *)((longlong)param_1 + 0x8a) >> 4;
  if ((int)(short)uVar7 <= param_2 + 1) {
    do {
      uVar11 = (uint)(short)(param_3 - 1U);
      uVar14 = param_3 - 1U;
      uVar4 = uVar11;
      while ((int)uVar4 <= param_3 + 1) {
        sVar10 = (short)uVar11;
        if ((uVar7 < 0x10) && (uVar14 < 0x10)) {
          lVar6 = (longlong)(short)uVar7 * 0x10 + (longlong)sVar10;
          if ((*(ushort *)((longlong)param_1 + lVar6 * 2 + 0x1794) < 0x275b) &&
             (*(undefined2 *)((longlong)param_1 + lVar6 * 2 + 0x1794) = 0x275b, param_4 != '\0')) {
            *(undefined2 *)((longlong)param_1 + lVar6 * 2 + 0x1594) = 0x275b;
          }
        }
        else {
          if ((short)uVar7 < 0) {
            sVar3 = sVar9 + -1;
            uVar13 = 0xf;
          }
          else {
            sVar3 = sVar9;
            uVar13 = uVar7;
            if (0xf < (short)uVar7) {
              sVar3 = sVar9 + 1;
              uVar13 = 0;
            }
          }
          if (sVar10 < 0) {
            sVar5 = sVar8 + -1;
            sVar12 = 0xf;
          }
          else {
            sVar5 = sVar8;
            sVar12 = sVar10;
            if (0xf < sVar10) {
              sVar5 = sVar8 + 1;
              sVar12 = 0;
            }
          }
          if ((((-1 < sVar3) && (sVar3 < DAT_141d69548)) && (-1 < sVar5)) &&
             (((sVar5 < DAT_141d6954c &&
               (puVar2 = *(uint **)(*(longlong *)
                                     (*(longlong *)(DAT_141d69520 + (longlong)sVar3 * 8) +
                                     (longlong)sVar5 * 8) + (longlong)(short)param_1[0x23] * 8),
               puVar2 != (uint *)0x0)) &&
              (lVar6 = (longlong)sVar12 + (longlong)(short)uVar13 * 0x10,
              *(ushort *)((longlong)puVar2 + lVar6 * 2 + 0x1794) < 0x275b)))) {
            *(undefined2 *)((longlong)puVar2 + lVar6 * 2 + 0x1794) = 0x275b;
            if (param_4 == '\0') {
              *puVar2 = *puVar2 | 2;
              puVar2 = (uint *)(DAT_141d6cf68 + (longlong)(short)puVar2[0x23] * 4);
              *puVar2 = *puVar2 | 5;
            }
            else {
              *(undefined2 *)((longlong)param_1 + lVar6 * 2 + 0x1594) = 0x275b;
            }
          }
        }
        uVar11 = (uint)(ushort)(sVar10 + 1U);
        uVar14 = uVar14 + 1;
        uVar4 = (uint)(short)(sVar10 + 1U);
      }
      uVar7 = uVar7 + 1;
    } while ((int)(short)uVar7 <= param_2 + 1);
  }
  if (((0 < (short)param_1[0x23]) &&
      (puVar2 = *(uint **)(*(longlong *)
                            (*(longlong *)(DAT_141d69520 + (longlong)sVar9 * 8) +
                            (longlong)sVar8 * 8) + (longlong)((short)param_1[0x23] + -1) * 8),
      puVar2 != (uint *)0x0)) && (*(ushort *)(lVar15 + (longlong)puVar2) < 0x275b)) {
    *(undefined2 *)(lVar15 + (longlong)puVar2) = 0x275b;
    if (param_4 == '\0') {
      *puVar2 = *puVar2 | 2;
      puVar2 = (uint *)(DAT_141d6cf68 + (longlong)(short)puVar2[0x23] * 4);
      *puVar2 = *puVar2 | 5;
    }
    else {
      *puVar1 = 0x275b;
    }
  }
  if ((((int)(short)param_1[0x23] < DAT_141d69550 + -1) &&
      (puVar2 = *(uint **)(*(longlong *)
                            (*(longlong *)(DAT_141d69520 + (longlong)sVar9 * 8) +
                            (longlong)sVar8 * 8) + (longlong)((short)param_1[0x23] + 1) * 8),
      puVar2 != (uint *)0x0)) && (*(ushort *)(lVar15 + (longlong)puVar2) < 0x275b)) {
    *(undefined2 *)(lVar15 + (longlong)puVar2) = 0x275b;
    if (param_4 != '\0') {
      *puVar1 = 0x275b;
      return;
    }
    *puVar2 = *puVar2 | 2;
    puVar2 = (uint *)(DAT_141d6cf68 + (longlong)(short)puVar2[0x23] * 4);
    *puVar2 = *puVar2 | 5;
  }
  return;
}

