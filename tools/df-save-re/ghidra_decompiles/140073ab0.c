// FUN_140073ab0 @ 140073ab0
// callees:


void FUN_140073ab0(longlong param_1,int param_2)

{
  int *piVar1;
  
  if ((*(longlong *)(param_1 + 0xa78) != 0) && (*(longlong *)(param_1 + 0xd60) == 0)) {
    if ((*(int *)(param_1 + 0x1260) < 8) ||
       ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 7) & 4) == 0)) {
      if ((*(uint *)(param_1 + 0x810) & 0x2000000) != 0) {
        return;
      }
      if ((*(uint *)(param_1 + 0x80c) & 0x2000000) == 0) {
        return;
      }
    }
    else if ((*(uint *)(param_1 + 0x810) & 0x2000000) != 0) {
      return;
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa78) + 0x378);
    *piVar1 = *piVar1 + param_2;
    if (*(int *)(*(longlong *)(param_1 + 0xa78) + 0x378) < 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xa78) + 0x378) = 0;
    }
    if (100 < *(int *)(*(longlong *)(param_1 + 0xa78) + 0x378)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xa78) + 0x378) = 100;
    }
  }
  return;
}

