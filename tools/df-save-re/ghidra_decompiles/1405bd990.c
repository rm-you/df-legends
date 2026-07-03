// FUN_1405bd990 @ 1405bd990
// callees:
//   -> 1405bd1c0 FUN_1405bd1c0


void FUN_1405bd990(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = (int)(DAT_141c33c00 - DAT_141c33bf8 >> 3) + -1;
  if (-1 < iVar7) {
    lVar8 = (longlong)iVar7 * 8;
    lVar5 = DAT_141d69520;
    lVar6 = DAT_141c33bf8;
    do {
      lVar4 = *(longlong *)(lVar8 + lVar6);
      sVar1 = *(short *)(lVar4 + 10);
      sVar2 = *(short *)(lVar4 + 0xe);
      sVar3 = *(short *)(lVar4 + 0xc);
      if (((((sVar1 < 0) || (DAT_141d69554 <= sVar1)) || (sVar3 < 0)) ||
          ((DAT_141d69558 <= sVar3 || (sVar2 < 0)))) ||
         ((DAT_141d6955c <= sVar2 ||
          ((lVar5 == 0 ||
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(lVar5 + ((longlong)sVar1 >> 4) * 8) + ((longlong)sVar3 >> 4) * 8) +
             (longlong)sVar2 * 8) == 0)))))) {
        FUN_1405bd1c0();
        lVar5 = DAT_141d69520;
        lVar6 = DAT_141c33bf8;
      }
      lVar8 = lVar8 + -8;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  return;
}

