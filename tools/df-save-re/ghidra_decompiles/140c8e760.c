// FUN_140c8e760 @ 140c8e760
// callees:


ulonglong FUN_140c8e760(longlong param_1)

{
  uint uVar1;
  longlong *in_RAX;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
  if (-1 < iVar2) {
    lVar3 = (longlong)iVar2;
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x3f8) + lVar3 * 8);
    do {
      in_RAX = (longlong *)*puVar4;
      if ((*(uint *)(*in_RAX + 0x10) & 0x400000) != 0) goto LAB_140c8e7e7;
      puVar4 = puVar4 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  iVar2 = (int)(*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2) + -1;
  if (-1 < iVar2) {
    puVar5 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)iVar2 * 4);
    do {
      uVar1 = *puVar5;
      in_RAX = (longlong *)(ulonglong)uVar1;
      if (((uVar1 & 2) == 0) && ((uVar1 & 1) != 0)) {
LAB_140c8e7e7:
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      puVar5 = puVar5 + -1;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}

