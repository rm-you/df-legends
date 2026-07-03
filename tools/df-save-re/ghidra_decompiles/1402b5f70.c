// FUN_1402b5f70 @ 1402b5f70
// callees:


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402b5f70(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  
  if ((-1 < param_2) &&
     ((ulonglong)(longlong)param_2 <
      (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8);
    if ((((param_3 < 0) ||
         ((ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3) <=
          (ulonglong)(longlong)param_3)) ||
        (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_3 * 8),
        *(int *)(lVar2 + 0x6b0) < 0x11)) ||
       ((*(byte *)(*(longlong *)(lVar2 + 0x6a8) + 0x10) & 1) == 0)) {
      sVar3 = *(short *)(lVar1 + 0x138);
      if (*(short *)(lVar1 + 0x13a) != 0) {
        param_4 = *(short *)(lVar1 + 0x13a);
      }
      DAT_14127122a = (undefined1)*(undefined2 *)(lVar1 + 0x13c);
    }
    else {
      sVar3 = *(short *)(lVar2 + 0x46e);
      if (*(short *)(lVar2 + 0x470) != 0) {
        param_4 = *(short *)(lVar2 + 0x470);
      }
      DAT_14127122a = (undefined1)*(undefined2 *)(lVar2 + 0x472);
    }
    if (sVar3 == param_4) {
      DAT_14127122a = 1;
    }
    _DAT_141271228 = CONCAT11((char)param_4,(char)sVar3);
    return;
  }
  _DAT_141271228 = 0x404;
  DAT_14127122a = 1;
  return;
}

