// FUN_1402b6050 @ 1402b6050
// callees:


void FUN_1402b6050(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong lVar1;
  short sVar2;
  
  if ((-1 < param_2) &&
     ((ulonglong)(longlong)param_2 <
      (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8);
    if ((param_3 < 0) ||
       ((ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3) <=
        (ulonglong)(longlong)param_3)) {
      sVar2 = 5;
      DAT_14127122a = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_3 * 8);
      sVar2 = *(short *)(lVar1 + 0x48a);
      if (*(short *)(lVar1 + 0x48c) != 0) {
        param_4 = *(short *)(lVar1 + 0x48c);
      }
      DAT_14127122a = (undefined1)*(undefined2 *)(lVar1 + 0x48e);
    }
    if (sVar2 == param_4) {
      DAT_14127122a = 1;
    }
    DAT_141271228 = (char)sVar2;
    DAT_141271229 = (char)param_4;
    return;
  }
  DAT_141271228 = 5;
  DAT_141271229 = (char)param_4;
  DAT_14127122a = param_4 == 5;
  return;
}

