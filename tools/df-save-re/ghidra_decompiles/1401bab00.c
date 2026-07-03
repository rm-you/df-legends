// FUN_1401bab00 @ 1401bab00
// callees:


longlong FUN_1401bab00(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  
  iVar6 = 0;
  if (*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x168);
    plVar7 = plVar2;
    do {
      lVar3 = *(longlong *)(*plVar7 + 0x90);
      iVar5 = (int)(*(longlong *)(*plVar7 + 0x98) - lVar3 >> 2);
      if ((iVar5 != 0) && (param_2 != -1)) {
        iVar8 = 0;
        iVar5 = iVar5 + -1;
        if (-1 < iVar5) {
          do {
            iVar4 = iVar5 + iVar8 >> 1;
            iVar1 = *(int *)(lVar3 + (longlong)iVar4 * 4);
            if (iVar1 == param_2) {
              if (iVar4 != -1) {
                return plVar2[iVar6];
              }
              break;
            }
            if (param_2 < iVar1) {
              iVar5 = iVar4 + -1;
            }
            else {
              iVar8 = iVar4 + 1;
            }
          } while (iVar8 <= iVar5);
        }
      }
      iVar6 = iVar6 + 1;
      plVar7 = plVar7 + 1;
    } while ((ulonglong)(longlong)iVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x170) - (longlong)plVar2 >> 3));
  }
  return 0;
}

