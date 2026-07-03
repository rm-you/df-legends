// FUN_140ce1e90 @ 140ce1e90
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 1400511c0 FUN_1400511c0
//   -> 140071a80 FUN_140071a80
//   -> 140010e10 FUN_140010e10


int FUN_140ce1e90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  short sVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  int local_res10;
  int local_res18;
  
  uVar14 = 0;
  if ((*(longlong *)(param_1 + 0x11e8) == 0) ||
     (iVar16 = *(int *)(*(longlong *)(param_1 + 0x11e8) + 4), iVar16 == -1)) {
    if (*(int *)(param_1 + 0xc10) == -1) {
      if ((*(int *)(param_1 + 0x1d8) != -1) && (lVar5 = FUN_140010e10(&DAT_141d64d38), lVar5 != 0))
      {
        return *(int *)(lVar5 + 0x1bc);
      }
    }
    else {
      lVar5 = FUN_140ca8390();
      if (lVar5 != 0) {
        plVar13 = *(longlong **)(lVar5 + 0xe8);
        iVar12 = -1;
        local_res18 = 0x7531;
        iVar16 = -1;
        local_res10 = -1;
        uVar10 = (ulonglong)((longlong)*(longlong **)(lVar5 + 0xf0) + (7 - (longlong)plVar13)) >> 3;
        if (*(longlong **)(lVar5 + 0xf0) < plVar13) {
          uVar10 = uVar14;
        }
        uVar17 = uVar14;
        if (uVar10 != 0) {
          do {
            plVar1 = (longlong *)*plVar13;
            sVar3 = (**(code **)*plVar1)(plVar1);
            if (sVar3 == 10) {
              iVar9 = (int)plVar1[1];
              lVar5 = DAT_141c53720 - DAT_141c53718 >> 3;
              if (((lVar5 != 0) && (iVar9 != -1)) &&
                 (iVar11 = (int)lVar5 + -1, uVar15 = uVar14, -1 < iVar11)) {
                do {
                  iVar8 = iVar11 + (int)uVar15 >> 1;
                  lVar5 = *(longlong *)(DAT_141c53718 + (longlong)iVar8 * 8);
                  if (*(int *)(lVar5 + 4) == iVar9) {
                    if (lVar5 != 0) {
                      uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1);
                      lVar6 = FUN_1400511c0(uVar4,lVar5 + 0x1100);
                      iVar12 = local_res10;
                      if (lVar6 != 0) {
                        lVar6 = FUN_140071a80(*(undefined4 *)(lVar6 + 0xc),lVar5 + 0x10b0);
                        if (*(int *)(lVar6 + 0x2d0) < local_res18) {
                          local_res10 = *(int *)(lVar5 + 4);
                          iVar12 = local_res10;
                          local_res18 = *(int *)(lVar6 + 0x2d0);
                        }
                      }
                    }
                    break;
                  }
                  if (iVar9 < *(int *)(lVar5 + 4)) {
                    iVar11 = iVar8 + -1;
                  }
                  else {
                    uVar15 = (ulonglong)(iVar8 + 1);
                  }
                } while ((int)uVar15 <= iVar11);
              }
            }
            else if (sVar3 == 0xd) {
              iVar16 = (int)plVar1[1];
            }
            plVar13 = plVar13 + 1;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar10);
          if (iVar12 != -1) {
            return iVar12;
          }
          if (iVar16 != -1) {
            return iVar16;
          }
        }
      }
    }
    iVar16 = *(int *)(param_1 + 0x14c);
    if ((iVar16 != -1) && (iVar12 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1, -1 < iVar12)) {
      do {
        iVar9 = iVar12 + (int)uVar14 >> 1;
        piVar2 = *(int **)(DAT_141d692e0 + (longlong)iVar9 * 8);
        if (*piVar2 == iVar16) {
          if (piVar2 != (int *)0x0) {
            for (puVar7 = *(undefined8 **)(piVar2 + 4); puVar7 < *(undefined8 **)(piVar2 + 6);
                puVar7 = puVar7 + 1) {
              if ((*(byte *)((int *)*puVar7 + 7) & 2) != 0) {
                return *(int *)*puVar7;
              }
            }
          }
          break;
        }
        if (iVar16 < *piVar2) {
          iVar12 = iVar9 + -1;
        }
        else {
          uVar14 = (ulonglong)(iVar9 + 1);
        }
      } while ((int)uVar14 <= iVar12);
    }
    iVar16 = -1;
  }
  return iVar16;
}

