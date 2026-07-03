// FUN_1405af830 @ 1405af830
// callees:


void FUN_1405af830(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  piVar2 = *(int **)(param_1 + 0x2c0);
  uVar13 = 0;
  lVar12 = DAT_141d64d98;
  for (piVar10 = *(int **)(param_1 + 0x2b8); piVar10 < piVar2; piVar10 = piVar10 + 1) {
    iVar1 = *piVar10;
    lVar5 = DAT_141d64da0 - lVar12 >> 3;
    if (((lVar5 != 0) && (iVar1 != -1)) && (iVar7 = (int)lVar5 + -1, iVar11 = 0, -1 < iVar7)) {
      do {
        iVar6 = iVar11 + iVar7 >> 1;
        piVar3 = *(int **)(lVar12 + (longlong)iVar6 * 8);
        if (*piVar3 == iVar1) {
          if (piVar3 != (int *)0x0) {
            plVar8 = *(longlong **)(piVar3 + 2);
            uVar14 = (*(longlong *)(piVar3 + 4) - (longlong)plVar8) + 7U >> 3;
            if (*(longlong **)(piVar3 + 4) < plVar8) {
              uVar14 = uVar13;
            }
            uVar9 = uVar13;
            if (uVar14 != 0) {
              do {
                plVar4 = (longlong *)*plVar8;
                if ((*(byte *)((longlong)plVar4 + 0x14) & 1) == 0) {
                  (**(code **)(*plVar4 + 0x50))
                            (plVar4,*(undefined4 *)(param_1 + 0xc10),
                             *(undefined4 *)(param_1 + 0x130),0);
                }
                plVar8 = plVar8 + 1;
                uVar9 = uVar9 + 1;
                lVar12 = DAT_141d64d98;
              } while (uVar9 < uVar14);
            }
          }
          break;
        }
        if (iVar1 < *piVar3) {
          iVar7 = iVar6 + -1;
        }
        else {
          iVar11 = iVar6 + 1;
        }
      } while (iVar11 <= iVar7);
    }
  }
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x2b8);
  piVar2 = *(int **)(param_1 + 0x2a8);
  piVar10 = *(int **)(param_1 + 0x2a0);
  lVar12 = DAT_141d64d98;
  do {
    if (piVar2 <= piVar10) {
      *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x2a0);
      return;
    }
    iVar1 = *piVar10;
    lVar5 = DAT_141d64da0 - lVar12 >> 3;
    if (((lVar5 != 0) && (iVar1 != -1)) && (iVar7 = (int)lVar5 + -1, iVar11 = 0, -1 < iVar7)) {
      do {
        iVar6 = iVar11 + iVar7 >> 1;
        piVar3 = *(int **)(lVar12 + (longlong)iVar6 * 8);
        if (*piVar3 == iVar1) {
          if (piVar3 != (int *)0x0) {
            plVar8 = *(longlong **)(piVar3 + 2);
            uVar14 = (*(longlong *)(piVar3 + 4) - (longlong)plVar8) + 7U >> 3;
            if (*(longlong **)(piVar3 + 4) < plVar8) {
              uVar14 = uVar13;
            }
            uVar9 = uVar13;
            if (uVar14 != 0) {
              do {
                plVar4 = (longlong *)*plVar8;
                if ((*(byte *)((longlong)plVar4 + 0x14) & 1) == 0) {
                  (**(code **)(*plVar4 + 0x50))
                            (plVar4,*(undefined4 *)(param_1 + 0xc10),
                             *(undefined4 *)(param_1 + 0x130),0);
                }
                plVar8 = plVar8 + 1;
                uVar9 = uVar9 + 1;
                lVar12 = DAT_141d64d98;
              } while (uVar9 < uVar14);
            }
          }
          break;
        }
        if (iVar1 < *piVar3) {
          iVar7 = iVar6 + -1;
        }
        else {
          iVar11 = iVar6 + 1;
        }
      } while (iVar11 <= iVar7);
    }
    piVar10 = piVar10 + 1;
  } while( true );
}

