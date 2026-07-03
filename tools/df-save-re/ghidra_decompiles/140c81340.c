// FUN_140c81340 @ 140c81340
// callees:
//   -> 14000d840 FUN_14000d840


short FUN_140c81340(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  sVar4 = 0;
  iVar6 = (int)(*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2) + -1;
  if (-1 < iVar6) {
    plVar1 = *(longlong **)(param_1 + 0x5d8);
    do {
      sVar5 = (short)iVar6;
      if (-1 < sVar5) {
        lVar2 = *plVar1;
        if (((ulonglong)(longlong)sVar5 < (ulonglong)(plVar1[1] - lVar2 >> 3)) &&
           (cVar3 = FUN_14000d840(*(longlong *)(lVar2 + (longlong)sVar5 * 8) + 0x48,9),
           cVar3 != '\0')) {
          sVar4 = sVar4 + 1;
        }
      }
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return sVar4;
}

