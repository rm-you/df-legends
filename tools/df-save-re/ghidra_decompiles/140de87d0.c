// FUN_140de87d0 @ 140de87d0
// callees:


undefined4 FUN_140de87d0(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  if (((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
      (((int)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)))) &&
     (((int)param_4 < *(int *)(param_1 + 0x1160ec) &&
      ((*(longlong *)(param_1 + 0x1160b0) != 0 &&
       (lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8)
                   + ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar1 != 0)))))) {
    uVar3 = (int)param_2 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    uVar2 = (int)param_3 & 0x8000000f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
    }
    if ((*(uint *)(lVar1 + 0x294 + ((longlong)(int)uVar3 * 0x10 + (longlong)(int)uVar2) * 4) &
        0x20000000) != 0) {
      return *(undefined4 *)(lVar1 + 0x3c);
    }
  }
  return 0xffffffff;
}

