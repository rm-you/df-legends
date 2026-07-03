// FUN_140d43470 @ 140d43470
// callees:


void FUN_140d43470(longlong param_1,short param_2,short param_3,short param_4,ushort param_5,
                  byte param_6)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  if (((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
      (((int)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)))) &&
     (((int)param_4 < *(int *)(param_1 + 0x1160ec) &&
      ((*(longlong *)(param_1 + 0x1160b0) != 0 &&
       (puVar2 = *(uint **)(*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8) +
                             ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8),
       puVar2 != (uint *)0x0)))))) {
    uVar4 = (int)param_3 & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    uVar5 = (int)param_2 & 0x8000000f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
    }
    lVar3 = (longlong)(short)uVar5 * 0x10 + (longlong)(short)uVar4;
    uVar1 = *(ushort *)((longlong)puVar2 + lVar3 * 2 + 0x1594);
    if (uVar1 < param_5) {
      *(ushort *)((longlong)puVar2 + lVar3 * 2 + 0x1594) =
           uVar1 + ((ushort)(param_5 - uVar1) >> (param_6 & 0x1f));
      if ((ushort)(param_5 - uVar1) >> (param_6 & 0x1f) == 0) {
        return;
      }
    }
    else {
      *(ushort *)((longlong)puVar2 + lVar3 * 2 + 0x1594) =
           uVar1 - ((ushort)(uVar1 - param_5) >> (param_6 & 0x1f));
      if ((ushort)(uVar1 - param_5) >> (param_6 & 0x1f) == 0) {
        return;
      }
    }
    *puVar2 = *puVar2 | 2;
    puVar2 = (uint *)(DAT_141d6cf68 + (longlong)(short)puVar2[0x23] * 4);
    *puVar2 = *puVar2 | 5;
  }
  return;
}

