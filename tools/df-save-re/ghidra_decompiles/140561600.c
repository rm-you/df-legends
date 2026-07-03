// FUN_140561600 @ 140561600
// callees:
//   -> 14007e0a0 FUN_14007e0a0
//   -> 14048dfb0 FUN_14048dfb0
//   -> 14048e070 FUN_14048e070


void FUN_140561600(longlong param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  iVar5 = *param_2;
  if ((iVar5 != -1) && (lVar2 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3, lVar2 != 0)) {
    iVar4 = (int)lVar2 + -1;
    uVar10 = 0;
    uVar7 = uVar10;
    if (-1 < iVar4) {
      do {
        iVar3 = iVar4 + (int)uVar7 >> 1;
        lVar2 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar3 * 8);
        if (*(int *)(lVar2 + 0xe0) == iVar5) {
          if (lVar2 == 0) {
            return;
          }
          if (param_2[2] != -1) {
            lVar2 = FUN_14007e0a0(lVar2,*(undefined4 *)(param_1 + 4));
            if (lVar2 == 0) {
              return;
            }
            FUN_14048dfb0(lVar2 + 8,param_3,param_4);
            return;
          }
          piVar6 = *(int **)(param_2 + 4);
          uVar7 = (ulonglong)((longlong)*(int **)(param_2 + 6) + (3 - (longlong)piVar6)) >> 2;
          if (*(int **)(param_2 + 6) < piVar6) {
            uVar7 = uVar10;
          }
          uVar8 = uVar10;
          if (uVar7 == 0) {
            return;
          }
          do {
            iVar5 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1;
            uVar9 = uVar10;
            if (-1 < iVar5) {
              do {
                iVar4 = iVar5 + (int)uVar9 >> 1;
                piVar1 = *(int **)(DAT_141d69178 + (longlong)iVar4 * 8);
                if (*piVar1 == *piVar6) {
                  if ((piVar1 != (int *)0x0) &&
                     (lVar2 = FUN_14048e070(piVar1,*(undefined4 *)(param_1 + 4)), lVar2 != 0)) {
                    FUN_14048dfb0(lVar2 + 8,param_3,param_4);
                  }
                  break;
                }
                if (*piVar6 < *piVar1) {
                  iVar5 = iVar4 + -1;
                }
                else {
                  uVar9 = (ulonglong)(iVar4 + 1);
                }
              } while ((int)uVar9 <= iVar5);
            }
            piVar6 = piVar6 + 1;
            uVar8 = uVar8 + 1;
            if (uVar7 <= uVar8) {
              return;
            }
          } while( true );
        }
        if (iVar5 < *(int *)(lVar2 + 0xe0)) {
          iVar4 = iVar3 + -1;
        }
        else {
          uVar7 = (ulonglong)(iVar3 + 1);
        }
      } while ((int)uVar7 <= iVar4);
    }
  }
  return;
}

