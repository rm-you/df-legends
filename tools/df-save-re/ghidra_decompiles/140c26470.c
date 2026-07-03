// FUN_140c26470 @ 140c26470
// callees:
//   -> 140c800d0 FUN_140c800d0
//   -> 14000d840 FUN_14000d840


ulonglong FUN_140c26470(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  short sVar4;
  
  uVar3 = FUN_140c800d0();
  sVar4 = (short)((longlong)(ulonglong)(uint)(*(int *)(param_1 + 0x4d8) - *(int *)(param_1 + 0x4d0))
                 >> 2) + -1;
  if (-1 < sVar4) {
    plVar1 = *(longlong **)(param_1 + 0x5d8);
    do {
      if (sVar4 < 0) {
LAB_140c264d5:
        uVar3 = *(ulonglong *)(param_1 + 0x12b8);
        if (*(char *)((longlong)sVar4 + uVar3) == '\0') {
          return CONCAT71((int7)(uVar3 >> 8),1);
        }
      }
      else {
        lVar2 = *plVar1;
        if ((ulonglong)(plVar1[1] - lVar2 >> 3) <= (ulonglong)(longlong)sVar4) goto LAB_140c264d5;
        uVar3 = FUN_14000d840(*(longlong *)(lVar2 + (longlong)sVar4 * 8) + 0x48,0xd);
        if ((char)uVar3 == '\0') goto LAB_140c264d5;
      }
      sVar4 = sVar4 + -1;
    } while (-1 < sVar4);
  }
  return uVar3 & 0xffffffffffffff00;
}

