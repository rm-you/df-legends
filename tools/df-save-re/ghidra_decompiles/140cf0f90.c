// FUN_140cf0f90 @ 140cf0f90
// callees:


longlong FUN_140cf0f90(undefined8 param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  
  sVar6 = param_3 - param_3 % 0x30;
  sVar8 = param_2 - param_2 % 0x30;
  if (((((-1 < sVar8) && (sVar8 < DAT_141d69554)) && (-1 < sVar6)) &&
      ((sVar6 < DAT_141d69558 && (DAT_141d69540 != 0)))) &&
     (lVar2 = *(longlong *)
               (*(longlong *)(DAT_141d69540 + ((longlong)sVar8 >> 4) * 8) +
               ((longlong)sVar6 >> 4) * 8), lVar2 != 0)) {
    for (plVar7 = *(longlong **)(lVar2 + 0x1a68); plVar7 < *(longlong **)(lVar2 + 0x1a70);
        plVar7 = plVar7 + 1) {
      lVar3 = *plVar7;
      sVar6 = *(short *)(lVar3 + 4);
      if (((sVar6 == param_2) && (*(short *)(lVar3 + 6) == param_3)) &&
         (*(short *)(lVar3 + 8) == param_4)) {
        return lVar3;
      }
      plVar4 = *(longlong **)(lVar3 + 0x40);
      if (plVar4 != (longlong *)0x0) {
        iVar1 = *(int *)((longlong)plVar4 + 0x2c);
        sVar8 = (short)((int)plVar4[6] / 2) +
                ((*(short *)(lVar3 + 6) / 0x30) * 0x30 - *(short *)(lVar3 + 6)) + param_3 % 0x30;
        sVar10 = param_4 - *(short *)(lVar3 + 8);
        sVar6 = (short)(iVar1 / 2) + ((sVar6 / 0x30) * 0x30 - sVar6) + param_2 % 0x30;
        if ((((-1 < sVar6) && (iVar9 = (int)sVar6, iVar9 < iVar1)) && (-1 < sVar8)) &&
           (iVar5 = (int)sVar8, iVar5 < (int)plVar4[6])) {
          if (((-1 < sVar10) && ((int)sVar10 < (int)plVar4[5])) &&
             ((*(byte *)((longlong)(iVar5 * iVar1 + iVar9) +
                        *(longlong *)(*plVar4 + (longlong)sVar10 * 8)) & 0x7f) != 0)) {
            return lVar3;
          }
          if (((-(int)plVar4[8] <= (int)sVar10) && (sVar10 < 0)) &&
             ((*(byte *)((longlong)(iVar5 * iVar1 + iVar9) +
                        *(longlong *)(plVar4[7] + (longlong)(-1 - sVar10) * 8)) & 0x7f) != 0)) {
            return lVar3;
          }
        }
      }
    }
  }
  return 0;
}

