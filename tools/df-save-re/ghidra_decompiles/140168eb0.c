// FUN_140168eb0 @ 140168eb0
// callees:


ulonglong FUN_140168eb0(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong lVar1;
  ulonglong in_RAX;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  if ((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
     ((((int)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)) &&
      ((in_RAX = (ulonglong)(uint)(int)param_4, (int)param_4 < *(int *)(param_1 + 0x1160ec) &&
       (*(longlong *)(param_1 + 0x1160b0) != 0)))))) {
    in_RAX = *(ulonglong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8) +
              ((longlong)param_3 >> 4) * 8);
    lVar1 = *(longlong *)(in_RAX + (longlong)param_4 * 8);
    if (lVar1 != 0) {
      bVar4 = 0;
      uVar3 = (int)param_2 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      uVar2 = (int)param_3 & 0x8000000f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
      }
      uVar3 = *(uint *)(lVar1 + 0x294 + ((longlong)(short)uVar3 * 0x10 + (longlong)(short)uVar2) * 4
                       );
      if ((uVar3 >> 0x15 & 1) != 0) {
        bVar4 = (uVar3 & 1) != 0;
        if ((uVar3 & 2) != 0) {
          bVar4 = bVar4 | 2;
        }
        if ((uVar3 & 4) != 0) {
          bVar4 = bVar4 | 4;
        }
      }
      return (ulonglong)bVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

