// FUN_140d9e3b0 @ 140d9e3b0
// callees:
//   -> 140004830 FUN_140004830
//   -> 140d868e0 FUN_140d868e0
//   -> 1408dea60 FUN_1408dea60
//   -> 1400048f0 FUN_1400048f0
//   -> 1401aa7c0 FUN_1401aa7c0
//   -> 1401aa8a0 FUN_1401aa8a0
//   -> 1401aa670 FUN_1401aa670


undefined8
FUN_140d9e3b0(longlong param_1,short param_2,short param_3,short param_4,char param_5,char param_6)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  
  if (((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
      (((int)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)))) &&
     ((int)param_4 < *(int *)(param_1 + 0x1160ec))) {
    sVar2 = FUN_140004830();
    cVar1 = FUN_140d868e0(param_1,param_2);
    if (((cVar1 != '\0') && (((sVar2 == 0x23 || (sVar2 == 0x2a)) || (param_5 != '\x02')))) &&
       ((cVar1 = FUN_1408dea60(sVar2), cVar1 == '\0' || (param_6 == '\0')))) {
      uVar3 = FUN_1400048f0(param_1,param_2);
      if (((uVar3 & 7) != 6) &&
         (((uVar3 & 7) != 7 ||
          (((param_6 == '\0' ||
            ((cVar1 = FUN_1401aa7c0(param_1 + 0x1c928,param_2), cVar1 == '\0' &&
             (cVar1 = FUN_1401aa8a0(param_1 + 0x1c928,param_2,param_3), cVar1 == '\0')))) &&
           (cVar1 = FUN_1401aa670(param_1 + 0x1c928,param_2,param_3,param_4), cVar1 == '\0')))))) {
        return 1;
      }
    }
  }
  return 0;
}

