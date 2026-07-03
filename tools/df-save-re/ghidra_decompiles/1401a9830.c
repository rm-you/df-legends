// FUN_1401a9830 @ 1401a9830
// callees:


void FUN_1401a9830(longlong param_1)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  iVar6 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1;
  lVar9 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9 * 8);
      sVar2 = *(short *)(lVar5 + 0x10);
      sVar3 = *(short *)(lVar5 + 0x20);
      sVar4 = *(short *)(lVar5 + 0x1c);
      if ((((((sVar2 < 0) || (DAT_141d69554 <= sVar2)) || (sVar4 < 0)) ||
           ((DAT_141d69558 <= sVar4 || (sVar3 < 0)))) ||
          ((DAT_141d6955c <= sVar3 ||
           ((DAT_141d69520 == 0 ||
            (*(longlong *)
              (*(longlong *)
                (*(longlong *)(DAT_141d69520 + ((longlong)sVar2 >> 4) * 8) +
                ((longlong)sVar4 >> 4) * 8) + (longlong)sVar3 * 8) == 0)))))) &&
         (iVar6 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1,
         -1 < iVar6)) {
        lVar7 = (longlong)iVar6;
        plVar8 = (longlong *)(*(longlong *)(param_1 + 8) + lVar7 * 8);
        do {
          if (*plVar8 == lVar5) {
            lVar5 = (longlong)iVar6 * 8;
            puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar6 * 8) + 0x24
                             );
            *puVar1 = *puVar1 | 0x20;
            (**(code **)(**(longlong **)(lVar5 + *(longlong *)(param_1 + 8)) + 0x230))();
            plVar8 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 8));
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x300))(plVar8,1);
            }
            break;
          }
          iVar6 = iVar6 + -1;
          plVar8 = plVar8 + -1;
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
      }
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  return;
}

