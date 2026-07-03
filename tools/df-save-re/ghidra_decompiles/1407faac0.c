// FUN_1407faac0 @ 1407faac0
// callees:
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140d89d60 FUN_140d89d60
//   -> 140c88550 FUN_140c88550
//   -> 14000f360 FUN_14000f360
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0
//   -> 140050b50 FUN_140050b50
//   -> 140ca8390 FUN_140ca8390
//   -> 1407b52b0 FUN_1407b52b0
//   -> 140103280 FUN_140103280
//   -> 140002020 FUN_140002020
//   -> 1408054d0 FUN_1408054d0
//   -> 140c2ab20 FUN_140c2ab20
//   -> 1402b9ec0 FUN_1402b9ec0


undefined1 FUN_1407faac0(longlong *param_1)

{
  void *pvVar1;
  uint *puVar2;
  short sVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  undefined2 uVar7;
  short sVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  void *_Dst;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  int *piVar21;
  longlong *plVar22;
  int *piVar23;
  int *piVar24;
  ulonglong uVar25;
  int *piVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint local_res8 [2];
  ulonglong local_res10;
  ulonglong local_res18;
  longlong local_res20;
  undefined8 uVar30;
  longlong *local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  short local_80 [4];
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined1 local_50 [16];
  
  local_58 = 0xfffffffffffffffe;
  if ((*(uint *)(param_1 + 2) & 0x40000) != 0) {
    return 0;
  }
  bVar5 = false;
  uVar18 = (int)(param_1[5] - param_1[4] >> 3) - 1;
  local_res8[0] = uVar18;
  if (-1 < (int)uVar18) {
    uVar25 = (longlong)(int)uVar18 * 8;
    uVar29 = uVar25;
    do {
      if (**(int **)(param_1[4] + uVar25) == 2) {
        lVar16 = *(longlong *)(*(int **)(param_1[4] + uVar25) + 2);
        iVar15 = (int)(*(longlong *)(lVar16 + 0x88) - *(longlong *)(lVar16 + 0x80) >> 3) + -1;
        local_res8[0] = uVar18;
        local_res10 = uVar29;
        local_res18 = uVar25;
        if (-1 < iVar15) {
          lVar19 = (longlong)iVar15 * 8;
          lVar28 = lVar19;
          do {
            plVar17 = *(longlong **)(lVar19 + *(longlong *)(lVar16 + 0x80));
            if ((longlong *)*plVar17 == param_1) {
              if ((int)plVar17[1] != 6) {
                bVar5 = true;
              }
              free(plVar17);
              _Dst = (void *)(*(longlong *)(lVar16 + 0x80) + lVar28);
              pvVar1 = (void *)((longlong)_Dst + 8);
              memmove(_Dst,pvVar1,*(longlong *)(lVar16 + 0x88) - (longlong)pvVar1);
              *(longlong *)(lVar16 + 0x88) = *(longlong *)(lVar16 + 0x88) + -8;
            }
            lVar28 = lVar28 + -8;
            lVar19 = lVar19 + -8;
            iVar15 = iVar15 + -1;
          } while (-1 < iVar15);
        }
        uVar25 = local_res18;
        uVar29 = local_res10;
        uVar18 = local_res8[0];
        *(uint *)(lVar16 + 0x2c) = *(uint *)(lVar16 + 0x2c) | 0x40;
        free(*(void **)(param_1[4] + local_res18));
        pvVar1 = (void *)((longlong)(param_1[4] + uVar29) + 8);
        memmove((void *)(param_1[4] + uVar29),pvVar1,param_1[5] - (longlong)pvVar1);
        param_1[5] = param_1[5] + -8;
      }
      uVar18 = uVar18 - 1;
      uVar29 = uVar29 - 8;
      uVar25 = uVar25 - 8;
      local_res8[0] = uVar18;
      local_res10 = uVar29;
      local_res18 = uVar25;
    } while (-1 < (int)uVar18);
  }
  plVar17 = (longlong *)0x0;
  iVar15 = (int)(param_1[8] - param_1[7] >> 3) + -1;
  if (-1 < iVar15) {
    lVar16 = (longlong)iVar15 * 8;
    lVar19 = lVar16;
    do {
      iVar10 = (**(code **)(**(longlong **)(lVar16 + param_1[7]) + 0x10))();
      if ((iVar10 == 0x3d) &&
         (lVar28 = (**(code **)(**(longlong **)(lVar16 + param_1[7]) + 0x50))(), lVar28 != 0)) {
        plVar13 = *(longlong **)(lVar28 + 0x18);
        plVar22 = (longlong *)
                  ((ulonglong)((longlong)*(longlong **)(lVar28 + 0x20) + (7 - (longlong)plVar13)) >>
                  3);
        if (*(longlong **)(lVar28 + 0x20) < plVar13) {
          plVar22 = plVar17;
        }
        plVar14 = plVar17;
        if (plVar22 != (longlong *)0x0) {
          do {
            if (*(int *)(*plVar13 + 4) == *(int *)((longlong)param_1 + 0x1c)) {
              *(undefined4 *)(*plVar13 + 4) = 0xffffffff;
              *(uint *)(*plVar13 + 8) = *(uint *)(*plVar13 + 8) | 1;
              bVar5 = true;
            }
            plVar13 = plVar13 + 1;
            plVar14 = (longlong *)((longlong)plVar14 + 1);
          } while (plVar14 < plVar22);
        }
        plVar13 = *(longlong **)(lVar16 + param_1[7]);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x78))(plVar13,1);
        }
        pvVar1 = (void *)(param_1[7] + lVar19 + 8);
        memmove((void *)(param_1[7] + lVar19),pvVar1,param_1[8] - (longlong)pvVar1);
        param_1[8] = param_1[8] + -8;
      }
      lVar19 = lVar19 + -8;
      lVar16 = lVar16 + -8;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
  }
  if (bVar5) {
    iVar15 = (int)(param_1[8] - param_1[7] >> 3) + -1;
    lVar16 = (longlong)iVar15;
    if (-1 < iVar15) {
      do {
        iVar15 = (**(code **)(**(longlong **)(param_1[7] + lVar16 * 8) + 0x10))();
        if (iVar15 == 0xc) goto LAB_1407fad5d;
        lVar16 = lVar16 + -1;
      } while (-1 < lVar16);
    }
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffffd;
  }
LAB_1407fad5d:
  cVar6 = (**(code **)(*param_1 + 0x280))(param_1);
  if (cVar6 != '\0') {
    return 1;
  }
  local_res8[0] = local_res8[0] & 0xffffff00;
  (**(code **)(*param_1 + 0x270))(param_1,0);
  (**(code **)(*param_1 + 800))(param_1);
  uVar7 = (**(code **)*param_1)(param_1);
  switch(uVar7) {
  case 0x17:
  case 0x2d:
    uVar18 = *(uint *)(param_1 + 2);
    if ((uVar18 >> 8 & 1) != 0) {
      local_res10 = local_res10 & 0xffffffffffffff00;
      local_res18 = CONCAT71(local_res18._1_7_,1);
      if ((char)param_1[0x19] == '\0') {
        sVar8 = *(short *)((longlong)param_1 + 0xbc);
        sVar3 = (short)param_1[0x16];
        local_b8 = plVar17;
        if (((-1 < sVar3) &&
            ((ulonglong)(longlong)sVar3 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
           (-1 < sVar8)) {
          lVar16 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar3 * 8);
          if ((ulonglong)(longlong)sVar8 <
              (ulonglong)(*(longlong *)(lVar16 + 0x180) - *(longlong *)(lVar16 + 0x178) >> 3)) {
            local_b8 = (longlong *)
                       (*(longlong *)(*(longlong *)(lVar16 + 0x178) + (longlong)sVar8 * 8) + 0x6c0);
          }
        }
        if ((-1 < sVar3) &&
           ((ulonglong)(longlong)sVar3 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) {
          plVar17 = *(longlong **)(DAT_141d6dd50 + (longlong)sVar3 * 8);
        }
        if (((local_b8 != (longlong *)0x0) && (plVar17 != (longlong *)0x0)) &&
           (iVar15 = (int)(local_b8[1] - *local_b8 >> 3) + -1, local_res20 = (longlong)iVar15,
           -1 < iVar15)) {
          do {
            cVar6 = (char)local_res10;
            if ((*(byte *)(param_1[0x23] + local_res20 * 4) & 2) == 0) {
              bVar5 = false;
              lVar16 = *(longlong *)(*local_b8 + local_res20 * 8);
              iVar15 = (int)(*(longlong *)(lVar16 + 0x60) - *(longlong *)(lVar16 + 0x58) >> 3) + -1;
              lVar19 = (longlong)iVar15;
              if (-1 < iVar15) {
                do {
                  lVar28 = *(longlong *)(*(longlong *)(lVar16 + 0x58) + lVar19 * 8);
                  lVar27 = (longlong)*(int *)(lVar28 + 0x68);
                  lVar4 = param_1[0x2c];
                  if (((((*(byte *)(lVar4 + lVar27 * 4) & 1) == 0) &&
                       (iVar15 = *(int *)(lVar28 + 0x20), -1 < iVar15)) &&
                      ((ulonglong)(longlong)iVar15 <
                       (ulonglong)(plVar17[0x49a] - plVar17[0x499] >> 3))) &&
                     (lVar28 = *(longlong *)(plVar17[0x499] + (longlong)iVar15 * 8),
                     lVar28 = FUN_140d89d60(&DAT_141c53470,*(undefined2 *)(lVar28 + 0xd0),
                                            *(undefined4 *)(lVar28 + 0xd4)), lVar28 != 0)) {
                    if ((*(int *)(lVar28 + 0x298) < 5) ||
                       ((*(byte *)(*(longlong *)(lVar28 + 0x290) + 4) & 1) == 0)) {
                      bVar5 = true;
                      local_res18 = local_res18 & 0xffffffffffffff00;
                      goto LAB_1407faf71;
                    }
                    puVar2 = (uint *)(lVar4 + lVar27 * 4);
                    *puVar2 = *puVar2 | 1;
                    local_res10 = CONCAT71(local_res10._1_7_,1);
                    cVar6 = '\x01';
                  }
                  else {
LAB_1407faf71:
                    cVar6 = (char)local_res10;
                  }
                  lVar19 = lVar19 + -1;
                } while (-1 < lVar19);
                if (bVar5) goto LAB_1407fafa2;
              }
              puVar2 = (uint *)(param_1[0x23] + local_res20 * 4);
              *puVar2 = *puVar2 | 2;
            }
LAB_1407fafa2:
            local_res20 = local_res20 + -1;
          } while (-1 < local_res20);
          if ((cVar6 != '\0') &&
             ((**(code **)(*param_1 + 0x1f8))(param_1,local_5c,local_60,local_50,&local_b8),
             plVar17 = local_b8, local_b8 != (longlong *)0x0)) {
            if ((*(byte *)(local_b8 + 0x22) & 2) != 0) {
              if (local_b8[0x1ac] == 0) {
                if (((int)local_b8[0x24c] < 8) || ((*(byte *)(local_b8[0x24b] + 7) & 4) == 0)) {
                  if (((*(uint *)(local_b8 + 0x102) & 0x2000000) != 0) ||
                     ((*(uint *)((longlong)local_b8 + 0x80c) & 0x2000000) == 0)) goto LAB_1407fb03e;
                }
                else if ((*(uint *)(local_b8 + 0x102) & 0x2000000) != 0) goto LAB_1407fb03e;
              }
              else {
LAB_1407fb03e:
                cVar6 = FUN_140c88550(local_b8);
                if (cVar6 == '\0') goto LAB_1407fb722;
              }
              bVar5 = false;
              piVar26 = (int *)0x0;
              uVar25 = DAT_141c702a0 - (longlong)DAT_141c70298 >> 3;
              plVar13 = DAT_141c70298;
              piVar23 = piVar26;
              if (uVar25 != 0) {
                do {
                  lVar16 = *plVar13;
                  if (((*(char *)(lVar16 + 0xa0) != '\0') &&
                      (*(longlong **)(lVar16 + 0xe0) == plVar17)) &&
                     (*(longlong *)(lVar16 + 0x160) - *(longlong *)(lVar16 + 0x158) >> 3 != 0)) {
                    puVar20 = *(undefined8 **)(lVar16 + 0x158);
                    piVar21 = piVar26;
                    do {
                      if (*(longlong **)*puVar20 == param_1) {
                        bVar5 = true;
                        goto LAB_1407fb0e4;
                      }
                      uVar18 = (int)piVar21 + 1;
                      piVar21 = (int *)(ulonglong)uVar18;
                      puVar20 = puVar20 + 1;
                    } while ((ulonglong)(longlong)(int)uVar18 <
                             (ulonglong)
                             (*(longlong *)(lVar16 + 0x160) - *(longlong *)(lVar16 + 0x158) >> 3));
                  }
                  uVar18 = (int)piVar23 + 1;
                  piVar23 = (int *)(ulonglong)uVar18;
                  plVar13 = plVar13 + 1;
                } while ((ulonglong)(longlong)(int)uVar18 < uVar25);
              }
LAB_1407fb0e4:
              if (DAT_1410b67dc == 0) {
                iVar15 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1;
                piVar21 = piVar26;
                piVar23 = piVar26;
                if (-1 < iVar15) {
                  do {
                    iVar11 = iVar15 + (int)piVar21 >> 1;
                    piVar23 = *(int **)(DAT_141d691a8 + (longlong)iVar11 * 8);
                    iVar10 = *piVar23;
                    if (iVar10 == *(int *)((longlong)plVar17 + 0x7dc)) break;
                    if (*(int *)((longlong)plVar17 + 0x7dc) < iVar10) {
                      iVar15 = iVar11 + -1;
                    }
                    else {
                      piVar21 = (int *)(ulonglong)(iVar11 + 1);
                    }
                    piVar23 = piVar26;
                  } while ((int)piVar21 <= iVar15);
                }
                if (((!bVar5) && (piVar23 != (int *)0x0)) && ((piVar23[0x3b] & 2U) != 0)) {
                  local_78 = 0;
                  lStack_70 = 0;
                  local_68 = 0;
                  if ((*(int *)((longlong)plVar17 + 0x3a4) != -1) &&
                     (lVar16 = FUN_14000f360(&DAT_141c66fd0), lVar16 != 0)) {
                    local_ac = 0x33;
                    local_a4 = 0x32;
                    local_98 = 0;
                    uStack_90 = 0;
                    local_88 = 0;
                    local_b0 = 0xb3;
                    lVar19 = *(longlong *)(lVar16 + 0xa78);
                    if ((lVar19 != 0) &&
                       (((*(uint *)(lVar16 + 0x110) & 0x502) != 2 &&
                        ((*(uint *)(lVar16 + 0x118) & 0x1000) == 0)))) {
                      cVar6 = FUN_140106f30(lVar16);
                      FUN_1409165e0(lVar19 + 0x248,&local_b0,cVar6 != '\0');
                    }
                    FUN_140050b50(*(undefined4 *)(lVar16 + 0x130),&local_78);
                    plVar17 = local_b8;
                  }
                  if (((int)plVar17[0x75] != -1) &&
                     (lVar16 = FUN_14000f360(&DAT_141c66fd0), lVar16 != 0)) {
                    local_ac = 1;
                    local_a4 = 100;
                    local_98 = 0;
                    uStack_90 = 0;
                    local_88 = 0;
                    local_b0 = 0xb3;
                    lVar19 = *(longlong *)(lVar16 + 0xa78);
                    if ((lVar19 != 0) &&
                       (((*(uint *)(lVar16 + 0x110) & 0x502) != 2 &&
                        ((*(uint *)(lVar16 + 0x118) & 0x1000) == 0)))) {
                      cVar6 = FUN_140106f30(lVar16);
                      FUN_1409165e0(lVar19 + 0x248,&local_b0,cVar6 != '\0');
                    }
                    FUN_140050b50(*(undefined4 *)(lVar16 + 0x130),&local_78);
                    plVar17 = local_b8;
                  }
                  if ((*(int *)((longlong)plVar17 + 0x3ac) != -1) &&
                     (lVar16 = FUN_14000f360(&DAT_141c66fd0), lVar16 != 0)) {
                    local_ac = 0xc;
                    local_a4 = 100;
                    local_98 = 0;
                    uStack_90 = 0;
                    local_88 = 0;
                    local_b0 = 0xb3;
                    lVar19 = *(longlong *)(lVar16 + 0xa78);
                    if ((lVar19 != 0) &&
                       (((*(uint *)(lVar16 + 0x110) & 0x502) != 2 &&
                        ((*(uint *)(lVar16 + 0x118) & 0x1000) == 0)))) {
                      cVar6 = FUN_140106f30(lVar16);
                      FUN_1409165e0(lVar19 + 0x248,&local_b0,cVar6 != '\0');
                    }
                    FUN_140050b50(*(undefined4 *)(lVar16 + 0x130),&local_78);
                    plVar17 = local_b8;
                  }
                  if (((int)plVar17[0x76] != -1) &&
                     (lVar16 = FUN_14000f360(&DAT_141c66fd0), lVar16 != 0)) {
                    local_ac = 0xc;
                    local_a4 = 100;
                    local_98 = 0;
                    uStack_90 = 0;
                    local_88 = 0;
                    local_b0 = 0xb3;
                    lVar19 = *(longlong *)(lVar16 + 0xa78);
                    if ((lVar19 != 0) &&
                       (((*(uint *)(lVar16 + 0x110) & 0x502) != 2 &&
                        ((*(uint *)(lVar16 + 0x118) & 0x1000) == 0)))) {
                      cVar6 = FUN_140106f30(lVar16);
                      FUN_1409165e0(lVar19 + 0x248,&local_b0,cVar6 != '\0');
                    }
                    FUN_140050b50(*(undefined4 *)(lVar16 + 0x130),&local_78);
                    plVar17 = local_b8;
                  }
                  lVar19 = lStack_70;
                  lVar16 = local_78;
                  piVar23 = piVar26;
                  piVar21 = piVar26;
                  if (DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0) {
                    do {
                      plVar13 = *(longlong **)((longlong)piVar23 + DAT_141c66fe8);
                      if (((*(byte *)(plVar13 + 0x22) & 2) == 0) && (plVar13 != plVar17)) {
                        iVar10 = (int)plVar13[0x26];
                        iVar15 = (int)(lVar19 - lVar16 >> 2);
                        if ((iVar15 != 0) &&
                           ((iVar10 != -1 && (iVar15 = iVar15 + -1, piVar24 = piVar26, -1 < iVar15))
                           )) {
                          do {
                            iVar12 = iVar15 + (int)piVar24 >> 1;
                            iVar11 = *(int *)(lVar16 + (longlong)iVar12 * 4);
                            if (iVar11 == iVar10) {
                              if (iVar12 != -1) goto LAB_1407fb6db;
                              break;
                            }
                            if (iVar10 < iVar11) {
                              iVar15 = iVar12 + -1;
                            }
                            else {
                              piVar24 = (int *)(ulonglong)(iVar12 + 1);
                            }
                          } while ((int)piVar24 <= iVar15);
                        }
                        if (*(int *)((longlong)plVar13 + 0x3ac) == (int)plVar17[0x26]) {
                          local_ac = 2;
                          local_a4 = 100;
                          local_98 = 0;
                          uStack_90 = 0;
                          local_88 = 0;
                          local_b0 = 0xb3;
                          lVar28 = plVar13[0x14f];
                          if (((lVar28 != 0) && ((*(uint *)(plVar13 + 0x22) & 0x502) != 2)) &&
                             ((*(uint *)(plVar13 + 0x23) & 0x1000) == 0)) {
                            cVar6 = FUN_140106f30(plVar13);
                            lVar28 = lVar28 + 0x248;
LAB_1407fb6c8:
                            FUN_1409165e0(lVar28,&local_b0,cVar6 != '\0');
                            plVar17 = local_b8;
                          }
                        }
                        else if ((int)plVar13[0x76] == (int)plVar17[0x26]) {
                          local_ac = 3;
                          local_a4 = 100;
                          local_98 = 0;
                          uStack_90 = 0;
                          local_88 = 0;
                          local_b0 = 0xb3;
                          lVar28 = plVar13[0x14f];
                          if (((lVar28 != 0) && ((*(uint *)(plVar13 + 0x22) & 0x502) != 2)) &&
                             ((*(uint *)(plVar13 + 0x23) & 0x1000) == 0)) {
                            cVar6 = FUN_140106f30(plVar13);
                            lVar28 = lVar28 + 0x248;
                            goto LAB_1407fb6c8;
                          }
                        }
                        else {
                          if ((*(int *)((longlong)plVar13 + 0x3ac) == -1) ||
                             (*(int *)((longlong)plVar13 + 0x3ac) !=
                              *(int *)((longlong)plVar17 + 0x3ac))) {
                            if (((int)plVar13[0x76] == -1) ||
                               ((int)plVar13[0x76] != (int)plVar17[0x76])) {
                              bVar5 = false;
                            }
                            else {
                              bVar5 = true;
                            }
                          }
                          else {
                            bVar5 = true;
                          }
                          if (bVar5) {
                            local_ac = 0xb;
                            local_a4 = 100;
                            local_98 = 0;
                            uStack_90 = 0;
                            local_88 = 0;
                            local_b0 = 0xb3;
                            lVar28 = plVar13[0x14f];
                            if (((lVar28 != 0) && ((*(uint *)(plVar13 + 0x22) & 0x502) != 2)) &&
                               ((*(uint *)(plVar13 + 0x23) & 0x1000) == 0)) {
                              cVar6 = FUN_140106f30(plVar13);
                              lVar28 = lVar28 + 0x248;
                              goto LAB_1407fb6c8;
                            }
                          }
                          else {
                            lVar28 = FUN_140ca8390(plVar13);
                            if (((lVar28 != 0) &&
                                (lVar28 = FUN_1407b52b0(lVar28,(int)plVar17[0x182]), lVar28 != 0))
                               && ((uVar18 = FUN_140103280(lVar28,&local_res10), plVar17 = local_b8,
                                   uVar18 == 0xd || (uVar18 == 0x12)))) {
                              local_a4 = 0x32;
                              local_98 = 0;
                              uStack_90 = 0;
                              local_88 = 0;
                              local_b0 = 0xb3;
                              local_ac = (ulonglong)uVar18;
                              lVar4 = *(longlong *)((longlong)piVar23 + DAT_141c66fe8);
                              lVar28 = *(longlong *)(lVar4 + 0xa78);
                              if (((lVar28 != 0) && ((*(uint *)(lVar4 + 0x110) & 0x502) != 2)) &&
                                 ((*(uint *)(lVar4 + 0x118) & 0x1000) == 0)) {
                                cVar6 = FUN_140106f30();
                                lVar28 = lVar28 + 0x248;
                                goto LAB_1407fb6c8;
                              }
                            }
                          }
                        }
                      }
LAB_1407fb6db:
                      uVar18 = (int)piVar21 + 1;
                      piVar23 = piVar23 + 2;
                      piVar21 = (int *)(ulonglong)uVar18;
                    } while ((ulonglong)(longlong)(int)uVar18 <
                             (ulonglong)(DAT_141c66ff0 - DAT_141c66fe8 >> 3));
                  }
                  if (lVar16 != 0) {
                    FUN_140002020(lVar16,local_68 - lVar16 >> 2,4);
                    plVar17 = local_b8;
                  }
                }
              }
            }
LAB_1407fb722:
            if ((plVar17 != (longlong *)0x0) &&
               (sVar8 = (**(code **)*param_1)(param_1), sVar8 == 0x17)) {
              FUN_1408054d0(param_1,local_80,&local_res20,&local_res10);
              iVar15 = (int)(local_b8[0x80] - local_b8[0x7f] >> 3);
              while (iVar15 = iVar15 + -1, -1 < iVar15) {
                plVar17 = (longlong *)**(longlong **)(local_b8[0x7f] + (longlong)iVar15 * 8);
                uVar30 = 1;
                FUN_140c2ab20(local_b8,plVar17,0);
                (**(code **)(*plVar17 + 800))(plVar17);
                if ((*(uint *)(param_1 + 2) & 0x400) != 0) {
                  *(uint *)(plVar17 + 2) = *(uint *)(plVar17 + 2) | 0x400;
                }
                if ((*(uint *)(param_1 + 2) & 0x800) != 0) {
                  *(uint *)(plVar17 + 2) = *(uint *)(plVar17 + 2) | 0x800;
                }
                if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
                  *(uint *)(plVar17 + 2) = *(uint *)(plVar17 + 2) | 0x10;
                }
                if ((*(uint *)(param_1 + 2) & 0x80000) != 0) {
                  *(uint *)(plVar17 + 2) = *(uint *)(plVar17 + 2) | 0x80000;
                }
                (**(code **)(*plVar17 + 0x318))(plVar17,1);
                (**(code **)(*plVar17 + 0x310))
                          (plVar17,(int)local_80[0],(int)(short)local_res20,(int)(short)local_res10,
                           uVar30);
                if ((int)(local_b8[0x80] - local_b8[0x7f] >> 3) < iVar15) {
                  iVar15 = (int)(local_b8[0x80] - local_b8[0x7f] >> 3);
                }
              }
            }
          }
          if ((char)local_res18 == '\0') goto switchD_1407fadc5_caseD_18;
        }
      }
LAB_1407fb9c3:
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
      goto switchD_1407fadc5_caseD_18;
    }
    break;
  default:
    goto switchD_1407fadc5_caseD_18;
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x35:
  case 0x46:
  case 0x47:
  case 0x57:
    uVar18 = *(uint *)(param_1 + 2);
    if ((uVar18 >> 8 & 1) != 0) goto LAB_1407fb9c3;
    break;
  case 0x31:
    uVar18 = *(uint *)(param_1 + 2);
    if ((uVar18 >> 8 & 1) != 0) {
      FUN_1408054d0(param_1,&local_res18,&local_res10,local_res8);
      iVar15 = (**(code **)(*param_1 + 0x488))(param_1);
      while (0 < iVar15) {
        local_78 = 0;
        lStack_70 = 0;
        local_68 = 0;
        uVar7 = (**(code **)(*param_1 + 0x50))(param_1);
        uVar9 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_1402b9ec0(&DAT_141d6dd30,uVar9,uVar7,&local_78);
        lVar16 = local_78;
        iVar10 = (int)(lStack_70 - local_78 >> 3) + -1;
        lVar19 = (longlong)iVar10;
        if (-1 < iVar10) {
          do {
            plVar17 = *(longlong **)(lVar16 + lVar19 * 8);
            if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
              *(uint *)(plVar17 + 2) = *(uint *)(plVar17 + 2) | 0x80;
            }
            if ((*(uint *)(param_1 + 2) & 0x400) != 0) {
              *(uint *)(plVar17 + 2) = *(uint *)(plVar17 + 2) | 0x400;
            }
            if ((*(uint *)(param_1 + 2) & 0x800) != 0) {
              *(uint *)(plVar17 + 2) = *(uint *)(plVar17 + 2) | 0x800;
            }
            if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
              *(uint *)(plVar17 + 2) = *(uint *)(plVar17 + 2) | 0x10;
            }
            if ((*(uint *)(param_1 + 2) & 0x4000) != 0) {
              *(uint *)(plVar17 + 2) = *(uint *)(plVar17 + 2) | 0x4000;
            }
            if ((*(uint *)(param_1 + 2) & 0x80000) != 0) {
              *(uint *)(plVar17 + 2) = *(uint *)(plVar17 + 2) | 0x80000;
            }
            lVar28 = *plVar17;
            uVar7 = (**(code **)(*param_1 + 0x178))(param_1);
            (**(code **)(lVar28 + 0x4c0))(plVar17,uVar7,1);
            (**(code **)(*plVar17 + 0x188))(plVar17);
            (**(code **)(*plVar17 + 0x318))(plVar17,1);
            (**(code **)(*plVar17 + 0x310))
                      (plVar17,(int)(short)local_res18,(int)(short)local_res10,
                       (int)(short)local_res8[0]);
            lVar19 = lVar19 + -1;
          } while (-1 < lVar19);
        }
        iVar15 = iVar15 + -1;
        if (lVar16 != 0) {
          FUN_140002020(lVar16,local_68 - lVar16 >> 3,8);
        }
      }
      goto LAB_1407fb9c3;
    }
  }
  *(uint *)(param_1 + 2) = uVar18 | 0x100;
switchD_1407fadc5_caseD_18:
  (**(code **)(*param_1 + 0x188))(param_1);
  (**(code **)(*param_1 + 0x318))(param_1,1);
  return (undefined1)local_res8[0];
}

