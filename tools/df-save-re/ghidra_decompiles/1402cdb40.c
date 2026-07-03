// FUN_1402cdb40 @ 1402cdb40
// callees:
//   -> 1401622b0 FUN_1401622b0


ulonglong FUN_1402cdb40(longlong param_1,undefined8 param_2,short param_3,ushort param_4)

{
  longlong lVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (-1 < (short)param_2) {
    in_RAX = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3;
    uVar3 = (ulonglong)(short)param_2;
    if ((uVar3 < in_RAX) && (in_RAX = 0, param_4 < 0x87)) {
      if (-1 < param_3) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8);
        if ((ulonglong)(longlong)param_3 <
            (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) {
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_3 * 8) + 0x17f8 +
               (longlong)(short)param_4 * 0x20) != 0) {
            return CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x178) >> 8),1);
          }
          lVar2 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
          in_RAX = lVar2 >> 3;
          if (uVar3 < in_RAX) {
            return CONCAT71((int7)(lVar2 >> 0xb),
                            *(longlong *)((longlong)(short)param_4 * 0x20 + 0x24f0 + lVar1) != 0);
          }
          goto LAB_1402cdbec;
        }
      }
      uVar3 = FUN_1401622b0(param_1,param_2,param_4);
      return uVar3;
    }
  }
LAB_1402cdbec:
  return in_RAX & 0xffffffffffffff00;
}

