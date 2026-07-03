// FUN_1402b5c80 @ 1402b5c80
// callees:


undefined8 FUN_1402b5c80(longlong param_1,short param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  
  uVar4 = param_2 - 0xdb;
  if (uVar4 < 200) {
    lVar1 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if ((lVar1 != 0) && (param_3 != -1)) {
      iVar5 = 0;
      iVar3 = (int)lVar1 + -1;
      if (-1 < iVar3) {
        do {
          iVar2 = iVar3 + iVar5 >> 1;
          lVar1 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar2 * 8);
          if (*(int *)(lVar1 + 0xe0) == param_3) {
            if (lVar1 == 0) {
              return 0;
            }
            param_3 = (int)*(short *)(lVar1 + 2);
            goto LAB_1402b5d19;
          }
          if (param_3 < *(int *)(lVar1 + 0xe0)) {
            iVar3 = iVar2 + -1;
          }
          else {
            iVar5 = iVar2 + 1;
          }
        } while (iVar5 <= iVar3);
      }
    }
  }
  else {
    uVar4 = param_2 - 0x13;
LAB_1402b5d19:
    if (((-1 < param_3) &&
        ((ulonglong)(longlong)param_3 <
         (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3))) &&
       (-1 < (short)uVar4)) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_3 * 8);
      if ((ulonglong)(longlong)(short)uVar4 <
          (ulonglong)(*(longlong *)(lVar1 + 0x24b8) - *(longlong *)(lVar1 + 0x24b0) >> 3)) {
        return *(undefined8 *)(*(longlong *)(lVar1 + 0x24b0) + (longlong)(short)uVar4 * 8);
      }
    }
  }
  return 0;
}

