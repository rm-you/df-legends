// FUN_14061e7d0 @ 14061e7d0
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 1408a4c00 FUN_1408a4c00
//   -> 14000cb40 FUN_14000cb40
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14061e7d0(undefined8 *param_1,int param_2,short param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  int *piVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auStack_d8 [32];
  short local_b8;
  undefined1 local_b4 [4];
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4 [3];
  int aiStack_98 [20];
  ulonglong local_48;
  
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_d8;
  local_ac = 100;
  local_b8 = param_3;
  local_b0 = param_2;
  do {
    uVar13 = 0;
    puVar8 = param_1 + 8;
    if ((1 < (ushort)(local_b8 - 8U)) || (*(char *)((longlong)param_1 + 0x72) == '\0')) {
      puVar7 = (undefined2 *)((longlong)param_1 + 0x5c);
      lVar12 = 7;
      do {
        *(undefined4 *)puVar8 = 0xffffffff;
        puVar8 = (undefined8 *)((longlong)puVar8 + 4);
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
      *(undefined2 *)(param_1 + 0xe) = 0xffff;
      param_1[2] = 0;
      puVar8 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar8 = (undefined8 *)*param_1;
      }
      *(undefined1 *)puVar8 = 0;
      puVar8 = param_1 + 4;
      param_1[6] = 0;
      if (0xf < (ulonglong)param_1[7]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      *(undefined1 *)puVar8 = 0;
      *(undefined1 *)((longlong)param_1 + 0x72) = 0;
      if (local_b0 == -1) {
        uVar23 = (ulonglong)((longlong)DAT_141d6e1e0 + (7 - (longlong)DAT_141d6e1d8)) >> 3;
        if (DAT_141d6e1e0 < DAT_141d6e1d8) {
          uVar23 = 0;
        }
        plVar9 = DAT_141d6e1d8;
        uVar18 = uVar13;
        uVar20 = uVar13;
        uVar22 = uVar13;
        if (uVar23 != 0) {
          do {
            if (((*(byte *)(*plVar9 + 0x68) & 1) == 0) && ((longlong)uVar13 < 0x14)) {
              uVar18 = (ulonglong)((int)uVar18 + 1);
              aiStack_98[uVar13] = (int)uVar20;
              uVar13 = uVar13 + 1;
            }
            uVar20 = (ulonglong)((int)uVar20 + 1);
            plVar9 = plVar9 + 1;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar23);
          if (0 < (int)(uint)uVar18) {
            if ((uint)uVar18 < 2) {
              local_b0 = aiStack_98[0];
            }
            else {
              uVar6 = FUN_1409fc0c0();
              local_b0 = aiStack_98
                         [(int)((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) *
                                         0x7fffffff) / ((int)(0x7fffffff / uVar18) + 1U))];
            }
            goto LAB_14061e981;
          }
        }
        local_b0 = 0;
      }
LAB_14061e981:
      *(short *)(param_1 + 0xe) = local_b8;
      *(int *)((longlong)param_1 + 0x6c) = local_b0;
    }
    uVar13 = 0;
    *(undefined1 *)((longlong)param_1 + 0x72) = 1;
    if (*(int *)((longlong)param_1 + 0x6c) == -1) {
      uVar23 = (ulonglong)((longlong)DAT_141d6e1e0 + (7 - (longlong)DAT_141d6e1d8)) >> 3;
      if (DAT_141d6e1e0 < DAT_141d6e1d8) {
        uVar23 = 0;
      }
      plVar9 = DAT_141d6e1d8;
      uVar18 = uVar13;
      uVar20 = uVar13;
      uVar22 = uVar13;
      if (uVar23 != 0) {
        do {
          if (((*(byte *)(*plVar9 + 0x68) & 1) == 0) && ((longlong)uVar13 < 0x14)) {
            uVar18 = (ulonglong)((int)uVar18 + 1);
            aiStack_98[uVar13] = (int)uVar20;
            uVar13 = uVar13 + 1;
          }
          uVar20 = (ulonglong)((int)uVar20 + 1);
          plVar9 = plVar9 + 1;
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar23);
        if (0 < (int)(uint)uVar18) {
          if ((uint)uVar18 < 2) {
            *(int *)((longlong)param_1 + 0x6c) = aiStack_98[0];
          }
          else {
            uVar6 = FUN_1409fc0c0();
            *(int *)((longlong)param_1 + 0x6c) =
                 aiStack_98
                 [(int)((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) *
                                 0x7fffffff) / ((int)(0x7fffffff / uVar18) + 1U))];
          }
          goto LAB_14061ea68;
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    }
LAB_14061ea68:
    switch(local_b8) {
    case 0:
    case 9:
    case 10:
    case 0x28:
      if (local_b8 != 9) {
        param_1[2] = 0;
        puVar8 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar8 = (undefined8 *)*param_1;
        }
        *(undefined1 *)puVar8 = 0;
        FUN_1408a4c00(param_4,&local_a8,local_b4,2);
        if ((-1 < local_a8) &&
           ((ulonglong)(longlong)local_a8 < (ulonglong)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) {
          FUN_14000cb40(param_1,*(undefined8 *)
                                 (*(longlong *)
                                   (DAT_141d6e1d8[*(int *)((longlong)param_1 + 0x6c)] + 0x50) +
                                 (longlong)local_a8 * 8),0,0xffffffffffffffff);
        }
      }
      if (local_b8 != 10) {
        uVar6 = FUN_1409fc0c0();
        uVar6 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff;
        if (uVar6 >> 0x1e != 0) goto LAB_14061eb51;
        FUN_1408a4c00(param_4,param_1 + 8,(longlong)param_1 + 0x5c,0);
        FUN_1408a4c00(param_5,(longlong)param_1 + 0x44,(longlong)param_1 + 0x5e,1);
      }
      break;
    case 1:
    case 0xd:
    case 0x14:
      uVar6 = FUN_1409fc0c0();
      uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0x2aaaaaab;
      if (uVar6 < 2) {
        uVar17 = FUN_1409fc0c0();
        uVar17 = uVar17 + (int)((longlong)((ulonglong)uVar17 * 0x100000003) >> 0x3f) * 0x7fffffff;
        if (uVar17 >> 0x1e == 0) {
          FUN_1408a4c00(param_4,param_1 + 8,(longlong)param_1 + 0x5c,0);
          uVar11 = param_5;
LAB_14061f124:
          FUN_1408a4c00(uVar11,(longlong)param_1 + 0x44,(longlong)param_1 + 0x5e,1);
        }
        else if (uVar17 >> 0x1e == 1) {
          FUN_1408a4c00(param_5,param_1 + 8,(longlong)param_1 + 0x5c,0);
          uVar11 = param_4;
          goto LAB_14061f124;
        }
        if (uVar6 == 1) goto switchD_14061ea8e_caseD_b;
      }
      if (uVar6 == 2) goto switchD_14061ea8e_caseD_b;
      break;
    case 2:
    case 5:
    case 6:
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x26:
    case 0x27:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x32:
    case 0x34:
    case 0x35:
switchD_14061ea8e_caseD_2:
      uVar11 = param_4;
      goto LAB_14061ef06;
    case 3:
      uVar6 = FUN_1409fc0c0();
      bVar15 = (byte)(uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff
                     >> 0x1e);
      uVar11 = param_4;
      if (bVar15 == 0) {
        uVar11 = param_5;
      }
      FUN_1408a4c00(uVar11,(longlong)param_1 + 0x54,(longlong)param_1 + 0x66,2);
      uVar6 = FUN_1409fc0c0();
      uVar17 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
               0x2aaaaaab;
      uVar6 = FUN_1409fc0c0();
      if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x28f5c29 != 0) {
        uVar6 = FUN_1409fc0c0();
        uVar17 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff >>
                 0x1e;
      }
      uVar11 = param_5;
      if (uVar17 == 0) {
        puVar8 = param_1 + 0xd;
        puVar14 = param_1 + 0xb;
        uVar21 = 5;
        if (bVar15 == 0) {
          uVar11 = param_4;
        }
LAB_14061f4ce:
        FUN_1408a4c00(uVar11,puVar14,puVar8,uVar21);
      }
      else if (uVar17 == 1) {
        bVar16 = 1 - bVar15;
LAB_14061f46d:
        uVar10 = param_4;
        if (bVar16 == 0) {
          uVar10 = param_5;
        }
        FUN_1408a4c00(uVar10,param_1 + 9,param_1 + 0xc,3);
        uVar6 = FUN_1409fc0c0();
        if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x147ae15 == 0) {
          uVar21 = 3;
          puVar14 = (undefined8 *)((longlong)param_1 + 0x4c);
          puVar8 = (undefined8 *)((longlong)param_1 + 0x62);
          goto LAB_14061f4ce;
        }
      }
      else if (uVar17 == 2) {
        uVar6 = FUN_1409fc0c0();
        bVar16 = (byte)(uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) *
                                0x7fffffff >> 0x1e);
        uVar10 = param_5;
        if (bVar15 == 0) {
          uVar10 = param_4;
        }
        FUN_1408a4c00(uVar10,param_1 + 0xb,param_1 + 0xd,5);
        goto LAB_14061f46d;
      }
      uVar6 = FUN_1409fc0c0();
      if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x147ae15 == 0) {
        uVar6 = FUN_1409fc0c0();
        if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff &
            0xc0000000) == 0) {
          FUN_1408a4c00(param_5,param_1 + 10,(longlong)param_1 + 100,4);
        }
        else {
          FUN_1408a4c00(param_4,param_1 + 10,(longlong)param_1 + 100,4);
        }
      }
      if ((((*(short *)((longlong)param_1 + 0x66) == 0) &&
           (iVar2 = *(int *)((longlong)param_1 + 0x54), -1 < iVar2)) &&
          ((ulonglong)(longlong)iVar2 < (ulonglong)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) &&
         (*(longlong *)(*(longlong *)(DAT_141d6e1a8 + (longlong)iVar2 * 8) + 0x50) != 0)) {
        *(undefined2 *)((longlong)param_1 + 0x66) = 1;
      }
      break;
    case 4:
    case 0x25:
    case 0x29:
      uVar6 = FUN_1409fc0c0();
      uVar6 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff;
      if (uVar6 >> 0x1e == 0) {
        FUN_1408a4c00(param_4,param_1 + 8,(longlong)param_1 + 0x5c,0);
        uVar11 = param_5;
      }
      else {
LAB_14061eb51:
        if (uVar6 >> 0x1e != 1) break;
        FUN_1408a4c00(param_5,param_1 + 8,(longlong)param_1 + 0x5c,0);
        uVar11 = param_4;
      }
      FUN_1408a4c00(uVar11,(longlong)param_1 + 0x44,(longlong)param_1 + 0x5e,1);
      break;
    case 7:
      uVar6 = FUN_1409fc0c0();
      uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0x2aaaaaab;
      if (uVar6 < 2) {
        FUN_1408a4c00(param_5,param_1 + 8,(longlong)param_1 + 0x5c,0);
        FUN_1408a4c00(param_4,(longlong)param_1 + 0x44,(longlong)param_1 + 0x5e,1);
        if (uVar6 != 1) goto LAB_14061eec4;
      }
      else {
LAB_14061eec4:
        if (uVar6 != 2) break;
      }
      uVar17 = FUN_1409fc0c0();
      if ((uVar6 == 2) ||
         (uVar11 = param_5,
         (byte)(uVar17 + (int)((longlong)((ulonglong)uVar17 * 0x100000003) >> 0x3f) * 0x7fffffff >>
               0x1e) != 0)) goto switchD_14061ea8e_caseD_2;
LAB_14061ef06:
      FUN_1408a4c00(uVar11,(longlong)param_1 + 0x54,(longlong)param_1 + 0x66,2);
      uVar6 = FUN_1409fc0c0();
      uVar17 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
               0x2aaaaaab;
      uVar6 = FUN_1409fc0c0();
      if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x28f5c29 != 0) {
        uVar6 = FUN_1409fc0c0();
        uVar17 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff >>
                 0x1e;
      }
      if (uVar17 == 0) {
        uVar21 = 5;
        puVar8 = param_1 + 0xb;
        puVar14 = param_1 + 0xd;
LAB_14061f02b:
        FUN_1408a4c00(param_5,puVar8,puVar14,uVar21);
      }
      else if (uVar17 == 1) {
LAB_14061efd5:
        FUN_1408a4c00(param_5,param_1 + 9,param_1 + 0xc,3);
        uVar6 = FUN_1409fc0c0();
        if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x147ae15 == 0) {
          uVar21 = 3;
          puVar8 = (undefined8 *)((longlong)param_1 + 0x4c);
          puVar14 = (undefined8 *)((longlong)param_1 + 0x62);
          goto LAB_14061f02b;
        }
      }
      else if (uVar17 == 2) {
        FUN_1408a4c00(param_5,param_1 + 0xb,param_1 + 0xd,5);
        goto LAB_14061efd5;
      }
      uVar6 = FUN_1409fc0c0();
      if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x147ae15 == 0) {
        FUN_1408a4c00(param_5,param_1 + 10,(longlong)param_1 + 100,4);
      }
      break;
    case 8:
      uVar6 = FUN_1409fc0c0();
      if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x2aaaaaab == 0) goto LAB_14061ee41;
    case 0xb:
switchD_14061ea8e_caseD_b:
      uVar6 = FUN_1409fc0c0();
      bVar15 = (byte)(uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff
                     >> 0x1e);
      uVar11 = param_4;
      if (bVar15 == 0) {
        uVar11 = param_5;
      }
      FUN_1408a4c00(uVar11,(longlong)param_1 + 0x54,(longlong)param_1 + 0x66,2);
      uVar6 = FUN_1409fc0c0();
      uVar17 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
               0x2aaaaaab;
      uVar6 = FUN_1409fc0c0();
      if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x28f5c29 != 0) {
        uVar6 = FUN_1409fc0c0();
        uVar17 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff >>
                 0x1e;
      }
      uVar11 = param_5;
      if (uVar17 == 0) {
        uVar21 = 5;
        puVar8 = param_1 + 0xb;
        puVar14 = param_1 + 0xd;
        if (bVar15 == 0) {
          uVar11 = param_4;
        }
LAB_14061ed6b:
        FUN_1408a4c00(uVar11,puVar8,puVar14,uVar21);
      }
      else if (uVar17 == 1) {
        bVar16 = 1 - bVar15;
LAB_14061ed08:
        uVar10 = param_4;
        if (bVar16 == 0) {
          uVar10 = param_5;
        }
        FUN_1408a4c00(uVar10,param_1 + 9,param_1 + 0xc,3);
        uVar6 = FUN_1409fc0c0();
        if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x147ae15 == 0) {
          puVar14 = (undefined8 *)((longlong)param_1 + 0x62);
          uVar21 = 3;
          puVar8 = (undefined8 *)((longlong)param_1 + 0x4c);
          goto LAB_14061ed6b;
        }
      }
      else if (uVar17 == 2) {
        uVar6 = FUN_1409fc0c0();
        bVar16 = (byte)(uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) *
                                0x7fffffff >> 0x1e);
        uVar10 = param_5;
        if (bVar15 == 0) {
          uVar10 = param_4;
        }
        FUN_1408a4c00(uVar10,param_1 + 0xb,param_1 + 0xd,5);
        goto LAB_14061ed08;
      }
      uVar6 = FUN_1409fc0c0();
      if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x147ae15 == 0) {
        uVar6 = FUN_1409fc0c0();
        if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff &
            0xc0000000) == 0) {
          FUN_1408a4c00(param_5,param_1 + 10,(longlong)param_1 + 100,4);
        }
        else {
          FUN_1408a4c00(param_4,param_1 + 10,(longlong)param_1 + 100,4);
        }
      }
      break;
    case 0x30:
      uVar6 = FUN_1409fc0c0();
      if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x2aaaaaab != 0) {
        uVar6 = FUN_1409fc0c0();
        bVar15 = (byte)(uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) *
                                0x7fffffff >> 0x1e);
        uVar11 = param_4;
        if (bVar15 == 0) {
          uVar11 = param_5;
        }
        FUN_1408a4c00(uVar11,(longlong)param_1 + 0x54,(longlong)param_1 + 0x66,2);
        uVar6 = FUN_1409fc0c0();
        uVar17 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                 0x2aaaaaab;
        uVar6 = FUN_1409fc0c0();
        if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x28f5c29 != 0) {
          uVar6 = FUN_1409fc0c0();
          uVar17 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff >>
                   0x1e;
        }
        uVar11 = param_5;
        if (uVar17 == 0) {
          puVar8 = param_1 + 0xd;
          puVar14 = param_1 + 0xb;
          uVar21 = 5;
          if (bVar15 == 0) {
            uVar11 = param_4;
          }
LAB_14061f8d5:
          FUN_1408a4c00(uVar11,puVar14,puVar8,uVar21);
        }
        else if (uVar17 == 1) {
          bVar16 = 1 - bVar15;
LAB_14061f874:
          uVar10 = param_4;
          if (bVar16 == 0) {
            uVar10 = param_5;
          }
          FUN_1408a4c00(uVar10,param_1 + 9,param_1 + 0xc,3);
          uVar6 = FUN_1409fc0c0();
          if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0x147ae15 == 0) {
            uVar21 = 3;
            puVar14 = (undefined8 *)((longlong)param_1 + 0x4c);
            puVar8 = (undefined8 *)((longlong)param_1 + 0x62);
            goto LAB_14061f8d5;
          }
        }
        else if (uVar17 == 2) {
          uVar6 = FUN_1409fc0c0();
          bVar16 = (byte)(uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) *
                                  0x7fffffff >> 0x1e);
          uVar10 = param_5;
          if (bVar15 == 0) {
            uVar10 = param_4;
          }
          FUN_1408a4c00(uVar10,param_1 + 0xb,param_1 + 0xd,5);
          goto LAB_14061f874;
        }
        uVar6 = FUN_1409fc0c0();
        if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x147ae15 == 0) {
          uVar6 = FUN_1409fc0c0();
          if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff &
              0xc0000000) == 0) {
            FUN_1408a4c00(param_5,param_1 + 10,(longlong)param_1 + 100,4);
          }
          else {
            FUN_1408a4c00(param_4,param_1 + 10,(longlong)param_1 + 100,4);
          }
        }
        goto LAB_14061f2cc;
      }
      uVar6 = FUN_1409fc0c0();
      if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff &
          0xc0000000) == 0) {
        uVar6 = FUN_1409fc0c0();
        uVar6 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff;
        if (uVar6 >> 0x1e == 0) {
          FUN_1408a4c00(param_4,param_1 + 8,(longlong)param_1 + 0x5c,0);
          uVar11 = param_5;
        }
        else {
          if (uVar6 >> 0x1e != 1) goto LAB_14061ee41;
          FUN_1408a4c00(param_5,param_1 + 8,(longlong)param_1 + 0x5c,0);
          uVar11 = param_4;
        }
        FUN_1408a4c00(uVar11,(longlong)param_1 + 0x44,(longlong)param_1 + 0x5e,1);
      }
      else {
        param_1[2] = 0;
        puVar8 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar8 = (undefined8 *)*param_1;
        }
        *(undefined1 *)puVar8 = 0;
        FUN_1408a4c00(param_4,local_a4,local_b4,2);
        if ((-1 < local_a4[0]) &&
           ((ulonglong)(longlong)local_a4[0] < (ulonglong)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) {
          FUN_14000cb40(param_1,*(undefined8 *)
                                 (*(longlong *)
                                   (DAT_141d6e1d8[*(int *)((longlong)param_1 + 0x6c)] + 0x50) +
                                 (longlong)local_a4[0] * 8),0,0xffffffffffffffff);
        }
      }
LAB_14061ee41:
      FUN_1408a4c00(param_4,param_1 + 9,param_1 + 0xc,3);
      break;
    case 0x31:
    case 0x33:
      FUN_1408a4c00(param_4,(longlong)param_1 + 0x54,(longlong)param_1 + 0x66,2);
      uVar6 = FUN_1409fc0c0();
      uVar17 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
               0x2aaaaaab;
      uVar6 = FUN_1409fc0c0();
      if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x28f5c29 != 0) {
        uVar6 = FUN_1409fc0c0();
        uVar17 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff >>
                 0x1e;
      }
      if (uVar17 == 0) {
        puVar8 = param_1 + 0xd;
        puVar14 = param_1 + 0xb;
        uVar21 = 5;
LAB_14061f279:
        FUN_1408a4c00(param_5,puVar14,puVar8,uVar21);
      }
      else if (uVar17 == 1) {
LAB_14061f223:
        FUN_1408a4c00(param_5,param_1 + 9,param_1 + 0xc,3);
        uVar6 = FUN_1409fc0c0();
        if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x147ae15 == 0) {
          uVar21 = 3;
          puVar14 = (undefined8 *)((longlong)param_1 + 0x4c);
          puVar8 = (undefined8 *)((longlong)param_1 + 0x62);
          goto LAB_14061f279;
        }
      }
      else if (uVar17 == 2) {
        FUN_1408a4c00(param_5,param_1 + 0xb,param_1 + 0xd,5);
        goto LAB_14061f223;
      }
      uVar6 = FUN_1409fc0c0();
      if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x147ae15 == 0) {
        FUN_1408a4c00(param_5,param_1 + 10,(longlong)param_1 + 100,4);
      }
LAB_14061f2cc:
      if ((((*(short *)((longlong)param_1 + 0x66) == 1) &&
           (iVar2 = *(int *)((longlong)param_1 + 0x54), -1 < iVar2)) &&
          ((ulonglong)(longlong)iVar2 < (ulonglong)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) &&
         (*(longlong *)(*(longlong *)(DAT_141d6e1a8 + (longlong)iVar2 * 8) + 0x30) != 0)) {
        *(short *)((longlong)param_1 + 0x66) = 0;
      }
    }
    piVar19 = (int *)(param_1 + 10);
    iVar2 = *(int *)(param_1 + 9);
    if (iVar2 != -1) {
      iVar3 = *(int *)((longlong)param_1 + 0x4c);
      if ((iVar3 != -1) &&
         (*(char *)(*(longlong *)(DAT_141d6e1a8 + (longlong)iVar2 * 8) + 0x140) <
          *(char *)(*(longlong *)(DAT_141d6e1a8 + (longlong)iVar3 * 8) + 0x140))) {
        uVar1 = *(undefined2 *)(param_1 + 0xc);
        *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)((longlong)param_1 + 0x62);
        *(undefined2 *)((longlong)param_1 + 0x62) = uVar1;
        *(int *)(param_1 + 9) = iVar3;
        *(int *)((longlong)param_1 + 0x4c) = iVar2;
      }
    }
    bVar5 = false;
    bVar4 = false;
    if (*(short *)((longlong)param_1 + 0x66) == 1) {
      bVar5 = false;
      bVar4 = false;
      if (*(short *)(param_1 + 0xd) == 1) {
        bVar5 = true;
        bVar4 = true;
      }
    }
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 != -1) {
      bVar5 = bVar4;
      if (iVar2 == *(int *)((longlong)param_1 + 0x44)) {
        bVar5 = true;
      }
      if (iVar2 == *(int *)(param_1 + 0xb)) {
        bVar5 = true;
      }
      if (iVar2 == *piVar19) {
        bVar5 = true;
      }
      if (iVar2 == *(int *)(param_1 + 9)) {
        bVar5 = true;
      }
      if (iVar2 == *(int *)((longlong)param_1 + 0x4c)) {
        bVar5 = true;
      }
      bVar4 = bVar5;
      if (iVar2 == *(int *)((longlong)param_1 + 0x54)) {
        bVar5 = true;
        bVar4 = true;
      }
    }
    iVar2 = *(int *)((longlong)param_1 + 0x44);
    if (iVar2 != -1) {
      if (iVar2 == *(int *)(param_1 + 0xb)) {
        bVar5 = true;
      }
      if (iVar2 == *piVar19) {
        bVar5 = true;
      }
      bVar4 = bVar5;
      if (iVar2 == *(int *)(param_1 + 9)) {
        bVar4 = true;
      }
      if (iVar2 == *(int *)((longlong)param_1 + 0x4c)) {
        bVar4 = true;
      }
      bVar5 = bVar4;
      if (iVar2 == *(int *)((longlong)param_1 + 0x54)) {
        bVar5 = true;
        bVar4 = true;
      }
    }
    iVar2 = *piVar19;
    if (iVar2 != -1) {
      if (iVar2 == *(int *)(param_1 + 0xb)) {
        bVar4 = true;
      }
      if (iVar2 == *(int *)(param_1 + 9)) {
        bVar4 = true;
      }
      if (iVar2 == *(int *)((longlong)param_1 + 0x4c)) {
        bVar4 = true;
      }
      bVar5 = bVar4;
      if (iVar2 == *(int *)((longlong)param_1 + 0x54)) {
        bVar5 = true;
        bVar4 = true;
      }
    }
    iVar2 = *(int *)(param_1 + 9);
    if (iVar2 != -1) {
      bVar5 = bVar4;
      if (iVar2 == *(int *)(param_1 + 0xb)) {
        bVar5 = true;
      }
      if (iVar2 == *(int *)((longlong)param_1 + 0x4c)) {
        bVar5 = true;
      }
      bVar4 = bVar5;
      if (iVar2 == *(int *)((longlong)param_1 + 0x54)) {
        bVar5 = true;
        bVar4 = true;
      }
    }
    iVar2 = *(int *)((longlong)param_1 + 0x4c);
    if (iVar2 != -1) {
      bVar4 = bVar5;
      if (iVar2 == *(int *)(param_1 + 0xb)) {
        bVar4 = true;
      }
      if (iVar2 == *(int *)((longlong)param_1 + 0x54)) {
        bVar4 = true;
      }
    }
    if ((((*(int *)((longlong)param_1 + 0x54) == -1) ||
         (*(int *)((longlong)param_1 + 0x54) != *(int *)(param_1 + 0xb))) && (!bVar4)) ||
       (local_ac = local_ac + -1, local_ac < 1)) {
      return;
    }
  } while( true );
}

