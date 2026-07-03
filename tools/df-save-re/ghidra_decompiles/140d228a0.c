// FUN_140d228a0 @ 140d228a0
// callees:


void FUN_140d228a0(longlong param_1,short param_2,short param_3,short param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
      (((int)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)))) &&
     (((int)param_4 < *(int *)(param_1 + 0x1160ec) &&
      ((*(longlong *)(param_1 + 0x1160b0) != 0 &&
       (puVar1 = *(uint **)(*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8) +
                             ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8),
       puVar1 != (uint *)0x0)))))) {
    uVar3 = (int)param_2 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    uVar2 = (int)param_3 & 0x8000000f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
    }
    puVar1[(longlong)(int)uVar3 * 0x10 + (longlong)(int)uVar2 + 0xa5] =
         puVar1[(longlong)(int)uVar3 * 0x10 + (longlong)(int)uVar2 + 0xa5] | param_5;
    if ((DAT_1410b67dc == 0) && (((param_5 & 0x70) != 0 || ((param_5 - 0x80 & 0xffffff7f) == 0)))) {
      *puVar1 = *puVar1 | 1;
      puVar1[0x12] = 0;
    }
  }
  return;
}

