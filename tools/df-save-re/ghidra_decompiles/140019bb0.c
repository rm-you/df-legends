// FUN_140019bb0 @ 140019bb0
// callees:
//   -> 14015bcb0 FUN_14015bcb0


void FUN_140019bb0(longlong param_1,short *param_2,short *param_3,short param_4,short param_5,
                  short param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((((param_4 < 0) || (*(int *)(param_1 + 0x1160e4) <= (int)param_4)) || (param_5 < 0)) ||
      ((*(int *)(param_1 + 0x1160e8) <= (int)param_5 || (param_6 < 0)))) ||
     ((*(int *)(param_1 + 0x1160ec) <= (int)param_6 ||
      ((*(longlong *)(param_1 + 0x1160b0) == 0 ||
       (lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_4 >> 4) * 8)
                   + ((longlong)param_5 >> 4) * 8) + (longlong)param_6 * 8), lVar1 == 0)))))) {
    iVar2 = (int)param_4 / 0x30 + *(int *)(param_1 + 0x1160f0);
    *param_2 = (short)((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4);
    iVar2 = (int)param_5 / 0x30 + *(int *)(param_1 + 0x1160f4);
    *param_3 = (short)((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4);
    if (*param_2 < 0) {
      *param_2 = 0;
    }
    if (*param_3 < 0) {
      *param_3 = 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x119b60) + 0xa0) <= (int)*param_2) {
      *param_2 = *(short *)(*(longlong *)(param_1 + 0x119b60) + 0xa0) + -1;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x119b60) + 0xa4) <= (int)*param_3) {
      *param_3 = *(short *)(*(longlong *)(param_1 + 0x119b60) + 0xa4) + -1;
    }
  }
  else {
    uVar3 = (int)param_5 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    uVar4 = (int)param_4 & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    FUN_14015bcb0(lVar1,param_2,param_3,uVar4,(short)uVar3);
  }
  return;
}

