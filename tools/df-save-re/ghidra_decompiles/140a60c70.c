// FUN_140a60c70 @ 140a60c70
// callees:


ulonglong FUN_140a60c70(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  ulonglong in_RAX;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 1) + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3 * 2;
    do {
      uVar1 = *(ushort *)(lVar4 + *(longlong *)(param_1 + 0x80));
      in_RAX = (ulonglong)uVar1;
      if ((uVar1 == 0) ||
         (in_RAX = (ulonglong)(uint)(int)(short)uVar1,
         (int)(short)uVar1 == *(int *)(DAT_141d6cfd0 + 0xa0) - 1U)) {
LAB_140a60cef:
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      in_RAX = *(ulonglong *)(param_1 + 0x98);
      sVar2 = *(short *)(lVar4 + in_RAX);
      if ((sVar2 == 0) ||
         (in_RAX = (ulonglong)(uint)(int)sVar2, (int)sVar2 == *(int *)(DAT_141d6cfd0 + 0xa4) - 1U))
      goto LAB_140a60cef;
      lVar4 = lVar4 + -2;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return in_RAX & 0xffffffffffffff00;
}

