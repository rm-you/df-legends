// FUN_1407b8ef0 @ 1407b8ef0
// callees:


void FUN_1407b8ef0(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  short sVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if ((*(byte *)((longlong)param_2 + 0x1b4) & 1) == 0) {
    uVar11 = 0;
    *param_2 = 0;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0x130) + 0x18);
      uVar3 = uVar11;
      if (uVar10 != 0) {
        uVar3 = uVar10;
      }
      *param_2 = uVar3;
    }
    if ((*(longlong *)(param_1 + 0x130) != 0) &&
       (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x40), lVar4 != 0)) {
      param_2[(longlong)(int)param_2[0x33] + 1] = lVar4 + 0x68;
      *(int *)(param_2 + 0x33) = (int)param_2[0x33] + 1;
      param_2[(longlong)(int)param_2[0x36] + 0x34] =
           *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x40) + 0x50;
      *(int *)(param_2 + 0x36) = (int)param_2[0x36] + 1;
    }
    iVar8 = *(int *)(param_1 + 0xd8);
    iVar7 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
    if (((iVar7 != 0) && (iVar8 != -1)) && (iVar7 = iVar7 + -1, iVar6 = 0, -1 < iVar7)) {
      do {
        iVar5 = iVar6 + iVar7 >> 1;
        lVar4 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar5 * 8);
        if (*(int *)(lVar4 + 0x130) == iVar8) {
          if (lVar4 != 0) {
            param_2[(longlong)(int)param_2[0x33] + 1] = lVar4 + 0xdb0;
            *(int *)(param_2 + 0x33) = (int)param_2[0x33] + 1;
            param_2[(longlong)(int)param_2[0x36] + 0x34] = lVar4 + 0xd98;
            *(int *)(param_2 + 0x36) = (int)param_2[0x36] + 1;
          }
          break;
        }
        if (iVar8 < *(int *)(lVar4 + 0x130)) {
          iVar7 = iVar5 + -1;
        }
        else {
          iVar6 = iVar5 + 1;
        }
      } while (iVar6 <= iVar7);
    }
    iVar7 = *(int *)(param_1 + 0xbc);
    if ((iVar7 != -1) &&
       (iVar8 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1, uVar10 = uVar11, -1 < iVar8)) {
      do {
        iVar6 = iVar8 + (int)uVar10 >> 1;
        piVar1 = *(int **)(DAT_141d692e0 + (longlong)iVar6 * 8);
        if (*piVar1 == iVar7) {
          if (piVar1 != (int *)0x0) {
            param_2[(longlong)(int)param_2[0x33] + 1] = (ulonglong)(piVar1 + 0x56);
            *(int *)(param_2 + 0x33) = (int)param_2[0x33] + 1;
          }
          break;
        }
        if (iVar7 < *piVar1) {
          iVar8 = iVar6 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar6 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    plVar9 = *(longlong **)(param_1 + 0xe8);
    uVar10 = (ulonglong)((longlong)*(longlong **)(param_1 + 0xf0) + (7 - (longlong)plVar9)) >> 3;
    if (*(longlong **)(param_1 + 0xf0) < plVar9) {
      uVar10 = uVar11;
    }
    if (uVar10 != 0) {
      do {
        sVar2 = (*(code *)**(undefined8 **)*plVar9)();
        if ((sVar2 == 10) || (sVar2 == 0xd)) {
          iVar7 = *(int *)(*plVar9 + 8);
          lVar4 = DAT_141c53720 - DAT_141c53718 >> 3;
          if ((lVar4 != 0) && ((iVar7 != -1 && (iVar8 = (int)lVar4 + -1, iVar6 = 0, -1 < iVar8)))) {
            do {
              iVar5 = iVar8 + iVar6 >> 1;
              uVar3 = *(ulonglong *)(DAT_141c53718 + (longlong)iVar5 * 8);
              if (*(int *)(uVar3 + 4) == iVar7) {
                if (uVar3 != 0) {
                  if ((int)param_2[0x33] < 0x32) {
                    param_2[(longlong)(int)param_2[0x33] + 1] = uVar3 + 0x1240;
                    *(int *)(param_2 + 0x33) = (int)param_2[0x33] + 1;
                  }
                  if ((int)param_2[0x41] < 10) {
                    param_2[(longlong)(int)param_2[0x41] + 0x37] = uVar3;
                    *(int *)(param_2 + 0x41) = (int)param_2[0x41] + 1;
                  }
                }
                break;
              }
              if (iVar7 < *(int *)(uVar3 + 4)) {
                iVar8 = iVar5 + -1;
              }
              else {
                iVar6 = iVar5 + 1;
              }
            } while (iVar6 <= iVar8);
          }
        }
        plVar9 = plVar9 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar10);
    }
    *(uint *)((longlong)param_2 + 0x1b4) = *(uint *)((longlong)param_2 + 0x1b4) | 1;
  }
  return;
}

