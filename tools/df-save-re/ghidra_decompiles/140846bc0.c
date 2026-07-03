// FUN_140846bc0 @ 140846bc0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free
//   -> 1401b6600 FUN_1401b6600
//   -> 140c5dc80 FUN_140c5dc80


void FUN_140846bc0(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  void *pvVar2;
  void *_Dst;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (((param_2 == 0) && (iVar12 = *(int *)(param_1 + 0x10), -1 < iVar12)) &&
     ((ulonglong)(longlong)iVar12 < (ulonglong)(DAT_141c68068 - DAT_141c68060 >> 3))) {
    lVar10 = *(longlong *)(DAT_141c68060 + (longlong)iVar12 * 8);
    puVar1 = (uint *)(lVar10 + 0x10);
    *puVar1 = *puVar1 | 1;
    *(undefined8 *)(lVar10 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  iVar12 = (int)(*(longlong *)(param_1 + 0xa0) - *(longlong *)(param_1 + 0x98) >> 3) + -1;
  if (-1 < iVar12) {
    lVar10 = (longlong)iVar12 * 8;
    lVar13 = lVar10;
LAB_140846c50:
    piVar3 = *(int **)(*(longlong *)(param_1 + 0x98) + lVar10);
    if ((*piVar3 == 6) && (param_2 == 0)) {
      iVar9 = (int)(DAT_141c536a0 - DAT_141c53698 >> 3) + -1;
      uVar6 = (ulonglong)iVar9;
      if (-1 < iVar9) {
        uVar7 = uVar6;
        do {
          if (*(longlong *)(DAT_141c53698 + uVar6 * 8) == *(longlong *)(piVar3 + 2)) {
            pvVar2 = *(void **)(DAT_141c53698 + (longlong)(int)uVar7 * 8);
            if (pvVar2 != (void *)0x0) {
              if (iVar9 < 0) goto LAB_140846ce5;
              lVar4 = (longlong)iVar9;
              goto LAB_140846cb6;
            }
            break;
          }
          uVar7 = (ulonglong)((int)uVar7 - 1);
          uVar6 = uVar6 - 1;
        } while (-1 < (longlong)uVar6);
      }
      goto LAB_140846cf6;
    }
    goto LAB_140846d31;
  }
LAB_140846d4a:
  iVar12 = (int)(*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 3) + -1;
  if (-1 < iVar12) {
    lVar10 = (longlong)iVar12 * 8;
    lVar13 = lVar10;
    do {
      iVar9 = (**(code **)(**(longlong **)(lVar13 + *(longlong *)(param_1 + 0xb0)) + 0x10))();
      if (iVar9 == 0x13) {
        if ((param_2 == 0) &&
           (lVar4 = (**(code **)(**(longlong **)(lVar13 + *(longlong *)(param_1 + 0xb0)) + 0x20))(),
           lVar4 != 0)) {
          if ((*(short *)(param_1 + 0x14) == 0x18) && ((*(uint *)(lVar4 + 0x110) & 0x40000) != 0)) {
            FUN_140c5dc80(lVar4);
          }
          if (*(longlong *)(lVar4 + 0x4b8) != 0) {
            *(undefined4 *)(lVar4 + 0xc0) = 0x8ad08ad0;
            *(undefined2 *)(lVar4 + 0xc6) = 0xffff;
            *(undefined2 *)(lVar4 + 0xc4) = 0x8ad0;
            *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar4 + 200);
            *(undefined8 *)(lVar4 + 0xe8) = *(undefined8 *)(lVar4 + 0xe0);
            *(undefined8 *)(lVar4 + 0x100) = *(undefined8 *)(lVar4 + 0xf8);
            *(undefined8 *)(lVar4 + 0x4b8) = 0;
          }
          goto LAB_140846f1e;
        }
      }
      else if (iVar9 == 0x24) {
        if (param_2 == 0) {
          lVar4 = (**(code **)(**(longlong **)(lVar13 + *(longlong *)(param_1 + 0xb0)) + 0x30))();
          if ((lVar4 != 0) &&
             (iVar9 = (int)(*(longlong *)(lVar4 + 0x60) - *(longlong *)(lVar4 + 0x58) >> 3) + -1,
             -1 < iVar9)) {
            lVar11 = (longlong)iVar9 * 8;
            lVar14 = lVar11;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0x58) + lVar11) == param_1) {
                pvVar8 = (void *)(lVar14 + *(longlong *)(lVar4 + 0x58));
                pvVar2 = (void *)((longlong)pvVar8 + 8);
                memmove(pvVar8,pvVar2,*(longlong *)(lVar4 + 0x60) - (longlong)pvVar2);
                *(longlong *)(lVar4 + 0x60) = *(longlong *)(lVar4 + 0x60) + -8;
                if (((DAT_141c3d260 == 0x11) && (DAT_141d694f0 != 0)) && (DAT_141d694f0 == lVar4)) {
                  if (DAT_14155b2fc == iVar9) {
                    DAT_14155b2fc = DAT_14155b2fc + -1;
                  }
                  if (DAT_14155b2fc < 0) {
                    DAT_14155b2fc = 0;
                  }
                }
              }
              lVar14 = lVar14 + -8;
              lVar11 = lVar11 + -8;
              iVar9 = iVar9 + -1;
            } while (-1 < iVar9);
          }
          goto LAB_140846f1e;
        }
      }
      else if (iVar9 == 0x25) {
        if (param_2 < 2) {
          plVar5 = (longlong *)
                   (**(code **)(**(longlong **)(lVar13 + *(longlong *)(param_1 + 0xb0)) + 0x30))();
          if ((plVar5 != (longlong *)0x0) &&
             (iVar9 = (**(code **)(*plVar5 + 0xd8))(plVar5), iVar9 == 0x12)) {
            *(byte *)((longlong)plVar5 + 0x17a) =
                 *(byte *)((longlong)plVar5 + 0x17a) &
                 ~*(byte *)(*(longlong *)(lVar13 + *(longlong *)(param_1 + 0xb0)) + 0x10);
          }
          goto LAB_140846f1e;
        }
      }
      else if ((iVar9 - 0x26U < 2) && ((param_2 & 0xfffffffd) == 0)) {
        lVar4 = (**(code **)(**(longlong **)(lVar13 + *(longlong *)(param_1 + 0xb0)) + 0x30))();
        if ((lVar4 != 0) && (param_3 != 0)) {
          FUN_1401b6600(&DAT_141d79b30,lVar4,*(undefined4 *)(param_3 + 0x130));
        }
LAB_140846f1e:
        plVar5 = *(longlong **)(lVar13 + *(longlong *)(param_1 + 0xb0));
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x78))(plVar5,1);
        }
        pvVar8 = (void *)(*(longlong *)(param_1 + 0xb0) + lVar10);
        pvVar2 = (void *)((longlong)pvVar8 + 8);
        memmove(pvVar8,pvVar2,*(longlong *)(param_1 + 0xb8) - (longlong)pvVar2);
        *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + -8;
      }
      iVar12 = iVar12 + -1;
      lVar10 = lVar10 + -8;
      lVar13 = lVar13 + -8;
    } while (-1 < iVar12);
  }
  return;
  while( true ) {
    iVar9 = iVar9 + -1;
    lVar4 = lVar4 + -1;
    if (lVar4 < 0) break;
LAB_140846cb6:
    if (*(void **)(DAT_141c53698 + lVar4 * 8) == pvVar2) {
      _Dst = (void *)(DAT_141c53698 + (longlong)iVar9 * 8);
      pvVar8 = (void *)((longlong)_Dst + 8);
      memmove(_Dst,pvVar8,DAT_141c536a0 - (longlong)pvVar8);
      DAT_141c536a0 = DAT_141c536a0 + -8;
      break;
    }
  }
LAB_140846ce5:
  free(pvVar2);
LAB_140846cf6:
  free(*(void **)(*(longlong *)(param_1 + 0x98) + lVar10));
  pvVar8 = (void *)(*(longlong *)(param_1 + 0x98) + lVar13);
  pvVar2 = (void *)((longlong)pvVar8 + 8);
  memmove(pvVar8,pvVar2,*(longlong *)(param_1 + 0xa0) - (longlong)pvVar2);
  *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + -8;
LAB_140846d31:
  lVar13 = lVar13 + -8;
  lVar10 = lVar10 + -8;
  iVar12 = iVar12 + -1;
  if (iVar12 < 0) goto LAB_140846d4a;
  goto LAB_140846c50;
}

