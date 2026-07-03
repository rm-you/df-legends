// FUN_140073a50 @ 140073a50
// callees:


ulonglong FUN_140073a50(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x118) >> 10;
  uVar2 = (ulonglong)uVar1;
  if ((((uVar1 & 1) == 0) && (*(longlong *)(param_1 + 0xd60) == 0)) &&
     ((*(uint *)(param_1 + 0x118) >> 0xc & 1) == 0)) {
    if ((8 < *(int *)(param_1 + 0x1260)) &&
       (uVar2 = *(ulonglong *)(param_1 + 0x1258), (*(byte *)(uVar2 + 8) & 0x20) != 0)) {
      return (ulonglong)(~(*(byte *)(param_1 + 0x810) >> 6) & 1);
    }
    if (((*(byte *)(param_1 + 0x810) & 0x40) == 0) && ((*(byte *)(param_1 + 0x80c) & 0x40) != 0)) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

