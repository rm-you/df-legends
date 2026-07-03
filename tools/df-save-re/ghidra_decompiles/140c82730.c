// FUN_140c82730 @ 140c82730
// callees:
//   -> 140335d50 FUN_140335d50
//   -> 140dfc99c memset
//   -> 1408243e0 FUN_1408243e0
//   -> 140c7fe50 FUN_140c7fe50
//   -> 140c7f390 FUN_140c7f390
//   -> EXTERNAL:000000e1 memmove
//   -> 14015e1e0 FUN_14015e1e0
//   -> 140dfb5b4 free
//   -> 140c241b0 FUN_140c241b0
//   -> 1407efc10 FUN_1407efc10
//   -> 140002020 FUN_140002020
//   -> 1407648d0 FUN_1407648d0
//   -> 1407acb40 FUN_1407acb40
//   -> 140d89d60 FUN_140d89d60
//   -> 140dfb5c4 operator_new
//   -> 1401b7c10 FUN_1401b7c10
//   -> 140365040 FUN_140365040
//   -> 140758120 FUN_140758120
//   -> 14000bed0 FUN_14000bed0
//   -> 14000bd10 FUN_14000bd10
//   -> 140010740 FUN_140010740
//   -> 140ce7da0 FUN_140ce7da0


void FUN_140c82730(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int *piVar3;
  byte *pbVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  void *pvVar15;
  longlong *plVar16;
  undefined8 uVar17;
  int iVar18;
  longlong lVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  undefined2 *puVar23;
  int iVar24;
  ulonglong uVar25;
  int *piVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong lVar29;
  uint *puVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong local_res8;
  longlong local_res10;
  
  puVar14 = (undefined8 *)(param_1 + 0x13b0);
  uVar35 = 0;
  *(undefined8 *)(param_1 + 0x13c0) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x13c8)) {
    puVar14 = (undefined8 *)*puVar14;
  }
  *(undefined1 *)puVar14 = 0;
  if (*(longlong *)(param_1 + 0x1248) != 0) {
    FUN_140335d50();
    *(undefined8 *)(param_1 + 0x1248) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1c8);
  for (puVar14 = *(undefined8 **)(param_1 + 0x1c0); puVar14 < puVar1; puVar14 = puVar14 + 1) {
    iVar9 = (**(code **)(*(longlong *)*puVar14 + 0x10))();
    if (iVar9 == 3) {
      local_res8 = (**(code **)(*(longlong *)*puVar14 + 0x48))();
      if (local_res8 != 0) {
        *(undefined4 *)(*(longlong *)(local_res8 + 0x10) + 0x170) = 0xffffffff;
        *(undefined4 *)(*(longlong *)(local_res8 + 0x10) + 0x174) = 0xffffffff;
        **(undefined2 **)(local_res8 + 0x10) = *(undefined2 *)(param_1 + 0xa0);
      }
      goto LAB_140c827af;
    }
  }
  local_res8 = 0;
LAB_140c827af:
  *(undefined8 *)(param_1 + 0x1380) = *(undefined8 *)(param_1 + 0x1378);
  if ((*(uint *)(param_1 + 0x110) & 0x500) != 0) {
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xfffffffd;
  }
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0x7400304e;
  if ((*(uint *)(param_1 + 0x110) & 0x40) == 0) {
    *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) & 0xffffffef;
  }
  else {
    *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x10;
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffffffbf;
  }
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffdfffff;
  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xfe10ffc8;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0x5fe1df78;
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) & 0xffffff7f;
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    puVar30 = (uint *)(*(longlong *)(param_1 + 0xa78) + 0x398);
    *puVar30 = *puVar30 & 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x1360) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  if ((*(byte *)(param_1 + 0x110) & 2) != 0) goto LAB_140c839a3;
  *(undefined4 *)(param_1 + 0x7fc) = 0;
  *(undefined8 *)(param_1 + 0x974) = 0;
  *(undefined4 *)(param_1 + 0x964) = 0;
  *(undefined4 *)(param_1 + 0x97c) = 0;
  *(undefined2 *)(param_1 + 0x7f8) = 0xffff;
  if (*(ushort *)(param_1 + 0x348) < 5) {
    *(undefined2 *)(param_1 + 0x348) = 0xffff;
  }
  *(undefined2 *)(param_1 + 0x7f6) = 0;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  *(undefined8 *)(param_1 + 0x800) = 0;
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  *(undefined2 *)(param_1 + 0x7e8) = 0;
  *(undefined8 *)(param_1 + 0x808) = 0;
  *(undefined8 *)(param_1 + 0x810) = 0;
  *(undefined4 *)(param_1 + 0x818) = 0;
  *(undefined1 *)(param_1 + 0x81c) = 0;
  *(undefined4 *)(param_1 + 0x880) = 0x400;
  *(undefined4 *)(param_1 + 0x884) = 0x400;
  *(undefined8 *)(param_1 + 0x888) = 0;
  puVar12 = *(undefined4 **)(param_1 + 0x890);
  uVar11 = (ulonglong)((longlong)*(undefined4 **)(param_1 + 0x898) + (3 - (longlong)puVar12)) >> 2;
  if (*(undefined4 **)(param_1 + 0x898) < puVar12) {
    uVar11 = uVar35;
  }
  uVar25 = uVar35;
  if (uVar11 != 0) {
    do {
      uVar25 = uVar25 + 1;
      *puVar12 = 100;
      puVar12 = puVar12 + 1;
    } while (uVar25 < uVar11);
  }
  puVar12 = *(undefined4 **)(param_1 + 0x8a8);
  uVar11 = (ulonglong)((longlong)*(undefined4 **)(param_1 + 0x8b0) + (3 - (longlong)puVar12)) >> 2;
  if (*(undefined4 **)(param_1 + 0x8b0) < puVar12) {
    uVar11 = uVar35;
  }
  uVar25 = uVar35;
  if (uVar11 != 0) {
    do {
      uVar25 = uVar25 + 1;
      *puVar12 = 100;
      puVar12 = puVar12 + 1;
    } while (uVar25 < uVar11);
  }
  lVar19 = *(longlong *)(param_1 + 0x8c8);
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  *(undefined4 *)(param_1 + 0x8c4) = 100;
  *(undefined8 *)(param_1 + 0x8d0) = 100;
  uVar11 = uVar35;
  if (lVar19 != 0) {
    do {
      *(undefined4 *)(lVar19 + uVar11 * 4) = 100;
      *(undefined4 *)(lVar19 + 0x18 + uVar11 * 4) = 0;
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < 6);
    puVar12 = (undefined4 *)(lVar19 + 100);
    lVar19 = 0xd;
    do {
      puVar12[-0xd] = 100;
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  if ((*(longlong *)(param_1 + 0xa78) != 0) &&
     (pvVar15 = *(void **)(*(longlong *)(param_1 + 0xa78) + 0x3a0), pvVar15 != (void *)0x0)) {
    memset(pvVar15,0,100);
  }
  *(undefined4 *)(param_1 + 0xd68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd6c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x8e0) = *(undefined8 *)(param_1 + 0x8d8);
  *(undefined8 *)(param_1 + 0x8f8) = *(undefined8 *)(param_1 + 0x8f0);
  *(undefined4 *)(param_1 + 0x920) = 0;
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_1 + 0x6a4);
  *(undefined8 *)(param_1 + 0x958) = 0;
  *(undefined4 *)(param_1 + 0x960) = 0;
  *(undefined8 *)(param_1 + 0x7cc) = 0;
  *(undefined4 *)(param_1 + 0x7d4) = 0;
  *(undefined2 *)(param_1 + 0xbc0) = 0;
  puVar12 = *(undefined4 **)(param_1 + 0x908);
  uVar11 = (ulonglong)((longlong)*(undefined4 **)(param_1 + 0x910) + (3 - (longlong)puVar12)) >> 2;
  if (*(undefined4 **)(param_1 + 0x910) < puVar12) {
    uVar11 = uVar35;
  }
  uVar25 = uVar35;
  if (uVar11 != 0) {
    do {
      uVar25 = uVar25 + 1;
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    } while (uVar25 < uVar11);
  }
  iVar9 = *(int *)(param_1 + 0x4b0);
  *(undefined2 *)(param_1 + 0x4ac) = 0x8ad0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined8 *)(param_1 + 0x498) = 0;
  *(undefined1 *)(param_1 + 0x4a0) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0x8ad08ad0;
  if (iVar9 != -1) {
    iVar24 = (int)(DAT_141c67370 - DAT_141c67368 >> 3);
    if ((iVar24 != 0) && (iVar24 = iVar24 + -1, -1 < iVar24)) {
      do {
        iVar18 = (int)uVar35 + iVar24 >> 1;
        lVar19 = *(longlong *)(DAT_141c67368 + (longlong)iVar18 * 8);
        if (*(int *)(lVar19 + 0x1c) == iVar9) {
          if (lVar19 != 0) {
            FUN_1408243e0(lVar19,0x3a);
          }
          break;
        }
        if (iVar9 < *(int *)(lVar19 + 0x1c)) {
          iVar24 = iVar18 + -1;
        }
        else {
          uVar35 = (ulonglong)(iVar18 + 1);
        }
      } while ((int)uVar35 <= iVar24);
    }
    *(undefined4 *)(param_1 + 0x4b0) = 0xffffffff;
  }
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  FUN_140c7fe50(param_1);
  FUN_140c7f390(param_1);
  sVar8 = *(short *)(param_1 + 0xa4);
  if ((sVar8 < 0) || ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar8)
     ) {
    lVar19 = 0;
  }
  else {
    lVar19 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar8 * 8);
  }
  iVar9 = (int)(*(longlong *)(param_1 + 0x598) - *(longlong *)(param_1 + 0x590) >> 3) + -1;
  if (-1 < iVar9) {
    lVar29 = (longlong)iVar9 * 8;
    lVar34 = lVar29;
    do {
      pvVar15 = *(void **)(lVar29 + *(longlong *)(param_1 + 0x590));
      iVar24 = (int)(*(longlong *)((longlong)pvVar15 + 0x10) - *(longlong *)((longlong)pvVar15 + 8)
                    >> 3) + -1;
      if (-1 < iVar24) {
        lVar33 = (longlong)iVar24 * 8;
        local_res10 = lVar33;
        do {
          pvVar22 = *(void **)(lVar33 + *(longlong *)((longlong)pvVar15 + 8));
          *(uint *)((longlong)pvVar22 + 100) = *(uint *)((longlong)pvVar22 + 100) & 0xefffffff;
          *(undefined8 *)((longlong)pvVar22 + 0x6c) = 0;
          *(undefined4 *)((longlong)pvVar22 + 0x9c) = 0xffffffff;
          if ((((*(byte *)((longlong)pvVar15 + 0x2c) & 2) == 0) &&
              (*(short *)((longlong)pvVar22 + 6) != -1)) &&
             (lVar31 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (**(longlong **)(param_1 + 0x5d8) +
                            (longlong)*(short *)((longlong)pvVar22 + 4) * 8) + 0x58) +
                        (longlong)*(short *)((longlong)pvVar22 + 6) * 8),
             0 < *(int *)(*(longlong *)(param_1 + 0x1348) + (longlong)*(int *)(lVar31 + 0x68) * 4)))
          {
            *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
            if (((lVar19 == 0) ||
                (lVar28 = *(longlong *)
                           (*(longlong *)(lVar19 + 0x24c8) + (longlong)*(int *)(lVar31 + 0x20) * 8),
                *(int *)(lVar28 + 0x28) < 1)) || ((**(byte **)(lVar28 + 0x20) & 8) == 0)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            iVar18 = (int)(*(longlong *)((longlong)pvVar22 + 0x20) -
                           *(longlong *)((longlong)pvVar22 + 0x18) >> 1) + -1;
            if (-1 < iVar18) {
              lVar28 = (longlong)iVar18 * 2;
              lVar32 = lVar28;
              do {
                sVar8 = *(short *)(lVar28 + *(longlong *)((longlong)pvVar22 + 0x48));
                if (sVar8 != 8) {
                  lVar2 = *(longlong *)((longlong)pvVar22 + 0x18);
                  if (0 < *(short *)((longlong)pvVar22 + 0xc)) {
                    piVar26 = (int *)(*(longlong *)(param_1 + 0x578) +
                                     (longlong)*(int *)(lVar31 + 0x68) * 4);
                    *piVar26 = *piVar26 -
                               (int)*(short *)(lVar2 + lVar28) *
                               (int)*(short *)((longlong)pvVar22 + 0xc);
                    iVar10 = *piVar26;
                    if (*piVar26 < 0) {
                      iVar10 = 0;
                    }
                    *piVar26 = iVar10;
                  }
                  if (((bVar6) && (sVar8 != 0)) && (sVar8 != 9)) {
                    *(undefined2 *)(lVar2 + lVar28) = 0;
                  }
                  else {
                    pvVar20 = (void *)(*(longlong *)((longlong)pvVar22 + 0x18) + lVar32);
                    pvVar21 = (void *)((longlong)pvVar20 + 2);
                    memmove(pvVar20,pvVar21,
                            *(longlong *)((longlong)pvVar22 + 0x20) - (longlong)pvVar21);
                    *(longlong *)((longlong)pvVar22 + 0x20) =
                         *(longlong *)((longlong)pvVar22 + 0x20) + -2;
                    pvVar20 = (void *)(*(longlong *)((longlong)pvVar22 + 0x30) + lVar32);
                    pvVar21 = (void *)((longlong)pvVar20 + 2);
                    memmove(pvVar20,pvVar21,
                            *(longlong *)((longlong)pvVar22 + 0x38) - (longlong)pvVar21);
                    *(longlong *)((longlong)pvVar22 + 0x38) =
                         *(longlong *)((longlong)pvVar22 + 0x38) + -2;
                    pvVar20 = (void *)(*(longlong *)((longlong)pvVar22 + 0x48) + lVar32);
                    pvVar21 = (void *)((longlong)pvVar20 + 2);
                    memmove(pvVar20,pvVar21,
                            *(longlong *)((longlong)pvVar22 + 0x50) - (longlong)pvVar21);
                    *(longlong *)((longlong)pvVar22 + 0x50) =
                         *(longlong *)((longlong)pvVar22 + 0x50) + -2;
                  }
                }
                lVar32 = lVar32 + -2;
                lVar28 = lVar28 + -2;
                iVar18 = iVar18 + -1;
              } while (-1 < iVar18);
            }
            if (0 < *(int *)((longlong)pvVar22 + 0x10)) {
              if (0 < *(short *)((longlong)pvVar22 + 0xc)) {
                piVar26 = (int *)(*(longlong *)(param_1 + 0x560) +
                                 (longlong)*(int *)(lVar31 + 0x68) * 4);
                *piVar26 = *piVar26 -
                           (int)*(short *)((longlong)pvVar22 + 0xc) *
                           *(int *)((longlong)pvVar22 + 0x10);
                iVar18 = *piVar26;
                if (*piVar26 < 0) {
                  iVar18 = 0;
                }
                *piVar26 = iVar18;
              }
              *(undefined4 *)((longlong)pvVar22 + 0x10) = 0;
            }
            if (0 < *(short *)((longlong)pvVar22 + 0x98)) {
              if (bVar6) {
                if ((*(uint *)((longlong)pvVar22 + 100) & 1) != 0) {
                  *(uint *)((longlong)pvVar22 + 100) = *(uint *)((longlong)pvVar22 + 100) | 4;
                }
                if ((*(uint *)((longlong)pvVar22 + 100) & 2) != 0) {
                  *(uint *)((longlong)pvVar22 + 100) = *(uint *)((longlong)pvVar22 + 100) | 8;
                }
                if ((*(uint *)((longlong)pvVar22 + 100) >> 0x13 & 1) != 0) {
                  *(uint *)((longlong)pvVar22 + 100) = *(uint *)((longlong)pvVar22 + 100) | 0x100000
                  ;
                }
                if ((*(uint *)((longlong)pvVar22 + 100) >> 0x10 & 1) != 0) {
                  *(uint *)((longlong)pvVar22 + 100) = *(uint *)((longlong)pvVar22 + 100) | 0x20000;
                }
                if ((*(uint *)((longlong)pvVar22 + 100) >> 0x19 & 1) != 0) {
                  *(uint *)((longlong)pvVar22 + 100) =
                       *(uint *)((longlong)pvVar22 + 100) | 0x4000000;
                }
                if ((*(uint *)((longlong)pvVar22 + 100) >> 0x16 & 1) != 0) {
                  *(uint *)((longlong)pvVar22 + 100) = *(uint *)((longlong)pvVar22 + 100) | 0x800000
                  ;
                }
              }
              if (0 < *(short *)((longlong)pvVar22 + 0xc)) {
                piVar26 = (int *)(*(longlong *)(param_1 + 0x548) +
                                 (longlong)*(int *)(lVar31 + 0x68) * 4);
                *piVar26 = *piVar26 -
                           (int)*(short *)((longlong)pvVar22 + 0x98) *
                           (int)*(short *)((longlong)pvVar22 + 0xc);
                iVar18 = *piVar26;
                if (*piVar26 < 0) {
                  iVar18 = 0;
                }
                *piVar26 = iVar18;
              }
              sVar8 = *(short *)((longlong)pvVar22 + 0x98);
              *(undefined2 *)((longlong)pvVar22 + 0x98) = 0;
              if (sVar8 == 100) {
                iVar18 = *(int *)(lVar31 + 0x68);
                lVar31 = (longlong)iVar18;
                if ((*(int *)(*(longlong *)(param_1 + 0x530) + lVar31 * 4) ==
                     *(int *)((longlong)pvVar22 + 8)) && (iVar18 != -1)) {
                  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x2000;
                  lVar28 = *(longlong *)(param_1 + 0x530);
                  *(undefined4 *)(lVar28 + lVar31 * 4) = 0;
                  piVar26 = (int *)(lVar28 + lVar31 * 4);
                  iVar10 = (int)(*(longlong *)(param_1 + 0x598) - *(longlong *)(param_1 + 0x590) >>
                                3) + -1;
                  lVar31 = (longlong)iVar10;
                  if (-1 < iVar10) {
                    do {
                      lVar28 = *(longlong *)(*(longlong *)(param_1 + 0x590) + lVar31 * 8);
                      iVar10 = (int)(*(longlong *)(lVar28 + 0x10) - *(longlong *)(lVar28 + 8) >> 3)
                               + -1;
                      lVar32 = (longlong)iVar10;
                      if (-1 < iVar10) {
                        do {
                          piVar3 = *(int **)(*(longlong *)(lVar28 + 8) + lVar32 * 8);
                          if ((*piVar3 == iVar18) && ((short)piVar3[0x26] == 100)) {
                            iVar10 = *piVar26;
                            if (iVar10 < piVar3[2]) {
                              iVar10 = piVar3[2];
                            }
                            *piVar26 = iVar10;
                          }
                          lVar32 = lVar32 + -1;
                        } while (-1 < lVar32);
                      }
                      lVar31 = lVar31 + -1;
                    } while (-1 < lVar31);
                  }
                }
              }
              *(uint *)((longlong)pvVar22 + 100) = *(uint *)((longlong)pvVar22 + 100) & 0xfdb6fffc;
            }
            if ((0 < *(int *)(param_1 + 0x1364)) &&
               ((*(uint *)((longlong)pvVar22 + 100) & 0x70) != 0)) {
              *(uint *)((longlong)pvVar22 + 100) = *(uint *)((longlong)pvVar22 + 100) & 0xffffff8f;
            }
            if ((0 < *(int *)(param_1 + 0x1368)) &&
               ((*(uint *)((longlong)pvVar22 + 100) & 0x380) != 0)) {
              *(uint *)((longlong)pvVar22 + 100) = *(uint *)((longlong)pvVar22 + 100) & 0xfffffc7f;
            }
            if ((((((*(longlong *)((longlong)pvVar22 + 0x20) -
                     *(longlong *)((longlong)pvVar22 + 0x18) & 0xfffffffffffffffeU) == 0) &&
                  (*(int *)((longlong)pvVar22 + 0x10) == 0)) &&
                 (*(short *)((longlong)pvVar22 + 0x98) == 0)) &&
                ((*(int *)((longlong)pvVar22 + 0xa0) == 0 &&
                 ((*(byte *)((longlong)pvVar22 + 0x68) & 4) == 0)))) &&
               ((*(uint *)((longlong)pvVar22 + 100) & 0x49283fc) == 0)) {
              *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
              FUN_14015e1e0(pvVar22);
              free(pvVar22);
              pvVar21 = (void *)(local_res10 + *(longlong *)((longlong)pvVar15 + 8));
              pvVar22 = (void *)((longlong)pvVar21 + 8);
              memmove(pvVar21,pvVar22,*(longlong *)((longlong)pvVar15 + 0x10) - (longlong)pvVar22);
              *(longlong *)((longlong)pvVar15 + 0x10) = *(longlong *)((longlong)pvVar15 + 0x10) + -8
              ;
            }
          }
          local_res10 = local_res10 + -8;
          iVar24 = iVar24 + -1;
          lVar33 = lVar33 + -8;
        } while (-1 < iVar24);
      }
      if ((((*(longlong *)((longlong)pvVar15 + 0x10) - *(longlong *)((longlong)pvVar15 + 8) >> 3 ==
             0) && (*(int *)((longlong)pvVar15 + 0x34) < 1)) &&
          ((*(int *)((longlong)pvVar15 + 0x38) < 1 &&
           (((*(int *)((longlong)pvVar15 + 0x3c) < 1 && (*(int *)((longlong)pvVar15 + 0x48) < 1)) &&
            (*(int *)((longlong)pvVar15 + 0x40) < 1)))))) &&
         (((*(int *)((longlong)pvVar15 + 0x44) < 1 && (*(int *)((longlong)pvVar15 + 0x30) == -1)) &&
          ((*(longlong *)((longlong)pvVar15 + 0x50) == 0 || (cVar7 = FUN_140c241b0(), cVar7 != '\0')
           ))))) {
        *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 8;
        *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
        FUN_1407efc10(pvVar15);
        lVar33 = *(longlong *)((longlong)pvVar15 + 8);
        if (lVar33 != 0) {
          FUN_140002020(lVar33,*(longlong *)((longlong)pvVar15 + 0x18) - lVar33 >> 3,8);
          *(undefined8 *)((longlong)pvVar15 + 8) = 0;
          *(undefined8 *)((longlong)pvVar15 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar15 + 0x18) = 0;
        }
        free(pvVar15);
        pvVar22 = (void *)(*(longlong *)(param_1 + 0x590) + lVar34);
        pvVar15 = (void *)((longlong)pvVar22 + 8);
        memmove(pvVar22,pvVar15,*(longlong *)(param_1 + 0x598) - (longlong)pvVar15);
        *(longlong *)(param_1 + 0x598) = *(longlong *)(param_1 + 0x598) + -8;
      }
      iVar9 = iVar9 + -1;
      lVar34 = lVar34 + -8;
      lVar29 = lVar29 + -8;
    } while (-1 < iVar9);
  }
  for (pbVar13 = *(byte **)(param_1 + 0x4d0); pbVar13 < *(byte **)(param_1 + 0x4d8);
      pbVar13 = pbVar13 + 4) {
    if ((*pbVar13 & 2) != 0) {
      if (local_res8 != 0) {
        FUN_1407648d0(*(undefined8 *)(local_res8 + 0x10));
        lVar19 = *(longlong *)(*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x130) + 0x38);
        if (*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2 ==
            *(longlong *)(lVar19 + 0x30)) {
          pbVar13 = *(byte **)(param_1 + 0x4d0);
          uVar35 = 0;
          pbVar4 = *(byte **)(param_1 + 0x4d8);
          puVar30 = *(uint **)(lVar19 + 0x18);
          while (pbVar13 < pbVar4) {
            if ((*pbVar13 & 2) != 0) {
              *puVar30 = *puVar30 | 1 << ((uint)uVar35 & 0x1f);
            }
            pbVar13 = pbVar13 + 4;
            if (uVar35 < 0x1f) {
              uVar35 = uVar35 + 1;
            }
            else {
              uVar35 = 0;
              puVar30 = puVar30 + 1;
            }
          }
        }
      }
      break;
    }
  }
  if ((*(uint *)(param_1 + 0x118) & 0x10000000) == 0) {
    if (local_res8 != 0) {
      lVar19 = *(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x130);
      if ((lVar19 != 0) && (lVar19 = *(longlong *)(lVar19 + 0x38), lVar19 != 0)) {
        puVar30 = (uint *)(lVar19 + 0x40);
        *puVar30 = *puVar30 & 0xfffffffe;
      }
      goto LAB_140c832fb;
    }
  }
  else if (local_res8 != 0) {
    FUN_1407648d0(*(undefined8 *)(local_res8 + 0x10));
    puVar30 = (uint *)(*(longlong *)(*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x130) + 0x38)
                      + 0x40);
    *puVar30 = *puVar30 | 1;
LAB_140c832fb:
    FUN_1407acb40(*(undefined8 *)(local_res8 + 0x10));
    puVar30 = (uint *)(*(longlong *)(*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x130) + 0x50)
                      + 0x88);
    *puVar30 = *puVar30 | 1;
    lVar19 = *(longlong *)(*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x130) + 0x50);
    *(undefined8 *)(lVar19 + 0x20) = 0;
    *(undefined8 *)(lVar19 + 0x28) = 0;
    *(undefined8 *)(lVar19 + 0x30) = 0;
    *(undefined8 *)(lVar19 + 0x38) = 0;
    *(undefined8 *)(lVar19 + 0x40) = 0;
    *(undefined8 *)(lVar19 + 0x48) = 0;
    *(undefined4 *)(lVar19 + 0x50) = 0;
    lVar19 = *(longlong *)(*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x130) + 0x50);
    *(undefined8 *)(lVar19 + 0x54) = 0;
    *(undefined8 *)(lVar19 + 0x5c) = 0;
    *(undefined8 *)(lVar19 + 100) = 0;
    *(undefined8 *)(lVar19 + 0x6c) = 0;
    *(undefined8 *)(lVar19 + 0x74) = 0;
    *(undefined8 *)(lVar19 + 0x7c) = 0;
    *(undefined4 *)(lVar19 + 0x84) = 0;
    plVar16 = *(longlong **)(param_1 + 0x400);
    for (plVar27 = *(longlong **)(param_1 + 0x3f8); plVar27 < plVar16; plVar27 = plVar27 + 1) {
      plVar5 = *(longlong **)*plVar27;
      if ((plVar5 != (longlong *)0x0) &&
         (cVar7 = (**(code **)(*plVar5 + 0xb0))(plVar5), cVar7 != '\0')) {
        sVar8 = *(short *)(*plVar27 + 8);
        if (sVar8 == 1) {
LAB_140c833da:
          sVar8 = (**(code **)*plVar5)(plVar5);
          if (sVar8 == 0x1b) {
            lVar19 = *(longlong *)(*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x130) + 0x50);
            if (*(int *)(lVar19 + 0x80) < *(int *)(plVar5[0x1c] + 0xc4)) {
              *(int *)(lVar19 + 0x80) = *(int *)(plVar5[0x1c] + 0xc4);
            }
          }
          sVar8 = (**(code **)*plVar5)(plVar5);
          if (sVar8 == 0x18) {
            sVar8 = *(short *)(plVar5[0x1c] + 0xca);
            if (sVar8 == -1) {
              sVar8 = *(short *)(plVar5[0x1c] + 200);
            }
            switch(sVar8) {
            case 0x26:
              lVar19 = 0;
              break;
            case 0x27:
              lVar19 = 1;
              break;
            case 0x28:
              lVar19 = 2;
              break;
            case 0x29:
              lVar19 = 3;
              break;
            case 0x2a:
              lVar19 = 4;
              break;
            case 0x2b:
              lVar19 = 5;
              break;
            case 0x2c:
              lVar19 = 6;
              break;
            case 0x2d:
              lVar19 = 0xb;
              break;
            case 0x2e:
              lVar19 = 0xc;
              break;
            default:
              goto switchD_140c83459_caseD_2f;
            case 0x32:
              lVar19 = 7;
              break;
            case 0x33:
              lVar19 = 8;
              break;
            case 0x34:
              lVar19 = 9;
              break;
            case 0x35:
              lVar19 = 10;
            }
            iVar9 = (**(code **)(*plVar5 + 0x548))(plVar5);
            iVar9 = iVar9 / 1000;
            lVar29 = FUN_140d89d60(&DAT_141c53470,(short)plVar5[0x16],
                                   *(undefined4 *)((longlong)plVar5 + 0xb4));
            if (lVar29 != 0) {
              iVar9 = iVar9 + *(int *)(lVar29 + 0x260) / 10000;
            }
            lVar29 = *(longlong *)(*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x130) + 0x50);
            if (*(int *)(lVar29 + 0x54 + lVar19 * 4) < iVar9) {
              *(int *)(lVar29 + 0x54 + lVar19 * 4) = iVar9;
            }
          }
        }
        else if ((sVar8 == 2) || (sVar8 == 5)) {
          lVar19 = FUN_140d89d60(&DAT_141c53470,(short)plVar5[0x16],
                                 *(undefined4 *)((longlong)plVar5 + 0xb4));
          if (lVar19 != 0) {
            piVar26 = (int *)(*(longlong *)
                               (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x130) + 0x50) +
                             0x84);
            *piVar26 = *piVar26 + *(int *)(lVar19 + 0x260) / 10000;
          }
        }
        else if (sVar8 == 10) goto LAB_140c833da;
      }
switchD_140c83459_caseD_2f:
    }
  }
  if ((*(longlong *)(param_1 + 0xa78) != 0) && (local_res8 != 0)) {
    lVar19 = *(longlong *)(local_res8 + 0x10);
    if (*(longlong *)(lVar19 + 0x130) == 0) {
      puVar14 = operator_new(0x68);
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      *(undefined8 **)(lVar19 + 0x130) = puVar14;
    }
    uVar35 = 0;
    if (*(longlong *)(*(longlong *)(lVar19 + 0x130) + 0x18) == 0) {
      pvVar15 = operator_new(400);
      FUN_1401b7c10(pvVar15);
      *(undefined2 *)((longlong)pvVar15 + 0x188) = 0xffff;
      *(void **)(*(longlong *)(lVar19 + 0x130) + 0x18) = pvVar15;
    }
    iVar9 = (int)(*(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x280) -
                  *(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x278) >> 3) + -1;
    if (-1 < iVar9) {
      lVar29 = (longlong)iVar9 * 8;
      lVar34 = lVar29;
      do {
        pvVar15 = *(void **)(lVar29 + *(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x278));
        if (*(int *)((longlong)pvVar15 + 0xc) == 0xee) {
          free(pvVar15);
          lVar33 = *(longlong *)(param_1 + 0xa78);
          pvVar22 = (void *)(*(longlong *)(lVar33 + 0x278) + lVar34);
          pvVar15 = (void *)((longlong)pvVar22 + 8);
          memmove(pvVar22,pvVar15,*(longlong *)(lVar33 + 0x280) - (longlong)pvVar15);
          *(longlong *)(lVar33 + 0x280) = *(longlong *)(lVar33 + 0x280) + -8;
        }
        lVar34 = lVar34 + -8;
        lVar29 = lVar29 + -8;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    FUN_140365040(*(undefined8 *)(*(longlong *)(lVar19 + 0x130) + 0x18),
                  *(longlong *)(param_1 + 0xa78) + 0x248);
    if (*(longlong *)(*(longlong *)(lVar19 + 0x130) + 8) == 0) {
      puVar14 = operator_new(0x78);
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[0xb] = 0;
      *(undefined2 *)(puVar14 + 0xc) = 0x66;
      *(undefined8 *)((longlong)puVar14 + 100) = 0;
      puVar14[0xe] = 0;
      *(undefined8 **)(*(longlong *)(lVar19 + 0x130) + 8) = puVar14;
      FUN_140758120(*(undefined8 *)(*(longlong *)(lVar19 + 0x130) + 8),
                    *(undefined2 *)(param_1 + 0xa4),*(undefined2 *)(param_1 + 300));
    }
    puVar30 = (uint *)(*(longlong *)(*(longlong *)(lVar19 + 0x130) + 8) + 100);
    *puVar30 = *puVar30 | 2;
    puVar14 = *(undefined8 **)(*(longlong *)(lVar19 + 0x130) + 8);
    puVar14[1] = *puVar14;
    lVar29 = *(longlong *)(*(longlong *)(lVar19 + 0x130) + 8);
    *(undefined8 *)(lVar29 + 0x20) = *(undefined8 *)(lVar29 + 0x18);
    iVar9 = (int)(*(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x220) -
                  *(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x218) >> 3);
    if (0 < iVar9) {
      FUN_14000bed0(*(undefined8 *)(*(longlong *)(lVar19 + 0x130) + 8),(longlong)iVar9);
      FUN_14000bd10(*(longlong *)(*(longlong *)(lVar19 + 0x130) + 8) + 0x18,(longlong)iVar9);
      puVar14 = *(undefined8 **)(*(longlong *)(lVar19 + 0x130) + 8);
      plVar27 = *(longlong **)(*(longlong *)(param_1 + 0xa78) + 0x220);
      puVar23 = (undefined2 *)*puVar14;
      piVar26 = (int *)puVar14[3];
      for (plVar16 = *(longlong **)(*(longlong *)(param_1 + 0xa78) + 0x218); plVar16 < plVar27;
          plVar16 = plVar16 + 1) {
        *puVar23 = *(undefined2 *)*plVar16;
        iVar9 = *(int *)(*plVar16 + 4);
        if (iVar9 < 1) {
          iVar9 = 0;
        }
        else {
          iVar9 = ((iVar9 + -1) * iVar9 * 100 >> 1) + iVar9 * 500;
        }
        *piVar26 = iVar9 + *(int *)(*plVar16 + 8);
        puVar23 = puVar23 + 1;
        piVar26 = piVar26 + 1;
      }
    }
    if ((*(uint *)(param_1 + 0x110) & 0x800) == 0) {
      lVar29 = *(longlong *)(*(longlong *)(lVar19 + 0x130) + 8);
      if (lVar29 == 0) {
        iVar9 = -1;
      }
      else {
        iVar9 = (int)*(short *)(lVar29 + 0x60);
      }
      switch(iVar9) {
      case 0x3b:
      case 0x45:
      case 0x4a:
      case 0x61:
      case 0x65:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
        break;
      default:
        goto switchD_140c838da_caseD_3c;
      }
    }
    if (*(longlong *)(param_1 + 0xdb8) - *(longlong *)(param_1 + 0xdb0) >> 3 != 0) {
      if (*(longlong *)(*(longlong *)(lVar19 + 0x130) + 0x40) == 0) {
        pvVar15 = operator_new(0x170);
        uVar17 = FUN_140010740(pvVar15);
        *(undefined8 *)(*(longlong *)(lVar19 + 0x130) + 0x40) = uVar17;
      }
      plVar27 = *(longlong **)(param_1 + 0xdb0);
      uVar11 = (ulonglong)((longlong)*(longlong **)(param_1 + 0xdb8) + (7 - (longlong)plVar27)) >> 3
      ;
      if (*(longlong **)(param_1 + 0xdb8) < plVar27) {
        uVar11 = uVar35;
      }
      if (uVar11 != 0) {
        do {
          lVar29 = *plVar27;
          FUN_140ce7da0(*(longlong *)(*(longlong *)(lVar19 + 0x130) + 0x40) + 0x68,lVar29,
                        *(undefined4 *)(lVar29 + 0x10),*(undefined4 *)(lVar29 + 0x14));
          uVar35 = uVar35 + 1;
          plVar27 = plVar27 + 1;
        } while (uVar35 < uVar11);
      }
    }
  }
switchD_140c838da_caseD_3c:
LAB_140c839a3:
  *(undefined8 *)(param_1 + 0x3a4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3ac) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3b4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3bc) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3c4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xcd0) = *(undefined8 *)(param_1 + 0xcc8);
  *(undefined8 *)(param_1 + 0xce8) = *(undefined8 *)(param_1 + 0xce0);
  *(undefined8 *)(param_1 + 0xd00) = *(undefined8 *)(param_1 + 0xcf8);
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  return;
}

