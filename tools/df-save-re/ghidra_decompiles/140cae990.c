// FUN_140cae990 @ 140cae990
// callees:


int FUN_140cae990(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x378) != -1) {
    if (DAT_1416b1974 == -1) goto LAB_140cae9fb;
    if (DAT_1410b67dc < 2) {
      iVar1 = (DAT_1416b1980 - *(int *)(param_1 + 0x374)) + -1;
      iVar2 = (DAT_1416b1974 - *(int *)(param_1 + 0x378)) + 0x62700;
      goto LAB_140cae9e7;
    }
  }
  if (DAT_1416b1974 != -1) {
    iVar1 = DAT_1416b1980 - *(int *)(param_1 + 0x374);
    iVar2 = DAT_1416b1974;
LAB_140cae9e7:
    return iVar2 / 0x4b0 + iVar1 * 0x150;
  }
LAB_140cae9fb:
  return (DAT_1416b1980 - *(int *)(param_1 + 0x374)) * 0x150;
}

