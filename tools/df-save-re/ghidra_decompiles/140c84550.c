// FUN_140c84550 @ 140c84550
// callees:


ulonglong FUN_140c84550(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong in_RAX;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = *(uint *)(param_1 + 0x140);
  if (uVar3 != 0xffffffff) {
    in_RAX = DAT_141c53720 - DAT_141c53718 >> 3;
    if (in_RAX != 0) {
      iVar6 = 0;
      iVar5 = (int)in_RAX + -1;
      if (-1 < iVar5) {
        do {
          iVar4 = iVar5 + iVar6 >> 1;
          lVar2 = *(longlong *)(DAT_141c53718 + (longlong)iVar4 * 8);
          uVar1 = *(uint *)(lVar2 + 4);
          in_RAX = (ulonglong)uVar1;
          if (uVar1 == uVar3) {
            if ((lVar2 != 0) && (-1 < param_2)) {
              uVar3 = param_2 >> 3;
              in_RAX = (ulonglong)uVar3;
              if ((-1 < (int)uVar3) &&
                 (((int)uVar3 < *(int *)(*(longlong *)(lVar2 + 8) + 0x3a8) &&
                  (in_RAX = *(ulonglong *)(*(longlong *)(lVar2 + 8) + 0x3a0),
                  (*(byte *)((longlong)(int)uVar3 + in_RAX) & (byte)(1 << ((byte)param_2 & 7))) != 0
                  )))) {
                return CONCAT71((int7)(in_RAX >> 8),1);
              }
            }
            break;
          }
          if ((int)uVar3 < (int)uVar1) {
            iVar5 = iVar4 + -1;
          }
          else {
            iVar6 = iVar4 + 1;
          }
        } while (iVar6 <= iVar5);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

