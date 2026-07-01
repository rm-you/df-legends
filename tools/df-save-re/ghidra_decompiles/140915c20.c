// FUN_140915c20 @ 140915c20
// callees:
//   -> 14000c390 FUN_14000c390
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140915c20(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  undefined4 **ppuVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  ulonglong uVar17;
  int *piVar18;
  int *piVar19;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined4 **local_e0;
  undefined4 **ppuStack_d8;
  undefined4 **local_d0;
  undefined8 local_c8;
  int local_b8 [36];
  ulonglong local_28;
  
  local_c8 = 0xfffffffffffffffe;
  local_28 = DAT_1410b5008 ^ (ulonglong)auStack_108;
  piVar19 = (int *)0x0;
  uVar6 = 0;
  iVar14 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1;
  piVar18 = piVar19;
  piVar13 = piVar19;
  if (-1 < iVar14) {
    do {
      iVar10 = iVar14 + (int)piVar18 >> 1;
      piVar13 = *(int **)(DAT_141d692e0 + (longlong)iVar10 * 8);
      iVar15 = *piVar13;
      if (iVar15 == *(int *)(param_1 + 0x1d)) break;
      if (*(int *)(param_1 + 0x1d) < iVar15) {
        iVar14 = iVar10 + -1;
      }
      else {
        piVar18 = (int *)(ulonglong)(iVar10 + 1);
      }
      piVar13 = piVar19;
    } while ((int)piVar18 <= iVar14);
  }
  iVar14 = *(int *)((longlong)param_1 + 0xe4);
  lVar7 = DAT_141c53720 - DAT_141c53718 >> 3;
  piVar18 = piVar19;
  if (((lVar7 != 0) && (iVar14 != -1)) && (iVar15 = (int)lVar7 + -1, piVar16 = piVar19, -1 < iVar15)
     ) {
    do {
      iVar11 = iVar15 + (int)piVar16 >> 1;
      piVar18 = *(int **)(DAT_141c53718 + (longlong)iVar11 * 8);
      iVar10 = piVar18[1];
      if (iVar10 == iVar14) break;
      if (iVar14 < iVar10) {
        iVar15 = iVar11 + -1;
      }
      else {
        piVar16 = (int *)(ulonglong)(iVar11 + 1);
      }
      piVar18 = piVar19;
    } while ((int)piVar16 <= iVar15);
  }
  piVar16 = piVar19;
  if (piVar13 == (int *)0x0) {
    piVar13 = piVar19;
    if (piVar18 != (int *)0x0) {
      piVar13 = piVar18 + 0x344;
    }
  }
  else {
    piVar13 = piVar13 + 0x15;
  }
  do {
    if (piVar13 == (int *)0x0) {
      local_b8[(longlong)piVar16] = 0;
    }
    else {
      local_b8[(longlong)piVar16] = piVar13[(longlong)piVar16];
    }
    piVar16 = (int *)((longlong)piVar16 + 1);
  } while ((longlong)piVar16 < 0x21);
  puVar12 = (undefined8 *)*param_1;
  piVar13 = (int *)((ulonglong)((longlong)param_1[1] + (7 - (longlong)puVar12)) >> 3);
  if ((undefined8 *)param_1[1] < puVar12) {
    piVar13 = piVar19;
  }
  piVar18 = piVar19;
  if (piVar13 != (int *)0x0) {
    do {
      local_b8[*(int *)*puVar12] = ((int *)*puVar12)[1];
      puVar12 = puVar12 + 1;
      piVar18 = (int *)((longlong)piVar18 + 1);
    } while (piVar18 < piVar13);
  }
  if (*(short *)((longlong)param_1 + 0xde) < 0x19) {
    return;
  }
  local_e0 = (undefined4 **)0x0;
  ppuStack_d8 = (undefined4 **)0x0;
  local_d0 = (undefined4 **)0x0;
  lVar7 = param_1[0x2b];
  piVar13 = (int *)(ulonglong)*(ushort *)((longlong)param_1 + 0x8c);
  if (lVar7 != 0) {
    uVar9 = *(ushort *)((longlong)param_1 + 0x8c) + *(short *)(lVar7 + 0xc);
    piVar13 = piVar19;
    if ((-1 < (short)uVar9) && (piVar13 = (int *)(ulonglong)uVar9, 100 < (short)uVar9)) {
      piVar13 = (int *)0x64;
    }
  }
  piVar18 = (int *)(ulonglong)*(ushort *)((longlong)param_1 + 0xd4);
  if (lVar7 != 0) {
    uVar9 = *(ushort *)((longlong)param_1 + 0xd4) + *(short *)(lVar7 + 0x54);
    piVar18 = piVar19;
    if ((-1 < (short)uVar9) && (piVar18 = (int *)(ulonglong)uVar9, 100 < (short)uVar9)) {
      piVar18 = (int *)0x64;
    }
  }
  if ((((short)piVar13 < 0x5b) || (9 < (short)piVar18)) &&
     (((short)piVar13 < 0x4c ||
      ((0x18 < (short)piVar18 ||
       (uVar5 = FUN_1409fc0c0(),
       uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e == 0))
      )))) {
    if (0x19 < local_b8[2]) {
      FUN_14000c390(&local_e0,1);
      if (ppuStack_d8 != (undefined4 **)0x0) {
        *(undefined4 *)ppuStack_d8 = 2;
      }
      ppuStack_d8 = (undefined4 **)((longlong)ppuStack_d8 + 4);
    }
    if (local_b8[4] < 0x1a) {
      if (0x4b < *(short *)((longlong)param_1 + 0xaa)) goto LAB_140915f4b;
    }
    else {
      local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,3);
      if ((&local_e8 < ppuStack_d8) && (local_e0 <= &local_e8)) {
        lVar7 = (longlong)&local_e8 - (longlong)local_e0;
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = *(undefined4 *)((longlong)local_e0 + (lVar7 >> 2) * 4);
        }
        ppuStack_d8 = (undefined4 **)((longlong)ppuStack_d8 + 4);
      }
      else {
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = 3;
        }
        ppuStack_d8 = (undefined4 **)((longlong)ppuStack_d8 + 4);
      }
LAB_140915f4b:
      local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,0xd);
      if ((&local_e8 < ppuStack_d8) && (local_e0 <= &local_e8)) {
        lVar7 = (longlong)&local_e8 - (longlong)local_e0;
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = *(undefined4 *)((longlong)local_e0 + (lVar7 >> 2) * 4);
        }
      }
      else {
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = 0xd;
        }
      }
      ppuStack_d8 = (undefined4 **)((longlong)ppuStack_d8 + 4);
    }
    if (0x19 < local_b8[0xb]) {
      local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,4);
      if ((&local_e8 < ppuStack_d8) && (local_e0 <= &local_e8)) {
        lVar7 = (longlong)&local_e8 - (longlong)local_e0;
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = *(undefined4 *)((longlong)local_e0 + (lVar7 >> 2) * 4);
        }
      }
      else {
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = 4;
        }
      }
      ppuStack_d8 = (undefined4 **)((longlong)ppuStack_d8 + 4);
    }
    if (0x19 < local_b8[0x14]) {
      local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,5);
      if ((&local_e8 < ppuStack_d8) && (local_e0 <= &local_e8)) {
        lVar7 = (longlong)&local_e8 - (longlong)local_e0;
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = *(undefined4 *)((longlong)local_e0 + (lVar7 >> 2) * 4);
        }
      }
      else {
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = 5;
        }
      }
      ppuStack_d8 = (undefined4 **)((longlong)ppuStack_d8 + 4);
    }
    if (local_b8[0x1f] < 0x1a) {
      if (local_b8[0x1f] < -0x19) {
        local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,0xe);
        if ((&local_e8 < ppuStack_d8) && (local_e0 <= &local_e8)) goto LAB_140916110;
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = 0xe;
        }
        goto LAB_1409161c3;
      }
    }
    else {
      local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,6);
      if ((&local_e8 < ppuStack_d8) && (local_e0 <= &local_e8)) {
LAB_140916110:
        lVar7 = (longlong)&local_e8 - (longlong)local_e0;
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = *(undefined4 *)((longlong)local_e0 + (lVar7 >> 2) * 4);
        }
      }
      else {
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = 6;
        }
      }
LAB_1409161c3:
      ppuStack_d8 = (undefined4 **)((longlong)ppuStack_d8 + 4);
    }
    if (0x19 < local_b8[0x15]) {
      local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,7);
      if ((&local_e8 < ppuStack_d8) && (local_e0 <= &local_e8)) {
        lVar7 = (longlong)&local_e8 - (longlong)local_e0;
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = *(undefined4 *)((longlong)local_e0 + (lVar7 >> 2) * 4);
        }
      }
      else {
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = 7;
        }
      }
      ppuStack_d8 = (undefined4 **)((longlong)ppuStack_d8 + 4);
    }
    if (0x19 < local_b8[0x16]) {
      local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,8);
      if ((&local_e8 < ppuStack_d8) && (local_e0 <= &local_e8)) {
        lVar7 = (longlong)&local_e8 - (longlong)local_e0;
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = *(undefined4 *)((longlong)local_e0 + (lVar7 >> 2) * 4);
        }
      }
      else {
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = 8;
        }
      }
      ppuStack_d8 = (undefined4 **)((longlong)ppuStack_d8 + 4);
    }
    if (0x19 < local_b8[0x1d]) {
      local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,9);
      if ((&local_e8 < ppuStack_d8) && (local_e0 <= &local_e8)) {
        lVar7 = (longlong)&local_e8 - (longlong)local_e0;
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = *(undefined4 *)((longlong)local_e0 + (lVar7 >> 2) * 4);
        }
      }
      else {
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = 9;
        }
      }
      ppuStack_d8 = (undefined4 **)((longlong)ppuStack_d8 + 4);
    }
    if (0x19 < local_b8[0x1e]) {
      local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,10);
      if ((&local_e8 < ppuStack_d8) && (local_e0 <= &local_e8)) {
        lVar7 = (longlong)&local_e8 - (longlong)local_e0;
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = *(undefined4 *)((longlong)local_e0 + (lVar7 >> 2) * 4);
        }
      }
      else {
        if (ppuStack_d8 == local_d0) {
          FUN_14000c390(&local_e0,1);
        }
        if (ppuStack_d8 != (undefined4 **)0x0) {
          *(undefined4 *)ppuStack_d8 = 10;
        }
      }
      ppuStack_d8 = (undefined4 **)((longlong)ppuStack_d8 + 4);
    }
    if (local_b8[0x20] < 0x1a) goto LAB_14091648c;
    local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,0xc);
    if ((&local_e8 < ppuStack_d8) && (local_e0 <= &local_e8)) {
      lVar7 = (longlong)&local_e8 - (longlong)local_e0;
      if (ppuStack_d8 == local_d0) {
        FUN_14000c390(&local_e0,1);
      }
      if (ppuStack_d8 != (undefined4 **)0x0) {
        *(undefined4 *)ppuStack_d8 = *(undefined4 *)((longlong)local_e0 + (lVar7 >> 2) * 4);
      }
    }
    else {
      if (ppuStack_d8 == local_d0) {
        FUN_14000c390(&local_e0,1);
      }
      if (ppuStack_d8 != (undefined4 **)0x0) {
        *(undefined4 *)ppuStack_d8 = 0xc;
      }
    }
  }
  else {
    FUN_14000c390(&local_e0,1);
    if (ppuStack_d8 != (undefined4 **)0x0) {
      *(undefined4 *)ppuStack_d8 = 3;
    }
  }
  ppuStack_d8 = (undefined4 **)((longlong)ppuStack_d8 + 4);
LAB_14091648c:
  ppuVar4 = local_e0;
  uVar17 = (longlong)ppuStack_d8 - (longlong)local_e0 >> 2;
  if (uVar17 != 0) {
    if (1 < (uint)uVar17) {
      uVar6 = FUN_1409fc0c0();
      uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              ((int)(0x7fffffff / (uVar17 & 0xffffffff)) + 1U);
    }
    uVar1 = *(undefined4 *)((longlong)ppuVar4 + (longlong)(int)uVar6 * 4);
    puVar8 = operator_new(0x30);
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 6) = 0;
    *(undefined8 *)(puVar8 + 8) = 0;
    puVar8[2] = 0xffffffff;
    puVar8[10] = 0;
    *puVar8 = *(undefined4 *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    puVar8[1] = uVar1;
    ppuVar2 = (undefined4 **)param_1[10];
    local_e8 = puVar8;
    if ((&local_e8 < ppuVar2) && (ppuVar3 = (undefined4 **)param_1[9], ppuVar3 <= &local_e8)) {
      if (ppuVar2 == (undefined4 **)param_1[0xb]) {
        FUN_14000c2d0(param_1 + 9,1);
      }
      if ((undefined8 *)param_1[10] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[10] =
             *(undefined8 *)(param_1[9] + ((longlong)&local_e8 - (longlong)ppuVar3 >> 3) * 8);
      }
    }
    else {
      if (ppuVar2 == (undefined4 **)param_1[0xb]) {
        FUN_14000c2d0(param_1 + 9,1);
      }
      if ((undefined8 *)param_1[10] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[10] = puVar8;
      }
    }
    param_1[10] = param_1[10] + 8;
  }
  if (ppuVar4 != (undefined4 **)0x0) {
    FUN_140002020(ppuVar4,(longlong)local_d0 - (longlong)ppuVar4 >> 2,4);
  }
  return;
}

