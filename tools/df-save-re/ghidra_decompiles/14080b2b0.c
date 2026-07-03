// FUN_14080b2b0 @ 14080b2b0
// callees:
//   -> 140051210 FUN_140051210
//   -> EXTERNAL:000000e1 memmove
//   -> 140d9f850 FUN_140d9f850
//   -> 1400049b0 FUN_1400049b0
//   -> 1400048f0 FUN_1400048f0
//   -> 1401745b0 FUN_1401745b0
//   -> 140838f60 FUN_140838f60


void FUN_14080b2b0(longlong param_1,char param_2,char param_3)

{
  void *_Src;
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  longlong *plVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  void *_Dst;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  sVar1 = *(short *)(param_1 + 8);
  sVar2 = *(short *)(param_1 + 0xc);
  sVar3 = *(short *)(param_1 + 10);
  if (((((-1 < sVar1) && (sVar1 < DAT_141d69554)) && (-1 < sVar3)) &&
      ((sVar3 < DAT_141d69558 && (-1 < sVar2)))) &&
     ((sVar2 < DAT_141d6955c &&
      ((DAT_141d69520 != 0 &&
       (lVar15 = *(longlong *)
                  (*(longlong *)
                    (*(longlong *)(DAT_141d69520 + ((longlong)sVar1 >> 4) * 8) +
                    ((longlong)sVar3 >> 4) * 8) + (longlong)sVar2 * 8), lVar15 != 0)))))) {
    FUN_140051210(*(undefined4 *)(param_1 + 0x1c),lVar15 + 0x50);
  }
  if ((param_3 != '\0') &&
     (iVar13 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) + -1,
     -1 < iVar13)) {
    lVar15 = (longlong)iVar13 * 8;
    lVar17 = lVar15;
    do {
      iVar10 = (**(code **)(**(longlong **)(lVar17 + *(longlong *)(param_1 + 0x38)) + 0x10))();
      if (iVar10 == 0x3a) {
        lVar11 = (**(code **)(**(longlong **)(lVar17 + *(longlong *)(param_1 + 0x38)) + 0x20))();
        if ((lVar11 != 0) && (*(int *)(lVar11 + 0x4b0) == *(int *)(param_1 + 0x1c))) {
          *(undefined4 *)(lVar11 + 0x4b0) = 0xffffffff;
        }
        plVar7 = *(longlong **)(lVar17 + *(longlong *)(param_1 + 0x38));
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x78))(plVar7,1);
        }
        _Dst = (void *)(*(longlong *)(param_1 + 0x38) + lVar15);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x40) - (longlong)_Src);
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -8;
      }
      lVar15 = lVar15 + -8;
      lVar17 = lVar17 + -8;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  uVar4 = *(undefined2 *)(param_1 + 0xc);
  uVar5 = *(undefined2 *)(param_1 + 10);
  uVar6 = *(undefined2 *)(param_1 + 8);
  cVar8 = FUN_140d9f850(&DAT_141c53470,uVar6,uVar5,uVar4);
  if (cVar8 != '\0') {
    FUN_1400049b0(&DAT_141c53470,uVar6,uVar5,uVar4,0x20);
    bVar9 = FUN_1400048f0(&DAT_141c53470,*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 10),
                          *(undefined2 *)(param_1 + 0xc));
    if ((bVar9 & 7) == 1) {
      iVar13 = (int)(DAT_141c6fdc0 - DAT_141c6fdb8 >> 3) + -1;
      lVar15 = (longlong)iVar13;
      if (-1 < iVar13) {
        do {
          plVar7 = *(longlong **)(DAT_141c6fdb8 + lVar15 * 8);
          sVar1 = *(short *)(param_1 + 0xc);
          sVar2 = *(short *)(param_1 + 10);
          sVar3 = *(short *)(param_1 + 8);
          cVar8 = (**(code **)(*plVar7 + 0x138))(plVar7);
          if ((cVar8 != '\0') && ((int)sVar1 == (int)plVar7[4])) {
            cVar8 = (**(code **)(*plVar7 + 0x148))(plVar7);
            if ((cVar8 == '\0') || (plVar7[6] == 0)) {
              if (((((int)plVar7[1] <= (int)sVar3) &&
                   ((int)sVar3 <= *(int *)((longlong)plVar7 + 0x14))) &&
                  (*(int *)((longlong)plVar7 + 0xc) <= (int)sVar2)) &&
                 ((int)sVar2 <= (int)plVar7[3])) goto LAB_14080b52e;
            }
            else {
              cVar8 = FUN_1401745b0(plVar7,sVar3,sVar2,sVar1);
              if (cVar8 != '\0') {
LAB_14080b52e:
                lVar15 = *(longlong *)((longlong)iVar13 * 8 + DAT_141c6fdb8);
                uVar14 = *(uint *)(lVar15 + 0x24);
                if ((uVar14 & 2) != 0) {
                  *(uint *)(lVar15 + 0x24) = uVar14 & 0xfffffffd;
                  plVar7 = *(longlong **)((longlong)iVar13 * 8 + DAT_141c6fdb8);
                  uVar14 = *(uint *)(plVar7 + 1);
                  if ((int)uVar14 <= *(int *)((longlong)plVar7 + 0x14)) {
                    do {
                      uVar16 = *(uint *)((longlong)plVar7 + 0xc);
                      if ((int)uVar16 <= (int)plVar7[3]) {
                        do {
                          cVar8 = (**(code **)(*plVar7 + 0x148))(plVar7);
                          if ((((cVar8 == '\0') || (plVar7[6] == 0)) ||
                              (*(char *)((longlong)
                                         (int)(((uVar16 - *(int *)((longlong)plVar7 + 0xc)) *
                                                ((*(int *)((longlong)plVar7 + 0x14) - (int)plVar7[1]
                                                 ) + 1) - (int)plVar7[1]) + uVar14) + plVar7[6]) !=
                               '\0')) &&
                             ((uVar12 = FUN_1400048f0(&DAT_141c53470,uVar14 & 0xffff,uVar16 & 0xffff
                                                      ,(short)plVar7[4]), (uVar12 & 0x20) != 0 &&
                              (uVar12 = FUN_1400048f0(&DAT_141c53470,uVar14 & 0xffff),
                              (uVar12 & 0x20) != 0)))) {
                            *(uint *)((longlong)plVar7 + 0x24) =
                                 *(uint *)((longlong)plVar7 + 0x24) | 2;
                            goto LAB_14080b648;
                          }
                          uVar16 = uVar16 + 1;
                        } while ((int)uVar16 <= (int)plVar7[3]);
                      }
                      uVar14 = uVar14 + 1;
                    } while ((int)uVar14 <= *(int *)((longlong)plVar7 + 0x14));
                  }
                }
                break;
              }
            }
          }
          iVar13 = iVar13 + -1;
          lVar15 = lVar15 + -1;
        } while (-1 < lVar15);
      }
    }
  }
LAB_14080b648:
  if (param_2 != '\0') {
    if (*(int *)(param_1 + 0x50) != -1) {
      FUN_140838f60(param_1);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x7fffffff;
  }
  return;
}

