// FUN_140ce65d0 @ 140ce65d0
// callees:
//   -> 140ce0da0 FUN_140ce0da0
//   -> 1407b6ae0 FUN_1407b6ae0
//   -> 140004650 FUN_140004650
//   -> 14000e080 FUN_14000e080
//   -> 140ce3140 FUN_140ce3140
//   -> 140ce0f50 FUN_140ce0f50
//   -> 14000d840 FUN_14000d840
//   -> 140002020 FUN_140002020
//   -> 140769060 FUN_140769060
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ce65d0(longlong param_1,int *param_2,int *param_3,int *param_4,int param_5,
                  longlong param_6,longlong param_7)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  undefined8 *puVar17;
  short sVar18;
  longlong lVar19;
  int *piVar20;
  undefined1 auStack_338 [32];
  uint local_318;
  undefined4 local_310;
  int local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  int local_2d8 [22];
  int local_280;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  int local_198 [72];
  longlong local_78;
  longlong local_68;
  ulonglong local_58;
  
  local_2e0 = 0xfffffffffffffffe;
  local_58 = DAT_1410b5008 ^ (ulonglong)auStack_338;
  local_2f0 = param_6;
  piVar20 = (int *)0x0;
  local_2f8 = param_1;
  if ((*(longlong *)(param_7 + 0x38) == 0) && ((*(byte *)(param_7 + 0x40) & 2) == 0)) {
    FUN_140ce0da0(param_1,param_6);
    puVar17 = (undefined8 *)(param_6 + 0x1a0);
    piVar16 = piVar20;
    if (0 < *(int *)(param_6 + 0x1b0)) {
      do {
        for (puVar8 = *(undefined8 **)*puVar17; puVar8 < (undefined8 *)((undefined8 *)*puVar17)[1];
            puVar8 = puVar8 + 1) {
          piVar13 = (int *)*puVar8;
          if ((piVar13[2] == 0) && (*piVar13 == *param_2)) {
            *(int **)(param_7 + 0x38) = piVar13;
            break;
          }
        }
        if (*(longlong *)(param_7 + 0x38) != 0) break;
        uVar15 = (int)piVar16 + 1;
        puVar17 = puVar17 + 1;
        piVar16 = (int *)(ulonglong)uVar15;
      } while ((int)uVar15 < *(int *)(param_6 + 0x1b0));
    }
  }
  switch(param_2[1]) {
  case 0:
    cVar5 = FUN_1407b6ae0(param_7,param_2 + 0x1c);
    if (cVar5 == '\0') {
      return;
    }
    if (param_2[0xc] == -1) {
      return;
    }
    lVar9 = FUN_140004650(&DAT_141d7a048);
    if (lVar9 == 0) {
      return;
    }
    FUN_14000e080(local_2d8);
    local_308 = param_5 + 1;
    local_300 = param_6;
    local_310 = 0xffffffff;
    local_318 = 0xffffffff;
    FUN_140ce3140(param_1,local_2d8,*(undefined4 *)(lVar9 + 0xe0),0xffffffff);
    local_318 = local_318 & 0xffff0000;
    iVar7 = FUN_140769060(lVar9,0,0xffffffff);
    if (iVar7 < 25000) {
      if (iVar7 < 15000) {
        if (iVar7 < 3000) {
          iVar11 = 1;
          if (299 < iVar7) {
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
    lVar19 = *(longlong *)(lVar9 + 0x130);
    if (((lVar19 == 0) || (*(longlong *)(lVar19 + 0x48) == 0)) ||
       (*(longlong *)(*(longlong *)(lVar19 + 0x48) + 0x130) == 0)) {
      sVar6 = *(short *)(lVar9 + 4);
      sVar18 = *(short *)(lVar9 + 2);
      if (((sVar18 < 0) ||
          ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar18)) ||
         (sVar6 < 0)) {
LAB_140ce6f61:
        if ((lVar19 == 0) ||
           (((lVar19 = *(longlong *)(lVar19 + 0x48), lVar19 == 0 ||
             ((*(uint *)(lVar19 + 0x4c) & 0x2000000) != 0)) ||
            ((*(uint *)(lVar19 + 0x48) & 0x2000000) == 0)))) goto LAB_140ce6f93;
      }
      else {
        lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar18 * 8);
        if (((ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3) <=
             (ulonglong)(longlong)sVar6) ||
           (cVar5 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar6 * 8)
                                  + 0x6a8,0x3a), cVar5 == '\0')) goto LAB_140ce6f61;
        if (((lVar19 != 0) && (*(longlong *)(lVar19 + 0x48) != 0)) &&
           ((*(uint *)(*(longlong *)(lVar19 + 0x48) + 0x4c) & 0x2000000) != 0)) goto LAB_140ce6f93;
      }
      param_3[8] = param_3[8] + 1;
      if (param_4[8] == -1) {
        param_4[8] = *param_2;
      }
    }
    else {
LAB_140ce6f93:
      param_3[0x19] = param_3[0x19] + iVar11;
      if (param_4[0x19] == -1) {
        param_4[0x19] = *param_2;
      }
    }
    lVar19 = DAT_141d6dd58;
    sVar6 = *(short *)(lVar9 + 4);
    sVar18 = *(short *)(lVar9 + 2);
    if (sVar18 < 0) {
LAB_140ce70fe:
      if (((-1 < sVar18) && ((ulonglong)(longlong)sVar18 < (ulonglong)(lVar19 - DAT_141d6dd50 >> 3))
          ) && (-1 < sVar6)) {
        lVar19 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar18 * 8);
        if (((ulonglong)(longlong)sVar6 <
             (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
           (cVar5 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar19 + 0x178) + (longlong)sVar6 * 8)
                                  + 0x6a8,0x8f), cVar5 != '\0')) {
          *param_3 = *param_3 + 10;
          goto LAB_140ce715c;
        }
      }
    }
    else {
      if (((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar18) ||
         (sVar6 < 0)) {
LAB_140ce7023:
        if (-1 < sVar18) {
          if (((ulonglong)(longlong)sVar18 < (ulonglong)(lVar19 - DAT_141d6dd50 >> 3)) &&
             (-1 < sVar6)) {
            lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar18 * 8);
            if (((ulonglong)(longlong)sVar6 <
                 (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) &&
               (cVar5 = FUN_14000d840(*(longlong *)
                                       (*(longlong *)(lVar3 + 0x178) + (longlong)sVar6 * 8) + 0x6a8,
                                      0x84), cVar5 != '\0')) goto LAB_140ce7084;
          }
          if (((-1 < sVar18) &&
              ((ulonglong)(longlong)sVar18 < (ulonglong)(lVar19 - DAT_141d6dd50 >> 3))) &&
             (-1 < sVar6)) {
            lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar18 * 8);
            if (((ulonglong)(longlong)sVar6 <
                 (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) &&
               (cVar5 = FUN_14000d840(*(longlong *)
                                       (*(longlong *)(lVar3 + 0x178) + (longlong)sVar6 * 8) + 0x6a8,
                                      0x6f), cVar5 != '\0')) {
              *param_3 = *param_3 + 0x19;
              goto LAB_140ce715c;
            }
          }
        }
        goto LAB_140ce70fe;
      }
      lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar18 * 8);
      if (((ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar6) ||
         (cVar5 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar6 * 8) +
                                0x6a8,0x6e), cVar5 == '\0')) goto LAB_140ce7023;
LAB_140ce7084:
      *param_3 = *param_3 + 100;
LAB_140ce715c:
      if (*param_4 == -1) {
        *param_4 = *param_2;
      }
    }
    if ((0 < local_2d8[0]) && (param_3[9] = param_3[9] + 1, param_4[9] == -1)) {
      param_4[9] = *param_2;
    }
    if ((0 < local_280) && (param_3[0x1a] = param_3[0x1a] + 1, param_4[0x1a] == -1)) {
      param_4[0x1a] = *param_2;
    }
    plVar2 = *(longlong **)(lVar9 + 0xf0);
    for (plVar12 = *(longlong **)(lVar9 + 0xe8); plVar12 < plVar2; plVar12 = plVar12 + 1) {
      sVar6 = (*(code *)**(undefined8 **)*plVar12)();
      if (sVar6 == 8) {
        iVar7 = FUN_140ce0f50(local_2f8,*(undefined4 *)(*plVar12 + 8),local_2f0);
        if ((iVar7 - 6U < 2) && (*param_3 = *param_3 + iVar11, *param_4 == -1)) {
          *param_4 = *param_2;
        }
      }
      else if (sVar6 == 9) {
        iVar7 = FUN_140ce0f50(local_2f8,*(undefined4 *)(*plVar12 + 8),local_2f0);
        if ((iVar7 - 6U < 2) && (param_3[0x1a] = param_3[0x1a] + iVar11, param_4[0x1a] == -1)) {
          param_4[0x1a] = *param_2;
        }
      }
      else if (((sVar6 == 10) || (sVar6 == 0xd)) &&
              (iVar7 = FUN_140ce0f50(local_2f8,*(undefined4 *)(*plVar12 + 8),local_2f0), 5 < iVar7))
      {
        if (iVar7 < 8) {
          param_3[0xd] = param_3[0xd] + 1;
          if (param_4[0xd] == -1) {
            param_4[0xd] = *param_2;
          }
        }
        else if ((iVar7 - 9U < 2) && (param_3[0xe] = param_3[0xe] + 1, param_4[0xe] == -1)) {
          param_4[0xe] = *param_2;
        }
      }
    }
    break;
  case 1:
    cVar5 = FUN_1407b6ae0(param_7,param_2 + 0x1c);
    if (cVar5 == '\0') {
      return;
    }
    iVar7 = (int)(DAT_141d691e0 - DAT_141d691d8 >> 3) + -1;
    piVar16 = piVar20;
    if (-1 < iVar7) {
      do {
        iVar11 = (int)piVar16 + iVar7 >> 1;
        piVar13 = *(int **)(DAT_141d691d8 + (longlong)iVar11 * 8);
        if (*piVar13 == param_2[0x34]) {
          piVar20 = piVar13;
          if (((piVar13 != (int *)0x0) && (piVar13[1] == 10)) &&
             (param_3[0x12] = param_3[0x12] + 1, param_4[0x12] == -1)) {
            param_4[0x12] = *param_2;
          }
          break;
        }
        if (param_2[0x34] < *piVar13) {
          iVar7 = iVar11 + -1;
        }
        else {
          piVar16 = (int *)(ulonglong)(iVar11 + 1);
        }
      } while ((int)piVar16 <= iVar7);
    }
    if (param_2[0xc] == -1) {
      return;
    }
    if (piVar20 == (int *)0x0) {
      return;
    }
    if (piVar20[1] != 9) {
      return;
    }
    if (param_2[0xc] == *(int *)(param_1 + 0xc10)) {
      param_3[0x10] = param_3[0x10] + 1;
      if (param_4[0x10] != -1) {
        return;
      }
      param_4[0x10] = *param_2;
      return;
    }
    lVar9 = FUN_140004650(&DAT_141d7a048);
    if (lVar9 == 0) {
      return;
    }
    FUN_14000e080(local_2d8);
    local_308 = param_5 + 1;
    local_300 = param_6;
    local_310 = 0xffffffff;
    local_318 = 0xffffffff;
    FUN_140ce3140(local_2f8,local_2d8,*(undefined4 *)(lVar9 + 0xe0),0xffffffff);
    if ((0 < local_2d8[0]) && (param_3[0x10] = param_3[0x10] + 1, param_4[0x10] == -1)) {
      param_4[0x10] = *param_2;
    }
    break;
  case 2:
  case 3:
    cVar5 = FUN_1407b6ae0(param_7,param_2 + 0x1c);
    if (cVar5 == '\0') {
      return;
    }
    if (param_2[0xc] == -1) {
      return;
    }
    local_2e8 = FUN_140004650(&DAT_141d7a048);
    if (local_2e8 == 0) {
      return;
    }
    bVar4 = false;
    plVar12 = *(longlong **)(local_2e8 + 0xe8);
    piVar16 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(local_2e8 + 0xf0) + (7 - (longlong)plVar12)) >> 3);
    if (*(longlong **)(local_2e8 + 0xf0) < plVar12) {
      piVar16 = piVar20;
    }
    if (piVar16 != (int *)0x0) {
      do {
        sVar6 = (*(code *)**(undefined8 **)*plVar12)();
        if (((sVar6 == 10) || (sVar6 == 0xd)) &&
           (iVar7 = FUN_140ce0f50(local_2f8,*(undefined4 *)(*plVar12 + 8),local_2f0), 5 < iVar7)) {
          if (iVar7 < 8) {
            param_3[0xd] = param_3[0xd] + 1;
            if (param_4[0xd] == -1) {
              param_4[0xd] = *param_2;
            }
          }
          else {
            if (iVar7 < 9) goto LAB_140ce6a9a;
            if (iVar7 < 0xb) {
              param_3[0xe] = param_3[0xe] + 1;
              if (param_4[0xe] == -1) {
                param_4[0xe] = *param_2;
              }
            }
            else {
              if (iVar7 != 0x39) goto LAB_140ce6a9a;
              param_3[0x1a] = param_3[0x1a] + 1;
              if (param_4[0x1a] == -1) {
                param_4[0x1a] = *param_2;
              }
            }
          }
          bVar4 = true;
        }
LAB_140ce6a9a:
        plVar12 = plVar12 + 1;
        piVar20 = (int *)((longlong)piVar20 + 1);
      } while (piVar20 < piVar16);
      if (bVar4) {
        return;
      }
    }
    lVar9 = *(longlong *)(local_2e8 + 0x130);
    if (((lVar9 != 0) && (*(longlong *)(lVar9 + 0x48) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x48) + 0x130) != 0)) {
      return;
    }
    sVar6 = *(short *)(local_2e8 + 4);
    sVar18 = *(short *)(local_2e8 + 2);
    if (((-1 < sVar18) &&
        ((ulonglong)(longlong)sVar18 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
       (-1 < sVar6)) {
      lVar19 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar18 * 8);
      if (((ulonglong)(longlong)sVar6 <
           (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
         (cVar5 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar19 + 0x178) + (longlong)sVar6 * 8) +
                                0x6a8,0x3a), cVar5 != '\0')) {
        if (((lVar9 != 0) && (*(longlong *)(lVar9 + 0x48) != 0)) &&
           ((*(uint *)(*(longlong *)(lVar9 + 0x48) + 0x4c) & 0x2000000) != 0)) {
          return;
        }
        goto LAB_140ce6ba3;
      }
    }
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
LAB_140ce6ba3:
    iVar7 = param_2[0x3d];
    if (iVar7 < 3) {
      return;
    }
    if (iVar7 < 5) {
      param_3[4] = param_3[4] + 1;
      if (param_4[4] != -1) {
        return;
      }
      param_4[4] = *param_2;
      return;
    }
    if (6 < iVar7) {
      return;
    }
    param_3[5] = param_3[5] + 1;
    if (param_4[5] != -1) {
      return;
    }
    param_4[5] = *param_2;
    return;
  case 4:
    cVar5 = FUN_1407b6ae0(param_7,param_2 + 0x2a);
    if (cVar5 == '\0') {
      return;
    }
    iVar7 = param_2[0x1c];
    lVar9 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    piVar16 = piVar20;
    if (((lVar9 != 0) && (iVar7 != -1)) &&
       (iVar11 = (int)lVar9 + -1, piVar13 = piVar20, -1 < iVar11)) {
      do {
        iVar10 = iVar11 + (int)piVar13 >> 1;
        piVar16 = *(int **)(DAT_141d7a0a8 + (longlong)iVar10 * 8);
        iVar1 = piVar16[0x38];
        if (iVar1 == iVar7) break;
        if (iVar7 < iVar1) {
          iVar11 = iVar10 + -1;
        }
        else {
          piVar13 = (int *)(ulonglong)(iVar10 + 1);
        }
        piVar16 = piVar20;
      } while ((int)piVar13 <= iVar11);
    }
    iVar7 = param_2[0xc];
    piVar13 = piVar20;
    if (((lVar9 != 0) && (iVar7 != -1)) &&
       (iVar11 = (int)lVar9 + -1, piVar14 = piVar20, -1 < iVar11)) {
      do {
        iVar10 = iVar11 + (int)piVar14 >> 1;
        piVar13 = *(int **)(DAT_141d7a0a8 + (longlong)iVar10 * 8);
        iVar1 = piVar13[0x38];
        if (iVar1 == iVar7) break;
        if (iVar7 < iVar1) {
          iVar11 = iVar10 + -1;
        }
        else {
          piVar14 = (int *)(ulonglong)(iVar10 + 1);
        }
        piVar13 = piVar20;
      } while ((int)piVar14 <= iVar11);
    }
    if (piVar16 == (int *)0x0) {
      return;
    }
    if (piVar13 == (int *)0x0) {
      return;
    }
    FUN_14000e080(local_198);
    local_300 = local_2f0;
    local_310 = 0xffffffff;
    local_318 = 0xffffffff;
    local_308 = param_5 + 1;
    FUN_140ce3140(local_2f8,local_198,piVar16[0x38],0xffffffff);
    FUN_14000e080(local_2d8);
    local_300 = local_2f0;
    local_310 = 0xffffffff;
    local_318 = 0xffffffff;
    local_308 = param_5 + 1;
    FUN_140ce3140(local_2f8,local_2d8,piVar13[0x38],0xffffffff);
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
    goto LAB_140ce729f;
  case 5:
    cVar5 = FUN_1407b6ae0(param_7,param_2 + 0x1c);
    if (cVar5 == '\0') {
      return;
    }
    if (param_2[0xc] == -1) {
      return;
    }
    if (param_2[0xc] == *(int *)(param_1 + 0xc10)) {
      param_3[0xf] = param_3[0xf] + 1;
      if (param_4[0xf] != -1) {
        return;
      }
      param_4[0xf] = *param_2;
      return;
    }
    lVar9 = FUN_140004650(&DAT_141d7a048);
    if (lVar9 == 0) {
      return;
    }
    FUN_14000e080(local_2d8);
    local_308 = param_5 + 1;
    local_300 = param_6;
    local_310 = 0xffffffff;
    local_318 = 0xffffffff;
    FUN_140ce3140(local_2f8,local_2d8,*(undefined4 *)(lVar9 + 0xe0),0xffffffff);
    if ((0 < local_2d8[0]) && (param_3[0xf] = param_3[0xf] + 1, param_4[0xf] == -1)) {
      param_4[0xf] = *param_2;
    }
    break;
  case 6:
    lVar9 = *(longlong *)(param_2 + 0x44);
    if (lVar9 != 0) {
      plVar2 = *(longlong **)(lVar9 + 0x10);
      for (plVar12 = *(longlong **)(lVar9 + 8); plVar12 < plVar2; plVar12 = plVar12 + 1) {
        cVar5 = FUN_1407b6ae0(param_7,*plVar12 + 8);
        if (cVar5 != '\0') {
          switch(*(undefined4 *)*plVar12) {
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
          iVar7 = ((undefined4 *)*plVar12)[0xc] * 2;
          iVar11 = 0;
          if ((-1 < iVar7) && (iVar11 = iVar7, 100 < iVar7)) {
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
  default:
    goto switchD_140ce66be_default;
  }
  local_78 = local_1b8;
  local_68 = local_1a8;
  if (local_1b8 != 0) {
LAB_140ce729f:
    FUN_140002020(local_78,local_68 - local_78 >> 2,4);
  }
switchD_140ce66be_default:
  return;
}

