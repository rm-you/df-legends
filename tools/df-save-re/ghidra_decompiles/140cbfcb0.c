// FUN_140cbfcb0 @ 140cbfcb0
// callees:


int FUN_140cbfcb0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa78);
  if (lVar1 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_2;
  iVar2 = *(int *)(lVar3 * 0x1c + 0xac + lVar1) - *(int *)(lVar3 * 0x1c + 0xbc + lVar1);
  lVar1 = *(longlong *)(param_1 + 0x8c8);
  if (lVar1 != 0) {
    iVar2 = (*(int *)(lVar1 + 0x30 + lVar3 * 4) * iVar2) / 100 + *(int *)(lVar1 + 100 + lVar3 * 4);
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  return iVar2;
}

