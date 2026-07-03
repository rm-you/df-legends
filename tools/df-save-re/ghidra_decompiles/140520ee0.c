// FUN_140520ee0 @ 140520ee0
// callees:
//   -> 14007f4e0 FUN_14007f4e0
//   -> 140050b50 FUN_140050b50


void FUN_140520ee0(undefined8 param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_3 != -1) && (param_4 != -1)) {
    lVar5 = DAT_141c53720 - DAT_141c53718 >> 3;
    if (lVar5 != 0) {
      iVar4 = 0;
      iVar3 = (int)lVar5 + -1;
      if (-1 < iVar3) {
        do {
          iVar2 = iVar3 + iVar4 >> 1;
          lVar1 = *(longlong *)(DAT_141c53718 + (longlong)iVar2 * 8);
          if (*(int *)(lVar1 + 4) == param_3) goto LAB_140520f58;
          if (param_3 < *(int *)(lVar1 + 4)) {
            iVar3 = iVar2 + -1;
          }
          else {
            iVar4 = iVar2 + 1;
          }
        } while (iVar4 <= iVar3);
      }
    }
    lVar1 = 0;
LAB_140520f58:
    if (lVar5 != 0) {
      iVar4 = 0;
      iVar3 = (int)lVar5 + -1;
      if (-1 < iVar3) {
        do {
          iVar2 = iVar3 + iVar4 >> 1;
          lVar5 = *(longlong *)(DAT_141c53718 + (longlong)iVar2 * 8);
          if (*(int *)(lVar5 + 4) == param_4) goto LAB_140520f97;
          if (param_4 < *(int *)(lVar5 + 4)) {
            iVar3 = iVar2 + -1;
          }
          else {
            iVar4 = iVar2 + 1;
          }
        } while (iVar4 <= iVar3);
      }
    }
    lVar5 = 0;
LAB_140520f97:
    if ((lVar1 != 0) && (lVar5 != 0)) {
      lVar1 = FUN_14007f4e0(lVar1 + 0x1018,param_4);
      lVar5 = FUN_14007f4e0(lVar5 + 0x1018,param_3);
      FUN_140050b50(param_2,lVar1 + 0x10);
      FUN_140050b50(param_2,lVar5 + 0x10);
    }
  }
  return;
}

