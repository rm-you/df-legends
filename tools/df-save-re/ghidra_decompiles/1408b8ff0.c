// FUN_1408b8ff0 @ 1408b8ff0
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_1408b8ff0(longlong param_1)

{
  void *pvVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  int local_res8;
  
  plVar8 = (longlong *)(param_1 + 0x758);
  lVar3 = DAT_141d6dbe8 - DAT_141d6dbe0;
  lVar13 = DAT_141d6dd58 - DAT_141d6dd50;
  lVar4 = DAT_141d779c8 - DAT_141d779c0;
  local_res8 = 0;
  do {
    iVar12 = (int)(lVar13 >> 3);
    if (local_res8 == 0) {
LAB_1408b907f:
      iVar10 = (int)(plVar8[-0xea] - plVar8[-0xeb] >> 1) + -1;
      if (-1 < iVar10) {
        lVar9 = (longlong)iVar10 * 4;
        lVar11 = (longlong)iVar10 * 2;
        lVar14 = lVar11;
        lVar15 = lVar9;
        do {
          if (((ushort)(*(short *)(lVar14 + plVar8[-0xeb]) - 0x13U) < 200) &&
             (iVar12 <= *(int *)(lVar9 + plVar8[-0x76]))) {
            pvVar6 = (void *)(lVar11 + plVar8[-0xeb]);
            pvVar1 = (void *)((longlong)pvVar6 + 2);
            memmove(pvVar6,pvVar1,plVar8[-0xea] - (longlong)pvVar1);
            plVar8[-0xea] = plVar8[-0xea] + -2;
            pvVar1 = (void *)(plVar8[-0x76] + lVar15 + 4);
            memmove((void *)(plVar8[-0x76] + lVar15),pvVar1,plVar8[-0x75] - (longlong)pvVar1);
            plVar8[-0x75] = plVar8[-0x75] + -4;
            pvVar1 = (void *)(plVar8[-1] + lVar15 + 4);
            memmove((void *)(plVar8[-1] + lVar15),pvVar1,*plVar8 - (longlong)pvVar1);
            *plVar8 = *plVar8 + -4;
          }
          lVar11 = lVar11 + -2;
          lVar15 = lVar15 + -4;
          lVar14 = lVar14 + -2;
          lVar9 = lVar9 + -4;
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
      }
    }
    else if (0 < local_res8) {
      if (local_res8 < 4) {
        iVar10 = (int)(plVar8[-0xea] - plVar8[-0xeb] >> 1) + -1;
        if (-1 < iVar10) {
          lVar11 = (longlong)iVar10 * 2;
          lVar9 = (longlong)iVar10 * 4;
          lVar14 = lVar11;
          do {
            if (iVar12 <= *(short *)(lVar11 + plVar8[-0xeb])) {
              pvVar6 = (void *)(lVar14 + plVar8[-0xeb]);
              pvVar1 = (void *)((longlong)pvVar6 + 2);
              memmove(pvVar6,pvVar1,plVar8[-0xea] - (longlong)pvVar1);
              plVar8[-0xea] = plVar8[-0xea] + -2;
              pvVar1 = (void *)(plVar8[-0x76] + lVar9 + 4);
              memmove((void *)(plVar8[-0x76] + lVar9),pvVar1,plVar8[-0x75] - (longlong)pvVar1);
              plVar8[-0x75] = plVar8[-0x75] + -4;
              pvVar1 = (void *)(plVar8[-1] + lVar9 + 4);
              memmove((void *)(plVar8[-1] + lVar9),pvVar1,*plVar8 - (longlong)pvVar1);
              *plVar8 = *plVar8 + -4;
            }
            lVar14 = lVar14 + -2;
            lVar9 = lVar9 + -4;
            lVar11 = lVar11 + -2;
            iVar10 = iVar10 + -1;
          } while (-1 < iVar10);
        }
      }
      else if (local_res8 < 0x27) goto LAB_1408b907f;
    }
    local_res8 = local_res8 + 1;
    plVar8 = plVar8 + 3;
  } while (local_res8 < 0x27);
  iVar7 = (int)(*(longlong *)(param_1 + 0x1f98) - *(longlong *)(param_1 + 0x1f90) >> 1) + -1;
  iVar10 = (int)(lVar4 >> 3);
  if (-1 < iVar7) {
    lVar13 = (longlong)iVar7;
    lVar4 = lVar13 * 4;
    lVar9 = lVar13 * 2;
    lVar13 = lVar13 * 8;
    lVar11 = lVar9;
    lVar14 = lVar4;
    do {
      if ((ushort)(*(short *)(*(longlong *)(param_1 + 0x1f90) + lVar9) - 0x13U) < 200) {
        iVar5 = *(int *)(lVar4 + *(longlong *)(param_1 + 0x1fa8));
        bVar16 = SBORROW4(iVar5,iVar12);
        iVar5 = iVar5 - iVar12;
      }
      else {
        iVar5 = *(int *)(lVar4 + *(longlong *)(param_1 + 0x1fc0));
        bVar16 = SBORROW4(iVar5,iVar10);
        iVar5 = iVar5 - iVar10;
      }
      if (bVar16 == iVar5 < 0) {
        pvVar6 = (void *)(*(longlong *)(param_1 + 0x1f90) + lVar11);
        pvVar1 = (void *)((longlong)pvVar6 + 2);
        memmove(pvVar6,pvVar1,*(longlong *)(param_1 + 0x1f98) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x1f98) = *(longlong *)(param_1 + 0x1f98) + -2;
        pvVar6 = (void *)(*(longlong *)(param_1 + 0x1fa8) + lVar14);
        pvVar1 = (void *)((longlong)pvVar6 + 4);
        memmove(pvVar6,pvVar1,*(longlong *)(param_1 + 0x1fb0) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x1fb0) = *(longlong *)(param_1 + 0x1fb0) + -4;
        pvVar6 = (void *)(*(longlong *)(param_1 + 0x1fc0) + lVar14);
        pvVar1 = (void *)((longlong)pvVar6 + 4);
        memmove(pvVar6,pvVar1,*(longlong *)(param_1 + 0x1fc8) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x1fc8) = *(longlong *)(param_1 + 0x1fc8) + -4;
        pvVar6 = (void *)(*(longlong *)(param_1 + 0x1fd8) + lVar13);
        pvVar1 = (void *)((longlong)pvVar6 + 8);
        memmove(pvVar6,pvVar1,*(longlong *)(param_1 + 0x1fe0) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x1fe0) = *(longlong *)(param_1 + 0x1fe0) + -8;
      }
      lVar11 = lVar11 + -2;
      lVar14 = lVar14 + -4;
      lVar13 = lVar13 + -8;
      lVar9 = lVar9 + -2;
      lVar4 = lVar4 + -4;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  iVar7 = (int)(*(longlong *)(param_1 + 0x1ff8) - *(longlong *)(param_1 + 0x1ff0) >> 1) + -1;
  if (-1 < iVar7) {
    lVar13 = (longlong)iVar7;
    lVar4 = lVar13 * 4;
    lVar9 = lVar13 * 2;
    lVar13 = lVar13 * 8;
    lVar11 = lVar9;
    lVar14 = lVar4;
    do {
      sVar2 = *(short *)(lVar9 + *(longlong *)(param_1 + 0x1ff0));
      if (sVar2 == 0) {
        lVar15 = *(longlong *)(param_1 + 0x2008);
        iVar5 = (int)(lVar3 >> 3);
LAB_1408b93e5:
        bVar16 = SBORROW4(*(int *)(lVar4 + lVar15),iVar5);
        iVar5 = *(int *)(lVar4 + lVar15) - iVar5;
      }
      else {
        if (199 < (ushort)(sVar2 - 0x13U)) {
          lVar15 = *(longlong *)(param_1 + 0x2020);
          iVar5 = iVar10;
          goto LAB_1408b93e5;
        }
        iVar5 = *(int *)(lVar4 + *(longlong *)(param_1 + 0x2008));
        bVar16 = SBORROW4(iVar5,iVar12);
        iVar5 = iVar5 - iVar12;
      }
      if (bVar16 == iVar5 < 0) {
        pvVar6 = (void *)(*(longlong *)(param_1 + 0x1ff0) + lVar11);
        pvVar1 = (void *)((longlong)pvVar6 + 2);
        memmove(pvVar6,pvVar1,*(longlong *)(param_1 + 0x1ff8) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x1ff8) = *(longlong *)(param_1 + 0x1ff8) + -2;
        pvVar6 = (void *)(*(longlong *)(param_1 + 0x2008) + lVar14);
        pvVar1 = (void *)((longlong)pvVar6 + 4);
        memmove(pvVar6,pvVar1,*(longlong *)(param_1 + 0x2010) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x2010) = *(longlong *)(param_1 + 0x2010) + -4;
        pvVar6 = (void *)(*(longlong *)(param_1 + 0x2020) + lVar14);
        pvVar1 = (void *)((longlong)pvVar6 + 4);
        memmove(pvVar6,pvVar1,*(longlong *)(param_1 + 0x2028) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x2028) = *(longlong *)(param_1 + 0x2028) + -4;
        pvVar6 = (void *)(*(longlong *)(param_1 + 0x2038) + lVar13);
        pvVar1 = (void *)((longlong)pvVar6 + 8);
        memmove(pvVar6,pvVar1,*(longlong *)(param_1 + 0x2040) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x2040) = *(longlong *)(param_1 + 0x2040) + -8;
      }
      lVar11 = lVar11 + -2;
      lVar14 = lVar14 + -4;
      lVar13 = lVar13 + -8;
      lVar9 = lVar9 + -2;
      lVar4 = lVar4 + -4;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  return;
}

