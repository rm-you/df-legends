// FUN_140d7ee60 @ 140d7ee60
// callees:
//   -> 1400047c0 FUN_1400047c0
//   -> 14014deb0 FUN_14014deb0
//   -> 14014ff90 FUN_14014ff90
//   -> 1401aa670 FUN_1401aa670
//   -> 1401aa5c0 FUN_1401aa5c0


undefined8
FUN_140d7ee60(longlong param_1,ushort param_2,short param_3,undefined2 param_4,byte param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar6;
  
  uVar7 = (ulonglong)param_2;
  if ((param_5 & 2) != 0) {
    return 0;
  }
  lVar2 = FUN_1400047c0(param_1,uVar7,param_3,param_4);
  if (lVar2 == 0) {
    return 0;
  }
  uVar5 = (int)(short)uVar7 & 0x8000000f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
  }
  uVar6 = (ulonglong)uVar5;
  uVar4 = (int)param_3 & 0x8000000f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
  }
  lVar8 = (longlong)(short)uVar5 * 0x10 + (longlong)(short)uVar4;
  cVar1 = FUN_14014deb0(*(undefined2 *)(lVar2 + 0x92 + lVar8 * 2));
  if ((cVar1 == '\0') ||
     (((param_5 & 1) != 0 && (cVar1 = FUN_14014ff90(lVar2,uVar6 & 0xffff), cVar1 == '\a')))) {
LAB_140d7ef55:
    uVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(lVar2 + 0x694 + lVar8 * 4) & 7;
    if (uVar5 == 6) {
      cVar1 = FUN_1401aa5c0(param_1 + 0x1c928,uVar7 & 0xffff,param_3,param_4);
      if (cVar1 == '\0') goto LAB_140d7ef55;
    }
    else if ((uVar5 == 7) &&
            (cVar1 = FUN_1401aa670(param_1 + 0x1c928,uVar7 & 0xffff,param_3,param_4), cVar1 != '\0')
            ) goto LAB_140d7ef55;
    uVar3 = 1;
  }
  return uVar3;
}

