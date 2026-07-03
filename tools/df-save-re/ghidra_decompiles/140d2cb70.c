// FUN_140d2cb70 @ 140d2cb70
// callees:
//   -> 140152680 FUN_140152680


ulonglong FUN_140d2cb70(longlong param_1,short param_2,short param_3,short param_4,
                       undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                       undefined4 param_9)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
     ((((int)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)) &&
      ((in_RAX = (ulonglong)(uint)(int)param_4, (int)param_4 < *(int *)(param_1 + 0x1160ec) &&
       (*(longlong *)(param_1 + 0x1160b0) != 0)))))) {
    in_RAX = *(ulonglong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8) +
              ((longlong)param_3 >> 4) * 8);
    lVar1 = *(longlong *)(in_RAX + (longlong)param_4 * 8);
    if (lVar1 != 0) {
      uVar3 = (int)param_3 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      uVar4 = (int)param_2 & 0x8000000f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
      }
      uVar2 = FUN_140152680(lVar1,uVar4 & 0xffff,uVar3,param_5,param_6,param_7,param_8,param_9);
      return uVar2;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

