// FUN_140157f80 @ 140157f80
// callees:
//   -> 140dfc99c memset
//   -> 140d2cb70 FUN_140d2cb70


void FUN_140157f80(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  short *psVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  short *psVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  byte bVar20;
  char local_res10;
  char local_res18;
  int local_70;
  int local_6c;
  
  if (DAT_141ebec54 < 2000000000) {
    if (DAT_141ebec58 == '\0') {
      DAT_141ebec54 = DAT_141ebec54 + 0x1312d0;
      goto LAB_14015803e;
    }
  }
  else {
    DAT_141ebec58 = '\x01';
  }
  iVar9 = (int)(DAT_141d69510 - DAT_141d69508 >> 3) + -1;
  lVar13 = (longlong)iVar9;
  if (-1 < iVar9) {
    do {
      memset((void *)(*(longlong *)(DAT_141d69508 + lVar13 * 8) + 0xb94),0,0x400);
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  DAT_141ebec54 = 1;
  DAT_141ebec58 = '\0';
LAB_14015803e:
  DAT_1416b1990 = *(short *)(param_1 + 0x88) >> 4;
  DAT_1416b1992 = *(short *)(param_1 + 0x8a) >> 4;
  DAT_1416b1994 = *(undefined2 *)(param_1 + 0x8c);
  local_res10 = '\0';
  local_res18 = '\x01';
  local_6c = 1;
  iVar9 = DAT_141ebec54;
  DAT_1416b1996 = param_2;
  DAT_1416b1998 = param_3;
  do {
    iVar19 = 0;
    psVar10 = &DAT_1416b1990 + (longlong)local_res10 * 720000;
    local_70 = 0;
    psVar14 = &DAT_1416b1990 + (longlong)local_res18 * 720000;
    if (0 < local_6c) {
      do {
        sVar2 = *psVar10;
        sVar3 = psVar10[1];
        sVar4 = psVar10[2];
        lVar13 = (longlong)sVar3 * 8;
        sVar5 = psVar10[3];
        lVar18 = (longlong)sVar2 * 8;
        sVar6 = psVar10[4];
        psVar10 = psVar10 + 6;
        lVar12 = (longlong)sVar4 * 8;
        lVar17 = *(longlong *)
                  (lVar12 + *(longlong *)(*(longlong *)(DAT_141d69520 + lVar18) + lVar13));
        if (*(short *)(param_1 + 0x8c) <= sVar4) {
          puVar1 = (uint *)(lVar17 + 0x294 + ((longlong)sVar5 * 0x10 + (longlong)sVar6) * 4);
          *puVar1 = *puVar1 & 0xf7ffffff;
          iVar9 = DAT_141ebec54;
        }
        if (sVar5 < 1) {
          if ((0 < sVar2) &&
             (lVar11 = *(longlong *)
                        (lVar12 + *(longlong *)
                                   (*(longlong *)(DAT_141d69520 + (longlong)(sVar2 + -1) * 8) +
                                   lVar13)), lVar11 != 0)) {
            lVar16 = (longlong)sVar6;
            uVar7 = *(uint *)(lVar11 + 0x654 + lVar16 * 4);
            bVar20 = (uVar7 & 1) != 0;
            if ((uVar7 & 2) != 0) {
              bVar20 = bVar20 | 2;
            }
            if ((uVar7 & 4) != 0) {
              bVar20 = bVar20 | 4;
            }
            if ((bVar20 != 0) && (*(int *)(lVar11 + 0xf54 + lVar16 * 4) < iVar9)) {
              *(int *)(lVar11 + 0xf54 + lVar16 * 4) = iVar9;
              *psVar14 = sVar2 + -1;
              psVar14[1] = sVar3;
              psVar14[2] = sVar4;
              psVar14[3] = 0xf;
              goto LAB_140158271;
            }
          }
        }
        else {
          uVar7 = *(uint *)(lVar17 + 0x294 +
                           ((longlong)(short)(sVar5 + -1) * 0x10 + (longlong)sVar6) * 4);
          bVar20 = (uVar7 & 1) != 0;
          if ((uVar7 & 2) != 0) {
            bVar20 = bVar20 | 2;
          }
          if ((uVar7 & 4) != 0) {
            bVar20 = bVar20 | 4;
          }
          if ((bVar20 != 0) &&
             (lVar11 = (longlong)(sVar5 + -1) * 0x10 + (longlong)sVar6,
             *(int *)(lVar17 + 0xb94 + lVar11 * 4) < iVar9)) {
            *(int *)(lVar17 + 0xb94 + lVar11 * 4) = iVar9;
            *psVar14 = sVar2;
            psVar14[1] = sVar3;
            psVar14[2] = sVar4;
            psVar14[3] = sVar5 + -1;
LAB_140158271:
            iVar9 = DAT_141ebec54;
            psVar14[4] = sVar6;
            psVar14 = psVar14 + 6;
            iVar19 = iVar19 + 1;
          }
        }
        if (sVar5 < 0xf) {
          uVar7 = *(uint *)(lVar17 + 0x294 +
                           ((longlong)(short)(sVar5 + 1) * 0x10 + (longlong)sVar6) * 4);
          bVar20 = (uVar7 & 1) != 0;
          if ((uVar7 & 2) != 0) {
            bVar20 = bVar20 | 2;
          }
          if ((uVar7 & 4) != 0) {
            bVar20 = bVar20 | 4;
          }
          if ((bVar20 != 0) &&
             (lVar11 = (longlong)(sVar5 + 1) * 0x10 + (longlong)sVar6,
             *(int *)(lVar17 + 0xb94 + lVar11 * 4) < iVar9)) {
            *(int *)(lVar17 + 0xb94 + lVar11 * 4) = iVar9;
            *psVar14 = sVar2;
            psVar14[1] = sVar3;
            psVar14[2] = sVar4;
            psVar14[3] = sVar5 + 1;
LAB_14015838f:
            iVar9 = DAT_141ebec54;
            psVar14[4] = sVar6;
            psVar14 = psVar14 + 6;
            iVar19 = iVar19 + 1;
          }
        }
        else if (((int)sVar2 < DAT_141d69548 + -1) &&
                (lVar11 = *(longlong *)
                           (lVar12 + *(longlong *)
                                      (*(longlong *)(DAT_141d69520 + (longlong)(sVar2 + 1) * 8) +
                                      lVar13)), lVar11 != 0)) {
          lVar16 = (longlong)sVar6;
          uVar7 = *(uint *)(lVar11 + 0x294 + lVar16 * 4);
          bVar20 = (uVar7 & 1) != 0;
          if ((uVar7 & 2) != 0) {
            bVar20 = bVar20 | 2;
          }
          if ((uVar7 & 4) != 0) {
            bVar20 = bVar20 | 4;
          }
          if ((bVar20 != 0) && (*(int *)(lVar11 + 0xb94 + lVar16 * 4) < iVar9)) {
            *(int *)(lVar11 + 0xb94 + lVar16 * 4) = iVar9;
            *psVar14 = sVar2 + 1;
            psVar14[1] = sVar3;
            psVar14[2] = sVar4;
            psVar14[3] = 0;
            goto LAB_14015838f;
          }
        }
        if (sVar6 < 1) {
          if ((0 < sVar3) &&
             (lVar11 = *(longlong *)
                        (lVar12 + *(longlong *)
                                   (*(longlong *)(DAT_141d69520 + lVar18) +
                                   (longlong)(sVar3 + -1) * 8)), lVar11 != 0)) {
            lVar11 = (longlong)sVar5 * 0x40 + lVar11;
            uVar7 = *(uint *)(lVar11 + 0x2d0);
            bVar20 = (uVar7 & 1) != 0;
            if ((uVar7 & 2) != 0) {
              bVar20 = bVar20 | 2;
            }
            if ((uVar7 & 4) != 0) {
              bVar20 = bVar20 | 4;
            }
            if ((bVar20 != 0) && (*(int *)(lVar11 + 0xbd0) < iVar9)) {
              *(int *)(lVar11 + 0xbd0) = iVar9;
              *psVar14 = sVar2;
              psVar14[1] = sVar3 + -1;
              psVar14[2] = sVar4;
              psVar14[3] = sVar5;
              psVar14[4] = 0xf;
              goto LAB_1401584b3;
            }
          }
        }
        else {
          uVar7 = *(uint *)(lVar17 + 0x294 +
                           ((longlong)(short)(sVar6 + -1) + (longlong)sVar5 * 0x10) * 4);
          bVar20 = (uVar7 & 1) != 0;
          if ((uVar7 & 2) != 0) {
            bVar20 = bVar20 | 2;
          }
          if ((uVar7 & 4) != 0) {
            bVar20 = bVar20 | 4;
          }
          if ((bVar20 != 0) &&
             (lVar11 = (longlong)(sVar6 + -1) + (longlong)sVar5 * 0x10,
             *(int *)(lVar17 + 0xb94 + lVar11 * 4) < iVar9)) {
            *(int *)(lVar17 + 0xb94 + lVar11 * 4) = iVar9;
            *psVar14 = sVar2;
            psVar14[1] = sVar3;
            psVar14[2] = sVar4;
            psVar14[3] = sVar5;
            psVar14[4] = sVar6 + -1;
LAB_1401584b3:
            psVar14 = psVar14 + 6;
            iVar19 = iVar19 + 1;
            iVar9 = DAT_141ebec54;
          }
        }
        if (sVar6 < 0xf) {
          uVar7 = *(uint *)(lVar17 + 0x294 +
                           ((longlong)(short)(sVar6 + 1) + (longlong)sVar5 * 0x10) * 4);
          bVar20 = (uVar7 & 1) != 0;
          if ((uVar7 & 2) != 0) {
            bVar20 = bVar20 | 2;
          }
          if ((uVar7 & 4) != 0) {
            bVar20 = bVar20 | 4;
          }
          if ((bVar20 != 0) &&
             (lVar12 = (longlong)(sVar6 + 1) + (longlong)sVar5 * 0x10,
             *(int *)(lVar17 + 0xb94 + lVar12 * 4) < iVar9)) {
            *(int *)(lVar17 + 0xb94 + lVar12 * 4) = iVar9;
            *psVar14 = sVar2;
            psVar14[1] = sVar3;
            psVar14[2] = sVar4;
            psVar14[3] = sVar5;
            psVar14[4] = sVar6 + 1;
LAB_1401585e1:
            psVar14 = psVar14 + 6;
            iVar19 = iVar19 + 1;
            iVar9 = DAT_141ebec54;
          }
        }
        else if (((int)sVar3 < DAT_141d6954c + -1) &&
                (lVar12 = *(longlong *)
                           (lVar12 + *(longlong *)
                                      (*(longlong *)(DAT_141d69520 + lVar18) +
                                      (longlong)(sVar3 + 1) * 8)), lVar12 != 0)) {
          lVar12 = (longlong)sVar5 * 0x40 + lVar12;
          uVar7 = *(uint *)(lVar12 + 0x294);
          bVar20 = (uVar7 & 1) != 0;
          if ((uVar7 & 2) != 0) {
            bVar20 = bVar20 | 2;
          }
          if ((uVar7 & 4) != 0) {
            bVar20 = bVar20 | 4;
          }
          if ((bVar20 != 0) && (*(int *)(lVar12 + 0xb94) < iVar9)) {
            *(int *)(lVar12 + 0xb94) = iVar9;
            *psVar14 = sVar2;
            psVar14[1] = sVar3 + 1;
            psVar14[2] = sVar4;
            psVar14[3] = sVar5;
            psVar14[4] = 0;
            goto LAB_1401585e1;
          }
        }
        iVar15 = (int)sVar4;
        if ((iVar15 < DAT_141d69550 + -1) &&
           (lVar12 = *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar18 + DAT_141d69520) + lVar13) +
                      (longlong)(iVar15 + 1) * 8), lVar12 != 0)) {
          lVar17 = (longlong)sVar5 * 0x10 + (longlong)sVar6;
          uVar7 = *(uint *)(lVar12 + 0x294 + lVar17 * 4);
          bVar20 = (uVar7 & 1) != 0;
          if ((uVar7 & 2) != 0) {
            bVar20 = bVar20 | 2;
          }
          if ((uVar7 & 4) != 0) {
            bVar20 = bVar20 | 4;
          }
          if ((bVar20 != 0) && (lVar17 = lVar17 + 0x2e5, *(int *)(lVar12 + lVar17 * 4) < iVar9)) {
            cVar8 = FUN_140d2cb70(&DAT_141c53470,*(short *)(lVar12 + 0x88) + sVar5,
                                  *(short *)(lVar12 + 0x8a) + sVar6,sVar4 + 1,1,1,1,0,0);
            iVar9 = DAT_141ebec54;
            if (cVar8 != '\0') {
              *(int *)(lVar12 + lVar17 * 4) = DAT_141ebec54;
              iVar9 = DAT_141ebec54;
              *psVar14 = sVar2;
              psVar14[1] = sVar3;
              psVar14[2] = sVar4 + 1;
              psVar14[3] = sVar5;
              psVar14[4] = sVar6;
              psVar14 = psVar14 + 6;
              iVar19 = iVar19 + 1;
            }
          }
        }
        if ((0 < sVar4) &&
           (lVar13 = *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar18 + DAT_141d69520) + lVar13) +
                      (longlong)(iVar15 + -1) * 8), lVar13 != 0)) {
          lVar18 = (longlong)sVar5 * 0x10 + (longlong)sVar6;
          uVar7 = *(uint *)(lVar13 + 0x294 + lVar18 * 4);
          bVar20 = (uVar7 & 1) != 0;
          if ((uVar7 & 2) != 0) {
            bVar20 = bVar20 | 2;
          }
          if ((uVar7 & 4) != 0) {
            bVar20 = bVar20 | 4;
          }
          if (((bVar20 != 0) && (lVar18 = lVar13 + lVar18 * 4, *(int *)(lVar18 + 0xb94) < iVar9)) &&
             (cVar8 = FUN_140d2cb70(&DAT_141c53470,*(short *)(lVar13 + 0x88) + sVar5,
                                    *(short *)(lVar13 + 0x8a) + sVar6,sVar4,1,1,1,0,0),
             iVar9 = DAT_141ebec54, cVar8 != '\0')) {
            *(int *)(lVar18 + 0xb94) = DAT_141ebec54;
            *psVar14 = sVar2;
            psVar14[1] = sVar3;
            psVar14[2] = sVar4 + -1;
            psVar14[3] = sVar5;
            psVar14[4] = sVar6;
            psVar14 = psVar14 + 6;
            iVar19 = iVar19 + 1;
            iVar9 = DAT_141ebec54;
          }
        }
        local_70 = local_70 + 1;
      } while (local_70 < local_6c);
    }
    local_res10 = '\x01' - local_res10;
    local_res18 = '\x01' - local_res18;
    local_6c = iVar19;
    if (iVar19 < 1) {
      return;
    }
  } while( true );
}

