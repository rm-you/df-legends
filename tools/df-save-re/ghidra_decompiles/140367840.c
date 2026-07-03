// FUN_140367840 @ 140367840
// callees:


ulonglong FUN_140367840(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong lVar1;
  ushort uVar2;
  short sVar4;
  ulonglong uVar3;
  
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x1160e4) <= (int)param_2)) || (param_3 < 0)) ||
     (((*(int *)(param_1 + 0x1160e8) <= (int)param_3 || (param_4 < 0)) ||
      ((*(int *)(param_1 + 0x1160ec) <= (int)param_4 ||
       ((*(longlong *)(param_1 + 0x1160b0) == 0 ||
        (uVar3 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8) +
                  ((longlong)param_3 >> 4) * 8), *(longlong *)(uVar3 + (longlong)param_4 * 8) == 0))
       )))))) {
    uVar2 = param_2 >> 4;
    uVar3 = (ulonglong)uVar2;
    sVar4 = param_3 >> 4;
    if ((-1 < param_2) &&
       ((((-1 < (short)uVar2 &&
          (uVar3 = (ulonglong)(uint)(int)(short)uVar2,
          (int)(short)uVar2 < *(int *)(param_1 + 0x1160d8))) && (-1 < param_3)) &&
        ((-1 < sVar4 &&
         (uVar3 = (ulonglong)(uint)(int)sVar4, (int)sVar4 < *(int *)(param_1 + 0x1160dc))))))) {
      uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x1160d0) + ((longlong)param_2 >> 4) * 8);
      lVar1 = *(longlong *)(uVar3 + ((longlong)param_3 >> 4) * 8);
      if (lVar1 != 0) {
        sVar4 = *(short *)(lVar1 + 4);
        uVar3 = (ulonglong)(uint)(int)sVar4;
        if ((int)sVar4 < (int)param_4 + *(int *)(param_1 + 0x1160f8)) {
          return CONCAT71((uint7)(uint3)(int3)(char)((ushort)sVar4 >> 8),1);
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

