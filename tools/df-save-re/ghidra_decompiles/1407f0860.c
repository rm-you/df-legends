// FUN_1407f0860 @ 1407f0860
// callees:
//   -> 14080b2b0 FUN_14080b2b0
//   -> EXTERNAL:000000e1 memmove
//   -> 1408243e0 FUN_1408243e0
//   -> 140838f60 FUN_140838f60
//   -> 140dfb5b4 free
//   -> 140c840a0 FUN_140c840a0
//   -> 140198ca0 FUN_140198ca0
//   -> 1405b1590 FUN_1405b1590


void FUN_1407f0860(longlong param_1,char param_2)

{
  void *pvVar1;
  uint *puVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  void *pvVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  int local_res20;
  
  if (param_2 != '\x03') {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfdffffdf;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffff7;
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      FUN_14080b2b0(param_1,param_2 != '\0',0);
    }
  }
  iVar10 = -1;
  iVar9 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) + -1;
  bVar5 = false;
  lVar16 = (longlong)iVar9;
  local_res20 = -1;
  if (-1 < iVar9) {
    do {
      iVar9 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x10))();
      if (iVar9 == 0x24) {
        iVar10 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x60))()
        ;
      }
      lVar16 = lVar16 + -1;
      local_res20 = iVar10;
    } while (-1 < lVar16);
  }
  iVar9 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) + -1;
  if (-1 < iVar9) {
    lVar16 = (longlong)iVar9;
    do {
      uVar15 = 0;
      iVar10 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x10))();
      if ((iVar10 != 0x3d) && (param_2 == '\x03')) goto switchD_1407f099a_caseD_1;
      uVar11 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x10))();
      switch(uVar11) {
      case 1:
        break;
      default:
        goto switchD_1407f099a_caseD_2;
      case 9:
        if (param_2 == '\0') {
          lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x20))
                             ();
          if (lVar22 != 0) {
            iVar10 = (int)(*(longlong *)(lVar22 + 0x1c8) - *(longlong *)(lVar22 + 0x1c0) >> 3) + -1;
            lVar18 = (longlong)iVar10;
            if (-1 < iVar10) {
              do {
                iVar17 = (**(code **)(**(longlong **)(*(longlong *)(lVar22 + 0x1c0) + lVar18 * 8) +
                                     0x60))();
                if ((*(int *)(param_1 + 0x1c) == iVar17) &&
                   (iVar17 = (**(code **)(**(longlong **)
                                            (*(longlong *)(lVar22 + 0x1c0) + lVar18 * 8) + 0x10))(),
                   iVar17 == 0xb)) {
                  plVar13 = *(longlong **)((longlong)iVar10 * 8 + *(longlong *)(lVar22 + 0x1c0));
                  if (plVar13 != (longlong *)0x0) {
                    (**(code **)(*plVar13 + 0x78))(plVar13,1);
                  }
                  pvVar14 = (void *)(*(longlong *)(lVar22 + 0x1c0) + (longlong)iVar10 * 8);
                  pvVar1 = (void *)((longlong)pvVar14 + 8);
                  memmove(pvVar14,pvVar1,*(longlong *)(lVar22 + 0x1c8) - (longlong)pvVar1);
                  *(longlong *)(lVar22 + 0x1c8) = *(longlong *)(lVar22 + 0x1c8) + -8;
                  *(uint *)(lVar22 + 0x110) = *(uint *)(lVar22 + 0x110) | 0x102;
                  goto LAB_1407f0d95;
                }
                iVar10 = iVar10 + -1;
                lVar18 = lVar18 + -1;
              } while (-1 < lVar18);
              *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xdfffffff;
              goto switchD_1407f099a_caseD_2;
            }
          }
LAB_1407f0d95:
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xdfffffff;
          goto switchD_1407f099a_caseD_2;
        }
        break;
      case 10:
        if (param_2 == '\0') {
          lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x18))
                             ();
          if (lVar22 != 0) {
            iVar10 = (int)(*(longlong *)(lVar22 + 0x40) - *(longlong *)(lVar22 + 0x38) >> 3) + -1;
            lVar18 = (longlong)iVar10;
            if (-1 < iVar10) {
              do {
                iVar17 = (**(code **)(**(longlong **)(*(longlong *)(lVar22 + 0x38) + lVar18 * 8) +
                                     0x60))();
                if ((*(int *)(param_1 + 0x1c) == iVar17) &&
                   (iVar17 = (**(code **)(**(longlong **)(*(longlong *)(lVar22 + 0x38) + lVar18 * 8)
                                         + 0x10))(), iVar17 == 0xb)) {
                  plVar13 = *(longlong **)((longlong)iVar10 * 8 + *(longlong *)(lVar22 + 0x38));
                  if (plVar13 != (longlong *)0x0) {
                    (**(code **)(*plVar13 + 0x78))(plVar13,1);
                  }
                  pvVar14 = (void *)(*(longlong *)(lVar22 + 0x38) + (longlong)iVar10 * 8);
                  pvVar1 = (void *)((longlong)pvVar14 + 8);
                  memmove(pvVar14,pvVar1,*(longlong *)(lVar22 + 0x40) - (longlong)pvVar1);
                  *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + -8;
                  *(uint *)(lVar22 + 0x10) = *(uint *)(lVar22 + 0x10) | 0x10;
                  goto LAB_1407f0c4d;
                }
                iVar10 = iVar10 + -1;
                lVar18 = lVar18 + -1;
              } while (-1 < lVar18);
              *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xdfffffff;
              goto switchD_1407f099a_caseD_2;
            }
          }
LAB_1407f0c4d:
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xdfffffff;
          goto switchD_1407f099a_caseD_2;
        }
        break;
      case 0xb:
        if (param_2 != '\x04') {
          lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x18))
                             ();
          if (lVar22 != 0) {
            FUN_1408243e0(lVar22,10,*(undefined4 *)(param_1 + 0x1c));
          }
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffff7;
          if (param_2 != '\0') {
            if (*(int *)(param_1 + 0x50) != -1) {
              FUN_140838f60(param_1);
            }
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x7fffffff;
          }
          goto switchD_1407f099a_caseD_2;
        }
        break;
      case 0xc:
        puVar12 = (undefined8 *)
                  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x28))
                            ();
        if (puVar12 != (undefined8 *)0x0) {
          iVar10 = (**(code **)*puVar12)(puVar12);
          if (iVar10 == 0) {
            *(uint *)(puVar12 + 9) = *(uint *)(puVar12 + 9) | 0x8000;
          }
          *(uint *)(puVar12 + 9) = *(uint *)(puVar12 + 9) | 0x20;
        }
        bVar5 = true;
        goto switchD_1407f099a_caseD_2;
      case 0x10:
        if (param_2 == '\0') {
          lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x20))
                             ();
          if ((lVar22 != 0) &&
             (iVar10 = (int)(*(longlong *)(lVar22 + 0x418) - *(longlong *)(lVar22 + 0x410) >> 2) +
                       -1, -1 < iVar10)) {
            lVar18 = (longlong)iVar10 * 4;
            lVar20 = lVar18;
            do {
              if (*(int *)(lVar18 + *(longlong *)(lVar22 + 0x410)) == *(int *)(param_1 + 0x1c)) {
                pvVar14 = (void *)(*(longlong *)(lVar22 + 0x410) + lVar20);
                pvVar1 = (void *)((longlong)pvVar14 + 4);
                memmove(pvVar14,pvVar1,*(longlong *)(lVar22 + 0x418) - (longlong)pvVar1);
                *(longlong *)(lVar22 + 0x418) = *(longlong *)(lVar22 + 0x418) + -4;
              }
              lVar20 = lVar20 + -4;
              lVar18 = lVar18 + -4;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
          goto switchD_1407f099a_caseD_2;
        }
        break;
      case 0x11:
        if (param_2 == '\0') {
          lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x20))
                             ();
          if ((lVar22 != 0) &&
             (iVar10 = (int)(*(longlong *)(lVar22 + 0x430) - *(longlong *)(lVar22 + 0x428) >> 2) +
                       -1, -1 < iVar10)) {
            lVar18 = (longlong)iVar10 * 4;
            lVar20 = lVar18;
            do {
              if (*(int *)(lVar18 + *(longlong *)(lVar22 + 0x428)) == *(int *)(param_1 + 0x1c)) {
                pvVar14 = (void *)(*(longlong *)(lVar22 + 0x428) + lVar20);
                pvVar1 = (void *)((longlong)pvVar14 + 4);
                memmove(pvVar14,pvVar1,*(longlong *)(lVar22 + 0x430) - (longlong)pvVar1);
                *(longlong *)(lVar22 + 0x430) = *(longlong *)(lVar22 + 0x430) + -4;
              }
              lVar20 = lVar20 + -4;
              lVar18 = lVar18 + -4;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
          goto switchD_1407f099a_caseD_2;
        }
        break;
      case 0x12:
        if (param_2 != '\x04') {
          lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x20))
                             ();
          if ((lVar22 != 0) &&
             (iVar10 = (int)(*(longlong *)(lVar22 + 0x400) - *(longlong *)(lVar22 + 0x3f8) >> 3) +
                       -1, -1 < iVar10)) {
            lVar20 = (longlong)iVar10;
            lVar18 = lVar20 * 8;
            do {
              if (**(longlong **)(*(longlong *)(lVar22 + 0x3f8) + lVar20 * 8) == param_1) {
                *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffff7;
                sVar7 = *(short *)(*(longlong *)(*(longlong *)(lVar22 + 0x3f8) + lVar20 * 8) + 8);
                if ((sVar7 == 2) || (sVar7 == 5)) {
                  *(uint *)(lVar22 + 0x114) = *(uint *)(lVar22 + 0x114) & 0xfedfffff;
                }
                if (*(short *)(*(longlong *)(*(longlong *)(lVar22 + 0x3f8) + lVar20 * 8) + 8) == 6)
                {
                  *(uint *)(lVar22 + 0x118) = *(uint *)(lVar22 + 0x118) & 0xfffffffb;
                }
                sVar7 = (*(code *)**(undefined8 **)
                                    **(undefined8 **)(*(longlong *)(lVar22 + 0x3f8) + lVar20 * 8))()
                ;
                if (sVar7 == 0x51) {
                  lVar19 = *(longlong *)(*(longlong *)(lVar22 + 0x3f8) + lVar20 * 8);
                  if ((*(short *)(lVar19 + 8) == 2) &&
                     (sVar7 = *(short *)(lVar19 + 10), sVar7 != -1)) {
                    iVar17 = (int)(*(longlong *)(lVar22 + 0x400) - *(longlong *)(lVar22 + 0x3f8) >>
                                  3) + -1;
                    lVar19 = (longlong)iVar17;
                    if (-1 < iVar17) {
                      do {
                        if ((((lVar19 != lVar20) &&
                             (puVar12 = *(undefined8 **)(*(longlong *)(lVar22 + 0x3f8) + lVar19 * 8)
                             , *(short *)((longlong)puVar12 + 10) == sVar7)) &&
                            (*(short *)(puVar12 + 1) == 2)) &&
                           (sVar8 = (*(code *)**(undefined8 **)*puVar12)(), sVar8 == 0x51)) break;
                        iVar17 = iVar17 + -1;
                        lVar19 = lVar19 + -1;
                      } while (-1 < lVar19);
                    }
                    if (iVar17 == -1) {
                      puVar2 = (uint *)(*(longlong *)(lVar22 + 0x4d0) + (longlong)sVar7 * 4);
                      *puVar2 = *puVar2 & 0xffffefff;
                    }
                  }
                }
                sVar7 = (*(code *)**(undefined8 **)
                                    **(undefined8 **)(*(longlong *)(lVar22 + 0x3f8) + lVar20 * 8))()
                ;
                if (sVar7 == 0x39) {
                  lVar19 = *(longlong *)(*(longlong *)(lVar22 + 0x3f8) + lVar20 * 8);
                  if ((*(short *)(lVar19 + 8) == 5) &&
                     (sVar7 = *(short *)(lVar19 + 10), sVar7 != -1)) {
                    iVar17 = (int)(*(longlong *)(lVar22 + 0x400) - *(longlong *)(lVar22 + 0x3f8) >>
                                  3) + -1;
                    lVar19 = (longlong)iVar17;
                    if (-1 < iVar17) {
                      do {
                        if (((lVar19 != lVar20) &&
                            (puVar12 = *(undefined8 **)(*(longlong *)(lVar22 + 0x3f8) + lVar19 * 8),
                            *(short *)((longlong)puVar12 + 10) == sVar7)) &&
                           ((*(short *)(puVar12 + 1) == 5 &&
                            (sVar8 = (*(code *)**(undefined8 **)*puVar12)(), sVar8 == 0x39))))
                        break;
                        iVar17 = iVar17 + -1;
                        lVar19 = lVar19 + -1;
                      } while (-1 < lVar19);
                    }
                    if (iVar17 == -1) {
                      puVar2 = (uint *)(*(longlong *)(lVar22 + 0x4d0) + (longlong)sVar7 * 4);
                      *puVar2 = *puVar2 & 0xffffdfff;
                    }
                  }
                }
                sVar7 = (*(code *)**(undefined8 **)
                                    **(undefined8 **)(*(longlong *)(lVar22 + 0x3f8) + lVar20 * 8))()
                ;
                if ((sVar7 == 0x52) &&
                   (*(short *)(*(longlong *)(*(longlong *)(lVar22 + 0x3f8) + lVar20 * 8) + 8) == 1))
                {
                  iVar17 = (int)(*(longlong *)(lVar22 + 0x400) - *(longlong *)(lVar22 + 0x3f8) >> 3)
                           + -1;
                  lVar19 = (longlong)iVar17;
                  if (-1 < iVar17) {
                    do {
                      if (((lVar19 != lVar20) &&
                          (puVar12 = *(undefined8 **)(*(longlong *)(lVar22 + 0x3f8) + lVar19 * 8),
                          *(short *)(puVar12 + 1) == 1)) &&
                         (sVar7 = (*(code *)**(undefined8 **)*puVar12)(), sVar7 == 0x52)) break;
                      iVar17 = iVar17 + -1;
                      lVar19 = lVar19 + -1;
                    } while (-1 < lVar19);
                  }
                  if (iVar17 == -1) {
                    *(uint *)(lVar22 + 0x118) = *(uint *)(lVar22 + 0x118) & 0xffffffbf | 8;
                  }
                }
                sVar7 = (*(code *)**(undefined8 **)
                                    **(undefined8 **)(*(longlong *)(lVar22 + 0x3f8) + lVar20 * 8))()
                ;
                if (sVar7 == 0x54) {
                  lVar19 = *(longlong *)(*(longlong *)(lVar22 + 0x3f8) + lVar20 * 8);
                  if ((*(short *)(lVar19 + 8) == 5) &&
                     (sVar7 = *(short *)(lVar19 + 10), sVar7 != -1)) {
                    iVar17 = (int)(*(longlong *)(lVar22 + 0x400) - *(longlong *)(lVar22 + 0x3f8) >>
                                  3) + -1;
                    lVar19 = (longlong)iVar17;
                    if (-1 < iVar17) {
                      do {
                        if (((lVar19 != lVar20) &&
                            (puVar12 = *(undefined8 **)(*(longlong *)(lVar22 + 0x3f8) + lVar19 * 8),
                            *(short *)((longlong)puVar12 + 10) == sVar7)) &&
                           ((*(short *)(puVar12 + 1) == 5 &&
                            (sVar8 = (*(code *)**(undefined8 **)*puVar12)(), sVar8 == 0x54))))
                        break;
                        iVar17 = iVar17 + -1;
                        lVar19 = lVar19 + -1;
                      } while (-1 < lVar19);
                    }
                    if (iVar17 == -1) {
                      puVar2 = (uint *)(*(longlong *)(lVar22 + 0x4d0) + (longlong)sVar7 * 4);
                      *puVar2 = *puVar2 & 0xffffbfff;
                    }
                  }
                }
                free(*(void **)(*(longlong *)(lVar22 + 0x3f8) + lVar20 * 8));
                pvVar14 = (void *)(*(longlong *)(lVar22 + 0x3f8) + lVar18);
                pvVar1 = (void *)((longlong)pvVar14 + 8);
                memmove(pvVar14,pvVar1,*(longlong *)(lVar22 + 0x400) - (longlong)pvVar1);
                *(longlong *)(lVar22 + 0x400) = *(longlong *)(lVar22 + 0x400) + -8;
              }
              lVar18 = lVar18 + -8;
              lVar20 = lVar20 + -1;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
          goto switchD_1407f099a_caseD_2;
        }
        break;
      case 0x1f:
        if (param_2 != '\x02') {
          lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x30))
                             ();
          if ((lVar22 != 0) &&
             (iVar10 = (int)(*(longlong *)(lVar22 + 0x170) - *(longlong *)(lVar22 + 0x168) >> 2) +
                       -1, -1 < iVar10)) {
            lVar18 = (longlong)iVar10 * 4;
            lVar20 = lVar18;
            do {
              if (*(int *)(lVar20 + *(longlong *)(lVar22 + 0x168)) == *(int *)(param_1 + 0x1c)) {
                pvVar14 = (void *)(*(longlong *)(lVar22 + 0x168) + lVar18);
                pvVar1 = (void *)((longlong)pvVar14 + 4);
                memmove(pvVar14,pvVar1,*(longlong *)(lVar22 + 0x170) - (longlong)pvVar1);
                *(longlong *)(lVar22 + 0x170) = *(longlong *)(lVar22 + 0x170) + -4;
              }
              lVar18 = lVar18 + -4;
              lVar20 = lVar20 + -4;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
          goto switchD_1407f099a_caseD_2;
        }
        break;
      case 0x20:
        lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x30))()
        ;
        if (lVar22 != 0) {
          iVar10 = (int)(*(longlong *)(lVar22 + 400) - *(longlong *)(lVar22 + 0x188) >> 3) + -1;
          if (-1 < iVar10) {
            lVar18 = (longlong)iVar10 * 8;
            lVar20 = lVar18;
            do {
              if (*(longlong *)(lVar20 + *(longlong *)(lVar22 + 0x188)) == param_1) {
                pvVar14 = (void *)(*(longlong *)(lVar22 + 0x188) + lVar18);
                pvVar1 = (void *)((longlong)pvVar14 + 8);
                memmove(pvVar14,pvVar1,*(longlong *)(lVar22 + 400) - (longlong)pvVar1);
                *(longlong *)(lVar22 + 400) = *(longlong *)(lVar22 + 400) + -8;
              }
              lVar18 = lVar18 + -8;
              lVar20 = lVar20 + -8;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
          if ((local_res20 != -1) &&
             (iVar10 = (int)(*(longlong *)(lVar22 + 0x160) - *(longlong *)(lVar22 + 0x158) >> 3) +
                       -1, lVar18 = (longlong)iVar10, -1 < iVar10)) {
            do {
              FUN_1408243e0(**(undefined8 **)(*(longlong *)(lVar22 + 0x158) + lVar18 * 8),0x21,
                            local_res20);
              lVar18 = lVar18 + -1;
            } while (-1 < lVar18);
          }
        }
        goto switchD_1407f099a_caseD_2;
      case 0x21:
        if (((local_res20 != -1) &&
            (lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) +
                                  0x30))(), lVar22 != 0)) &&
           (iVar10 = (int)(*(longlong *)(lVar22 + 0x160) - *(longlong *)(lVar22 + 0x158) >> 3) + -1,
           lVar18 = (longlong)iVar10, -1 < iVar10)) {
          do {
            FUN_1408243e0(**(undefined8 **)(*(longlong *)(lVar22 + 0x158) + lVar18 * 8),0x20,
                          local_res20);
            lVar18 = lVar18 + -1;
          } while (-1 < lVar18);
        }
        goto switchD_1407f099a_caseD_2;
      case 0x23:
        if (param_2 != '\x02') {
          lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x30))
                             ();
          if ((lVar22 != 0) &&
             (iVar10 = (int)(*(longlong *)(lVar22 + 0x198) - *(longlong *)(lVar22 + 400) >> 2) + -1,
             -1 < iVar10)) {
            lVar18 = (longlong)iVar10 * 4;
            lVar20 = lVar18;
            do {
              if (*(int *)(lVar18 + *(longlong *)(lVar22 + 400)) == *(int *)(param_1 + 0x1c)) {
                pvVar14 = (void *)(*(longlong *)(lVar22 + 400) + lVar20);
                pvVar1 = (void *)((longlong)pvVar14 + 4);
                memmove(pvVar14,pvVar1,*(longlong *)(lVar22 + 0x198) - (longlong)pvVar1);
                *(longlong *)(lVar22 + 0x198) = *(longlong *)(lVar22 + 0x198) + -4;
              }
              lVar20 = lVar20 + -4;
              lVar18 = lVar18 + -4;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
          goto switchD_1407f099a_caseD_2;
        }
        break;
      case 0x24:
        plVar13 = (longlong *)
                  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x30))
                            ();
        if ((plVar13 != (longlong *)0x0) &&
           (cVar6 = (**(code **)(*plVar13 + 0xf0))(plVar13), cVar6 != '\0')) {
          bVar4 = false;
          iVar10 = (int)(plVar13[0x2c] - plVar13[0x2b] >> 3) + -1;
          if (-1 < iVar10) {
            lVar22 = (longlong)iVar10 * 8;
            lVar18 = lVar22;
            do {
              if (**(longlong **)(lVar18 + plVar13[0x2b]) == param_1) {
                if (((short)(*(longlong **)(lVar18 + plVar13[0x2b]))[1] == 2) &&
                   (cVar6 = (**(code **)(*plVar13 + 0x308))(plVar13), cVar6 != '\0')) {
                  bVar4 = true;
                }
                free(*(void **)(lVar18 + plVar13[0x2b]));
                pvVar1 = (void *)(plVar13[0x2b] + lVar22 + 8);
                memmove((void *)(plVar13[0x2b] + lVar22),pvVar1,plVar13[0x2c] - (longlong)pvVar1);
                plVar13[0x2c] = plVar13[0x2c] + -8;
              }
              lVar22 = lVar22 + -8;
              lVar18 = lVar18 + -8;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
            if (bVar4) {
              FUN_140198ca0(plVar13,0,0);
            }
          }
        }
        goto switchD_1407f099a_caseD_2;
      case 0x2b:
      case 0x2c:
      case 0x2d:
        if (param_2 == '\0') goto switchD_1407f099a_caseD_2;
        break;
      case 0x39:
        if (param_2 == '\0') {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xdfffffff;
          goto switchD_1407f099a_caseD_2;
        }
        break;
      case 0x3a:
        lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x20))()
        ;
        if ((lVar22 != 0) && (*(int *)(lVar22 + 0x4b0) == *(int *)(param_1 + 0x1c))) {
          *(undefined4 *)(lVar22 + 0x4b0) = 0xffffffff;
        }
        goto switchD_1407f099a_caseD_2;
      case 0x3d:
        lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x50))()
        ;
        if (lVar22 != 0) {
          plVar13 = *(longlong **)(lVar22 + 0x18);
          uVar21 = (ulonglong)((longlong)*(longlong **)(lVar22 + 0x20) + (7 - (longlong)plVar13)) >>
                   3;
          if (*(longlong **)(lVar22 + 0x20) < plVar13) {
            uVar21 = uVar15;
          }
          if (uVar21 != 0) {
            do {
              if (*(int *)(*plVar13 + 4) == *(int *)(param_1 + 0x1c)) {
                *(undefined4 *)(*plVar13 + 4) = 0xffffffff;
                bVar5 = true;
                *(uint *)(*plVar13 + 8) = *(uint *)(*plVar13 + 8) | 1;
              }
              plVar13 = plVar13 + 1;
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar21);
          }
        }
switchD_1407f099a_caseD_2:
        plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x78))(plVar13,1);
        }
        pvVar14 = (void *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar9 * 8);
        pvVar1 = (void *)((longlong)pvVar14 + 8);
        memmove(pvVar14,pvVar1,*(longlong *)(param_1 + 0x40) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -8;
        break;
      case 0x44:
        if (param_2 != '\x02') {
          lVar22 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x30))
                             ();
          if (lVar22 != 0) {
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffffdf;
            *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffff7;
            iVar10 = (int)(*(longlong *)(lVar22 + 0x180) - *(longlong *)(lVar22 + 0x178) >> 2) + -1;
            if (-1 < iVar10) {
              lVar18 = (longlong)iVar10 * 4;
              lVar20 = lVar18;
              do {
                if (*(int *)(lVar18 + *(longlong *)(lVar22 + 0x178)) == *(int *)(param_1 + 0x1c)) {
                  pvVar14 = (void *)(*(longlong *)(lVar22 + 0x178) + lVar20);
                  pvVar1 = (void *)((longlong)pvVar14 + 4);
                  memmove(pvVar14,pvVar1,*(longlong *)(lVar22 + 0x180) - (longlong)pvVar1);
                  *(longlong *)(lVar22 + 0x180) = *(longlong *)(lVar22 + 0x180) + -4;
                }
                lVar20 = lVar20 + -4;
                lVar18 = lVar18 + -4;
                iVar10 = iVar10 + -1;
              } while (-1 < iVar10);
            }
          }
          goto switchD_1407f099a_caseD_2;
        }
      }
switchD_1407f099a_caseD_1:
      iVar9 = iVar9 + -1;
      lVar16 = lVar16 + -1;
    } while (-1 < iVar9);
  }
  iVar9 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1;
  if (-1 < iVar9) {
    lVar16 = (longlong)iVar9 * 8;
    lVar22 = lVar16;
    do {
      piVar3 = *(int **)(lVar22 + *(longlong *)(param_1 + 0x20));
      iVar10 = *piVar3;
      if ((iVar10 == 2) || (param_2 != '\x03')) {
        bVar4 = true;
        if (iVar10 == 2) {
          lVar18 = *(longlong *)(piVar3 + 2);
          bVar4 = false;
          iVar10 = (int)(*(longlong *)(lVar18 + 0x88) - *(longlong *)(lVar18 + 0x80) >> 3) + -1;
          if (-1 < iVar10) {
            lVar20 = (longlong)iVar10 * 8;
            lVar19 = lVar20;
            do {
              plVar13 = *(longlong **)(lVar19 + *(longlong *)(lVar18 + 0x80));
              if (*plVar13 == param_1) {
                if ((int)plVar13[1] == 2) {
                  bVar4 = true;
                }
                if ((int)plVar13[1] != 6) {
                  bVar5 = true;
                }
                free(plVar13);
                pvVar14 = (void *)(*(longlong *)(lVar18 + 0x80) + lVar20);
                pvVar1 = (void *)((longlong)pvVar14 + 8);
                memmove(pvVar14,pvVar1,*(longlong *)(lVar18 + 0x88) - (longlong)pvVar1);
                *(longlong *)(lVar18 + 0x88) = *(longlong *)(lVar18 + 0x88) + -8;
              }
              lVar20 = lVar20 + -8;
              lVar19 = lVar19 + -8;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
          if ((*(short *)(lVar18 + 0x14) != 0x44) || (bVar4)) {
            *(uint *)(lVar18 + 0x2c) = *(uint *)(lVar18 + 0x2c) | 0x40;
          }
        }
        else if (iVar10 == 10) {
          iVar10 = (int)(DAT_141c534d8 - DAT_141c534d0 >> 3) + -1;
          lVar20 = (longlong)iVar10;
          lVar18 = DAT_141c534d0;
          if (-1 < iVar10) {
            do {
              if (*(longlong *)(lVar18 + lVar20 * 8) ==
                  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar22) + 8)) {
                *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffff7;
                pvVar1 = *(void **)(DAT_141c534d0 + lVar20 * 8);
                lVar18 = DAT_141c534d0;
                if (((*(byte *)((longlong)pvVar1 + 0x18) & 1) == 0) && (pvVar1 != (void *)0x0)) {
                  FUN_1405b1590(pvVar1);
                  free(pvVar1);
                  lVar18 = DAT_141c534d0;
                }
              }
              lVar20 = lVar20 + -1;
            } while (-1 < lVar20);
          }
        }
        else if (iVar10 == 0xe) {
          lVar18 = *(longlong *)(piVar3 + 2);
          lVar20 = *(longlong *)(piVar3 + 4);
          iVar10 = (int)(*(longlong *)(lVar18 + 0xb00) - *(longlong *)(lVar18 + 0xaf8) >> 3) + -1;
          if (-1 < iVar10) {
            lVar19 = (longlong)iVar10 * 8;
            do {
              if (*(longlong *)(lVar19 + *(longlong *)(lVar18 + 0xaf8)) == lVar20) {
                bVar4 = false;
                FUN_140c840a0(lVar18,iVar10);
              }
              lVar19 = lVar19 + -8;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
            if (!bVar4) goto LAB_1407f127c;
          }
        }
        free(*(void **)(*(longlong *)(param_1 + 0x20) + lVar22));
        pvVar14 = (void *)(*(longlong *)(param_1 + 0x20) + lVar16);
        pvVar1 = (void *)((longlong)pvVar14 + 8);
        memmove(pvVar14,pvVar1,*(longlong *)(param_1 + 0x28) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
      }
LAB_1407f127c:
      iVar9 = iVar9 + -1;
      lVar16 = lVar16 + -8;
      lVar22 = lVar22 + -8;
    } while (-1 < iVar9);
  }
  if (bVar5) {
    iVar9 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) + -1;
    lVar16 = (longlong)iVar9;
    if (-1 < iVar9) {
      do {
        iVar9 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar16 * 8) + 0x10))();
        if (iVar9 == 0xc) {
          return;
        }
        lVar16 = lVar16 + -1;
      } while (-1 < lVar16);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffd;
  }
  return;
}

