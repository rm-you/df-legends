// FUN_140ce2110 @ 140ce2110
// callees:
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0
//   -> 140ca8390 FUN_140ca8390
//   -> 140019950 FUN_140019950
//   -> 140ce7da0 FUN_140ce7da0
//   -> 140ce4e90 FUN_140ce4e90
//   -> 140ce2110 FUN_140ce2110
//   -> 14000e080 FUN_14000e080
//   -> 140ce3140 FUN_140ce3140
//   -> 140dfc99c memset
//   -> 14000ef80 FUN_14000ef80
//   -> 140004650 FUN_140004650
//   -> 14000d840 FUN_14000d840
//   -> 14000f360 FUN_14000f360
//   -> 140073ab0 FUN_140073ab0
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ce2110(ulonglong param_1,int *param_2,int param_3)

{
  undefined8 *puVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  int *piVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 auStack_548 [32];
  int local_528;
  int local_520;
  undefined4 local_518;
  undefined8 **local_510;
  char local_508;
  ulonglong local_500;
  undefined4 local_4f8;
  int local_4f4;
  undefined4 local_4f0;
  ulonglong local_4ec;
  int *local_4e0;
  longlong lStack_4d8;
  undefined8 local_4d0;
  ulonglong local_4c8;
  undefined8 *local_4c0;
  int local_4b8;
  int local_4b4;
  int local_4a0;
  int local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined8 local_490;
  uint local_488;
  int local_484;
  undefined8 local_480;
  undefined4 local_478;
  undefined1 local_474 [136];
  undefined8 local_3ec [16];
  longlong local_368;
  undefined8 uStack_360;
  longlong local_358;
  undefined8 *local_348 [51];
  undefined4 local_1b0;
  undefined8 local_198;
  undefined4 local_140;
  ulonglong local_28;
  
  local_490 = 0xfffffffffffffffe;
  local_28 = DAT_1410b5008 ^ (ulonglong)auStack_548;
  local_500 = CONCAT44(local_500._4_4_,param_3);
  iVar6 = param_2[1];
  local_4c8 = param_1;
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      iVar13 = 0;
      iVar6 = (int)(DAT_141d691e0 - DAT_141d691d8 >> 3) + -1;
      if (iVar6 < 0) {
        return;
      }
      while( true ) {
        iVar12 = iVar6 + iVar13 >> 1;
        piVar17 = *(int **)(DAT_141d691d8 + (longlong)iVar12 * 8);
        if (*piVar17 == param_2[0x34]) break;
        if (param_2[0x34] < *piVar17) {
          iVar6 = iVar12 + -1;
        }
        else {
          iVar13 = iVar12 + 1;
        }
        if (iVar6 < iVar13) {
          return;
        }
      }
      if (piVar17 == (int *)0x0) {
        return;
      }
      if (piVar17[1] != 10) {
        return;
      }
      if (param_3 != 0) {
        return;
      }
      local_4f0 = 0;
      local_4ec = 100;
      local_4e0 = (int *)0x0;
      lStack_4d8 = 0;
      local_4d0 = 0;
      local_4f8 = 0x18;
      local_4f4 = *param_2;
      lVar10 = *(longlong *)(param_1 + 0xa78);
      if (lVar10 == 0) {
        return;
      }
      if ((*(uint *)(param_1 + 0x110) & 0x502) == 2) {
        return;
      }
      if ((*(uint *)(param_1 + 0x118) & 0x1000) != 0) {
        return;
      }
      cVar4 = FUN_140106f30(param_1);
      FUN_1409165e0(lVar10 + 0x248,&local_4f8,cVar4 != '\0');
      return;
    }
    if (iVar6 != 4) {
      if (iVar6 != 6) {
        return;
      }
      lVar10 = *(longlong *)(param_2 + 0x44);
      if (lVar10 == 0) {
        return;
      }
      if (param_3 != 0) {
        return;
      }
      plVar8 = *(longlong **)(lVar10 + 8);
      plVar14 = *(longlong **)(lVar10 + 0x10);
      local_4e0 = param_2;
      if (plVar8 < plVar14) {
        plVar7 = plVar8;
        do {
          if (*(int *)(*plVar7 + 8) == *(int *)(param_1 + 0xc10)) {
            local_4f0 = 0;
            local_4ec = 0x32;
            local_4d0 = 0;
            local_4f8 = 0xbc;
            local_4f4 = *param_2;
            lVar10 = *(longlong *)(param_1 + 0xa78);
            if (lVar10 == 0) {
              return;
            }
            if ((*(uint *)(param_1 + 0x110) & 0x502) == 2) {
              return;
            }
            if ((*(uint *)(param_1 + 0x118) & 0x1000) != 0) {
              return;
            }
            lStack_4d8 = lVar10;
            cVar4 = FUN_140106f30(param_1);
            FUN_1409165e0(lVar10 + 0x248,&local_4f8,cVar4 != '\0');
            return;
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 < plVar14);
      }
      uVar18 = 0;
      local_4f0 = 0;
      local_4ec = 10;
      local_4d0 = 0;
      local_4f8 = 0xbd;
      local_4f4 = *param_2;
      lStack_4d8 = *(undefined8 *)(param_1 + 0xa78);
      uVar22 = (ulonglong)((longlong)plVar14 + (7 - (longlong)plVar8)) >> 3;
      if (plVar14 < plVar8) {
        uVar22 = uVar18;
      }
      uVar20 = uVar18;
      uVar21 = uVar18;
      uVar24 = uVar18;
      uVar26 = uVar18;
      if (uVar22 != 0) {
        do {
          uVar11 = *(uint *)(*plVar8 + 0x30);
          plVar14 = (longlong *)(ulonglong)uVar11;
          uVar19 = (int)uVar20 + uVar11;
          uVar25 = (int)uVar26 + 1;
          if ((int)uVar21 < (int)uVar11) {
            uVar21 = (ulonglong)uVar11;
          }
          plVar8 = plVar8 + 1;
          uVar24 = uVar24 + 1;
          uVar20 = (ulonglong)uVar19;
          uVar26 = (ulonglong)uVar25;
        } while (uVar24 < uVar22);
        local_500 = CONCAT44(local_500._4_4_,uVar19);
        if (0 < (int)uVar25) {
          plVar14 = (longlong *)((longlong)(int)uVar19 % (longlong)(int)uVar25 & 0xffffffff);
          uVar11 = (int)uVar19 / (int)uVar25 + 10 + (int)uVar21;
          if (0x32 < (int)uVar11) {
            uVar11 = 0x32;
          }
          local_4ec = (ulonglong)uVar11;
        }
      }
      local_4d0 = FUN_140ca8390(param_1,plVar14);
      lVar10 = *(longlong *)(param_1 + 0xa78);
      if (((lVar10 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
         ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
        cVar4 = FUN_140106f30(param_1);
        FUN_1409165e0(lVar10 + 0x248,&local_4f8,cVar4 != '\0');
      }
      if (DAT_1410b67dc != 1) {
        return;
      }
      local_500 = local_500 & 0xffffffff00000000;
      piVar17 = *(int **)(param_2 + 0x44);
      if (*piVar17 == 0) {
        iVar6 = piVar17[8];
        lVar10 = DAT_141d7a050 - DAT_141d7a048 >> 3;
        if (lVar10 == 0) {
          return;
        }
        if (iVar6 == -1) {
          return;
        }
        iVar13 = (int)lVar10 + -1;
        if (iVar13 < 0) {
          return;
        }
        while( true ) {
          iVar12 = iVar13 + (int)uVar18 >> 1;
          puVar9 = *(undefined8 **)(DAT_141d7a048 + (longlong)iVar12 * 8);
          if (*(int *)(puVar9 + 4) == iVar6) break;
          if (iVar6 < *(int *)(puVar9 + 4)) {
            iVar13 = iVar12 + -1;
          }
          else {
            uVar18 = (ulonglong)(iVar12 + 1);
          }
          if (iVar13 < (int)uVar18) {
            return;
          }
        }
        if (puVar9 == (undefined8 *)0x0) {
          return;
        }
        sVar5 = (**(code **)*puVar9)(puVar9);
        if ((sVar5 != 3) && (sVar5 != 0x3c)) {
          return;
        }
        local_348[0] = puVar9;
        iVar6 = 1;
      }
      else {
        if (2 < *piVar17 - 1U) {
          return;
        }
        iVar6 = piVar17[9];
        if (iVar6 == -1) {
          return;
        }
        iVar13 = (int)(DAT_141d69150 - DAT_141d69148 >> 3) + -1;
        uVar22 = uVar18;
        if (iVar13 < 0) {
          return;
        }
        while( true ) {
          iVar12 = iVar13 + (int)uVar22 >> 1;
          piVar17 = *(int **)(DAT_141d69148 + (longlong)iVar12 * 8);
          if (*piVar17 == iVar6) break;
          if (iVar6 < *piVar17) {
            iVar13 = iVar12 + -1;
          }
          else {
            uVar22 = (ulonglong)(iVar12 + 1);
          }
          if (iVar13 < (int)uVar22) {
            return;
          }
        }
        if (piVar17 == (int *)0x0) {
          return;
        }
        plVar8 = *(longlong **)(piVar17 + 0xc);
        plVar14 = *(longlong **)(piVar17 + 0xe);
        if (plVar14 <= plVar8) {
          return;
        }
        do {
          iVar6 = (**(code **)(*(longlong *)*plVar8 + 0x10))();
          if (iVar6 == 0x31) {
            local_4c0 = (undefined8 *)FUN_140019950(&DAT_141d7a048,*(undefined4 *)(*plVar8 + 8));
            if (local_4c0 == (undefined8 *)0x0) break;
            sVar5 = (**(code **)*local_4c0)(local_4c0);
            if (((sVar5 == 3) || (sVar5 == 0x3c)) && ((longlong)uVar18 < 100)) {
              local_348[uVar18] = local_4c0;
              local_500 = CONCAT44(local_500._4_4_,(uint)local_500 + 1);
              uVar18 = uVar18 + 1;
            }
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 < plVar14);
        param_1 = local_4c8;
        iVar6 = (uint)local_500;
        if ((int)(uint)local_500 < 1) {
          return;
        }
      }
      local_500 = 0;
      local_4c0 = (undefined8 *)(longlong)iVar6;
      do {
        puVar9 = local_348[local_500];
        sVar5 = (**(code **)*puVar9)(puVar9);
        plVar8 = DAT_141d691a8;
        if (sVar5 == 3) {
          while( true ) {
            if (DAT_141d691b0 <= plVar8) {
              return;
            }
            if ((*(int *)(*plVar8 + 4) == 0) && (*(int *)(puVar9 + 5) == *(int *)(*plVar8 + 0x30)))
            break;
            plVar8 = plVar8 + 1;
          }
          piVar17 = (int *)*plVar8;
        }
        else {
          if (sVar5 != 0x3c) {
            return;
          }
          while( true ) {
            if (DAT_141d691b0 <= plVar8) {
              return;
            }
            piVar17 = (int *)*plVar8;
            if (((piVar17[1] == 4) && ((puVar9[6] - puVar9[5] & 0xfffffffffffffffc) == 4)) &&
               ((piVar17[0x1c] == *(int *)puVar9[5] &&
                (((puVar9[9] - puVar9[8] & 0xfffffffffffffffc) == 4 &&
                 (piVar17[0xc] == *(int *)puVar9[8])))))) break;
            plVar8 = plVar8 + 1;
          }
        }
        if (piVar17 == (int *)0x0) {
          return;
        }
        bVar3 = false;
        for (puVar9 = *(undefined8 **)(param_1 + 0xd98); puVar9 < *(undefined8 **)(param_1 + 0xda0);
            puVar9 = puVar9 + 1) {
          if ((((int *)*puVar9)[2] == 0) && (*(int *)*puVar9 == *piVar17)) {
            bVar3 = true;
            break;
          }
        }
        if (!bVar3) {
          local_494 = 2;
          local_498 = 0;
          local_4b8 = piVar17[1];
          local_4b4 = *piVar17;
          local_4a0 = piVar17[0x39];
          local_49c = piVar17[0x3a];
          iVar6 = FUN_140ce7da0(param_1 + 0xdb0,&local_4b8,DAT_1416b1980);
          if ((iVar6 == 0) && (cVar4 = FUN_140ce4e90(param_1,*piVar17), cVar4 == '\0')) {
            FUN_140ce2110(param_1,piVar17,0xffffffff);
          }
          uVar11 = *(uint *)(param_1 + 0x1268);
          if (uVar11 < 500) {
            puVar9 = &DAT_141c70ac4 + (longlong)(int)uVar11 * 0xfa;
            puVar15 = (undefined4 *)((longlong)&DAT_141c70ac4 + (longlong)(int)uVar11 * 4);
            lVar10 = 500;
            do {
              *puVar15 = 0xffffffff;
              *(undefined4 *)puVar9 = 0xffffffff;
              puVar9 = (undefined8 *)((longlong)puVar9 + 4);
              puVar15 = puVar15 + 500;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        local_500 = local_500 + 1;
        if ((longlong)local_4c0 <= (longlong)local_500) {
          return;
        }
      } while( true );
    }
    if (*(int *)(param_1 + 0xc10) == param_2[0x1c]) {
      local_348[0] = (undefined8 *)0x0;
      local_1b0 = 0;
      local_198 = 0;
      local_140 = 0;
      FUN_14000e080(&local_488);
      local_510 = local_348;
      local_518 = 0;
      local_520 = param_2[10];
      local_528 = param_2[0xc];
      FUN_140ce3140(param_1,&local_488,0xffffffff);
      local_4f0 = 0;
      local_4e0 = (int *)0x0;
      lStack_4d8 = 0;
      local_4d0 = 0;
      local_4f8 = 7;
      local_4f4 = param_2[0xc];
      local_4ec = (ulonglong)local_488;
      lVar10 = *(longlong *)(param_1 + 0xa78);
      if (((lVar10 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
         ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
        cVar4 = FUN_140106f30(param_1);
        FUN_1409165e0(lVar10 + 0x248,&local_4f8,cVar4 != '\0');
      }
    }
    else {
      if (*(int *)(param_1 + 0xc10) != param_2[0xc]) {
        return;
      }
      local_348[0] = (undefined8 *)0x0;
      local_1b0 = 0;
      local_198 = 0;
      local_140 = 0;
      FUN_14000e080(&local_488);
      local_510 = local_348;
      local_518 = 0;
      local_520 = param_2[0x1a];
      local_528 = param_2[0x1c];
      FUN_140ce3140(param_1,&local_488,0xffffffff);
      local_4f0 = 0;
      local_4e0 = (int *)0x0;
      lStack_4d8 = 0;
      local_4d0 = 0;
      local_4f8 = 7;
      local_4f4 = param_2[0x1c];
      local_4ec = (ulonglong)local_488;
      lVar10 = *(longlong *)(param_1 + 0xa78);
      if (((lVar10 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
         ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
        cVar4 = FUN_140106f30(param_1);
        FUN_1409165e0(lVar10 + 0x248,&local_4f8,cVar4 != '\0');
      }
    }
    goto LAB_140ce2f84;
  }
  uVar11 = 0;
  local_348[0] = (undefined8 *)0x0;
  local_1b0 = 0;
  local_198 = 0;
  local_140 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_488 = 0;
  local_484 = -1;
  local_480 = 0;
  local_478 = 0xffffffff;
  memset(local_474,0,0x88);
  lVar10 = 2;
  puVar9 = local_3ec;
  do {
    *puVar9 = 0xffffffffffffffff;
    puVar9[1] = 0xffffffffffffffff;
    puVar9[2] = 0xffffffffffffffff;
    puVar1 = puVar9 + 8;
    puVar9[3] = 0xffffffffffffffff;
    puVar9[4] = 0xffffffffffffffff;
    puVar9[5] = 0xffffffffffffffff;
    puVar9[6] = 0xffffffffffffffff;
    puVar9[7] = 0xffffffffffffffff;
    lVar10 = lVar10 + -1;
    puVar9 = puVar1;
  } while (lVar10 != 0);
  *(undefined4 *)puVar1 = 0xffffffff;
  uVar23 = 0xffffffff;
  if ((uint)local_500 < 2) {
    local_520 = param_2[10];
    local_528 = param_2[0xc];
    iVar6 = -1;
  }
  else {
    if (*(longlong *)(param_2 + 0x12) - *(longlong *)(param_2 + 0x10) >> 2 != 0) {
      uVar23 = **(undefined4 **)(param_2 + 0x10);
    }
    local_520 = param_2[10];
    local_528 = -1;
    iVar6 = param_2[0xe];
  }
  local_510 = local_348;
  local_518 = 0;
  FUN_140ce3140(param_1,&local_488,iVar6,uVar23);
  if ((((short)param_2[0x3c] != 0) && (local_484 != -1)) && (0 < (int)local_488)) {
    if ((uint)local_500 < 2) {
      iVar6 = param_2[0xc];
    }
    else {
      iVar6 = param_2[0xe];
      if (iVar6 == -1) goto LAB_140ce2b89;
    }
    lVar10 = *(longlong *)(param_1 + 0xa78);
    local_4f8 = 3;
    local_4d0 = 0;
    local_4e0 = (int *)0x0;
    lStack_4d8 = 0;
    local_4ec = (ulonglong)local_488;
    local_4f0 = 0;
    local_4f4 = iVar6;
    if (((lVar10 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
       ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
      cVar4 = FUN_140106f30(param_1);
      FUN_1409165e0(lVar10 + 0x248,&local_4f8,cVar4 != '\0');
    }
  }
LAB_140ce2b89:
  local_4c8 = local_4c8 & 0xffffffff00000000;
  local_508 = FUN_14000ef80(param_1);
  if (local_508 != '\0') {
    if (param_2[0xc] == -1) {
      if (param_2[10] != -1) {
        lVar10 = FUN_14000f360(&DAT_141c66fd0,param_2[10]);
        if (lVar10 == 0) goto LAB_140ce2ce4;
        cVar4 = FUN_14000ef80(lVar10);
        uVar11 = (uint)local_4c8;
        if (cVar4 != '\0') {
          uVar11 = 100;
        }
      }
    }
    else {
      lVar10 = FUN_140004650(&DAT_141d7a048,param_2[0xc]);
      if ((lVar10 == 0) ||
         (((lVar27 = *(longlong *)(lVar10 + 0x130), lVar27 != 0 &&
           (*(longlong *)(lVar27 + 0x48) != 0)) &&
          (*(longlong *)(*(longlong *)(lVar27 + 0x48) + 0x130) != 0)))) {
LAB_140ce2ce4:
        uVar11 = (uint)local_4c8;
      }
      else {
        sVar5 = *(short *)(lVar10 + 4);
        sVar2 = *(short *)(lVar10 + 2);
        if (((sVar2 < 0) ||
            ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar2)) ||
           (sVar5 < 0)) {
LAB_140ce2c89:
          if (((lVar27 == 0) ||
              ((lVar10 = *(longlong *)(lVar27 + 0x48), lVar10 == 0 ||
               ((*(uint *)(lVar10 + 0x4c) & 0x2000000) != 0)))) ||
             ((*(uint *)(lVar10 + 0x48) & 0x2000000) == 0)) goto LAB_140ce2ce4;
        }
        else {
          lVar10 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar2 * 8);
          if (((ulonglong)(*(longlong *)(lVar10 + 0x180) - *(longlong *)(lVar10 + 0x178) >> 3) <=
               (ulonglong)(longlong)sVar5) ||
             (cVar4 = FUN_14000d840(*(longlong *)
                                     (*(longlong *)(lVar10 + 0x178) + (longlong)sVar5 * 8) + 0x6a8,
                                    0x3a), cVar4 == '\0')) goto LAB_140ce2c89;
          if (((lVar27 != 0) && (*(longlong *)(lVar27 + 0x48) != 0)) &&
             ((*(uint *)(*(longlong *)(lVar27 + 0x48) + 0x4c) & 0x2000000) != 0))
          goto LAB_140ce2ce4;
        }
        uVar11 = 100;
      }
    }
  }
  if ((uint)local_500 == 0) {
    if ((short)param_2[0x3c] != 0) {
      local_4f0 = 0;
      local_4e0 = (int *)0x0;
      lStack_4d8 = 0;
      local_4d0 = 0;
      local_4f8 = 2;
      local_4f4 = *param_2;
      if ((int)uVar11 < (int)local_488) {
        uVar11 = local_488;
      }
      if (100 < (int)uVar11) {
        uVar11 = 100;
      }
      local_4ec = (ulonglong)uVar11;
      lVar10 = *(longlong *)(param_1 + 0xa78);
      if (((lVar10 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
         ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
        cVar4 = FUN_140106f30(param_1);
        FUN_1409165e0(lVar10 + 0x248,&local_4f8,cVar4 != '\0');
      }
      if ((*(longlong *)(param_1 + 0xa78) != 0) && (local_508 != '\0')) {
        uVar16 = 10;
LAB_140ce2e5e:
        FUN_140073ab0(param_1,uVar16);
      }
    }
  }
  else if (((uint)local_500 == 1) && ((short)param_2[0x3c] != 0)) {
    local_4f0 = 0;
    local_4e0 = (int *)0x0;
    lStack_4d8 = 0;
    local_4d0 = 0;
    local_4f8 = 0xf0;
    local_4f4 = *param_2;
    uVar19 = (int)uVar11 / 10;
    if ((int)uVar11 / 10 < (int)local_488) {
      uVar19 = local_488;
    }
    if (100 < (int)uVar19) {
      uVar19 = 100;
    }
    local_4ec = (ulonglong)uVar19;
    lVar10 = *(longlong *)(param_1 + 0xa78);
    if (((lVar10 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
       ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
      cVar4 = FUN_140106f30(param_1);
      FUN_1409165e0(lVar10 + 0x248,&local_4f8,cVar4 != '\0');
    }
    if ((*(longlong *)(param_1 + 0xa78) != 0) && (local_508 != '\0')) {
      uVar16 = 5;
      goto LAB_140ce2e5e;
    }
  }
  if (local_488 != 0) {
    iVar6 = param_2[0xe];
    if (iVar6 != -1) {
      local_4f0 = 0;
      local_4e0 = (int *)0x0;
      lStack_4d8 = 0;
      local_4d0 = 0;
      local_4f8 = 4;
      local_4ec = (ulonglong)local_488;
      lVar10 = *(longlong *)(param_1 + 0xa78);
      local_4f4 = iVar6;
      if (((lVar10 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
         ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
        cVar4 = FUN_140106f30(param_1);
        FUN_1409165e0(lVar10 + 0x248,&local_4f8,cVar4 != '\0');
      }
    }
    if (((uint)local_500 == 0) &&
       (((param_2[0x1c] != -1 && (param_2[0x1c] == *(int *)(param_1 + 0xc10))) ||
        ((param_2[0x1a] != -1 && (param_2[0x1a] == *(int *)(param_1 + 0x130))))))) {
      local_4f0 = 0;
      local_4e0 = (int *)0x0;
      lStack_4d8 = 0;
      local_4d0 = 0;
      local_4f8 = 5;
      local_4f4 = *param_2;
      local_4ec = (ulonglong)local_488;
      lVar10 = *(longlong *)(param_1 + 0xa78);
      if (((lVar10 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
         ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
        cVar4 = FUN_140106f30(param_1);
        FUN_1409165e0(lVar10 + 0x248,&local_4f8,cVar4 != '\0');
      }
    }
  }
LAB_140ce2f84:
  if (local_368 != 0) {
    FUN_140002020(local_368,local_358 - local_368 >> 2,4);
  }
  return;
}

