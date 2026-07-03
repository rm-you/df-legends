// FUN_140765280 @ 140765280
// callees:
//   -> 1407653b0 FUN_1407653b0


void FUN_140765280(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5,
                  undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_3 != -1) || (param_5 != -1)) {
    lVar5 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if ((lVar5 != 0) && (param_3 != -1)) {
      iVar4 = 0;
      iVar2 = (int)lVar5 + -1;
      if (-1 < iVar2) {
        do {
          iVar1 = iVar2 + iVar4 >> 1;
          lVar3 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar1 * 8);
          if (*(int *)(lVar3 + 0xe0) == param_3) goto LAB_14076531a;
          if (param_3 < *(int *)(lVar3 + 0xe0)) {
            iVar2 = iVar1 + -1;
          }
          else {
            iVar4 = iVar1 + 1;
          }
        } while (iVar4 <= iVar2);
      }
    }
    lVar3 = 0;
LAB_14076531a:
    if ((lVar5 != 0) && (param_5 != -1)) {
      iVar4 = 0;
      iVar2 = (int)lVar5 + -1;
      if (-1 < iVar2) {
        do {
          iVar1 = iVar2 + iVar4 >> 1;
          lVar5 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar1 * 8);
          if (*(int *)(lVar5 + 0xe0) == param_5) goto LAB_14076535b;
          if (param_5 < *(int *)(lVar5 + 0xe0)) {
            iVar2 = iVar1 + -1;
          }
          else {
            iVar4 = iVar1 + 1;
          }
        } while (iVar4 <= iVar2);
      }
    }
    lVar5 = 0;
LAB_14076535b:
    if ((lVar3 != 0) || (lVar5 != 0)) {
      FUN_1407653b0(param_1,param_2,lVar3,param_4,lVar5,param_6,param_7);
    }
  }
  return;
}

