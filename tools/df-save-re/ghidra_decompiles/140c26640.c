// FUN_140c26640 @ 140c26640
// callees:
//   -> 140c5cf00 FUN_140c5cf00
//   -> 1408243e0 FUN_1408243e0
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140051210 FUN_140051210
//   -> 140050b50 FUN_140050b50


void FUN_140c26640(longlong param_1,int param_2)

{
  uint *puVar1;
  void *_Src;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  void *_Dst;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  
  lVar12 = (longlong)param_2;
  plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x3f8) + lVar12 * 8);
  lVar10 = lVar12 * 8;
  lVar14 = *plVar11;
  uVar2 = *(ushort *)(plVar11 + 1);
  iVar3 = *(int *)(lVar14 + 0x1c);
  cVar6 = FUN_140c5cf00(param_1,lVar14);
  if (cVar6 == '\0') {
    puVar1 = (uint *)(**(longlong **)(lVar10 + *(longlong *)(param_1 + 0x3f8)) + 0x10);
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  sVar7 = *(short *)(*(longlong *)(lVar10 + *(longlong *)(param_1 + 0x3f8)) + 8);
  if ((sVar7 == 2) || (sVar7 == 5)) {
    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xfedfffff;
  }
  if (*(short *)(*(longlong *)(lVar10 + *(longlong *)(param_1 + 0x3f8)) + 8) == 6) {
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffb;
  }
  FUN_1408243e0(**(undefined8 **)(lVar10 + *(longlong *)(param_1 + 0x3f8)),0x12,
                *(undefined4 *)(param_1 + 0x130));
  sVar7 = (*(code *)**(undefined8 **)**(undefined8 **)(lVar10 + *(longlong *)(param_1 + 0x3f8)))();
  if (sVar7 == 0x51) {
    lVar14 = *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x3f8));
    if ((*(short *)(lVar14 + 8) == 2) && (sVar7 = *(short *)(lVar14 + 10), sVar7 != -1)) {
      iVar13 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
      lVar14 = (longlong)iVar13;
      if (-1 < iVar13) {
        do {
          if ((((lVar14 != lVar12) &&
               (puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + lVar14 * 8),
               *(short *)((longlong)puVar5 + 10) == sVar7)) && (*(short *)(puVar5 + 1) == 2)) &&
             (sVar8 = (*(code *)**(undefined8 **)*puVar5)(), sVar8 == 0x51)) break;
          iVar13 = iVar13 + -1;
          lVar14 = lVar14 + -1;
        } while (-1 < lVar14);
      }
      if (iVar13 == -1) {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)sVar7 * 4);
        *puVar1 = *puVar1 & 0xffffefff;
      }
    }
  }
  sVar7 = (*(code *)**(undefined8 **)**(undefined8 **)(lVar10 + *(longlong *)(param_1 + 0x3f8)))();
  if (sVar7 == 0x39) {
    lVar14 = *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x3f8));
    if ((*(short *)(lVar14 + 8) == 5) && (sVar7 = *(short *)(lVar14 + 10), sVar7 != -1)) {
      iVar13 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
      lVar14 = (longlong)iVar13;
      if (-1 < iVar13) {
        do {
          if (((lVar14 != lVar12) &&
              (puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + lVar14 * 8),
              *(short *)((longlong)puVar5 + 10) == sVar7)) &&
             ((*(short *)(puVar5 + 1) == 5 &&
              (sVar8 = (*(code *)**(undefined8 **)*puVar5)(), sVar8 == 0x39)))) break;
          iVar13 = iVar13 + -1;
          lVar14 = lVar14 + -1;
        } while (-1 < lVar14);
      }
      if (iVar13 == -1) {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)sVar7 * 4);
        *puVar1 = *puVar1 & 0xffffdfff;
      }
    }
  }
  sVar7 = (*(code *)**(undefined8 **)**(undefined8 **)(lVar10 + *(longlong *)(param_1 + 0x3f8)))();
  if ((sVar7 == 0x52) &&
     (*(short *)(*(longlong *)(lVar10 + *(longlong *)(param_1 + 0x3f8)) + 8) == 1)) {
    iVar13 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
    lVar14 = (longlong)iVar13;
    if (-1 < iVar13) {
      do {
        if (((lVar14 != lVar12) &&
            (puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + lVar14 * 8),
            *(short *)(puVar5 + 1) == 1)) &&
           (sVar7 = (*(code *)**(undefined8 **)*puVar5)(), sVar7 == 0x52)) break;
        iVar13 = iVar13 + -1;
        lVar14 = lVar14 + -1;
      } while (-1 < lVar14);
    }
    if (iVar13 == -1) {
      *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffffbf | 8;
    }
  }
  sVar7 = (*(code *)**(undefined8 **)**(undefined8 **)(lVar10 + *(longlong *)(param_1 + 0x3f8)))();
  if (sVar7 == 0x54) {
    lVar14 = *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x3f8));
    if ((*(short *)(lVar14 + 8) == 5) && (sVar7 = *(short *)(lVar14 + 10), sVar7 != -1)) {
      iVar13 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
      lVar14 = (longlong)iVar13;
      if (-1 < iVar13) {
        do {
          if (((lVar14 != lVar12) &&
              (puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + lVar14 * 8),
              *(short *)((longlong)puVar5 + 10) == sVar7)) &&
             ((*(short *)(puVar5 + 1) == 5 &&
              (sVar8 = (*(code *)**(undefined8 **)*puVar5)(), sVar8 == 0x54)))) break;
          iVar13 = iVar13 + -1;
          lVar14 = lVar14 + -1;
        } while (-1 < lVar14);
      }
      if (iVar13 == -1) {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)sVar7 * 4);
        *puVar1 = *puVar1 & 0xffffbfff;
      }
    }
  }
  free(*(void **)(lVar10 + *(longlong *)(param_1 + 0x3f8)));
  _Dst = (void *)(*(longlong *)(param_1 + 0x3f8) + lVar10);
  _Src = (void *)((longlong)_Dst + 8);
  memmove(_Dst,_Src,*(longlong *)(param_1 + 0x400) - (longlong)_Src);
  *(longlong *)(param_1 + 0x400) = *(longlong *)(param_1 + 0x400) + -8;
  if ((9 < uVar2) || ((0x241U >> ((int)(short)uVar2 & 0x1fU) & 1) == 0)) {
    lVar10 = *(longlong *)(param_1 + 0x208 + (longlong)*(short *)(param_1 + 0x1e8) * 0x18);
    iVar13 = (int)(*(longlong *)(param_1 + 0x210 + (longlong)*(short *)(param_1 + 0x1e8) * 0x18) -
                   lVar10 >> 2);
    if ((iVar13 != 0) && (iVar3 != -1)) {
      iVar15 = 0;
      iVar13 = iVar13 + -1;
      if (-1 < iVar13) {
        do {
          iVar9 = iVar13 + iVar15 >> 1;
          iVar4 = *(int *)(lVar10 + (longlong)iVar9 * 4);
          if (iVar4 == iVar3) {
            if (iVar9 != -1) {
              iVar13 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) +
                       -1;
              if (iVar13 < 0) goto LAB_140c26af7;
              lVar10 = (longlong)iVar13;
              plVar11 = (longlong *)(*(longlong *)(param_1 + 0x3f8) + lVar10 * 8);
              goto LAB_140c26ad0;
            }
            break;
          }
          if (iVar3 < iVar4) {
            iVar13 = iVar9 + -1;
          }
          else {
            iVar15 = iVar9 + 1;
          }
        } while (iVar15 <= iVar13);
      }
    }
    iVar13 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
    if (-1 < iVar13) {
      lVar10 = (longlong)iVar13;
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x3f8) + lVar10 * 8);
      do {
        if ((*(int *)(*(longlong *)*plVar11 + 0x1c) == iVar3) &&
           ((uVar2 = *(ushort *)((longlong *)*plVar11 + 1), 9 < uVar2 ||
            ((0x241U >> ((int)(short)uVar2 & 0x1fU) & 1) == 0)))) goto LAB_140c26a87;
        plVar11 = plVar11 + -1;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
    }
    FUN_140051210(iVar3,param_1 + 0x288);
  }
LAB_140c26a87:
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffff7f;
  return;
  while( true ) {
    plVar11 = plVar11 + -1;
    lVar10 = lVar10 + -1;
    if (lVar10 < 0) break;
LAB_140c26ad0:
    if ((*(int *)(*(longlong *)*plVar11 + 0x1c) == iVar3) &&
       ((uVar2 = *(ushort *)((longlong *)*plVar11 + 1), 9 < uVar2 ||
        ((0x241U >> ((int)(short)uVar2 & 0x1fU) & 1) == 0)))) goto LAB_140c26a87;
  }
LAB_140c26af7:
  FUN_140050b50(iVar3,param_1 + 0x270);
  goto LAB_140c26a87;
}

