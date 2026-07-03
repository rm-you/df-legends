// FUN_1407b70f0 @ 1407b70f0
// callees:
//   -> 1407b6cd0 FUN_1407b6cd0
//   -> 1407b8ef0 FUN_1407b8ef0
//   -> 1407b6ae0 FUN_1407b6ae0
//   -> 140004650 FUN_140004650
//   -> 1400199b0 FUN_1400199b0
//   -> 14000e080 FUN_14000e080
//   -> 140765280 FUN_140765280
//   -> 1407b8b40 FUN_1407b8b40
//   -> 14000d840 FUN_14000d840
//   -> 1407c6dd0 FUN_1407c6dd0
//   -> 1400511c0 FUN_1400511c0
//   -> 14000df00 FUN_14000df00
//   -> 140002020 FUN_140002020
//   -> 140769060 FUN_140769060
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407b70f0(longlong param_1,int *param_2,int *param_3,int *param_4,int param_5,
                  longlong param_6,ulonglong param_7)

{
  int iVar1;
  int *piVar2;
  ulonglong *puVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int *piVar20;
  uint uVar21;
  short sVar22;
  int *piVar23;
  bool bVar24;
  undefined1 auStack_348 [32];
  uint local_328;
  int local_320;
  longlong local_318;
  ulonglong local_308;
  int *local_300;
  longlong *local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  int local_2d8 [22];
  int local_280;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  int local_198 [72];
  longlong local_78;
  longlong local_68;
  ulonglong local_58;
  
  local_2e8 = 0xfffffffffffffffe;
  local_58 = DAT_1410b5008 ^ (ulonglong)auStack_348;
  local_308 = param_6;
  local_2f8 = (longlong *)param_1;
  FUN_1407b6cd0(param_1,param_7);
  piVar23 = (int *)0x0;
  if ((*(longlong *)(param_7 + 0x38) == 0) && ((*(byte *)(param_7 + 0x40) & 2) == 0)) {
    FUN_1407b8ef0(param_1,param_6);
    puVar18 = (undefined8 *)(param_6 + 0x1a0);
    piVar20 = piVar23;
    if (0 < *(int *)(param_6 + 0x1b0)) {
      do {
        for (puVar8 = *(undefined8 **)*puVar18; puVar8 < (undefined8 *)((undefined8 *)*puVar18)[1];
            puVar8 = puVar8 + 1) {
          piVar2 = (int *)*puVar8;
          if ((piVar2[2] == 0) && (*piVar2 == *param_2)) {
            *(int **)(param_7 + 0x38) = piVar2;
            break;
          }
        }
        if (*(longlong *)(param_7 + 0x38) != 0) break;
        uVar21 = (int)piVar20 + 1;
        piVar20 = (int *)(ulonglong)uVar21;
        puVar18 = puVar18 + 1;
      } while ((int)uVar21 < *(int *)(param_6 + 0x1b0));
    }
  }
  switch(param_2[1]) {
  case 0:
    cVar6 = FUN_1407b6ae0(param_7,param_2 + 0x1c);
    if (cVar6 == '\0') {
      return;
    }
    if (param_2[0xc] == -1) {
      return;
    }
    local_300 = (int *)FUN_140004650(&DAT_141d7a048);
    if (local_300 == (int *)0x0) {
      return;
    }
    uVar16 = 0xffffffff;
    if (*(longlong *)(param_2 + 0x12) - *(longlong *)(param_2 + 0x10) >> 2 != 0) {
      uVar16 = **(undefined4 **)(param_2 + 0x10);
    }
    FUN_14000e080(local_2d8);
    local_320 = param_5 + 1;
    local_318 = local_308;
    local_328 = param_2[0xd];
    FUN_140765280(param_1,local_2d8,param_2[0xe],uVar16);
    piVar23 = local_300;
    local_328 = local_328 & 0xffff0000;
    iVar15 = FUN_140769060(local_300,0,0xffffffff,0xffffffff);
    if (iVar15 < 25000) {
      if (iVar15 < 15000) {
        if (iVar15 < 3000) {
          iVar11 = 1;
          if (299 < iVar15) {
            iVar11 = 10;
          }
        }
        else {
          iVar11 = 0x19;
        }
      }
      else {
        iVar11 = 0x32;
      }
    }
    else {
      iVar11 = 100;
    }
    lVar9 = *(longlong *)((longlong)piVar23 + 0x130);
    if (((lVar9 == 0) || (*(longlong *)(lVar9 + 0x48) == 0)) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x48) + 0x130) == 0)) {
      sVar7 = *(short *)((longlong)piVar23 + 4);
      sVar22 = *(short *)((longlong)piVar23 + 2);
      if (((sVar22 < 0) ||
          ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar22)) ||
         (sVar7 < 0)) {
LAB_1407b8035:
        if (((lVar9 == 0) ||
            ((lVar9 = *(longlong *)(lVar9 + 0x48), lVar9 == 0 ||
             ((*(uint *)(lVar9 + 0x4c) & 0x2000000) != 0)))) ||
           ((*(uint *)(lVar9 + 0x48) & 0x2000000) == 0)) goto LAB_1407b805a;
      }
      else {
        lVar10 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar22 * 8);
        if (((ulonglong)(*(longlong *)(lVar10 + 0x180) - *(longlong *)(lVar10 + 0x178) >> 3) <=
             (ulonglong)(longlong)sVar7) ||
           (cVar6 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar10 + 0x178) + (longlong)sVar7 * 8)
                                  + 0x6a8,0x3a), cVar6 == '\0')) goto LAB_1407b8035;
        if (((lVar9 != 0) && (*(longlong *)(lVar9 + 0x48) != 0)) &&
           ((*(uint *)(*(longlong *)(lVar9 + 0x48) + 0x4c) & 0x2000000) != 0)) goto LAB_1407b805a;
      }
      param_3[8] = param_3[8] + 1;
    }
    else {
LAB_1407b805a:
      param_3[0x19] = param_3[0x19] + iVar11;
    }
    if (param_4[8] == -1) {
      param_4[8] = *param_2;
    }
    lVar10 = DAT_141d6dd58;
    lVar9 = DAT_141d6dd50;
    sVar7 = *(short *)((longlong)piVar23 + 4);
    sVar22 = *(short *)((longlong)piVar23 + 2);
    if (-1 < sVar22) {
      if (((ulonglong)(longlong)sVar22 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
         (-1 < sVar7)) {
        lVar4 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar22 * 8);
        if (((ulonglong)(*(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3) <=
             (ulonglong)(longlong)sVar7) ||
           (cVar6 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar4 + 0x178) + (longlong)sVar7 * 8)
                                  + 0x6a8,0x6e), cVar6 == '\0')) goto LAB_1407b80e4;
LAB_1407b8145:
        *param_3 = *param_3 + 100;
LAB_1407b8210:
        if (*param_4 == -1) {
          *param_4 = *param_2;
        }
      }
      else {
LAB_1407b80e4:
        if (-1 < sVar22) {
          if (((ulonglong)(longlong)sVar22 < (ulonglong)(lVar10 - lVar9 >> 3)) && (-1 < sVar7)) {
            lVar4 = *(longlong *)(lVar9 + (longlong)sVar22 * 8);
            if (((ulonglong)(longlong)sVar7 <
                 (ulonglong)(*(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3)) &&
               (cVar6 = FUN_14000d840(*(longlong *)
                                       (*(longlong *)(lVar4 + 0x178) + (longlong)sVar7 * 8) + 0x6a8,
                                      0x84), cVar6 != '\0')) goto LAB_1407b8145;
          }
          if (-1 < sVar22) {
            if (((ulonglong)(longlong)sVar22 < (ulonglong)(lVar10 - lVar9 >> 3)) && (-1 < sVar7)) {
              lVar4 = *(longlong *)(lVar9 + (longlong)sVar22 * 8);
              if (((ulonglong)(longlong)sVar7 <
                   (ulonglong)(*(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3)) &&
                 (cVar6 = FUN_14000d840(*(longlong *)
                                         (*(longlong *)(lVar4 + 0x178) + (longlong)sVar7 * 8) +
                                        0x6a8,0x6f), cVar6 != '\0')) {
                *param_3 = *param_3 + 0x19;
                goto LAB_1407b8210;
              }
            }
            if (((-1 < sVar22) && ((ulonglong)(longlong)sVar22 < (ulonglong)(lVar10 - lVar9 >> 3)))
               && (-1 < sVar7)) {
              lVar9 = *(longlong *)(lVar9 + (longlong)sVar22 * 8);
              if (((ulonglong)(longlong)sVar7 <
                   (ulonglong)(*(longlong *)(lVar9 + 0x180) - *(longlong *)(lVar9 + 0x178) >> 3)) &&
                 (cVar6 = FUN_14000d840(*(longlong *)
                                         (*(longlong *)(lVar9 + 0x178) + (longlong)sVar7 * 8) +
                                        0x6a8,0x8f), cVar6 != '\0')) {
                *param_3 = *param_3 + 10;
                goto LAB_1407b8210;
              }
            }
          }
        }
      }
    }
    if ((0 < local_2d8[0]) && (param_3[9] = param_3[9] + 1, param_4[9] == -1)) {
      param_4[9] = *param_2;
    }
    if ((0 < local_280) && (param_3[0x1a] = param_3[0x1a] + 1, param_4[0x1a] == -1)) {
      param_4[0x1a] = *param_2;
    }
    plVar19 = *(longlong **)((longlong)local_300 + 0xf0);
    for (plVar13 = *(longlong **)((longlong)local_300 + 0xe8); plVar13 < plVar19;
        plVar13 = plVar13 + 1) {
      sVar7 = (*(code *)**(undefined8 **)*plVar13)();
      if (sVar7 == 8) {
        iVar15 = FUN_1407b8b40(local_2f8,*(undefined4 *)(*plVar13 + 8),local_308);
        if (iVar15 - 6U < 2) {
          *param_3 = *param_3 + iVar11;
        }
      }
      else if (sVar7 == 9) {
        iVar15 = FUN_1407b8b40(local_2f8,*(undefined4 *)(*plVar13 + 8),local_308);
        if (iVar15 - 6U < 2) {
          param_3[0x1a] = param_3[0x1a] + iVar11;
        }
      }
      else if (((sVar7 == 10) || (sVar7 == 0xd)) &&
              (iVar15 = FUN_1407b8b40(local_2f8,*(undefined4 *)(*plVar13 + 8),local_308), 5 < iVar15
              )) {
        if (iVar15 < 8) {
          param_3[0xd] = param_3[0xd] + 1;
          if (param_4[0xd] == -1) {
            param_4[0xd] = *param_2;
          }
        }
        else if ((iVar15 - 9U < 2) && (param_3[0xe] = param_3[0xe] + 1, param_4[0xe] == -1)) {
          param_4[0xe] = *param_2;
        }
      }
    }
    goto LAB_1407b832b;
  case 1:
    cVar6 = FUN_1407b6ae0(param_7,param_2 + 0x1c);
    if (cVar6 == '\0') {
      return;
    }
    iVar15 = (int)(DAT_141d691e0 - DAT_141d691d8 >> 3) + -1;
    piVar20 = piVar23;
    if (-1 < iVar15) {
      do {
        iVar11 = iVar15 + (int)piVar20 >> 1;
        piVar2 = *(int **)(DAT_141d691d8 + (longlong)iVar11 * 8);
        if (*piVar2 == param_2[0x34]) {
          piVar23 = piVar2;
          if (((piVar2 != (int *)0x0) && (piVar2[1] == 10)) &&
             (param_3[0x12] = param_3[0x12] + 1, param_4[0x12] == -1)) {
            param_4[0x12] = *param_2;
          }
          break;
        }
        if (param_2[0x34] < *piVar2) {
          iVar15 = iVar11 + -1;
        }
        else {
          piVar20 = (int *)(ulonglong)(iVar11 + 1);
        }
      } while ((int)piVar20 <= iVar15);
    }
    if (param_2[0xc] == -1) {
      return;
    }
    if (piVar23 == (int *)0x0) {
      return;
    }
    if (piVar23[1] != 9) {
      return;
    }
    if (param_2[0xc] == *(int *)(param_1 + 0xe0)) {
      param_3[0x10] = param_3[0x10] + 1;
      if (param_4[0x10] != -1) {
        return;
      }
      param_4[0x10] = *param_2;
      return;
    }
    uVar16 = 0xffffffff;
    if (*(longlong *)(param_2 + 0x12) - *(longlong *)(param_2 + 0x10) >> 2 != 0) {
      uVar16 = **(undefined4 **)(param_2 + 0x10);
    }
    FUN_14000e080(local_2d8);
    local_320 = param_5 + 1;
    local_318 = local_308;
    local_328 = param_2[0xd];
    FUN_140765280(param_1,local_2d8,param_2[0xe],uVar16);
    if ((0 < local_2d8[0]) && (param_3[0x10] = param_3[0x10] + 1, param_4[0x10] == -1)) {
      param_4[0x10] = *param_2;
    }
    goto LAB_1407b832b;
  case 2:
  case 3:
    cVar6 = FUN_1407b6ae0(param_7,param_2 + 0x1c);
    if (cVar6 == '\0') {
      return;
    }
    if (param_2[0xc] == -1) {
      return;
    }
    local_2f0 = FUN_140004650(&DAT_141d7a048,param_2[0xe]);
    plVar13 = local_2f8;
    if (local_2f0 == 0) {
      return;
    }
    bVar24 = false;
    plVar19 = *(longlong **)(local_2f0 + 0xe8);
    local_300 = (int *)((ulonglong)
                        ((longlong)*(longlong **)(local_2f0 + 0xf0) + (7 - (longlong)plVar19)) >> 3)
    ;
    if (*(longlong **)(local_2f0 + 0xf0) < plVar19) {
      local_300 = piVar23;
    }
    if (local_300 != (int *)0x0) {
      do {
        sVar7 = (*(code *)**(undefined8 **)*plVar19)();
        if (((sVar7 == 10) || (sVar7 == 0xd)) &&
           (iVar15 = FUN_1407b8b40(plVar13,*(undefined4 *)(*plVar19 + 8),local_308), 5 < iVar15)) {
          if (iVar15 < 8) {
            param_3[0xd] = param_3[0xd] + 1;
            if (param_4[0xd] == -1) {
              param_4[0xd] = *param_2;
            }
          }
          else {
            if (iVar15 < 9) goto LAB_1407b77e0;
            if (iVar15 < 0xb) {
              param_3[0xe] = param_3[0xe] + 1;
              if (param_4[0xe] == -1) {
                param_4[0xe] = *param_2;
              }
            }
            else {
              if (iVar15 != 0x39) goto LAB_1407b77e0;
              param_3[0x1a] = param_3[0x1a] + 1;
              if (param_4[0x1a] == -1) {
                param_4[0x1a] = *param_2;
              }
            }
          }
          bVar24 = true;
        }
LAB_1407b77e0:
        plVar19 = plVar19 + 1;
        piVar23 = (int *)((longlong)piVar23 + 1);
      } while (piVar23 < local_300);
      if (bVar24) {
        return;
      }
    }
    lVar9 = *(longlong *)(local_2f0 + 0x130);
    if (((lVar9 != 0) && (*(longlong *)(lVar9 + 0x48) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x48) + 0x130) != 0)) {
      return;
    }
    sVar7 = *(short *)(local_2f0 + 4);
    sVar22 = *(short *)(local_2f0 + 2);
    if (((sVar22 < 0) ||
        ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar22)) ||
       (sVar7 < 0)) {
LAB_1407b78c2:
      if (lVar9 == 0) {
        return;
      }
      lVar9 = *(longlong *)(lVar9 + 0x48);
      if (lVar9 == 0) {
        return;
      }
      if ((*(uint *)(lVar9 + 0x4c) & 0x2000000) != 0) {
        return;
      }
      if ((*(uint *)(lVar9 + 0x48) & 0x2000000) == 0) {
        return;
      }
    }
    else {
      lVar10 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar22 * 8);
      if (((ulonglong)(*(longlong *)(lVar10 + 0x180) - *(longlong *)(lVar10 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar7) ||
         (cVar6 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar10 + 0x178) + (longlong)sVar7 * 8) +
                                0x6a8,0x3a), cVar6 == '\0')) goto LAB_1407b78c2;
      if (((lVar9 != 0) && (*(longlong *)(lVar9 + 0x48) != 0)) &&
         ((*(uint *)(*(longlong *)(lVar9 + 0x48) + 0x4c) & 0x2000000) != 0)) {
        return;
      }
    }
    iVar15 = param_2[0x3d];
    if (2 < iVar15) {
      if (iVar15 < 5) {
        param_3[4] = param_3[4] + 1;
        if (param_4[4] == -1) {
          param_4[4] = *param_2;
        }
      }
      else if ((iVar15 < 7) && (param_3[5] = param_3[5] + 1, param_4[5] == -1)) {
        param_4[5] = *param_2;
      }
    }
    break;
  case 4:
    cVar6 = FUN_1407b6ae0(param_7,param_2 + 0x2a);
    if (cVar6 == '\0') {
      return;
    }
    lVar9 = FUN_140004650(&DAT_141d7a048,param_2[0x1c]);
    lVar10 = FUN_140004650(&DAT_141d7a048,param_2[0xc]);
    if ((param_1 == lVar9) || (param_1 == lVar10)) {
      *param_3 = *param_3 + 100;
      return;
    }
    if (lVar9 == 0) {
      return;
    }
    if (lVar10 == 0) {
      return;
    }
    FUN_14000e080(local_198);
    uVar17 = 0xffffffff;
    uVar16 = 0xffffffff;
    if (*(longlong *)(param_2 + 0x22) - *(longlong *)(param_2 + 0x20) >> 2 != 0) {
      uVar16 = **(undefined4 **)(param_2 + 0x20);
    }
    local_318 = local_308;
    local_328 = param_2[0x1d];
    local_320 = param_5 + 1;
    FUN_140765280(param_1,local_198,param_2[0x1e],uVar16);
    FUN_14000e080(local_2d8);
    if (*(longlong *)(param_2 + 0x12) - *(longlong *)(param_2 + 0x10) >> 2 != 0) {
      uVar17 = **(undefined4 **)(param_2 + 0x10);
    }
    local_318 = local_308;
    local_328 = param_2[0xd];
    local_320 = param_5 + 1;
    FUN_140765280(param_1,local_2d8,param_2[0xe],uVar17);
    if (((0 < local_198[0]) || (0 < local_2d8[0])) && (*param_3 = *param_3 + 0x19, *param_4 == -1))
    {
      *param_4 = *param_2;
    }
    if (local_1b8 != 0) {
      FUN_140002020(local_1b8,local_1a8 - local_1b8 >> 2,4);
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
    }
    if (local_78 == 0) {
      return;
    }
    goto LAB_1407b833e;
  case 5:
    cVar6 = FUN_1407b6ae0(param_7,param_2 + 0x1c);
    if (cVar6 == '\0') {
      return;
    }
    if (param_2[0xc] == -1) {
      return;
    }
    if (param_2[0xc] == *(int *)(param_1 + 0xe0)) {
      param_3[0xf] = param_3[0xf] + 1;
      if (param_4[0xf] != -1) {
        return;
      }
      param_4[0xf] = *param_2;
      return;
    }
    uVar16 = 0xffffffff;
    if (*(longlong *)(param_2 + 0x12) - *(longlong *)(param_2 + 0x10) >> 2 != 0) {
      uVar16 = **(undefined4 **)(param_2 + 0x10);
    }
    FUN_14000e080(local_2d8);
    local_320 = param_5 + 1;
    local_318 = local_308;
    local_328 = param_2[0xd];
    FUN_140765280(param_1,local_2d8,param_2[0xe],uVar16);
    if ((0 < local_2d8[0]) && (param_3[0xf] = param_3[0xf] + 1, param_4[0xf] == -1)) {
      param_4[0xf] = *param_2;
    }
LAB_1407b832b:
    local_78 = local_1b8;
    local_68 = local_1a8;
    if (local_1b8 != 0) {
LAB_1407b833e:
      FUN_140002020(local_78,local_68 - local_78 >> 2,4);
    }
    break;
  case 6:
    lVar9 = *(longlong *)(param_2 + 0x44);
    if (lVar9 != 0) {
      plVar19 = *(longlong **)(lVar9 + 0x10);
      for (plVar13 = *(longlong **)(lVar9 + 8); plVar13 < plVar19; plVar13 = plVar13 + 1) {
        cVar6 = FUN_1407b6ae0(param_7,*plVar13 + 8);
        if (cVar6 != '\0') {
          switch(*(undefined4 *)*plVar13) {
          case 0:
            param_3 = param_3 + 0x13;
            param_4 = param_4 + 0x13;
            break;
          case 1:
            param_3 = param_3 + 0x14;
            param_4 = param_4 + 0x14;
            break;
          case 2:
            param_3 = param_3 + 0x15;
            param_4 = param_4 + 0x15;
            break;
          case 3:
            param_3 = param_3 + 0x16;
            param_4 = param_4 + 0x16;
            break;
          case 4:
          case 5:
          case 6:
          case 7:
            param_3 = param_3 + 0x20;
            param_4 = param_4 + 0x20;
            break;
          default:
            return;
          }
          if (param_3 == (int *)0x0) {
            return;
          }
          iVar15 = ((undefined4 *)*plVar13)[0xc] * 2;
          iVar11 = 0;
          if ((-1 < iVar15) && (iVar11 = iVar15, 100 < iVar15)) {
            iVar11 = 100;
          }
          if (iVar11 <= *param_3) {
            return;
          }
          *param_3 = iVar11;
          if (*param_4 != -1) {
            return;
          }
          *param_4 = *param_2;
          return;
        }
      }
    }
    break;
  case 7:
    uVar14 = param_7;
    cVar6 = FUN_1407b6ae0(param_7,*(longlong *)(param_2 + 0x44) + 8);
    if (cVar6 == '\0') {
      return;
    }
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_308 = CONCAT44(local_308._4_4_,(int)uVar14);
    if ((*(longlong *)(param_1 + 0x130) != 0) &&
       (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x60), lVar9 != 0)) {
      lVar9 = FUN_1400511c0(*(undefined4 *)(*(longlong *)(param_2 + 0x44) + 4),lVar9 + 0x60);
      uVar14 = local_308 & 0xffffffff;
      if (lVar9 != 0) {
        uVar14 = local_308 & 0xff;
        if (*(int *)(lVar9 + 0x10) == -1) {
          uVar14 = 1;
        }
        local_308 = CONCAT44(local_308._4_4_,(int)uVar14);
      }
    }
    local_300 = (int *)((ulonglong)local_300 & 0xffffffffffffff00);
    if (((char)uVar14 == '\0') && (iVar15 = *(int *)(param_1 + 0xc0), iVar15 != -1)) {
      if ((*(longlong *)(param_7 + 8) != 0) &&
         (*(int *)(*(longlong *)(param_7 + 8) + 0xc0) == iVar15)) {
        return;
      }
      iVar11 = (int)(DAT_141d86400 - DAT_141d863f8 >> 3) + -1;
      if (-1 < iVar11) {
        do {
          iVar12 = iVar11 + (int)piVar23 >> 1;
          piVar20 = *(int **)(DAT_141d863f8 + (longlong)iVar12 * 8);
          iVar1 = *piVar20;
          if (iVar1 == iVar15) {
            lVar9 = FUN_1400511c0(*(undefined4 *)(*(longlong *)(param_2 + 0x44) + 4),piVar20 + 2);
            if (lVar9 != 0) {
              uVar21 = (uint)local_300 & 0xff;
              if (*(int *)(lVar9 + 0x10) == -1) {
                uVar21 = 1;
              }
              local_300 = (int *)CONCAT44(local_300._4_4_,uVar21);
            }
            break;
          }
          if (iVar15 < iVar1) {
            iVar11 = iVar12 + -1;
          }
          else {
            piVar23 = (int *)(ulonglong)(iVar12 + 1);
          }
        } while ((int)piVar23 <= iVar11);
      }
    }
    lVar9 = FUN_1407c6dd0(param_1);
    bVar24 = false;
    cVar6 = (char)local_300;
    if ((cVar6 == '\0') && (lVar9 != 0)) {
      lVar10 = FUN_14000df00(&DAT_141c68010,*(undefined4 *)(*(longlong *)(param_2 + 0x44) + 4));
      bVar24 = false;
      if (lVar10 != 0) {
        cVar6 = (**(code **)(**(longlong **)(lVar10 + 0x90) + 0x768))();
        bVar24 = false;
        if (cVar6 != '\0') {
          bVar24 = true;
        }
      }
      cVar6 = (char)local_300;
    }
    plVar13 = local_2f8;
    bVar5 = false;
    piVar23 = *(int **)(param_2 + 0x44);
    iVar15 = *piVar23;
    if ((iVar15 == 3) && (bVar5 = false, piVar23[0xc] == *(int *)((longlong)local_2f8 + 0xe0))) {
      bVar5 = true;
    }
    if (((char)local_308 != '\0') || ((bVar5 && (!bVar24)))) {
      if (iVar15 == 3) {
        bVar24 = piVar23[0xc] == *(int *)((longlong)local_2f8 + 0xe0);
LAB_1407b7cde:
        if (!bVar24) {
          return;
        }
        param_3[0x1b] = param_3[0x1b] + 0x32;
        if (param_4[0x1b] != -1) {
          return;
        }
        param_4[0x1b] = *param_2;
        return;
      }
      if (iVar15 != 4) {
        return;
      }
      bVar24 = piVar23[0xc] == *(int *)((longlong)local_2f8 + 0xe0);
    }
    else {
      if (cVar6 == '\0') {
        if (!bVar24) {
          return;
        }
        if (iVar15 == 1) {
          if (piVar23[0x16] != *(int *)(lVar9 + 0x98)) {
            return;
          }
          if (piVar23[0x17] != *(int *)(lVar9 + 8)) {
            return;
          }
          param_3[0x1e] = param_3[0x1e] + 0x32;
        }
        else {
          if (iVar15 != 3) {
            return;
          }
          if ((piVar23[0xc] != *(int *)((longlong)local_2f8 + 0xe0)) &&
             ((piVar23[0x16] != *(int *)(lVar9 + 0x98) || (piVar23[0x17] != *(int *)(lVar9 + 8)))))
          {
            lVar10 = FUN_140004650(&DAT_141d7a048,piVar23[0xc]);
            if (lVar10 == 0) {
              return;
            }
            lVar10 = FUN_1407c6dd0(lVar10);
            if (lVar10 != lVar9) {
              return;
            }
          }
          param_3[0x1e] = param_3[0x1e] + 0x32;
        }
        goto LAB_1407b79ee;
      }
      if (iVar15 == 3) {
        lVar9 = FUN_140004650(&DAT_141d7a048,piVar23[0xc]);
        if (lVar9 == 0) {
          return;
        }
        bVar24 = *(int *)(lVar9 + 0xc0) == *(int *)((longlong)plVar13 + 0xc0);
        goto LAB_1407b7cde;
      }
      if (iVar15 != 4) {
        return;
      }
      lVar9 = FUN_140004650(&DAT_141d7a048,piVar23[0xc]);
      if (lVar9 == 0) {
        return;
      }
      bVar24 = *(int *)(lVar9 + 0xc0) == *(int *)((longlong)plVar13 + 0xc0);
    }
    if ((bVar24) && (param_3[0x1c] = param_3[0x1c] + 0x32, param_4[0x1c] == -1)) {
      param_4[0x1c] = *param_2;
    }
    break;
  case 8:
    cVar6 = FUN_1407b6ae0(param_7,*(longlong *)(param_2 + 0x44) + 8);
    if (cVar6 == '\0') {
      return;
    }
    lVar9 = FUN_1407c6dd0(param_1);
    if (lVar9 == 0) {
      return;
    }
    piVar23 = *(int **)(param_2 + 0x44);
    if (*piVar23 == 0) {
      if (piVar23[0x16] != *(int *)(lVar9 + 0x98)) {
        return;
      }
      bVar24 = piVar23[0x17] == *(int *)(lVar9 + 8);
LAB_1407b79e4:
      if (!bVar24) {
        return;
      }
    }
    else {
      if (*piVar23 != 1) {
        return;
      }
      if ((piVar23[0xc] != *(int *)(param_1 + 0xe0)) &&
         ((piVar23[0x16] != *(int *)(lVar9 + 0x98) || (piVar23[0x17] != *(int *)(lVar9 + 8))))) {
        lVar10 = FUN_140004650(&DAT_141d7a048);
        if (lVar10 == 0) {
          return;
        }
        lVar10 = FUN_1407c6dd0(lVar10);
        bVar24 = lVar10 == lVar9;
        goto LAB_1407b79e4;
      }
    }
    param_3[0x1e] = param_3[0x1e] + 10;
LAB_1407b79ee:
    if (param_4[0x1e] == -1) {
      param_4[0x1e] = *param_2;
    }
    break;
  case 9:
    local_308 = CONCAT44(local_308._4_4_,*(int *)(param_1 + 0xb0));
    if (((param_2[0x18] == *(int *)(param_1 + 0xb0)) &&
        (plVar13 = *(longlong **)(param_2 + 0x44), plVar13 != (longlong *)0x0)) &&
       ((plVar13[1] - *plVar13 & 0xfffffffffffffff8U) != 0)) {
      plVar19 = (longlong *)plVar13[1];
      plVar13 = (longlong *)*plVar13;
      local_2f8 = plVar13;
      for (; plVar13 < plVar19; plVar13 = plVar13 + 1) {
        cVar6 = FUN_1407b6ae0(param_7,*plVar13);
        if (cVar6 != '\0') {
          lVar9 = *local_2f8;
          if (*(int *)(lVar9 + 8) != -1) {
            lVar9 = FUN_140004650(&DAT_141d7a048);
            if (lVar9 != 0) {
              plVar13 = *(longlong **)(lVar9 + 0xe8);
              if (plVar13 < *(longlong **)(lVar9 + 0xf0)) {
                do {
                  if (*(int *)(*plVar13 + 8) == (int)local_308) {
                    return;
                  }
                  plVar13 = plVar13 + 1;
                } while (plVar13 < *(longlong **)(lVar9 + 0xf0));
              }
            }
            goto LAB_1407b737f;
          }
          if (*(longlong *)(lVar9 + 0x18) - *(longlong *)(lVar9 + 0x10) >> 2 == 0)
          goto LAB_1407b737f;
          iVar15 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1;
          if (iVar15 < 0) goto LAB_1407b737f;
          goto LAB_1407b72f0;
        }
      }
    }
    break;
  case 10:
    if ((param_2[0x18] == *(int *)(param_1 + 0xb0)) &&
       (puVar3 = *(ulonglong **)(param_2 + 0x44), puVar3 != (ulonglong *)0x0)) {
      puVar18 = (undefined8 *)*puVar3;
      piVar20 = (int *)((ulonglong)((longlong)puVar3[1] + (7 - (longlong)puVar18)) >> 3);
      if ((undefined8 *)puVar3[1] < puVar18) {
        piVar20 = piVar23;
      }
      if (piVar20 != (int *)0x0) {
        do {
          cVar6 = FUN_1407b6ae0(param_7,*puVar18);
          if ((cVar6 != '\0') && (param_3[0x1f] = param_3[0x1f] + 0x19, param_4[0x1f] == -1)) {
            param_4[0x1f] = *param_2;
          }
          puVar18 = puVar18 + 1;
          piVar23 = (int *)((longlong)piVar23 + 1);
        } while (piVar23 < piVar20);
      }
    }
  }
  return;
  while( true ) {
    if (**(int **)(lVar9 + 0x10) < *piVar20) {
      iVar15 = iVar11 + -1;
    }
    else {
      piVar23 = (int *)(ulonglong)(iVar11 + 1);
    }
    if (iVar15 < (int)piVar23) break;
LAB_1407b72f0:
    iVar11 = iVar15 + (int)piVar23 >> 1;
    piVar20 = *(int **)(DAT_141d69178 + (longlong)iVar11 * 8);
    if (*piVar20 == **(int **)(lVar9 + 0x10)) {
      if ((piVar20 != (int *)0x0) && (iVar15 = piVar20[0x2c], iVar15 != -1)) {
        if (iVar15 == (int)local_308) {
          return;
        }
        lVar9 = FUN_1400199b0(&DAT_141c53718,local_308 & 0xffffffff);
        if (lVar9 != 0) {
          for (puVar18 = *(undefined8 **)(lVar9 + 0xb0); puVar18 < *(undefined8 **)(lVar9 + 0xb8);
              puVar18 = puVar18 + 1) {
            if ((*(short *)*puVar18 == 1) && (*(int *)((short *)*puVar18 + 2) == iVar15)) {
              return;
            }
          }
        }
      }
      break;
    }
  }
LAB_1407b737f:
  param_3[0x1f] = param_3[0x1f] + 0x19;
  if (param_4[0x1f] != -1) {
    return;
  }
  param_4[0x1f] = *param_2;
  return;
}

