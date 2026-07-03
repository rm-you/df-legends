// FUN_140cbfc60 @ 140cbfc60
// callees:


int FUN_140cbfc60(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x8c8);
  lVar3 = (longlong)param_2;
  iVar2 = *(int *)(lVar3 * 0x1c + 0x5e4 + param_1) - *(int *)(lVar3 * 0x1c + 0x5f4 + param_1);
  if (lVar1 != 0) {
    iVar2 = (*(int *)(lVar1 + lVar3 * 4) * iVar2) / 100 + *(int *)(lVar1 + 0x18 + lVar3 * 4);
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  return iVar2;
}

