// FUN_1401aa750 @ 1401aa750
// callees:


ulonglong FUN_1401aa750(longlong param_1,short param_2,short param_3,short param_4)

{
  ulonglong in_RAX;
  ulonglong *puVar1;
  int iVar2;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x1f0) - *(longlong *)(param_1 + 0x1e8) >> 3) + -1;
  if (-1 < iVar2) {
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x1e8) + (longlong)iVar2 * 8);
    do {
      in_RAX = *puVar1;
      if ((((*(int *)(in_RAX + 0x10) == (int)param_2) && (*(int *)(in_RAX + 0x1c) == (int)param_3))
          && (*(int *)(in_RAX + 0x20) == (int)param_4)) && ((*(byte *)(in_RAX + 0x178) & 1) != 0)) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      puVar1 = puVar1 + -1;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return in_RAX & 0xffffffffffffff00;
}

