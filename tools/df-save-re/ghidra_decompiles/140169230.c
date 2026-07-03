// FUN_140169230 @ 140169230
// callees:


void FUN_140169230(longlong param_1,short param_2,short param_3,short param_4,char *param_5,
                  uint *param_6)

{
  longlong lVar1;
  char cVar2;
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
    uVar4 = (int)param_2 & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    uVar3 = (int)param_3 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    uVar4 = *(uint *)(lVar1 + 0x294 + ((longlong)(short)uVar4 * 0x10 + (longlong)(short)uVar3) * 4);
    *param_6 = uVar4 & 0x200000;
    *param_5 = '\0';
    cVar2 = *param_5;
    if ((uVar4 & 1) != 0) {
      cVar2 = '\x01';
    }
    *param_5 = cVar2;
    if ((uVar4 & 2) != 0) {
      *param_5 = *param_5 + '\x02';
    }
    if ((uVar4 & 4) != 0) {
      *param_5 = *param_5 + '\x04';
    }
  }
  return;
}

