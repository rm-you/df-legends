// FUN_140c4c950 @ 140c4c950
// callees:
//   -> 14000f360 FUN_14000f360
//   -> EXTERNAL:000000e1 memmove
//   -> 140c4cec0 FUN_140c4cec0
//   -> 140c5b050 FUN_140c5b050


void FUN_140c4c950(longlong param_1)

{
  void *pvVar1;
  uint *puVar2;
  void *_Dst;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  iVar9 = *(int *)(param_1 + 0x3c4);
  if (iVar9 != -1) {
    lVar6 = FUN_14000f360(&DAT_141c66fd0,iVar9);
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xfffffdff;
    *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
    iVar8 = (int)(DAT_141c67008 - DAT_141c67000 >> 3) + -1;
    if (-1 < iVar8) {
      lVar7 = (longlong)iVar8;
      do {
        if (*(longlong *)(DAT_141c67000 + lVar7 * 8) == param_1) {
          _Dst = (void *)(DAT_141c67000 + (longlong)iVar8 * 8);
          pvVar1 = (void *)((longlong)_Dst + 8);
          memmove(_Dst,pvVar1,DAT_141c67008 - (longlong)pvVar1);
          DAT_141c67008 = DAT_141c67008 + -8;
          break;
        }
        iVar8 = iVar8 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    bVar4 = false;
    iVar8 = 0;
    uVar10 = DAT_141c67008 - DAT_141c67000 >> 3;
    if (uVar10 != 0) {
      lVar7 = 0;
      do {
        plVar3 = (longlong *)(lVar7 + DAT_141c67000);
        lVar7 = lVar7 + 8;
        if (*(int *)(*plVar3 + 0x3c4) == iVar9) {
          bVar4 = true;
        }
        iVar8 = iVar8 + 1;
      } while ((ulonglong)(longlong)iVar8 < uVar10);
      if (bVar4) goto LAB_140c4ca61;
    }
    if (lVar6 != 0) {
      *(uint *)(lVar6 + 0x110) = *(uint *)(lVar6 + 0x110) & 0xfeffffff;
    }
  }
LAB_140c4ca61:
  if ((*(uint *)(param_1 + 0x110) & 0x1000000) != 0) {
    iVar9 = (int)(DAT_141c67008 - DAT_141c67000 >> 3) + -1;
    if (-1 < iVar9) {
      lVar6 = (longlong)iVar9 * 8;
      lVar7 = DAT_141c67000;
      lVar11 = lVar6;
      do {
        if (*(int *)(*(longlong *)(lVar7 + lVar6) + 0x3c4) == *(int *)(param_1 + 0x130)) {
          *(undefined4 *)(*(longlong *)(lVar7 + lVar6) + 0x3c4) = 0xffffffff;
          puVar2 = (uint *)(*(longlong *)(DAT_141c67000 + lVar6) + 0x110);
          *puVar2 = *puVar2 & 0xfffffdff;
          cVar5 = FUN_140c4cec0(*(undefined8 *)(DAT_141c67000 + lVar6));
          if (cVar5 == '\0') {
            FUN_140c5b050(*(undefined8 *)(DAT_141c67000 + lVar6));
          }
          pvVar1 = (void *)(DAT_141c67000 + lVar11 + 8);
          memmove((void *)(DAT_141c67000 + lVar11),pvVar1,DAT_141c67008 - (longlong)pvVar1);
          DAT_141c67008 = DAT_141c67008 + -8;
          lVar7 = DAT_141c67000;
        }
        lVar11 = lVar11 + -8;
        lVar6 = lVar6 + -8;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xfeffffff;
  }
  return;
}

