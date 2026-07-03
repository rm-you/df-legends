// FUN_1406aee70 @ 1406aee70
// callees:


int FUN_1406aee70(short param_1,short param_2,short param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (-1 < param_2) {
    if (((ulonglong)(longlong)param_2 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
       (-1 < param_3)) {
      lVar1 = *(longlong *)(DAT_141d6dd50 + (longlong)param_2 * 8);
      if ((ulonglong)(longlong)param_3 <
          (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) {
        iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_3 * 8) + 0x4ac
                        );
        goto LAB_1406aeed1;
      }
    }
  }
  iVar2 = 0;
LAB_1406aeed1:
  if ((param_1 == 0x62) || (param_1 == 99)) {
    iVar2 = iVar2 * 2;
  }
  return iVar2;
}

