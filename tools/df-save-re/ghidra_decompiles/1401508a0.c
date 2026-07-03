// FUN_1401508a0 @ 1401508a0
// callees:
//   -> 14015bcb0 FUN_14015bcb0
//   -> 140150660 FUN_140150660
//   -> 1409fc0c0 FUN_1409fc0c0


uint FUN_1401508a0(longlong param_1,short param_2,short param_3,short param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  short local_res10 [4];
  short local_18 [8];
  
  uVar2 = 0;
  if (((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
      (((int)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)))) &&
     (((int)param_4 < *(int *)(param_1 + 0x1160ec) &&
      ((*(longlong *)(param_1 + 0x1160b0) != 0 &&
       (lVar3 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8)
                   + ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar3 != 0)))))) {
    uVar7 = (int)param_2 & 0x8000000f;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
    }
    uVar6 = (int)param_3 & 0x8000000f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
    }
    uVar1 = *(uint *)(lVar3 + 0x294 + ((longlong)(short)uVar7 * 0x10 + (longlong)(short)uVar6) * 4);
    uVar4 = (uint)((uVar1 >> 10 & 1) != 0);
    if ((uVar1 >> 0xb & 1) != 0) {
      uVar4 = uVar4 + 2;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      uVar4 = uVar4 + 4;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      uVar4 = uVar4 + 8;
    }
    FUN_14015bcb0(lVar3,local_18,local_res10,uVar7,(short)uVar6);
    lVar3 = FUN_140150660(*(undefined8 *)(param_1 + 0x119b60),(int)local_18[0],(int)local_res10[0]);
    if ((lVar3 != 0) &&
       ((ulonglong)(longlong)(int)uVar4 <
        (ulonglong)(*(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 8) >> 3))) {
      return *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar4 * 8) + 4);
    }
  }
  uVar5 = *(longlong *)(param_1 + 0x11a778) - *(longlong *)(param_1 + 0x11a770) >> 3;
  if (1 < (uint)uVar5) {
    uVar2 = FUN_1409fc0c0();
    uVar2 = (uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            ((int)(0x7fffffff / (uVar5 & 0xffffffff)) + 1U);
  }
  return uVar2;
}

