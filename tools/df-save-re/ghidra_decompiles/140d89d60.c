// FUN_140d89d60 @ 140d89d60
// callees:
//   -> 1402cd5b0 FUN_1402cd5b0
//   -> 1402b5c80 FUN_1402b5c80


longlong FUN_140d89d60(longlong param_1,ushort param_2,int param_3)

{
  longlong lVar1;
  
  if ((ushort)(param_2 - 0x1a3) < 200) {
    lVar1 = FUN_1402cd5b0(param_1 + 0x11a7a0);
    if (lVar1 == 0) {
      return *(longlong *)(param_1 + 0x125d78);
    }
  }
  else if ((ushort)(param_2 - 0x13) < 400) {
    lVar1 = FUN_1402b5c80(param_1 + 0x11a8c0);
    if (lVar1 == 0) {
      return *(longlong *)(param_1 + 0x1250f8);
    }
  }
  else {
    if (param_2 == 0) {
      if (-1 < param_3) {
        if (((ulonglong)(longlong)param_3 <
             (ulonglong)(*(longlong *)(param_1 + 0x11a778) - *(longlong *)(param_1 + 0x11a770) >> 3)
            ) && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x11a770) + (longlong)param_3 * 8),
                 lVar1 != 0)) {
          return lVar1 + 0x1a8;
        }
      }
      return *(longlong *)(param_1 + 0x125060);
    }
    if (param_2 < 0x293) {
      return *(longlong *)(param_1 + 0x125060 + (longlong)(short)param_2 * 8);
    }
    lVar1 = 0;
  }
  return lVar1;
}

