// FUN_14073e380 @ 14073e380
// callees:
//   -> 1404cec60 FUN_1404cec60
//   -> 14073eb00 FUN_14073eb00
//   -> 140051f10 FUN_140051f10
//   -> 140280490 FUN_140280490
//   -> 1400199b0 FUN_1400199b0
//   -> 1400511c0 FUN_1400511c0
//   -> 140071a80 FUN_140071a80


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_14073e380(short *param_1,longlong param_2,short *param_3,undefined8 *param_4,char param_5)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int iVar20;
  
  if (((((param_2 == 0) || (param_3 == (short *)0x0)) || (*(int *)(param_1 + 0x18) != -1)) ||
      ((0 < *(int *)(param_1 + 0x68) && ((**(byte **)(param_1 + 100) & 0x80) != 0)))) ||
     ((ushort)(*param_1 - 0x67U) < 2)) {
    return 0;
  }
  iVar17 = 0;
  if (((*(longlong *)(param_1 + 0x98) != 0) &&
      (lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 8), lVar10 != 0)) &&
     (((int)*(short *)(lVar10 + 0x60) - 0x83U < 3 && (*param_3 != 5)))) {
    return 0;
  }
  if (param_5 == '\0') {
    if ((*(int *)(param_2 + 0x30) < 1) || ((**(byte **)(param_2 + 0x28) & 0x40) == 0)) {
      sVar8 = FUN_14073eb00(param_1,0,*(undefined4 *)(param_3 + 2));
    }
    else {
      lVar10 = FUN_1404cec60(param_3);
      sVar8 = FUN_14073eb00(param_1,0,*(undefined4 *)(lVar10 + 4));
    }
    if (sVar8 == 0) {
      return 0;
    }
  }
  if (0 < *(int *)(param_2 + 0x30)) {
    if (((**(byte **)(param_2 + 0x28) & 0x10) != 0) && ((char)param_1[3] != '\x01')) {
      return 0;
    }
    if (((0 < *(int *)(param_2 + 0x30)) && ((**(byte **)(param_2 + 0x28) & 0x20) != 0)) &&
       ((char)param_1[3] != '\0')) {
      return 0;
    }
  }
  lVar10 = FUN_140051f10(&DAT_141d6dd30,param_1[1],param_1[2]);
  if ((((lVar10 != 0) && (7 < *(int *)(lVar10 + 0x6b0))) &&
      (((*(byte *)(*(longlong *)(lVar10 + 0x6a8) + 7) & 4) != 0 &&
       ((*(int *)(lVar10 + 0x6b0) < 10 || ((*(byte *)(*(longlong *)(lVar10 + 0x6a8) + 9) & 1) == 0))
       )))) && ((*(longlong *)(param_1 + 0x98) == 0 ||
                ((lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x48), lVar11 == 0 ||
                 (*(longlong *)(lVar11 + 0x130) == 0)))))) {
    if (*(longlong *)(param_2 + 0x70) - *(longlong *)(param_2 + 0x68) >> 2 != 0) {
      iVar1 = *(int *)(lVar10 + 0x6b8);
      iVar16 = (int)(*(longlong *)(param_2 + 0x70) - *(longlong *)(param_2 + 0x68) >> 2);
      if (((iVar16 != 0) && (iVar1 != -1)) && (iVar16 = iVar16 + -1, iVar20 = iVar17, -1 < iVar16))
      {
        do {
          iVar14 = iVar16 + iVar20 >> 1;
          iVar15 = *(int *)(*(longlong *)(param_2 + 0x68) + (longlong)iVar14 * 4);
          if (iVar15 == iVar1) {
            if (iVar14 != -1) {
              return 0;
            }
            break;
          }
          if (iVar1 < iVar15) {
            iVar16 = iVar14 + -1;
          }
          else {
            iVar20 = iVar14 + 1;
          }
        } while (iVar20 <= iVar16);
      }
    }
    if (*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 2 == 0) {
LAB_14073e5ee:
      if (*(longlong *)(param_2 + 0x88) - *(longlong *)(param_2 + 0x80) >> 3 != 0) {
        puVar2 = *(undefined8 **)(param_2 + 0x88);
        for (puVar18 = *(undefined8 **)(param_2 + 0x80); puVar18 < puVar2; puVar18 = puVar18 + 1) {
          cVar7 = FUN_140280490(lVar10 + 0x3e78,*puVar18);
          if (cVar7 != '\0') {
            return 0;
          }
        }
      }
      if (*(longlong *)(param_2 + 0x58) - *(longlong *)(param_2 + 0x50) >> 3 != 0) {
        puVar18 = *(undefined8 **)(param_2 + 0x50);
        puVar2 = *(undefined8 **)(param_2 + 0x58);
        while( true ) {
          if (puVar2 <= puVar18) {
            return 0;
          }
          cVar7 = FUN_140280490(lVar10 + 0x3e78,*puVar18);
          if (cVar7 != '\0') break;
          puVar18 = puVar18 + 1;
        }
      }
      bVar5 = true;
      if ((DAT_1410b67dc == 0) && (bVar5 = true, param_3 == DAT_141c3d250)) {
        bVar5 = false;
      }
      bVar6 = false;
      plVar3 = *(longlong **)(param_1 + 0x78);
      for (plVar19 = *(longlong **)(param_1 + 0x74); plVar19 < plVar3; plVar19 = plVar19 + 1) {
        plVar4 = (longlong *)*plVar19;
        sVar8 = (**(code **)*plVar4)(plVar4);
        if ((sVar8 == 10) && (lVar10 = FUN_1400199b0(&DAT_141c53718,(int)plVar4[1]), lVar10 != 0)) {
          uVar9 = (**(code **)(*plVar4 + 0x30))(plVar4);
          lVar11 = FUN_1400511c0(uVar9,lVar10 + 0x1100);
          if (lVar11 != 0) {
            if ((0 < *(short *)(param_2 + 0x278)) &&
               (lVar12 = FUN_140071a80(*(undefined4 *)(lVar11 + 0xc),lVar10 + 0x10b0), lVar12 != 0))
            {
              if ((0 < *(int *)(lVar12 + 0x30)) && ((**(byte **)(lVar12 + 0x28) & 0x40) != 0)) {
                return 0;
              }
              if (*(longlong *)(lVar12 + 0x318) - *(longlong *)(lVar12 + 0x310) >> 2 != 0) {
                return 0;
              }
            }
            if (param_4 != (undefined8 *)0x0) {
              for (piVar13 = (int *)*param_4; piVar13 < (int *)param_4[1]; piVar13 = piVar13 + 1) {
                if (*piVar13 == *(int *)(lVar11 + 0xc)) {
                  if ((int)((longlong)piVar13 - (longlong)*param_4 >> 2) != -1) {
                    bVar6 = true;
                    goto LAB_14073e7fd;
                  }
                  break;
                }
              }
            }
            if (bVar5) {
              if (((int)plVar4[1] == *(int *)(param_3 + 2)) &&
                 (*(int *)(lVar11 + 0xc) == *(int *)(param_2 + 0x20))) {
                return 0;
              }
              lVar10 = FUN_140071a80(*(undefined4 *)(lVar11 + 0xc),lVar10 + 0x10b0);
              if ((lVar10 != 0) && (*(int *)(lVar10 + 0x2d0) <= *(int *)(param_2 + 0x2d0))) {
                return 0;
              }
            }
          }
        }
LAB_14073e7fd:
      }
      if ((param_4 != (undefined8 *)0x0) && (!bVar6)) {
        return 0;
      }
      if ((param_5 == '\0') &&
         ((*(int *)(param_2 + 0x30) < 1 || ((**(byte **)(param_2 + 0x28) & 0x40) == 0)))) {
        plVar3 = *(longlong **)(param_1 + 0x78);
        for (plVar19 = *(longlong **)(param_1 + 0x74); plVar19 < plVar3; plVar19 = plVar19 + 1) {
          puVar18 = (undefined8 *)*plVar19;
          sVar8 = (**(code **)*puVar18)(puVar18);
          if (sVar8 == 6) {
            if (*(short *)((longlong)puVar18 + 0xc) != 0) {
              return 0;
            }
            break;
          }
        }
        plVar3 = *(longlong **)(param_1 + 0x78);
        for (plVar19 = *(longlong **)(param_1 + 0x74); plVar19 < plVar3; plVar19 = plVar19 + 1) {
          puVar18 = (undefined8 *)*plVar19;
          sVar8 = (**(code **)*puVar18)(puVar18);
          if (sVar8 == 4) {
            if (*(short *)((longlong)puVar18 + 0xc) != 0) {
              return 0;
            }
            break;
          }
        }
        plVar3 = *(longlong **)(param_1 + 0x90);
        for (plVar19 = *(longlong **)(param_1 + 0x8c); plVar19 < plVar3; plVar19 = plVar19 + 1) {
          puVar18 = (undefined8 *)*plVar19;
          sVar8 = (**(code **)*puVar18)(puVar18);
          if (sVar8 == 7) {
            if (*(short *)((longlong)puVar18 + 0xc) == 0) {
              return 1;
            }
            return 0;
          }
        }
      }
      return 1;
    }
    iVar1 = *(int *)(lVar10 + 0x6b8);
    iVar16 = (int)(*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 2);
    if (((iVar16 != 0) && (iVar1 != -1)) && (iVar16 = iVar16 + -1, -1 < iVar16)) {
      do {
        iVar15 = iVar16 + iVar17 >> 1;
        iVar20 = *(int *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar15 * 4);
        if (iVar20 == iVar1) {
          if (iVar15 == -1) {
            return 0;
          }
          goto LAB_14073e5ee;
        }
        if (iVar1 < iVar20) {
          iVar16 = iVar15 + -1;
        }
        else {
          iVar17 = iVar15 + 1;
        }
      } while (iVar17 <= iVar16);
    }
  }
  return 0;
}

