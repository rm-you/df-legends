// FUN_140cbfe30 @ 140cbfe30
// callees:
//   -> 140c21380 FUN_140c21380


void FUN_140cbfe30(longlong param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    sVar1 = *(short *)(param_1 + 0xa4);
    sVar2 = *(short *)(param_1 + 300);
    if (-1 < sVar1) {
      if (((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
         (-1 < sVar2)) {
        lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
        if (((ulonglong)(longlong)sVar2 <
             (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) &&
           (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar2 * 8), lVar3 != 0))
        {
          FUN_140c21380(*(longlong *)(param_1 + 0xa78) + 0xac + (longlong)param_2 * 0x1c,param_3,
                        *(undefined4 *)(lVar3 + 0x1464 + (longlong)param_2 * 0x10));
          return;
        }
      }
    }
  }
  return;
}

