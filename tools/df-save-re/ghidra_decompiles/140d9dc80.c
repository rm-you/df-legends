// FUN_140d9dc80 @ 140d9dc80
// callees:
//   -> 140d89e40 FUN_140d89e40
//   -> 140004830 FUN_140004830
//   -> 14000d840 FUN_14000d840
//   -> 140168dc0 FUN_140168dc0
//   -> 140168eb0 FUN_140168eb0
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 1400048f0 FUN_1400048f0
//   -> 1401aa670 FUN_1401aa670
//   -> 140d868e0 FUN_140d868e0


bool FUN_140d9dc80(longlong param_1,short param_2,short param_3,short param_4,short param_5,
                  short param_6)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (((((param_4 < 0) || (*(int *)(param_1 + 0x1160e4) <= (int)param_4)) || (param_5 < 0)) ||
      ((*(int *)(param_1 + 0x1160e8) <= (int)param_5 || (param_6 < 0)))) ||
     ((*(int *)(param_1 + 0x1160ec) <= (int)param_6 ||
      ((*(longlong *)(param_1 + 0x1160b0) == 0 ||
       (*(longlong *)
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_4 >> 4) * 8) +
           ((longlong)param_5 >> 4) * 8) + (longlong)param_6 * 8) == 0)))))) {
    return false;
  }
  cVar2 = FUN_140d89e40(param_1,param_4,param_5,param_6,0,0);
  if (param_3 == -1) {
    if ((cVar2 == '\0') &&
       (((((sVar3 = FUN_140004830(param_1,param_4,param_5,param_6), sVar3 == 1 || (sVar3 == 0x20))
          || (sVar3 == 0x23)) || (sVar3 == 0x2a)) &&
        (((-1 < param_2 &&
          ((ulonglong)(longlong)param_2 <
           (ulonglong)(*(longlong *)(param_1 + 0x11a8e8) - *(longlong *)(param_1 + 0x11a8e0) >> 3)))
         && (cVar2 = FUN_14000d840(*(longlong *)
                                    (*(longlong *)(param_1 + 0x11a8e0) + (longlong)param_2 * 8) +
                                   0x1a8,0x55), cVar2 != '\0')))))) {
      return false;
    }
    cVar2 = FUN_140168dc0(param_1,param_4,param_5,param_6);
    if ((('\x01' < cVar2) && (-1 < param_2)) &&
       (((ulonglong)(longlong)param_2 <
         (ulonglong)(*(longlong *)(param_1 + 0x11a8e8) - *(longlong *)(param_1 + 0x11a8e0) >> 3) &&
        (cVar2 = FUN_14000d840(*(longlong *)
                                (*(longlong *)(param_1 + 0x11a8e0) + (longlong)param_2 * 8) + 0x1a8,
                               0x53), cVar2 != '\0')))) {
      return false;
    }
    cVar2 = FUN_140168eb0(param_1,param_4,param_5,param_6);
    if (((('\0' < cVar2) && (-1 < param_2)) &&
        ((ulonglong)(longlong)param_2 <
         (ulonglong)(*(longlong *)(param_1 + 0x11a8e8) - *(longlong *)(param_1 + 0x11a8e0) >> 3)))
       && (cVar2 = FUN_14000d840(*(longlong *)
                                  (*(longlong *)(param_1 + 0x11a8e0) + (longlong)param_2 * 8) +
                                 0x1a8,0x52), cVar2 != '\0')) {
      return false;
    }
    cVar2 = FUN_140168dc0(param_1,param_4,param_5,param_6);
    if (((cVar2 < '\x02') && (-1 < param_2)) &&
       (((ulonglong)(longlong)param_2 <
         (ulonglong)(*(longlong *)(param_1 + 0x11a8e8) - *(longlong *)(param_1 + 0x11a8e0) >> 3) &&
        (cVar2 = FUN_14000d840(*(longlong *)
                                (*(longlong *)(param_1 + 0x11a8e0) + (longlong)param_2 * 8) + 0x1a8,
                               0x54), cVar2 != '\0')))) {
      return false;
    }
  }
  else {
    if ((cVar2 == '\0') &&
       (((sVar3 = FUN_140004830(param_1,param_4,param_5,param_6), sVar3 == 1 || (sVar3 == 0x20)) ||
        ((sVar3 == 0x23 || (sVar3 == 0x2a)))))) {
      if (param_2 < 0) {
        return false;
      }
      if ((ulonglong)(*(longlong *)(param_1 + 0x11a8e8) - *(longlong *)(param_1 + 0x11a8e0) >> 3) <=
          (ulonglong)(longlong)param_2) {
        return false;
      }
      if (param_3 < 0) {
        return false;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x11a8e0) + (longlong)param_2 * 8);
      if ((ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3) <=
          (ulonglong)(longlong)param_3) {
        return false;
      }
      cVar2 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_3 * 8) +
                            0x6a8,0x13);
      if (cVar2 == '\0') {
        return false;
      }
    }
    cVar2 = FUN_140168dc0(param_1,param_4,param_5,param_6);
    if ('\x01' < cVar2) {
      if (param_2 < 0) {
        return false;
      }
      if ((ulonglong)(*(longlong *)(param_1 + 0x11a8e8) - *(longlong *)(param_1 + 0x11a8e0) >> 3) <=
          (ulonglong)(longlong)param_2) {
        return false;
      }
      if (param_3 < 0) {
        return false;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x11a8e0) + (longlong)param_2 * 8);
      if ((ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3) <=
          (ulonglong)(longlong)param_3) {
        return false;
      }
      cVar2 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_3 * 8) +
                            0x6a8,0);
      if (cVar2 == '\0') {
        return false;
      }
    }
    cVar2 = FUN_140168eb0(param_1,param_4,param_5,param_6);
    if ('\0' < cVar2) {
      if (param_2 < 0) {
        return false;
      }
      if ((ulonglong)(*(longlong *)(param_1 + 0x11a8e8) - *(longlong *)(param_1 + 0x11a8e0) >> 3) <=
          (ulonglong)(longlong)param_2) {
        return false;
      }
      if (param_3 < 0) {
        return false;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x11a8e0) + (longlong)param_2 * 8);
      if ((ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3) <=
          (ulonglong)(longlong)param_3) {
        return false;
      }
      cVar2 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_3 * 8) +
                            0x6a8,0x16);
      if (cVar2 == '\0') {
        return false;
      }
    }
    cVar2 = FUN_140168dc0(param_1,param_4,param_5,param_6);
    if ((((cVar2 < '\x02') && (-1 < param_2)) &&
        (uVar6 = (ulonglong)param_2,
        uVar6 < (ulonglong)
                (*(longlong *)(param_1 + 0x11a8e8) - *(longlong *)(param_1 + 0x11a8e0) >> 3))) &&
       (-1 < param_3)) {
      uVar5 = (ulonglong)param_3;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x11a8e0) + uVar6 * 8);
      if ((uVar5 < (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) &&
         (cVar2 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar1 + 0x178) + uVar5 * 8) + 0x6a8,1),
         cVar2 != '\0')) {
        uVar4 = FUN_1409fc0c0();
        sVar3 = 0;
        if ((uVar6 < (ulonglong)
                     (*(longlong *)(param_1 + 0x11a8e8) - *(longlong *)(param_1 + 0x11a8e0) >> 3))
           && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x11a8e0) + uVar6 * 8), sVar3 = 0,
              uVar5 < (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3))
           ) {
          sVar3 = *(short *)(*(longlong *)(*(longlong *)(lVar1 + 0x178) + uVar5 * 8) + 0x498);
        }
        if ((int)sVar3 <=
            (int)((uVar4 + (int)((longlong)((ulonglong)uVar4 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                 0x147ae15)) {
          return false;
        }
      }
    }
  }
  uVar4 = FUN_1400048f0(param_1,param_4,param_5,param_6);
  if (((uVar4 & 7) != 6) &&
     (((uVar4 & 7) != 7 || (cVar2 = FUN_1401aa670(param_1 + 0x1c928,param_4), cVar2 == '\0')))) {
    cVar2 = FUN_140d868e0(param_1,param_4,param_5,param_6);
    return cVar2 != '\0';
  }
  return false;
}

