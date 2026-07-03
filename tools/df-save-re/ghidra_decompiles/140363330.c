// FUN_140363330 @ 140363330
// callees:
//   -> 140071310 FUN_140071310
//   -> 14000c390 FUN_14000c390
//   -> 140051e20 FUN_140051e20
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140363330(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  longlong lVar11;
  char cVar12;
  short sVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  char cVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_108 [32];
  int local_e8 [2];
  longlong local_e0;
  float local_d8 [4];
  ulonglong local_c8;
  
  local_c8 = DAT_1410b5008 ^ (ulonglong)auStack_108;
  fVar2 = *(float *)(param_1 + 0x74);
  fVar28 = *(float *)(param_1 + 0x78);
  fVar25 = *(float *)(param_1 + 0x7c);
  local_d8[2] = fVar25;
  local_d8[0] = fVar2;
  local_d8[1] = fVar28;
  if (((DAT_140f92a88 < fVar2) || (DAT_140f92a88 < fVar28)) || (DAT_140f92a88 < fVar25)) {
    pfVar18 = local_d8;
    lVar17 = 3;
    do {
      if (DAT_140f92a8c < *pfVar18) {
        if (*pfVar18 < DAT_140f92a94) {
          *pfVar18 = 0.5;
        }
        else {
          *pfVar18 = 1.0;
        }
      }
      else {
        *pfVar18 = 0.0;
      }
      pfVar18 = pfVar18 + 1;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  bVar10 = false;
  uVar14 = (uint)DAT_140f92f20;
  uVar26 = (uint)((ulonglong)DAT_140f92f20 >> 0x20);
  fVar27 = local_d8[0];
  fVar29 = local_d8[1];
  fVar30 = local_d8[2];
  if (((((((float)(double)CONCAT44((uint)((ulonglong)(double)(fVar2 - fVar28) >> 0x20) & uVar26,
                                   SUB84((double)(fVar2 - fVar28),0) & uVar14) < DAT_140f92a6c) &&
         ((float)(double)CONCAT44((uint)((ulonglong)(double)(fVar25 - fVar28) >> 0x20) & uVar26,
                                  SUB84((double)(fVar25 - fVar28),0) & uVar14) < DAT_140f92a6c)) &&
        (((float)(double)CONCAT44((uint)((ulonglong)(double)(fVar2 - fVar25) >> 0x20) & uVar26,
                                  SUB84((double)(fVar2 - fVar25),0) & uVar14) < DAT_140f92a6c &&
         ((fVar2 <= fVar28 * DAT_140f92b10 && (fVar2 <= fVar25 * DAT_140f92b10)))))) &&
       (fVar28 <= fVar2 * DAT_140f92b10)) &&
      (((fVar28 <= fVar25 * DAT_140f92b10 && (fVar25 <= fVar2 * DAT_140f92b10)) &&
       (fVar25 <= fVar28 * DAT_140f92b10)))) ||
     ((bVar10 = true, local_d8[0] != local_d8[1] || (local_d8[0] != local_d8[2]))))
  goto LAB_14036355e;
  if (local_d8[0] == 0.0) {
    fVar27 = DAT_140f92a88;
    fVar29 = DAT_140f92a88;
    fVar30 = DAT_140f92a88;
  }
  if ((fVar28 <= fVar2) || (fVar25 <= fVar2)) {
    if ((fVar28 < fVar2) && (fVar28 < fVar25)) {
      fVar29 = 0.0;
      goto LAB_14036355e;
    }
    if ((fVar25 < fVar28) && (fVar25 < fVar2)) {
      fVar30 = 0.0;
      goto LAB_14036355e;
    }
    if ((fVar28 < fVar2) && (fVar25 < fVar2)) {
      fVar29 = 0.0;
      fVar30 = 0.0;
      goto LAB_14036355e;
    }
    if ((fVar28 <= fVar2) || (fVar28 <= fVar25)) {
      if ((fVar25 <= fVar2) || (fVar25 <= fVar28)) goto LAB_14036355e;
      fVar29 = 0.0;
    }
    else {
      fVar30 = 0.0;
    }
  }
  fVar27 = 0.0;
LAB_14036355e:
  pfVar19 = (float *)&DAT_141c33db4;
  sVar13 = 1;
  pfVar18 = (float *)&DAT_141c33db4;
  uVar14 = 0;
  fVar28 = DAT_140f92c3c;
  do {
    if (((0xf < uVar14) || ((0x8181U >> (uVar14 & 0x1f) & 1) == 0)) || (!bVar10)) {
      fVar25 = pfVar18[-1];
      fVar24 = 0.0;
      if (fVar25 < fVar2) {
        fVar24 = (fVar2 - fVar25) + 0.0;
      }
      fVar3 = *(float *)(param_1 + 0x78);
      fVar4 = *pfVar18;
      if (fVar4 < fVar3) {
        fVar24 = fVar24 + (fVar3 - fVar4);
      }
      fVar5 = *(float *)(param_1 + 0x7c);
      fVar6 = pfVar18[1];
      if (fVar6 < fVar5) {
        fVar24 = fVar24 + (fVar5 - fVar6);
      }
      if (fVar2 < fVar25) {
        fVar24 = fVar24 + (fVar25 - fVar2) / DAT_140f92b90;
      }
      if (fVar3 < fVar4) {
        fVar24 = fVar24 + (fVar4 - fVar3) / DAT_140f92b90;
      }
      if (fVar5 < fVar6) {
        fVar24 = fVar24 + (fVar6 - fVar5) / DAT_140f92b90;
      }
      if ((fVar24 < fVar28) || (fVar28 == DAT_140f92c3c)) {
        sVar13 = (short)uVar14;
        fVar28 = fVar24;
      }
    }
    uVar14 = uVar14 + 1;
    pfVar18 = pfVar18 + 3;
  } while ((int)uVar14 < 0x10);
  if (_DAT_140f92a78 < fVar28) {
    uVar14 = 0;
    do {
      if (((0xf < uVar14) || ((0x8181U >> (uVar14 & 0x1f) & 1) == 0)) || (!bVar10)) {
        fVar2 = pfVar19[-1];
        fVar25 = 0.0;
        if (fVar2 < fVar27) {
          fVar25 = (fVar27 - fVar2) + 0.0;
        }
        fVar24 = *pfVar19;
        if (fVar24 < fVar29) {
          fVar25 = fVar25 + (fVar29 - fVar24);
        }
        fVar3 = pfVar19[1];
        if (fVar3 < fVar30) {
          fVar25 = fVar25 + (fVar30 - fVar3);
        }
        if (fVar27 < fVar2) {
          fVar25 = fVar25 + (fVar2 - fVar27) / DAT_140f92b90;
        }
        if (fVar29 < fVar24) {
          fVar25 = fVar25 + (fVar24 - fVar29) / DAT_140f92b90;
        }
        if (fVar30 < fVar3) {
          fVar25 = fVar25 + (fVar3 - fVar30) / DAT_140f92b90;
        }
        if ((fVar25 < fVar28) || (fVar28 == DAT_140f92c3c)) {
          sVar13 = (short)uVar14;
          fVar28 = fVar25;
        }
      }
      uVar14 = uVar14 + 1;
      pfVar19 = pfVar19 + 3;
    } while ((int)uVar14 < 0x10);
  }
  uVar14 = (int)sVar13 >> 0x1f & 7;
  iVar15 = (int)sVar13 + uVar14;
  cVar12 = ((byte)iVar15 & 7) - (char)uVar14;
  *(char *)(param_1 + 0x70) = cVar12;
  cVar23 = (char)(iVar15 >> 3);
  *(char *)(param_1 + 0x71) = cVar23;
  if (cVar12 == '\0') {
    if (cVar23 == '\0') {
      cVar23 = '\x01';
    }
    *(char *)(param_1 + 0x71) = cVar23;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  iVar15 = 0;
  local_e0 = param_1;
  if (*(longlong *)(param_1 + 0x28) - *plVar1 >> 3 != 0) {
    lVar17 = 0;
    do {
      lVar11 = DAT_141d6e1a8;
      iVar20 = 0;
      uVar21 = DAT_141d6e1b0 - DAT_141d6e1a8 >> 3;
      uVar7 = *(undefined8 *)(lVar17 + *plVar1);
      if (uVar21 != 0) {
        lVar22 = 0;
        do {
          iVar16 = FUN_140071310(*(undefined8 *)(lVar11 + lVar22),uVar7);
          if (iVar16 == 0) goto LAB_140363831;
          iVar20 = iVar20 + 1;
          lVar22 = lVar22 + 8;
        } while ((ulonglong)(longlong)iVar20 < uVar21);
      }
      iVar20 = -1;
LAB_140363831:
      lVar11 = local_e0;
      local_e8[0] = iVar20;
      if (iVar20 != -1) {
        piVar8 = *(int **)(local_e0 + 0x40);
        if ((local_e8 < piVar8) && (piVar9 = *(int **)(local_e0 + 0x38), piVar9 <= local_e8)) {
          if (piVar8 == *(int **)(local_e0 + 0x48)) {
            FUN_14000c390(local_e0 + 0x38,1);
          }
          if (*(undefined4 **)(lVar11 + 0x40) != (undefined4 *)0x0) {
            **(undefined4 **)(lVar11 + 0x40) =
                 *(undefined4 *)
                  (*(longlong *)(lVar11 + 0x38) + ((longlong)local_e8 - (longlong)piVar9 >> 2) * 4);
          }
        }
        else {
          if (piVar8 == *(int **)(local_e0 + 0x48)) {
            FUN_14000c390(local_e0 + 0x38,1);
          }
          if (*(int **)(lVar11 + 0x40) != (int *)0x0) {
            **(int **)(lVar11 + 0x40) = iVar20;
          }
        }
        *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 4;
      }
      iVar15 = iVar15 + 1;
      lVar17 = lVar17 + 8;
    } while ((ulonglong)(longlong)iVar15 < (ulonglong)(*(longlong *)(param_1 + 0x28) - *plVar1 >> 3)
            );
  }
  FUN_140051e20(plVar1);
  return;
}

