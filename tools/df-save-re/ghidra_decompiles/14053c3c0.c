// FUN_14053c3c0 @ 14053c3c0
// callees:


longlong FUN_14053c3c0(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  puVar4 = *(undefined8 **)(param_1 + 200);
  if (puVar4 < *(undefined8 **)(param_1 + 0xd0)) {
    while ((((int *)*puVar4)[6] & param_2) == 0) {
      puVar4 = puVar4 + 1;
      if (*(undefined8 **)(param_1 + 0xd0) <= puVar4) {
        return 0;
      }
    }
    iVar1 = *(int *)*puVar4;
    if (((*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) &
         0xfffffffffffffff8U) != 0) && (iVar1 != -1)) {
      iVar7 = 0;
      iVar6 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) >> 3
                   ) + -1;
      if (-1 < iVar6) {
        do {
          iVar5 = iVar6 + iVar7 >> 1;
          lVar3 = *(longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x168) + (longlong)iVar5 * 8);
          iVar2 = *(int *)(lVar3 + 0x88);
          if (iVar2 == iVar1) {
            return lVar3;
          }
          if (iVar1 < iVar2) {
            iVar6 = iVar5 + -1;
          }
          else {
            iVar7 = iVar5 + 1;
          }
        } while (iVar7 <= iVar6);
      }
    }
  }
  return 0;
}

