// FUN_140d8c270 @ 140d8c270
// callees:
//   -> 140019af0 FUN_140019af0
//   -> 1400048f0 FUN_1400048f0
//   -> 140d9d490 FUN_140d9d490
//   -> 140004830 FUN_140004830
//   -> 140d1e560 FUN_140d1e560


undefined4 FUN_140d8c270(longlong param_1,short param_2,short param_3,short param_4,char param_5)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  
  if (((((param_2 < 1) || (param_3 < 1)) || (*(int *)(param_1 + 0x1160e4) + -1 <= (int)param_2)) ||
      ((*(int *)(param_1 + 0x1160e8) + -1 <= (int)param_3 || (param_4 < 0)))) ||
     (*(int *)(param_1 + 0x1160ec) <= (int)param_4)) {
    return 0xe;
  }
  uVar3 = FUN_140019af0(param_1,param_2);
  if (((uVar3 >> 9 & 1) == 0) || (param_5 == '\0')) {
    uVar4 = FUN_1400048f0(param_1,param_2);
    if ((uVar4 & 7) != 0) {
      return 0xc;
    }
    uVar5 = 0;
    cVar1 = FUN_140d9d490(param_1,param_2);
    if (cVar1 == '\0') {
      uVar2 = FUN_140004830(param_1,param_2,param_3,param_4,param_5,uVar5);
      cVar1 = FUN_140d1e560(uVar2);
      if (cVar1 == '\0') {
        return 6;
      }
      return 0;
    }
  }
  return 0;
}

