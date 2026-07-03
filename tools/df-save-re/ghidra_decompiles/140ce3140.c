// FUN_140ce3140 @ 140ce3140
// callees:
//   -> 140c88550 FUN_140c88550
//   -> 14000d840 FUN_14000d840
//   -> 14007dc50 FUN_14007dc50
//   -> 1407da8a0 FUN_1407da8a0
//   -> 140106fb0 FUN_140106fb0
//   -> 140c88400 FUN_140c88400
//   -> 140c84550 FUN_140c84550
//   -> 140ca8390 FUN_140ca8390
//   -> 140765280 FUN_140765280
//   -> 1407ad250 FUN_1407ad250
//   -> 140050d30 FUN_140050d30
//   -> 1400199b0 FUN_1400199b0
//   -> 1404cec60 FUN_1404cec60
//   -> 140004650 FUN_140004650
//   -> 140ce0da0 FUN_140ce0da0
//   -> 140ce65d0 FUN_140ce65d0
//   -> 1406fbd70 FUN_1406fbd70
//   -> 1401b8d60 FUN_1401b8d60
//   -> 140050b50 FUN_140050b50
//   -> 140ce0f50 FUN_140ce0f50
//   -> 140ce5d50 FUN_140ce5d50


void FUN_140ce3140(longlong param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,longlong *param_8)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  short sVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  int *piVar26;
  int iVar27;
  int *piVar28;
  longlong *plVar29;
  undefined8 *puVar30;
  longlong *plVar31;
  undefined4 *puVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  int local_res10;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar38;
  ulonglong local_a8;
  uint local_9c;
  longlong local_88;
  longlong local_80;
  int local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  
  uVar38 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  uVar34 = 0;
  uVar36 = 0;
  param_2[4] = 0;
  local_a8 = 0;
  uVar35 = uVar34;
  if (param_6 != -1) {
    iVar27 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
    if (iVar27 == 0) {
      local_a8 = 0;
      uVar35 = 0;
    }
    else {
      iVar27 = iVar27 + -1;
      if (-1 < iVar27) {
        do {
          iVar21 = (int)uVar35 + iVar27 >> 1;
          local_a8 = *(ulonglong *)(DAT_141c66fd0 + (longlong)iVar21 * 8);
          if (*(int *)(local_a8 + 0x130) == param_6) goto LAB_140ce31f4;
          if (param_6 < *(int *)(local_a8 + 0x130)) {
            iVar27 = iVar21 + -1;
          }
          else {
            uVar35 = (ulonglong)(iVar21 + 1);
          }
        } while ((int)uVar35 <= iVar27);
      }
      local_a8 = 0;
LAB_140ce31f4:
      uVar35 = local_a8;
      if (local_a8 != 0) {
        if ((DAT_1410b67dc == 0) &&
           ((((*(byte *)(param_1 + 0x110) & 0x10) != 0 &&
             (cVar12 = FUN_140c88550(local_a8), cVar12 != '\0')) ||
            (((*(byte *)(local_a8 + 0x110) & 0x10) != 0 &&
             (cVar12 = FUN_140c88550(param_1), cVar12 != '\0')))))) {
          param_2[4] = 0x1d;
          return;
        }
        lVar18 = DAT_141d6dd58;
        lVar17 = DAT_141d6dd50;
        sVar16 = *(short *)(param_1 + 0xa4);
        sVar1 = *(short *)(param_1 + 300);
        if (sVar16 < 0) {
LAB_140ce3453:
          bVar11 = false;
        }
        else {
          if (((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar16) ||
             (sVar1 < 0)) {
LAB_140ce32c0:
            if (-1 < sVar16) {
              if (((ulonglong)(longlong)sVar16 < (ulonglong)(lVar18 - lVar17 >> 3)) && (-1 < sVar1))
              {
                lVar19 = *(longlong *)(lVar17 + (longlong)sVar16 * 8);
                if (((ulonglong)(longlong)sVar1 <
                     (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)
                    ) && (cVar12 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar19 + 0x178) +
                                                  (longlong)sVar1 * 8) + 0x6a8,0x84), cVar12 != '\0'
                         )) goto LAB_140ce344c;
              }
              if (-1 < sVar16) {
                if (((ulonglong)(longlong)sVar16 < (ulonglong)(lVar18 - lVar17 >> 3)) &&
                   (-1 < sVar1)) {
                  lVar19 = *(longlong *)(lVar17 + (longlong)sVar16 * 8);
                  if (((ulonglong)(longlong)sVar1 <
                       (ulonglong)
                       (*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
                     (cVar12 = FUN_14000d840(*(longlong *)
                                              (*(longlong *)(lVar19 + 0x178) + (longlong)sVar1 * 8)
                                             + 0x6a8,0x6e), cVar12 != '\0')) goto LAB_140ce344c;
                }
                if (-1 < sVar16) {
                  if (((ulonglong)(longlong)sVar16 < (ulonglong)(lVar18 - lVar17 >> 3)) &&
                     (-1 < sVar1)) {
                    lVar19 = *(longlong *)(lVar17 + (longlong)sVar16 * 8);
                    if (((ulonglong)(longlong)sVar1 <
                         (ulonglong)
                         (*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
                       (cVar12 = FUN_14000d840(*(longlong *)
                                                (*(longlong *)(lVar19 + 0x178) + (longlong)sVar1 * 8
                                                ) + 0x6a8,0x6f), cVar12 != '\0'))
                    goto LAB_140ce344c;
                  }
                  if (((-1 < sVar16) &&
                      ((ulonglong)(longlong)sVar16 < (ulonglong)(lVar18 - lVar17 >> 3))) &&
                     (-1 < sVar1)) {
                    lVar19 = *(longlong *)(lVar17 + (longlong)sVar16 * 8);
                    if (((ulonglong)(longlong)sVar1 <
                         (ulonglong)
                         (*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
                       (cVar12 = FUN_14000d840(*(longlong *)
                                                (*(longlong *)(lVar19 + 0x178) + (longlong)sVar1 * 8
                                                ) + 0x6a8,0x83), cVar12 != '\0'))
                    goto LAB_140ce344c;
                  }
                }
              }
            }
            goto LAB_140ce3453;
          }
          lVar19 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar16 * 8);
          if (((ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3) <=
               (ulonglong)(longlong)sVar1) ||
             (cVar12 = FUN_14000d840(*(longlong *)
                                      (*(longlong *)(lVar19 + 0x178) + (longlong)sVar1 * 8) + 0x6a8,
                                     0x90), cVar12 == '\0')) goto LAB_140ce32c0;
LAB_140ce344c:
          bVar11 = true;
        }
        if (((sVar16 < 0) || ((ulonglong)(lVar18 - lVar17 >> 3) <= (ulonglong)(longlong)sVar16)) ||
           (sVar1 < 0)) {
LAB_140ce34bb:
          cVar12 = '\0';
        }
        else {
          lVar19 = *(longlong *)(lVar17 + (longlong)sVar16 * 8);
          if ((ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3) <=
              (ulonglong)(longlong)sVar1) goto LAB_140ce34bb;
          cVar12 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar19 + 0x178) + (longlong)sVar1 * 8)
                                 + 0x6a8,0x86);
        }
        if (*(int *)(param_1 + 0x140) != -1) {
          bVar11 = false;
          cVar12 = '\0';
        }
        sVar2 = *(short *)(local_a8 + 0xa4);
        sVar3 = *(short *)(local_a8 + 300);
        uVar33 = uVar34;
        if (sVar2 < 0) {
LAB_140ce3740:
          cVar13 = (char)uVar33;
          cVar14 = '\0';
        }
        else {
          if (((ulonglong)(lVar18 - lVar17 >> 3) <= (ulonglong)(longlong)sVar2) || (sVar3 < 0)) {
LAB_140ce3552:
            if (-1 < sVar2) {
              if (((ulonglong)(longlong)sVar2 < (ulonglong)(lVar18 - lVar17 >> 3)) && (-1 < sVar3))
              {
                lVar19 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
                if (((ulonglong)(longlong)sVar3 <
                     (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)
                    ) && (cVar13 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar19 + 0x178) +
                                                  (longlong)sVar3 * 8) + 0x6a8,0x84), cVar13 != '\0'
                         )) goto LAB_140ce36de;
              }
              if (-1 < sVar2) {
                if (((ulonglong)(longlong)sVar2 < (ulonglong)(lVar18 - lVar17 >> 3)) && (-1 < sVar3)
                   ) {
                  lVar19 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
                  if (((ulonglong)(longlong)sVar3 <
                       (ulonglong)
                       (*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
                     (cVar13 = FUN_14000d840(*(longlong *)
                                              (*(longlong *)(lVar19 + 0x178) + (longlong)sVar3 * 8)
                                             + 0x6a8,0x6e), cVar13 != '\0')) goto LAB_140ce36de;
                }
                uVar33 = uVar36;
                if (-1 < sVar2) {
                  if (((ulonglong)(longlong)sVar2 < (ulonglong)(lVar18 - lVar17 >> 3)) &&
                     (-1 < sVar3)) {
                    lVar19 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
                    if (((ulonglong)(longlong)sVar3 <
                         (ulonglong)
                         (*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
                       (cVar13 = FUN_14000d840(*(longlong *)
                                                (*(longlong *)(lVar19 + 0x178) + (longlong)sVar3 * 8
                                                ) + 0x6a8,0x6f), cVar13 != '\0'))
                    goto LAB_140ce36de;
                  }
                  if (-1 < sVar2) {
                    uVar33 = uVar34;
                    if (((ulonglong)(longlong)sVar2 < (ulonglong)(lVar18 - lVar17 >> 3)) &&
                       (-1 < sVar3)) {
                      lVar19 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
                      if (((ulonglong)(longlong)sVar3 <
                           (ulonglong)
                           (*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
                         (cVar13 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar19 + 0x178) +
                                                  (longlong)sVar3 * 8) + 0x6a8,0x83),
                         uVar33 = uVar36, cVar13 != '\0')) goto LAB_140ce36de;
                    }
                    goto LAB_140ce36e1;
                  }
                }
              }
            }
            goto LAB_140ce3740;
          }
          lVar19 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
          if (((ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3) <=
               (ulonglong)(longlong)sVar3) ||
             (cVar13 = FUN_14000d840(*(longlong *)
                                      (*(longlong *)(lVar19 + 0x178) + (longlong)sVar3 * 8) + 0x6a8,
                                     0x90), cVar13 == '\0')) goto LAB_140ce3552;
LAB_140ce36de:
          uVar33 = 1;
LAB_140ce36e1:
          cVar13 = (char)uVar33;
          if (((sVar2 < 0) || ((ulonglong)(lVar18 - lVar17 >> 3) <= (ulonglong)(longlong)sVar2)) ||
             (sVar3 < 0)) goto LAB_140ce3740;
          lVar19 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
          if ((ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3) <=
              (ulonglong)(longlong)sVar3) goto LAB_140ce3740;
          cVar14 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar19 + 0x178) + (longlong)sVar3 * 8)
                                 + 0x6a8,0x86);
        }
        if (*(int *)(local_a8 + 0x140) != -1) {
          cVar13 = '\0';
          cVar14 = '\0';
        }
        if ((*(int *)(param_1 + 0x1260) < 2) ||
           ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 1) & 8) == 0)) {
          if (((*(byte *)(param_1 + 0x810) & 2) != 0) || ((*(byte *)(param_1 + 0x80c) & 2) == 0))
          goto LAB_140ce378c;
LAB_140ce3841:
          if ((*(int *)(local_a8 + 0x1260) < 2) ||
             ((*(byte *)(*(longlong *)(local_a8 + 0x1258) + 1) & 8) == 0)) {
            if (((*(byte *)(local_a8 + 0x810) & 2) != 0) || ((*(byte *)(local_a8 + 0x80c) & 2) == 0)
               ) {
LAB_140ce3883:
              cVar12 = FUN_140106fb0(local_a8);
              if (cVar12 != '\0') {
                if (((-1 < sVar2) &&
                    ((ulonglong)(longlong)sVar2 < (ulonglong)(lVar18 - lVar17 >> 3))) &&
                   (-1 < sVar3)) {
                  lVar17 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
                  if (((ulonglong)(longlong)sVar3 <
                       (ulonglong)
                       (*(longlong *)(lVar17 + 0x180) - *(longlong *)(lVar17 + 0x178) >> 3)) &&
                     (cVar12 = FUN_14000d840(*(longlong *)
                                              (*(longlong *)(lVar17 + 0x178) + (longlong)sVar3 * 8)
                                             + 0x6a8,0x8f), cVar12 != '\0')) goto LAB_140ce3860;
                }
                cVar12 = FUN_1407da8a0();
                if (cVar12 != '\0') {
                  param_2[4] = 0x10;
                  goto LAB_140ce3ec5;
                }
              }
            }
          }
          else if ((*(byte *)(local_a8 + 0x810) & 2) != 0) goto LAB_140ce3883;
LAB_140ce3860:
          param_2[4] = 0xf;
          uVar35 = local_a8;
        }
        else {
          if ((*(byte *)(param_1 + 0x810) & 2) == 0) goto LAB_140ce3841;
LAB_140ce378c:
          uVar36 = local_a8;
          lVar19 = param_1;
          cVar15 = FUN_14007dc50();
          if (cVar15 != '\0') {
            cVar12 = FUN_1407da8a0(lVar19);
            if ((cVar12 != '\0') && (cVar12 = FUN_140106fb0(), cVar12 != '\0')) {
              if ((-1 < sVar16) &&
                 (((ulonglong)(longlong)sVar16 < (ulonglong)(lVar18 - lVar17 >> 3) && (-1 < sVar1)))
                 ) {
                lVar17 = *(longlong *)(lVar17 + (longlong)sVar16 * 8);
                if (((ulonglong)(longlong)sVar1 <
                     (ulonglong)(*(longlong *)(lVar17 + 0x180) - *(longlong *)(lVar17 + 0x178) >> 3)
                    ) && (cVar12 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar17 + 0x178) +
                                                  (longlong)sVar1 * 8) + 0x6a8,0x8f), cVar12 != '\0'
                         )) goto LAB_140ce3860;
              }
              param_2[4] = 0x11;
              uVar35 = local_a8;
              goto LAB_140ce3ec5;
            }
            goto LAB_140ce3860;
          }
          if (cVar12 == '\0') {
            if (cVar14 == '\0') {
              if ((bVar11) || (cVar13 != '\0')) {
                iVar27 = 0x15;
                if (*(int *)(lVar19 + 0xa4) == *(int *)(local_a8 + 0xa4)) {
                  iVar27 = 0x12;
                }
                param_2[4] = iVar27;
                uVar35 = local_a8;
                goto LAB_140ce3ec5;
              }
              cVar12 = FUN_140c88400(lVar19);
              if (cVar12 == '\0') {
                cVar12 = FUN_140c88400(uVar35);
                if (cVar12 == '\0') goto LAB_140ce3ec5;
                if (*(int *)(lVar19 + 0xa4) == *(int *)(uVar35 + 0xa4)) goto LAB_140ce3eba;
                if (((sVar16 < 0) ||
                    ((ulonglong)(lVar18 - lVar17 >> 3) <= (ulonglong)(longlong)sVar16)) ||
                   (sVar1 < 0)) {
LAB_140ce3cb6:
                  cVar12 = FUN_140c84550(lVar19,0x28);
                  if (cVar12 != '\0') goto LAB_140ce3d9b;
                  if (-1 < sVar16) {
                    if (((ulonglong)(longlong)sVar16 < (ulonglong)(lVar18 - lVar17 >> 3)) &&
                       (-1 < sVar1)) {
                      lVar19 = *(longlong *)(lVar17 + (longlong)sVar16 * 8);
                      if (((ulonglong)(longlong)sVar1 <
                           (ulonglong)
                           (*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
                         (cVar12 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar19 + 0x178) +
                                                  (longlong)sVar1 * 8) + 0x6a8,0x5e), cVar12 != '\0'
                         )) goto LAB_140ce3d9b;
                    }
                    if (((-1 < sVar16) &&
                        ((ulonglong)(longlong)sVar16 < (ulonglong)(lVar18 - lVar17 >> 3))) &&
                       (-1 < sVar1)) {
                      lVar19 = *(longlong *)(lVar17 + (longlong)sVar16 * 8);
                      if (((ulonglong)(longlong)sVar1 <
                           (ulonglong)
                           (*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
                         (cVar12 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar19 + 0x178) +
                                                  (longlong)sVar1 * 8) + 0x6a8,0x5f), cVar12 != '\0'
                         )) goto LAB_140ce3d9b;
                    }
                  }
LAB_140ce3e0d:
                  if (((-1 < sVar2) &&
                      ((ulonglong)(longlong)sVar2 < (ulonglong)(lVar18 - lVar17 >> 3))) &&
                     (-1 < sVar3)) {
                    lVar17 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
                    if (((ulonglong)(longlong)sVar3 <
                         (ulonglong)
                         (*(longlong *)(lVar17 + 0x180) - *(longlong *)(lVar17 + 0x178) >> 3)) &&
                       (cVar12 = FUN_14000d840(*(longlong *)
                                                (*(longlong *)(lVar17 + 0x178) + (longlong)sVar3 * 8
                                                ) + 0x6a8,0x22), cVar12 != '\0')) {
                      param_2[4] = 0x14;
                      uVar35 = local_a8;
                      goto LAB_140ce3ec5;
                    }
                  }
                }
                else {
                  lVar5 = *(longlong *)(lVar17 + (longlong)sVar16 * 8);
                  if (((ulonglong)(*(longlong *)(lVar5 + 0x180) - *(longlong *)(lVar5 + 0x178) >> 3)
                       <= (ulonglong)(longlong)sVar1) ||
                     (cVar12 = FUN_14000d840(*(longlong *)
                                              (*(longlong *)(lVar5 + 0x178) + (longlong)sVar1 * 8) +
                                             0x6a8,9), lVar19 = param_1, cVar12 == '\0'))
                  goto LAB_140ce3cb6;
LAB_140ce3d9b:
                  if (-1 < sVar2) {
                    if (((ulonglong)(longlong)sVar2 < (ulonglong)(lVar18 - lVar17 >> 3)) &&
                       (-1 < sVar3)) {
                      lVar19 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
                      if (((ulonglong)(longlong)sVar3 <
                           (ulonglong)
                           (*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
                         (cVar12 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar19 + 0x178) +
                                                  (longlong)sVar3 * 8) + 0x6a8,0x60), cVar12 != '\0'
                         )) {
                        param_2[4] = 0x14;
                        uVar35 = local_a8;
                        goto LAB_140ce3ec5;
                      }
                    }
                    goto LAB_140ce3e0d;
                  }
                }
                param_2[4] = 0x15;
                uVar35 = local_a8;
                goto LAB_140ce3ec5;
              }
              if (*(int *)(lVar19 + 0xa4) == *(int *)(uVar35 + 0xa4)) {
LAB_140ce3eba:
                param_2[4] = 0x12;
                goto LAB_140ce3ec5;
              }
              if (((sVar2 < 0) || ((ulonglong)(lVar18 - lVar17 >> 3) <= (ulonglong)(longlong)sVar2))
                 || (sVar3 < 0)) {
LAB_140ce39bd:
                cVar12 = FUN_140c84550(local_a8,0x28);
                if (cVar12 != '\0') goto LAB_140ce3b99;
                if (-1 < sVar2) {
                  if (((ulonglong)(longlong)sVar2 < (ulonglong)(lVar18 - lVar17 >> 3)) &&
                     (-1 < sVar3)) {
                    lVar19 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
                    if (((ulonglong)(longlong)sVar3 <
                         (ulonglong)
                         (*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
                       (cVar12 = FUN_14000d840(*(longlong *)
                                                (*(longlong *)(lVar19 + 0x178) + (longlong)sVar3 * 8
                                                ) + 0x6a8,0x5e), cVar12 != '\0'))
                    goto LAB_140ce3b99;
                  }
                  if (((-1 < sVar2) &&
                      ((ulonglong)(longlong)sVar2 < (ulonglong)(lVar18 - lVar17 >> 3))) &&
                     (-1 < sVar3)) {
                    lVar19 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
                    if (((ulonglong)(longlong)sVar3 <
                         (ulonglong)
                         (*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
                       (cVar12 = FUN_14000d840(*(longlong *)
                                                (*(longlong *)(lVar19 + 0x178) + (longlong)sVar3 * 8
                                                ) + 0x6a8,0x5f), cVar12 != '\0'))
                    goto LAB_140ce3b99;
                  }
                }
LAB_140ce3a9d:
                if (-1 < sVar16) {
                  uVar35 = lVar18 - lVar17 >> 3;
                  if (((ulonglong)(longlong)sVar16 < uVar35) && (-1 < sVar1)) {
                    lVar18 = *(longlong *)(lVar17 + (longlong)sVar16 * 8);
                    if (((ulonglong)(longlong)sVar1 <
                         (ulonglong)
                         (*(longlong *)(lVar18 + 0x180) - *(longlong *)(lVar18 + 0x178) >> 3)) &&
                       ((((cVar12 = FUN_14000d840(*(longlong *)
                                                   (*(longlong *)(lVar18 + 0x178) +
                                                   (longlong)sVar1 * 8) + 0x6a8,0x22),
                          cVar12 != '\0' && (cVar12 = FUN_140c88400(local_a8), cVar12 != '\0')) &&
                         (-1 < sVar2)) && (((ulonglong)(longlong)sVar2 < uVar35 && (-1 < sVar3))))))
                    {
                      lVar17 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
                      if (((ulonglong)(longlong)sVar3 <
                           (ulonglong)
                           (*(longlong *)(lVar17 + 0x180) - *(longlong *)(lVar17 + 0x178) >> 3)) &&
                         (cVar12 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar17 + 0x178) +
                                                  (longlong)sVar3 * 8) + 0x6a8,0x22), cVar12 != '\0'
                         )) {
                        param_2[4] = 0x14;
                        uVar35 = local_a8;
                        goto LAB_140ce3ec5;
                      }
                    }
                  }
                }
              }
              else {
                lVar19 = *(longlong *)(lVar17 + (longlong)sVar2 * 8);
                if (((ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)
                     <= (ulonglong)(longlong)sVar3) ||
                   (cVar12 = FUN_14000d840(*(longlong *)
                                            (*(longlong *)(lVar19 + 0x178) + (longlong)sVar3 * 8) +
                                           0x6a8,9), cVar12 == '\0')) goto LAB_140ce39bd;
LAB_140ce3b99:
                if (-1 < sVar16) {
                  if (((ulonglong)(longlong)sVar16 < (ulonglong)(lVar18 - lVar17 >> 3)) &&
                     (-1 < sVar1)) {
                    lVar19 = *(longlong *)(lVar17 + (longlong)sVar16 * 8);
                    if (((ulonglong)(longlong)sVar1 <
                         (ulonglong)
                         (*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) &&
                       (cVar12 = FUN_14000d840(*(longlong *)
                                                (*(longlong *)(lVar19 + 0x178) + (longlong)sVar1 * 8
                                                ) + 0x6a8,0x60), cVar12 != '\0')) {
                      param_2[4] = 0x14;
                      uVar35 = local_a8;
                      goto LAB_140ce3ec5;
                    }
                  }
                  goto LAB_140ce3a9d;
                }
              }
              param_2[4] = 0x13;
              uVar35 = local_a8;
              goto LAB_140ce3ec5;
            }
          }
          else if (cVar14 != '\0') goto LAB_140ce3eba;
          param_2[4] = 0x15;
          uVar35 = uVar36;
        }
LAB_140ce3ec5:
        if (param_2[4] != 0) {
          return;
        }
      }
    }
  }
  piVar26 = (int *)0x0;
  lVar17 = FUN_140ca8390(param_1);
  if ((lVar17 != 0) && (((param_3 != -1 || (param_4 != -1)) || (param_5 != -1)))) {
    FUN_140765280(lVar17,param_2,param_3,param_4,param_5,CONCAT44(uVar38,param_7),param_8);
    return;
  }
  if (param_6 == -1) {
    return;
  }
  bVar11 = false;
  local_res10 = -1;
  if (uVar35 != 0) {
    local_res10 = *(int *)(uVar35 + 0x140);
    lVar18 = FUN_140ca8390(uVar35);
    if (((lVar18 != 0) && (lVar18 = FUN_1407ad250(lVar18), lVar18 != 0)) &&
       (*(int *)(lVar18 + 0xb0) != -1)) {
      bVar11 = true;
      local_res10 = *(int *)(lVar18 + 0xb0);
    }
  }
  param_2[1] = -1;
  iVar27 = param_2[1];
  if (*(int *)(param_1 + 0x3a8) == param_6) {
    iVar27 = 5;
  }
  param_2[1] = iVar27;
  if (*(int *)(param_1 + 0x3ac) == param_6) {
    iVar27 = 0;
  }
  param_2[1] = iVar27;
  if (*(int *)(param_1 + 0x3b0) == param_6) {
    iVar27 = 1;
  }
  param_2[1] = iVar27;
  if ((uVar35 != 0) &&
     ((*(int *)(uVar35 + 0x3ac) == *(int *)(param_1 + 0x130) ||
      (*(int *)(uVar35 + 0x3b0) == *(int *)(param_1 + 0x130))))) {
    param_2[1] = 0x2a;
  }
  iVar27 = param_2[1];
  if (-1 < iVar27) {
    if (iVar27 < 2) {
      *param_2 = 100;
    }
    else if (iVar27 == 5) {
      *param_2 = 0x96;
    }
    else if (iVar27 == 0x2a) {
      *param_2 = 200;
    }
  }
  if (iVar27 == -1) {
    if (((uVar35 != 0) && (iVar27 = *(int *)(param_1 + 0x14c), iVar27 != -1)) &&
       (iVar21 = *(int *)(uVar35 + 0x14c), iVar21 != -1)) {
      if (iVar27 == iVar21) {
        param_2[4] = 0x16;
      }
      else {
        iVar23 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1;
        piVar25 = piVar26;
        piVar20 = piVar26;
        iVar24 = iVar23;
        if (-1 < iVar23) {
          do {
            iVar22 = iVar24 + (int)piVar25 >> 1;
            piVar20 = *(int **)(DAT_141d692e0 + (longlong)iVar22 * 8);
            iVar4 = *piVar20;
            if (iVar4 == iVar27) break;
            if (iVar27 < iVar4) {
              iVar24 = iVar22 + -1;
            }
            else {
              piVar25 = (int *)(ulonglong)(iVar22 + 1);
            }
            piVar20 = piVar26;
          } while ((int)piVar25 <= iVar24);
        }
        piVar28 = piVar26;
        piVar25 = piVar26;
        if (-1 < iVar23) {
          do {
            iVar24 = iVar23 + (int)piVar28 >> 1;
            piVar25 = *(int **)(DAT_141d692e0 + (longlong)iVar24 * 8);
            iVar27 = *piVar25;
            if (iVar27 == iVar21) break;
            if (iVar21 < iVar27) {
              iVar23 = iVar24 + -1;
            }
            else {
              piVar28 = (int *)(ulonglong)(iVar24 + 1);
            }
            piVar25 = piVar26;
          } while ((int)piVar28 <= iVar23);
        }
        uVar35 = local_a8;
        if (((piVar20 != (int *)0x0) && (piVar25 != (int *)0x0)) &&
           (((piVar20[1] != -1 && (piVar20[1] == piVar25[1])) ||
            ((((lVar17 != 0 && (*(longlong *)(lVar17 + 0x130) != 0)) &&
              (lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x130) + 0x60), lVar17 != 0)) &&
             (iVar27 = FUN_140050d30(*piVar25,lVar17 + 0x48), iVar27 != -1)))))) {
          param_2[4] = 0x16;
        }
      }
    }
  }
  else {
    param_2[4] = 1;
  }
  if (param_2[4] == 0) {
    if (uVar35 != 0) {
      if ((*(int *)(param_1 + 0x140) != -1) && (local_res10 != -1)) {
        lVar17 = FUN_1400199b0(&DAT_141c53718);
        lVar18 = FUN_1400199b0(&DAT_141c53718,local_res10);
        if ((lVar17 != 0) && (lVar18 != 0)) {
          lVar18 = FUN_1404cec60(lVar18);
          lVar17 = FUN_1404cec60(lVar17);
          if (lVar17 == lVar18) {
            param_2[4] = 0x21;
          }
        }
      }
      goto LAB_140ce41d3;
    }
  }
  else {
LAB_140ce41d3:
    if (local_a8 != 0) {
      local_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0xffffffff;
      lVar17 = FUN_140004650(&DAT_141d7a048,param_3);
      local_80 = lVar17;
      local_78 = param_4;
      local_88 = FUN_140004650(&DAT_141d7a048,param_5);
      if (((lVar17 != 0) || (param_4 != -1)) || (lVar18 = DAT_141d64d38, local_88 != 0)) {
        if (param_7 < 2) {
          FUN_140ce0da0(param_1);
          local_9c = 0;
          lVar18 = DAT_141d691a8;
          iVar27 = DAT_1416b1980;
          plVar31 = param_8;
          if (0 < (int)param_8[0x33]) {
            do {
              uVar36 = 0;
              puVar6 = (ulonglong *)plVar31[1];
              plVar29 = (longlong *)*puVar6;
              plVar7 = (longlong *)puVar6[1];
              uVar35 = (ulonglong)((longlong)plVar7 + (7 - (longlong)plVar29)) >> 3;
              if (plVar7 < plVar29) {
                uVar35 = uVar36;
              }
              if (uVar35 != 0) {
                do {
                  lVar17 = *plVar29;
                  if ((((*(byte *)(lVar17 + 0x20) & 1) == 0) &&
                      ((*(int *)(lVar17 + 0x10) < iVar27 ||
                       ((*(int *)(lVar17 + 0x10) == iVar27 &&
                        (*(int *)(lVar17 + 0x14) <= DAT_1416b1974)))))) &&
                     (*(int *)(lVar17 + 0x24) == 2)) {
                    iVar21 = (int)(DAT_141d691b0 - lVar18 >> 3) + -1;
                    iVar24 = 0;
                    if (-1 < iVar21) {
                      do {
                        iVar23 = iVar21 + iVar24 >> 1;
                        piVar26 = *(int **)(lVar18 + (longlong)iVar23 * 8);
                        if (*piVar26 == *(int *)(lVar17 + 4)) {
                          if (piVar26 != (int *)0x0) {
                            FUN_140ce65d0(param_1,piVar26,param_2 + 6,param_2 + 0x27,param_7,param_8
                                          ,&local_88);
                            lVar18 = DAT_141d691a8;
                            iVar27 = DAT_1416b1980;
                          }
                          break;
                        }
                        if (*(int *)(lVar17 + 4) < *piVar26) {
                          iVar21 = iVar23 + -1;
                        }
                        else {
                          iVar24 = iVar23 + 1;
                        }
                      } while (iVar24 <= iVar21);
                    }
                  }
                  plVar29 = plVar29 + 1;
                  uVar36 = uVar36 + 1;
                } while (uVar36 < uVar35);
              }
              local_9c = local_9c + 1;
              lVar17 = local_80;
              param_4 = local_78;
              plVar31 = plVar31 + 1;
            } while ((int)local_9c < (int)param_8[0x33]);
          }
          uVar36 = 0;
          plVar31 = param_8 + 0x34;
          local_9c = 0;
          uVar35 = uVar36;
          if (0 < (int)param_8[0x36]) {
            do {
              puVar30 = *(undefined8 **)*plVar31;
              puVar8 = (undefined8 *)((undefined8 *)*plVar31)[1];
              uVar34 = (ulonglong)((longlong)puVar8 + (7 - (longlong)puVar30)) >> 3;
              if (puVar8 < puVar30) {
                uVar34 = uVar36;
              }
              uVar33 = uVar36;
              uVar37 = (uint)uVar35;
              if (uVar34 != 0) {
                do {
                  if (((int *)*puVar30)[2] == 0) {
                    iVar21 = *(int *)*puVar30;
                    iVar27 = (int)(DAT_141d691b0 - lVar18 >> 3) + -1;
                    uVar35 = uVar36;
                    if (-1 < iVar27) {
                      do {
                        iVar24 = iVar27 + (int)uVar35 >> 1;
                        piVar26 = *(int **)(lVar18 + (longlong)iVar24 * 8);
                        if (*piVar26 == iVar21) {
                          if (piVar26 != (int *)0x0) {
                            FUN_140ce65d0(param_1,piVar26,param_2 + 6,param_2 + 0x27,param_7,param_8
                                          ,&local_88);
                            lVar18 = DAT_141d691a8;
                          }
                          break;
                        }
                        if (iVar21 < *piVar26) {
                          iVar27 = iVar24 + -1;
                        }
                        else {
                          uVar35 = (ulonglong)(iVar24 + 1);
                        }
                      } while ((int)uVar35 <= iVar27);
                    }
                  }
                  puVar30 = puVar30 + 1;
                  uVar33 = uVar33 + 1;
                  uVar37 = local_9c;
                } while (uVar33 < uVar34);
              }
              local_9c = uVar37 + 1;
              uVar35 = (ulonglong)local_9c;
              plVar31 = plVar31 + 1;
              lVar17 = local_80;
              param_4 = local_78;
            } while ((int)local_9c < (int)param_8[0x36]);
          }
        }
        uVar35 = 0;
        lVar18 = DAT_141d64d38;
        if (((lVar17 != 0) && (*(longlong *)(lVar17 + 0x130) != 0)) &&
           (*(longlong *)(*(longlong *)(lVar17 + 0x130) + 0x58) != 0)) {
          if ((*(int *)(param_1 + 0x14c) != -1) && (lVar18 = FUN_1406fbd70(lVar17), lVar18 != 0)) {
            piVar26 = *(int **)(lVar18 + 8);
            piVar20 = *(int **)(lVar18 + 0x20);
            uVar36 = (ulonglong)((longlong)*(int **)(lVar18 + 0x10) + (3 - (longlong)piVar26)) >> 2;
            if (*(int **)(lVar18 + 0x10) < piVar26) {
              uVar36 = uVar35;
            }
            uVar34 = uVar35;
            if (uVar36 != 0) {
              do {
                iVar27 = *piVar26;
                piVar26 = piVar26 + 1;
                uVar34 = uVar34 + 1;
                param_2[(longlong)iVar27 + 6] = param_2[(longlong)iVar27 + 6] + *piVar20;
                piVar20 = piVar20 + 1;
              } while (uVar34 < uVar36);
            }
          }
          lVar18 = DAT_141d64d38;
          iVar27 = *(int *)(param_1 + 0x1d8);
          if (((iVar27 != -1) && (lVar19 = DAT_141d64d40 - DAT_141d64d38 >> 3, lVar19 != 0)) &&
             (iVar21 = (int)lVar19 + -1, uVar36 = uVar35, -1 < iVar21)) {
            do {
              iVar24 = (int)uVar36 + iVar21 >> 1;
              piVar26 = *(int **)(DAT_141d64d38 + (longlong)iVar24 * 8);
              if (*piVar26 == iVar27) {
                if (((piVar26 != (int *)0x0) && (piVar26[0x6f] != -1)) &&
                   (lVar19 = FUN_1401b8d60(lVar17), lVar19 != 0)) {
                  piVar26 = *(int **)(lVar19 + 8);
                  piVar20 = *(int **)(lVar19 + 0x20);
                  uVar36 = (ulonglong)((longlong)*(int **)(lVar19 + 0x10) + (3 - (longlong)piVar26))
                           >> 2;
                  if (*(int **)(lVar19 + 0x10) < piVar26) {
                    uVar36 = uVar35;
                  }
                  if (uVar36 != 0) {
                    do {
                      iVar27 = *piVar26;
                      piVar26 = piVar26 + 1;
                      uVar35 = uVar35 + 1;
                      param_2[(longlong)iVar27 + 6] = param_2[(longlong)iVar27 + 6] + *piVar20;
                      piVar20 = piVar20 + 1;
                      lVar18 = DAT_141d64d38;
                    } while (uVar35 < uVar36);
                  }
                }
                break;
              }
              if (iVar27 < *piVar26) {
                iVar21 = iVar24 + -1;
              }
              else {
                uVar36 = (ulonglong)(iVar24 + 1);
              }
            } while ((int)uVar36 <= iVar21);
          }
        }
      }
      uVar35 = 0;
      if ((param_4 != -1) &&
         (iVar27 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1, uVar36 = uVar35, -1 < iVar27)) {
        do {
          iVar21 = (int)uVar36 + iVar27 >> 1;
          piVar26 = *(int **)(DAT_141d69178 + (longlong)iVar21 * 8);
          if (*piVar26 == param_4) {
            if (piVar26 != (int *)0x0) {
              iVar27 = *(int *)(param_1 + 0x14c);
              if (iVar27 == -1) goto LAB_140ce47f5;
              iVar21 = (int)(*(longlong *)(piVar26 + 0x36) - *(longlong *)(piVar26 + 0x34) >> 3) +
                       -1;
              uVar36 = uVar35;
              if (iVar21 < 0) goto LAB_140ce47f5;
              goto LAB_140ce4770;
            }
            break;
          }
          if (param_4 < *piVar26) {
            iVar27 = iVar21 + -1;
          }
          else {
            uVar36 = (ulonglong)(iVar21 + 1);
          }
        } while ((int)uVar36 <= iVar27);
      }
      goto LAB_140ce4925;
    }
  }
  goto LAB_140ce4c7c;
  while( true ) {
    if (iVar27 < *piVar20) {
      iVar21 = iVar24 + -1;
    }
    else {
      uVar36 = (ulonglong)(iVar24 + 1);
    }
    if (iVar21 < (int)uVar36) break;
LAB_140ce4770:
    iVar24 = iVar21 + (int)uVar36 >> 1;
    piVar20 = *(int **)(*(longlong *)(piVar26 + 0x34) + (longlong)iVar24 * 8);
    if (*piVar20 == iVar27) {
      if (piVar20 != (int *)0x0) {
        piVar25 = *(int **)(piVar20 + 2);
        piVar28 = *(int **)(piVar20 + 8);
        uVar36 = (ulonglong)((longlong)*(int **)(piVar20 + 4) + (3 - (longlong)piVar25)) >> 2;
        if (*(int **)(piVar20 + 4) < piVar25) {
          uVar36 = uVar35;
        }
        uVar34 = uVar35;
        if (uVar36 != 0) {
          do {
            iVar27 = *piVar25;
            uVar34 = uVar34 + 1;
            piVar25 = piVar25 + 1;
            param_2[(longlong)iVar27 + 6] = param_2[(longlong)iVar27 + 6] + *piVar28;
            piVar28 = piVar28 + 1;
            lVar18 = DAT_141d64d38;
          } while (uVar34 < uVar36);
        }
      }
      break;
    }
  }
LAB_140ce47f5:
  iVar27 = *(int *)(param_1 + 0x1d8);
  if (((iVar27 != -1) && (lVar19 = DAT_141d64d40 - lVar18 >> 3, lVar19 != 0)) &&
     (iVar21 = (int)lVar19 + -1, uVar36 = uVar35, -1 < iVar21)) {
    do {
      iVar24 = (int)uVar36 + iVar21 >> 1;
      piVar20 = *(int **)(lVar18 + (longlong)iVar24 * 8);
      if (*piVar20 == iVar27) {
        if ((piVar20 != (int *)0x0) && (iVar27 = piVar20[0x6f], iVar27 != -1)) {
          iVar21 = (int)(*(longlong *)(piVar26 + 0x30) - *(longlong *)(piVar26 + 0x2e) >> 3) + -1;
          uVar36 = uVar35;
          if (-1 < iVar21) goto LAB_140ce48a0;
        }
        break;
      }
      if (iVar27 < *piVar20) {
        iVar21 = iVar24 + -1;
      }
      else {
        uVar36 = (ulonglong)(iVar24 + 1);
      }
    } while ((int)uVar36 <= iVar21);
  }
  goto LAB_140ce4925;
  while( true ) {
    if (iVar27 < *piVar20) {
      iVar21 = iVar24 + -1;
    }
    else {
      uVar36 = (ulonglong)(iVar24 + 1);
    }
    if (iVar21 < (int)uVar36) break;
LAB_140ce48a0:
    iVar24 = iVar21 + (int)uVar36 >> 1;
    piVar20 = *(int **)(*(longlong *)(piVar26 + 0x2e) + (longlong)iVar24 * 8);
    if (*piVar20 == iVar27) {
      if (piVar20 != (int *)0x0) {
        piVar26 = *(int **)(piVar20 + 2);
        piVar25 = *(int **)(piVar20 + 8);
        uVar36 = (ulonglong)((longlong)*(int **)(piVar20 + 4) + (3 - (longlong)piVar26)) >> 2;
        if (*(int **)(piVar20 + 4) < piVar26) {
          uVar36 = uVar35;
        }
        uVar34 = uVar35;
        if (uVar36 != 0) {
          do {
            iVar27 = *piVar26;
            uVar34 = uVar34 + 1;
            piVar26 = piVar26 + 1;
            param_2[(longlong)iVar27 + 6] = param_2[(longlong)iVar27 + 6] + *piVar25;
            piVar25 = piVar25 + 1;
            lVar18 = DAT_141d64d38;
          } while (uVar34 < uVar36);
        }
      }
      break;
    }
  }
LAB_140ce4925:
  if ((lVar17 == 0) || (bVar11)) {
    if ((*(int *)(local_a8 + 0x1d8) == -1) || (bVar11)) {
      if (((local_res10 != -1) && (lVar17 = DAT_141c53720 - DAT_141c53718 >> 3, lVar17 != 0)) &&
         (iVar27 = (int)lVar17 + -1, -1 < iVar27)) {
        do {
          iVar21 = iVar27 + (int)uVar35 >> 1;
          puVar9 = *(ushort **)(DAT_141c53718 + (longlong)iVar21 * 8);
          if (*(int *)(puVar9 + 2) == local_res10) {
            if ((puVar9 != (ushort *)0x0) && (1 < *puVar9)) goto LAB_140ce4b87;
            break;
          }
          if (local_res10 < *(int *)(puVar9 + 2)) {
            iVar27 = iVar21 + -1;
          }
          else {
            uVar35 = (ulonglong)(iVar21 + 1);
          }
        } while ((int)uVar35 <= iVar27);
      }
    }
    else {
      if ((*(longlong *)(local_a8 + 0x11e8) != 0) &&
         (iVar27 = *(int *)(*(longlong *)(local_a8 + 0x11e8) + 4), iVar27 != -1)) {
        FUN_140050b50(iVar27,param_2 + 0x48);
        lVar18 = DAT_141d64d38;
      }
      iVar27 = *(int *)(local_a8 + 0x1d8);
      lVar17 = DAT_141d64d40 - lVar18 >> 3;
      if (((lVar17 != 0) && (iVar27 != -1)) && (iVar21 = (int)lVar17 + -1, -1 < iVar21)) {
        do {
          iVar24 = (int)uVar35 + iVar21 >> 1;
          piVar26 = *(int **)(lVar18 + (longlong)iVar24 * 8);
          if (*piVar26 == iVar27) {
            if ((piVar26 != (int *)0x0) && (local_res10 = piVar26[0x6f], local_res10 != -1)) {
LAB_140ce4b87:
              FUN_140050b50(local_res10,param_2 + 0x48);
            }
            break;
          }
          if (iVar27 < *piVar26) {
            iVar21 = iVar24 + -1;
          }
          else {
            uVar35 = (ulonglong)(iVar24 + 1);
          }
        } while ((int)uVar35 <= iVar21);
      }
    }
  }
  else {
    if ((*(longlong *)(local_a8 + 0x11e8) != 0) &&
       (iVar27 = *(int *)(*(longlong *)(local_a8 + 0x11e8) + 4), iVar27 != -1)) {
      FUN_140050b50(iVar27,param_2 + 0x48);
    }
    plVar31 = *(longlong **)(lVar17 + 0xe8);
    uVar36 = (ulonglong)((longlong)*(longlong **)(lVar17 + 0xf0) + (7 - (longlong)plVar31)) >> 3;
    if (*(longlong **)(lVar17 + 0xf0) < plVar31) {
      uVar36 = uVar35;
    }
    uVar34 = uVar35;
    if (uVar36 != 0) {
      do {
        puVar30 = (undefined8 *)*plVar31;
        sVar16 = (**(code **)*puVar30)(puVar30);
        if (sVar16 == 0) {
          iVar27 = *(int *)(puVar30 + 1);
          lVar17 = DAT_141c53720 - DAT_141c53718 >> 3;
          if (((lVar17 != 0) && (iVar27 != -1)) &&
             (iVar21 = (int)lVar17 + -1, uVar33 = uVar35, -1 < iVar21)) {
            do {
              iVar24 = iVar21 + (int)uVar33 >> 1;
              puVar9 = *(ushort **)(DAT_141c53718 + (longlong)iVar24 * 8);
              if (*(int *)(puVar9 + 2) == iVar27) {
                if ((puVar9 != (ushort *)0x0) && (1 < *puVar9)) goto LAB_140ce4a27;
                break;
              }
              if (iVar27 < *(int *)(puVar9 + 2)) {
                iVar21 = iVar24 + -1;
              }
              else {
                uVar33 = (ulonglong)(iVar24 + 1);
              }
            } while ((int)uVar33 <= iVar21);
          }
        }
        else if ((sVar16 == 10) || (sVar16 == 0xd)) {
          iVar27 = *(int *)(puVar30 + 1);
LAB_140ce4a27:
          FUN_140050b50(iVar27,param_2 + 0x48);
        }
        plVar31 = plVar31 + 1;
        uVar34 = uVar34 + 1;
      } while (uVar34 < uVar36);
    }
  }
  bVar11 = false;
  puVar10 = *(undefined4 **)(param_2 + 0x4a);
  for (puVar32 = *(undefined4 **)(param_2 + 0x48); puVar32 < puVar10; puVar32 = puVar32 + 1) {
    iVar27 = FUN_140ce0f50(param_1,*puVar32,param_8);
    if (iVar27 == 6) {
      param_2[0x10] = param_2[0x10] + 1;
    }
    else if (iVar27 == 7) {
      param_2[0x11] = param_2[0x11] + 1;
    }
    else {
      if (iVar27 != 9) {
        if (iVar27 != 10) {
          if (iVar27 == 0x39) {
            param_2[0x16] = param_2[0x16] + 1;
          }
          goto LAB_140ce4bf0;
        }
        bVar11 = true;
      }
      param_2[0x12] = param_2[0x12] + 1;
    }
LAB_140ce4bf0:
  }
  if (((param_2[4] == 0) || (param_2[4] == 0x21)) &&
     ((0 < param_2[0x10] || ((0 < param_2[0x11] || (0 < param_2[0x14])))))) {
    param_2[4] = 0x16;
  }
  if (!bVar11) {
    if (0 < param_2[0x12]) {
      param_2[4] = 0x1c;
    }
    if (0 < param_2[0x13]) {
      param_2[4] = 0x1d;
    }
    sVar16 = FUN_140ce5d50(param_1,0);
    if (((int)sVar16 - 8U < 8) && (0 < param_2[0xf])) {
      param_2[4] = 2;
    }
  }
  if (0 < param_2[0x25]) {
    param_2[4] = 0x22;
  }
  if (0 < param_2[0x18]) {
    param_2[4] = 0x1e;
  }
LAB_140ce4c7c:
  iVar27 = param_2[4];
  if ((iVar27 == 2) && (-0x32 < *param_2)) {
    *param_2 = -0x32;
  }
  if ((iVar27 == 0x1c) && (-0x32 < *param_2)) {
    *param_2 = -0x32;
  }
  if ((iVar27 == 0x1d) && (-0x32 < *param_2)) {
    *param_2 = -0x32;
  }
  if ((iVar27 == 0x22) && (-0x32 < *param_2)) {
    *param_2 = -0x32;
  }
  if ((iVar27 == 0x1e) && (-0x32 < *param_2)) {
    *param_2 = -0x32;
  }
  if ((iVar27 == 1) || ((0x17 < iVar27 && ((iVar27 < 0x1c || (iVar27 - 0x1fU < 2)))))) {
    param_2[5] = param_2[5] | 1;
  }
  if (iVar27 != 0x16) {
    return;
  }
  lVar17 = *(longlong *)(param_1 + 0xa78);
  if (lVar17 == 0) {
    return;
  }
  sVar16 = *(short *)(lVar17 + 0x31c);
  if (*(longlong *)(lVar17 + 0x3a0) != 0) {
    sVar16 = sVar16 + *(short *)(*(longlong *)(lVar17 + 0x3a0) + 0x54);
    if (sVar16 < 0) {
      return;
    }
    if (100 < sVar16) goto LAB_140ce4d28;
  }
  if (sVar16 < 0x3d) {
    return;
  }
LAB_140ce4d28:
  param_2[5] = param_2[5] | 1;
  return;
}

