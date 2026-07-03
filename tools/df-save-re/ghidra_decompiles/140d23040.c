// FUN_140d23040 @ 140d23040
// callees:


void FUN_140d23040(longlong param_1,short param_2,short param_3,short param_4,short param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
      (((int)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)))) &&
     (((int)param_4 < *(int *)(param_1 + 0x1160ec) &&
      ((*(longlong *)(param_1 + 0x1160b0) != 0 &&
       (lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8)
                   + ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar1 != 0)))))) {
    iVar2 = ((int)((param_5 * 3 >> 0x1f & 3U) + param_5 * 3) >> 2) + 10000;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (60000 < iVar2) {
      iVar2 = 60000;
    }
    uVar4 = (int)param_2 & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    uVar3 = (int)param_3 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    *(short *)(lVar1 + 0x1794 + ((longlong)(int)uVar4 * 0x10 + (longlong)(int)uVar3) * 2) =
         (short)iVar2;
  }
  return;
}

