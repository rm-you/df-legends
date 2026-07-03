// FUN_1408a75e0 @ 1408a75e0
// callees:


void FUN_1408a75e0(longlong param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar6 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
  lVar9 = (longlong)iVar6;
  lVar10 = DAT_141d69520;
  if (-1 < iVar6) {
    do {
      lVar4 = *(longlong *)(param_1 + 8);
      lVar5 = *(longlong *)(lVar4 + lVar9 * 8);
      sVar1 = *(short *)(lVar5 + 8);
      sVar2 = *(short *)(lVar5 + 0x10);
      sVar3 = *(short *)(lVar5 + 0xc);
      if ((((((sVar1 < 0) || (DAT_141d69554 <= sVar1)) || (sVar3 < 0)) ||
           ((DAT_141d69558 <= sVar3 || (sVar2 < 0)))) ||
          ((DAT_141d6955c <= sVar2 ||
           ((lVar10 == 0 ||
            (*(longlong *)
              (*(longlong *)
                (*(longlong *)(lVar10 + ((longlong)sVar1 >> 4) * 8) + ((longlong)sVar3 >> 4) * 8) +
              (longlong)sVar2 * 8) == 0)))))) &&
         (iVar6 = (int)(*(longlong *)(param_1 + 0x10) - lVar4 >> 3) + -1, -1 < iVar6)) {
        lVar7 = (longlong)iVar6;
        plVar8 = (longlong *)(lVar4 + lVar7 * 8);
        do {
          if (*plVar8 == lVar5) {
            plVar8 = *(longlong **)(lVar4 + (longlong)iVar6 * 8);
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x20))(plVar8,1);
              lVar10 = DAT_141d69520;
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

