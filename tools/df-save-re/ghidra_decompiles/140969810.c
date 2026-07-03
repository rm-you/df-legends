// FUN_140969810 @ 140969810
// callees:
//   -> 140824600 FUN_140824600
//   -> 140d89d60 FUN_140d89d60
//   -> 140c88550 FUN_140c88550
//   -> 140ca8390 FUN_140ca8390
//   -> 14073eb00 FUN_14073eb00
//   -> 140c3dfb0 FUN_140c3dfb0
//   -> 14000c2d0 FUN_14000c2d0
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140002020 FUN_140002020
//   -> 140dfb5c4 operator_new
//   -> 140140ca0 FUN_140140ca0
//   -> 1401036e0 FUN_1401036e0
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140969810(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  longlong local_res18;
  longlong *local_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((((int)param_1[5] == 0) && ((int)param_1[4] == 0)) &&
     (*(int *)((longlong)param_1 + 0x24) == 0)) {
    return;
  }
  plVar18 = (longlong *)0x0;
  local_res18 = 0;
  if (((short)param_1[1] == 0) && (param_2 != 0)) {
    local_res18 = FUN_140824600(param_2,0x11,param_3,param_4,0xfffffffffffffffe);
  }
  if ((ushort)((short)param_1[1] - 1U) < 2) {
    sVar4 = -1;
    if ((short)param_1[1] == 1) {
      sVar4 = *(short *)((longlong)param_1 + 10);
      switch(sVar4) {
      case 0x2e:
      case 0x2f:
      case 0x34:
      case 0x35:
      case 0x37:
      case 0x44:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x4a:
switchD_1409698c5_caseD_2e:
        sVar4 = 0x27;
        break;
      case 0x30:
        sVar4 = 0x26;
        break;
      case 0x31:
        sVar4 = 0x24;
        break;
      case 0x32:
      case 0x33:
        sVar4 = 0xc;
        break;
      case 0x36:
        sVar4 = 0x2e;
        break;
      default:
        uVar21 = (undefined4)param_1[2];
        sVar3 = *(short *)((longlong)param_1 + 0xe);
        lVar7 = FUN_140d89d60(&DAT_141c53470,sVar3,uVar21);
        if (((lVar7 == 0) || (*(int *)(lVar7 + 0x298) < 6)) ||
           ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 5) & 0x80) == 0)) {
          lVar7 = FUN_140d89d60(&DAT_141c53470,sVar3,uVar21);
          if (((lVar7 == 0) || (*(int *)(lVar7 + 0x298) < 7)) ||
             ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0)) {
            if (sVar4 == 0x42) {
              sVar4 = 0x3c;
            }
            else if ((((((sVar4 - 0x23U & 0xfff8) == 0) && (sVar4 != 0x26)) ||
                      ((lVar7 = FUN_140d89d60(&DAT_141c53470,sVar3,uVar21), lVar7 != 0 &&
                       ((3 < *(int *)(lVar7 + 0x298) &&
                        ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 3) & 0x40) != 0)))))) ||
                     (((lVar7 = FUN_140d89d60(&DAT_141c53470,sVar3,uVar21), lVar7 != 0 &&
                       ((7 < *(int *)(lVar7 + 0x298) &&
                        ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 7) & 0x40) != 0)))) ||
                      ((((ushort)(sVar3 - 0x1a3U) < 200 ||
                        (((lVar7 = FUN_140d89d60(&DAT_141c53470,sVar3,uVar21), lVar7 != 0 &&
                          (3 < *(int *)(lVar7 + 0x298))) &&
                         ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 3) & 0x20) != 0)))) ||
                       (((lVar7 = FUN_140d89d60(&DAT_141c53470,sVar3,uVar21), lVar7 != 0 &&
                         (0 < *(int *)(lVar7 + 0x298))) && ((**(byte **)(lVar7 + 0x290) & 1) != 0)))
                       ))))) ||
                    (((lVar7 = FUN_140d89d60(&DAT_141c53470,sVar3,uVar21), lVar7 != 0 &&
                      (3 < *(int *)(lVar7 + 0x298))) &&
                     ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 3) & 0x10) != 0)))) {
              sVar4 = 0x17;
            }
            else if (sVar3 == 0) {
              lVar7 = FUN_140d89d60(&DAT_141c53470,0,uVar21);
              if (((lVar7 == 0) || (*(int *)(lVar7 + 0x298) < 7)) ||
                 ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 1) == 0)) {
                sVar4 = 7;
              }
              else {
                sVar4 = 0x14;
              }
            }
            else {
              sVar4 = -1;
              if ((ushort)(sVar3 - 0x1a3U) < 200) {
                sVar4 = 2;
              }
            }
          }
          else {
            sVar4 = 0x1e;
          }
        }
        else {
          sVar4 = 0xe;
        }
        break;
      case 0x45:
        if (*(short *)((longlong)param_1 + 0xe) != 0) goto switchD_1409698c5_caseD_2e;
        sVar4 = 0x1e;
      }
    }
    local_70 = (longlong *)0x0;
    uStack_68 = (longlong *)0x0;
    uStack_60 = 0;
    uStack_5c = 0;
    plVar14 = (longlong *)0x0;
    plVar16 = (longlong *)0x0;
    plVar19 = plVar18;
    plVar17 = (longlong *)0x0;
    if ((sVar4 != -1) &&
       (iVar5 = 0, plVar17 = (longlong *)0x0, DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0)) {
      do {
        lVar7 = *(longlong *)((longlong)plVar18 + DAT_141c66fe8);
        if (((*(byte *)(lVar7 + 0x110) & 2) == 0) && (lVar7 != *param_1)) {
          cVar2 = FUN_140c88550(lVar7);
          if (cVar2 != '\0') {
            lVar7 = FUN_140ca8390(lVar7);
            if (lVar7 != 0) {
              sVar3 = FUN_14073eb00(lVar7,0,DAT_141c36b88);
              if (sVar3 != 0) {
                cVar2 = FUN_140c3dfb0(*(undefined8 *)((longlong)plVar18 + DAT_141c66fe8));
                if ((cVar2 != '\0') &&
                   (plVar17 = (longlong *)(DAT_141c66fe8 + (longlong)plVar18),
                   *(short *)(*plVar17 + 0xa0) == sVar4)) {
                  if ((plVar17 < plVar14) && (plVar16 <= plVar17)) {
                    lVar7 = (longlong)plVar17 - (longlong)plVar16;
                    if (plVar14 == plVar19) {
                      FUN_14000c2d0(&local_70);
                      plVar19 = (longlong *)CONCAT44(uStack_5c,uStack_60);
                      plVar14 = uStack_68;
                      plVar16 = local_70;
                    }
                    if (plVar14 != (longlong *)0x0) {
                      lVar7 = plVar16[lVar7 >> 3];
LAB_140969c41:
                      *plVar14 = lVar7;
                    }
                  }
                  else {
                    if (plVar14 == plVar19) {
                      FUN_14000c2d0(&local_70);
                      plVar19 = (longlong *)CONCAT44(uStack_5c,uStack_60);
                      plVar14 = uStack_68;
                      plVar16 = local_70;
                    }
                    if (plVar14 != (longlong *)0x0) {
                      lVar7 = *plVar17;
                      goto LAB_140969c41;
                    }
                  }
                  plVar14 = plVar14 + 1;
                  uStack_68 = plVar14;
                }
              }
            }
          }
        }
        iVar5 = iVar5 + 1;
        plVar18 = plVar18 + 1;
        plVar17 = uStack_68;
      } while ((ulonglong)(longlong)iVar5 < (ulonglong)(DAT_141c66ff0 - DAT_141c66fe8 >> 3));
    }
    uStack_68 = plVar17;
    iVar5 = 0;
    if (((longlong)plVar14 - (longlong)plVar16 >> 3 == 0) &&
       (DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0)) {
      lVar7 = 0;
      do {
        lVar8 = *(longlong *)(lVar7 + DAT_141c66fe8);
        if (((*(byte *)(lVar8 + 0x110) & 2) == 0) && (lVar8 != *param_1)) {
          cVar2 = FUN_140c88550(lVar8);
          if (cVar2 != '\0') {
            lVar8 = FUN_140ca8390(lVar8);
            if (lVar8 != 0) {
              sVar4 = FUN_14073eb00(lVar8,0,DAT_141c36b88);
              if (sVar4 != 0) {
                cVar2 = FUN_140c3dfb0(*(undefined8 *)(lVar7 + DAT_141c66fe8));
                if (cVar2 != '\0') {
                  plVar18 = (longlong *)(DAT_141c66fe8 + lVar7);
                  if ((plVar18 < plVar14) && (plVar16 <= plVar18)) {
                    lVar8 = (longlong)plVar18 - (longlong)plVar16;
                    if (plVar14 == plVar19) {
                      FUN_14000c2d0(&local_70);
                      plVar19 = (longlong *)CONCAT44(uStack_5c,uStack_60);
                      plVar14 = uStack_68;
                      plVar16 = local_70;
                    }
                    if (plVar14 != (longlong *)0x0) {
                      lVar8 = plVar16[lVar8 >> 3];
LAB_140969d8f:
                      *plVar14 = lVar8;
                    }
                  }
                  else {
                    if (plVar14 == plVar19) {
                      FUN_14000c2d0(&local_70);
                      plVar19 = (longlong *)CONCAT44(uStack_5c,uStack_60);
                      plVar14 = uStack_68;
                      plVar16 = local_70;
                    }
                    if (plVar14 != (longlong *)0x0) {
                      lVar8 = *plVar18;
                      goto LAB_140969d8f;
                    }
                  }
                  plVar14 = plVar14 + 1;
                  uStack_68 = plVar14;
                }
              }
            }
          }
        }
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 8;
      } while ((ulonglong)(longlong)iVar5 < (ulonglong)(DAT_141c66ff0 - DAT_141c66fe8 >> 3));
    }
    uVar15 = (longlong)plVar14 - (longlong)plVar16 >> 3;
    if (uVar15 != 0) {
      if ((uint)uVar15 < 2) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1409fc0c0();
        uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (uVar15 & 0xffffffff)) + 1U);
      }
      local_res18 = plVar16[(int)uVar6];
    }
    if (plVar16 != (longlong *)0x0) {
      FUN_140002020(plVar16,(longlong)plVar19 - (longlong)plVar16 >> 3,8);
    }
  }
  iVar5 = 0;
  uVar21 = 0xffffffff;
  uVar6 = 0;
  if (((short)param_1[1] == 2) &&
     (*(longlong *)(DAT_141c3d250 + 0x17d8) - *(longlong *)(DAT_141c3d250 + 0x17d0) >> 3 != 0)) {
    uVar15 = *(longlong *)(DAT_141c3d250 + 0x17d8) - *(longlong *)(DAT_141c3d250 + 0x17d0) >> 3;
    if (1 < (uint)uVar15) {
      uVar6 = FUN_1409fc0c0();
      uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              ((int)(0x7fffffff / (uVar15 & 0xffffffff)) + 1U);
    }
    iVar13 = *(int *)(*(longlong *)
                       (*(longlong *)(DAT_141c3d250 + 0x17d0) + (longlong)(int)uVar6 * 8) + 4);
    lVar7 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if (((lVar7 != 0) && (iVar13 != -1)) && (iVar12 = (int)lVar7 + -1, iVar11 = iVar5, -1 < iVar12))
    {
      do {
        iVar10 = iVar12 + iVar11 >> 1;
        lVar7 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar10 * 8);
        if (*(int *)(lVar7 + 0xe0) == iVar13) {
          if (lVar7 != 0) {
            iVar12 = *(int *)(lVar7 + 0xd8);
            iVar13 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
            if ((iVar13 == 0) || (iVar12 == -1)) goto LAB_14096a163;
            iVar13 = iVar13 + -1;
            if (-1 < iVar13) goto LAB_140969f80;
            goto LAB_140969fad;
          }
          break;
        }
        if (iVar13 < *(int *)(lVar7 + 0xe0)) {
          iVar12 = iVar10 + -1;
        }
        else {
          iVar11 = iVar10 + 1;
        }
      } while (iVar11 <= iVar12);
    }
  }
LAB_140969fb1:
  if ((local_res18 == 0) || (local_res18 == *param_1)) {
LAB_14096a163:
    lVar7 = *param_1;
    if (lVar7 != 0) {
      uStack_68._0_4_ = 0;
      uStack_68._4_4_ = 100;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_70 = (longlong *)0xffffffff00000046;
      lVar8 = *(longlong *)(lVar7 + 0xa78);
      if (((lVar8 != 0) && ((*(uint *)(lVar7 + 0x110) & 0x502) != 2)) &&
         ((*(uint *)(lVar7 + 0x118) & 0x1000) == 0)) {
        cVar2 = FUN_140106f30();
        FUN_1409165e0(lVar8 + 0x248,&local_70,cVar2 != '\0');
      }
    }
  }
  else {
    bVar1 = false;
    if ((ushort)((short)param_1[1] - 1U) < 2) {
      sVar4 = *(short *)((longlong)param_1 + 0x14);
      if ((uint)(int)sVar4 < 2) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1409fc0c0();
        uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (ulonglong)(uint)(int)sVar4) + 1U);
      }
      if ((int)*(short *)((longlong)param_1 + 0x16) < (int)uVar6) {
        bVar1 = true;
      }
    }
    pvVar9 = operator_new(0x118);
    lVar7 = FUN_140140ca0(pvVar9,0);
    sVar4 = (short)param_1[1];
    if (sVar4 == 0) {
      *(undefined4 *)(lVar7 + 4) = 1;
    }
    else if (sVar4 == 1) {
      *(undefined4 *)(lVar7 + 4) = 0;
    }
    else if (sVar4 == 2) {
      *(undefined4 *)(lVar7 + 4) = 2;
    }
    uVar20 = (undefined4)param_1[4];
    *(longlong *)(lVar7 + 8) = param_1[4];
    *(int *)(lVar7 + 0x10) = (int)param_1[5];
    if (*param_1 != 0) {
      uVar21 = *(undefined4 *)(*param_1 + 0x130);
    }
    *(undefined4 *)(lVar7 + 0x70) = uVar21;
    if (*param_1 != 0) {
      uVar20 = FUN_1401036e0(uVar20,lVar7 + 0x78);
    }
    *(undefined4 *)(lVar7 + 0x14) = *(undefined4 *)(local_res18 + 0x130);
    uVar21 = FUN_1401036e0(uVar20,lVar7 + 0x18,local_res18);
    *(undefined4 *)(lVar7 + 0x40) = *(undefined4 *)(local_res18 + 0x130);
    FUN_1401036e0(uVar21,lVar7 + 0x48,local_res18);
    *(uint *)(lVar7 + 0xa0) = *(uint *)(lVar7 + 0xa0) | 2;
    *(undefined4 *)(lVar7 + 0xa8) = DAT_1416b1980;
    *(undefined4 *)(lVar7 + 0xac) = DAT_1416b1974;
    *(undefined4 *)(lVar7 + 0xb0) = DAT_1416b1980;
    *(undefined4 *)(lVar7 + 0xb4) = DAT_1416b1974;
    *(undefined4 *)(lVar7 + 0xb8) = DAT_141c36b84;
    *(undefined4 *)(lVar7 + 0xbc) = DAT_141c36b88;
    if (bVar1) {
      if (1 < *(int *)(lVar7 + 0xc)) {
        *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) >> 1;
      }
      iVar5 = *(int *)(lVar7 + 8);
      if (iVar5 < 2) {
        if (iVar5 == 1) {
          *(undefined4 *)(lVar7 + 8) = 0;
          *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | 1;
        }
      }
      else {
        *(int *)(lVar7 + 8) = iVar5 >> 1;
      }
    }
    if (0x31 < *(int *)(lVar7 + 8)) {
      DAT_141c36918 = DAT_141c36918 + 1;
      _DAT_141c36948 = _DAT_141c36948 + 1;
    }
  }
  return;
  while( true ) {
    if (iVar12 < *(int *)(local_res18 + 0x130)) {
      iVar13 = iVar11 + -1;
    }
    else {
      iVar5 = iVar11 + 1;
    }
    if (iVar13 < iVar5) break;
LAB_140969f80:
    iVar11 = iVar5 + iVar13 >> 1;
    local_res18 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar11 * 8);
    if (*(int *)(local_res18 + 0x130) == iVar12) goto LAB_140969fb1;
  }
LAB_140969fad:
  local_res18 = 0;
  goto LAB_140969fb1;
}

