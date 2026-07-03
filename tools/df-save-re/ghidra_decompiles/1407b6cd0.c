// FUN_1407b6cd0 @ 1407b6cd0
// callees:
//   -> 1407b52b0 FUN_1407b52b0
//   -> 140050d30 FUN_140050d30
//   -> 1407b5320 FUN_1407b5320
//   -> 1407b5390 FUN_1407b5390
//   -> 140004650 FUN_140004650
//   -> 140758fa0 FUN_140758fa0


void FUN_1407b6cd0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  
  piVar15 = (int *)0x0;
  uVar1 = *(uint *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if (param_2[3] == 0) {
      lVar7 = *param_2;
      lVar8 = lVar7;
      if (lVar7 == 0) {
        lVar8 = param_2[1];
      }
      piVar6 = piVar15;
      if ((lVar8 == 0) ||
         (piVar6 = (int *)FUN_1407b52b0(param_1,*(undefined4 *)(lVar8 + 0xe0)), piVar6 == (int *)0x0
         )) {
LAB_1407b6d4c:
        iVar5 = (int)param_2[2];
        if ((iVar5 != -1) &&
           (iVar11 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1, piVar14 = piVar15, -1 < iVar11)
           ) {
          do {
            iVar9 = iVar11 + (int)piVar14 >> 1;
            piVar13 = *(int **)(DAT_141d69178 + (longlong)iVar9 * 8);
            if (*piVar13 == iVar5) {
              if (((piVar13 != (int *)0x0) &&
                  (piVar6 = (int *)FUN_1407b52b0(param_1,piVar13[0x23]), piVar6 != (int *)0x0)) &&
                 (iVar5 = FUN_140050d30(*piVar13,piVar6 + 2), iVar5 == -1)) {
                piVar6 = (int *)0x0;
              }
              break;
            }
            if (iVar5 < *piVar13) {
              iVar11 = iVar9 + -1;
            }
            else {
              piVar14 = (int *)(ulonglong)(iVar9 + 1);
            }
          } while ((int)piVar14 <= iVar11);
        }
      }
      else if ((lVar7 == 0) && ((*(byte *)(piVar6 + 1) & 1) == 0)) {
        piVar6 = (int *)0x0;
        goto LAB_1407b6d4c;
      }
      param_2[3] = (longlong)piVar6;
    }
    if (param_2[4] == 0) {
      piVar6 = piVar15;
      if (((param_2[1] == 0) ||
          (piVar6 = (int *)FUN_1407b5320(param_1,*(undefined4 *)(param_2[1] + 0xe0)),
          piVar6 == (int *)0x0)) &&
         ((iVar5 = (int)param_2[2], iVar5 != -1 &&
          (iVar11 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1, piVar14 = piVar15, -1 < iVar11))
         )) {
        do {
          iVar9 = iVar11 + (int)piVar14 >> 1;
          piVar13 = *(int **)(DAT_141d69178 + (longlong)iVar9 * 8);
          if (*piVar13 == iVar5) {
            if (((piVar13 != (int *)0x0) &&
                (piVar6 = (int *)FUN_1407b5320(param_1,piVar13[0x23]), piVar6 != (int *)0x0)) &&
               (iVar5 = FUN_140050d30(*piVar13,piVar6 + 2), iVar5 == -1)) {
              piVar6 = (int *)0x0;
            }
            break;
          }
          if (iVar5 < *piVar13) {
            iVar11 = iVar9 + -1;
          }
          else {
            piVar14 = (int *)(ulonglong)(iVar9 + 1);
          }
        } while ((int)piVar14 <= iVar11);
      }
      param_2[4] = (longlong)piVar6;
    }
    if ((param_2[5] == 0) && ((int)param_2[2] != -1)) {
      lVar7 = FUN_1407b5390(param_1);
      param_2[5] = lVar7;
    }
    if (param_2[3] == 0) {
      if (param_2[4] != 0) {
        lVar7 = param_2[4] + 0x50;
        goto LAB_1407b6ecc;
      }
      if (param_2[5] != 0) {
        lVar7 = param_2[5] + 0x38;
        goto LAB_1407b6ecc;
      }
    }
    else {
      lVar7 = param_2[3] + 0x54;
LAB_1407b6ecc:
      param_2[6] = lVar7;
    }
    *(uint *)(param_2 + 8) = uVar1 | 1;
  }
  lVar7 = *param_2;
  lVar8 = lVar7;
  if (lVar7 == 0) {
    lVar8 = param_2[1];
  }
  iVar5 = (int)param_2[2];
  if ((iVar5 != -1) &&
     (iVar11 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1, piVar6 = piVar15, -1 < iVar11)) {
    do {
      iVar12 = iVar11 + (int)piVar6 >> 1;
      iVar9 = **(int **)(DAT_141d69178 + (longlong)iVar12 * 8);
      if (iVar9 == iVar5) break;
      if (iVar5 < iVar9) {
        iVar11 = iVar12 + -1;
      }
      else {
        piVar6 = (int *)(ulonglong)(iVar12 + 1);
      }
    } while ((int)piVar6 <= iVar11);
  }
  puVar3 = (undefined4 *)param_2[3];
  if ((puVar3 != (undefined4 *)0x0) && ((*(byte *)(puVar3 + 1) & 1) != 0)) {
    if (lVar7 == 0) {
      lVar8 = FUN_140004650(&DAT_141d7a048,*puVar3);
      *param_2 = lVar8;
    }
    else {
      param_2[1] = lVar7;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
  }
  if (lVar8 != 0) {
    uVar4 = FUN_140758fa0(param_1,*(undefined4 *)(lVar8 + 0xe0));
    *(undefined4 *)(param_2 + 9) = uVar4;
  }
  if ((int)param_2[9] == -1) {
    iVar5 = *(int *)(param_1 + 0xbc);
    if (((iVar5 == -1) || (lVar8 == 0)) || (iVar11 = *(int *)(lVar8 + 0xbc), iVar11 == -1))
    goto LAB_1407b70a9;
    if (iVar5 != iVar11) {
      iVar12 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1;
      piVar6 = piVar15;
      piVar14 = piVar15;
      iVar9 = iVar12;
      if (-1 < iVar12) {
        do {
          iVar10 = iVar9 + (int)piVar14 >> 1;
          piVar6 = *(int **)(DAT_141d692e0 + (longlong)iVar10 * 8);
          iVar2 = *piVar6;
          if (iVar2 == iVar5) break;
          if (iVar5 < iVar2) {
            iVar9 = iVar10 + -1;
          }
          else {
            piVar14 = (int *)(ulonglong)(iVar10 + 1);
          }
          piVar6 = piVar15;
        } while ((int)piVar14 <= iVar9);
      }
      piVar13 = piVar15;
      piVar14 = piVar15;
      if (-1 < iVar12) {
        do {
          iVar9 = iVar12 + (int)piVar13 >> 1;
          piVar14 = *(int **)(DAT_141d692e0 + (longlong)iVar9 * 8);
          iVar5 = *piVar14;
          if (iVar5 == iVar11) break;
          if (iVar11 < iVar5) {
            iVar12 = iVar9 + -1;
          }
          else {
            piVar13 = (int *)(ulonglong)(iVar9 + 1);
          }
          piVar14 = piVar15;
        } while ((int)piVar13 <= iVar12);
      }
      if (((piVar6 == (int *)0x0) || (piVar14 == (int *)0x0)) ||
         (((piVar6[1] == -1 || (piVar6[1] != piVar14[1])) &&
          (((*(longlong *)(param_1 + 0x130) == 0 ||
            (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x60), lVar7 == 0)) ||
           (iVar5 = FUN_140050d30(*piVar14,lVar7 + 0x48), iVar5 == -1)))))) goto LAB_1407b70a9;
    }
    *(undefined4 *)((longlong)param_2 + 0x44) = 0x16;
  }
  else {
    *(undefined4 *)((longlong)param_2 + 0x44) = 1;
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
LAB_1407b70a9:
  if (((param_2[6] != 0) && (0 < *(int *)(param_2[6] + 0xc))) &&
     (*(int *)((longlong)param_2 + 0x44) == 0)) {
    *(undefined4 *)((longlong)param_2 + 0x44) = 0x16;
  }
  return;
}

