// FUN_1402b5bf0 @ 1402b5bf0
// callees:


int FUN_1402b5bf0(undefined8 param_1,short param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((ushort)(param_2 - 0x13U) < 200) {
    return param_3;
  }
  if ((((ushort)(param_2 - 0xdbU) < 200) && (lVar1 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3, lVar1 != 0)
      ) && (param_3 != -1)) {
    iVar4 = 0;
    iVar3 = (int)lVar1 + -1;
    if (-1 < iVar3) {
      do {
        iVar2 = iVar3 + iVar4 >> 1;
        lVar1 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar2 * 8);
        if (*(int *)(lVar1 + 0xe0) == param_3) {
          if (lVar1 == 0) {
            return -1;
          }
          return (int)*(short *)(lVar1 + 2);
        }
        if (param_3 < *(int *)(lVar1 + 0xe0)) {
          iVar3 = iVar2 + -1;
        }
        else {
          iVar4 = iVar2 + 1;
        }
      } while (iVar4 <= iVar3);
    }
  }
  return -1;
}

