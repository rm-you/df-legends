// FUN_140d9d490 @ 140d9d490
// callees:
//   -> 140019af0 FUN_140019af0
//   -> 140004830 FUN_140004830
//   -> 1400c05e0 FUN_1400c05e0
//   -> 14014e2f0 FUN_14014e2f0
//   -> 1403647e0 FUN_1403647e0
//   -> 1403647b0 FUN_1403647b0
//   -> 1408dea20 FUN_1408dea20
//   -> 1408dea60 FUN_1408dea60
//   -> 14013b610 FUN_14013b610
//   -> 140da7820 FUN_140da7820
//   -> 140d89d60 FUN_140d89d60


undefined8
FUN_140d9d490(longlong param_1,short param_2,short param_3,short param_4,char param_5,char param_6)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  short sVar6;
  ulonglong uVar7;
  short local_res10 [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined4 local_c;
  
  if (((((param_2 < 1) || (param_3 < 1)) || (*(int *)(param_1 + 0x1160e4) + -1 <= (int)param_2)) ||
      ((*(int *)(param_1 + 0x1160e8) + -1 <= (int)param_3 || (param_4 < 0)))) ||
     (*(int *)(param_1 + 0x1160ec) <= (int)param_4)) {
LAB_140d9d6b5:
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_140019af0(param_1,param_2);
    if (((uVar3 >> 9 & 1) == 0) || (param_5 == '\0')) {
      uVar2 = FUN_140004830(param_1,param_2,param_3,param_4);
      uVar7 = (ulonglong)uVar2;
      cVar1 = FUN_1400c05e0(uVar2);
      if (cVar1 != '\0') goto LAB_140d9d6b5;
      if (param_6 == '\0') {
        uVar3 = (uint)uVar7 & 0xffff;
        if ((((uVar3 != 0xd7) && (uVar3 != 0x147)) && (uVar3 != 0x14b)) &&
           ((uVar3 != 0x168 && (uVar3 != 0x1b4)))) {
          cVar1 = FUN_1408dea20(uVar7 & 0xffff);
          sVar6 = (short)uVar7;
          if ((((cVar1 == '\0') && ((2 < uVar3 - 0x165 && (sVar6 != 0x53)))) && (3 < uVar3 - 0x4f))
             && (sVar6 != 0x1eb)) {
            cVar1 = FUN_1408dea60(uVar7 & 0xffff);
            if (cVar1 == '\0') {
              cVar1 = FUN_14013b610();
              if ((((cVar1 == '\0') && (7 < uVar3 - 0x171)) && (sVar6 != 0x105)) &&
                 ((sVar6 != 0x5c && (sVar6 != 0x84)))) goto LAB_140d9d6b5;
            }
          }
        }
        FUN_140da7820(&DAT_141c53470,param_2,param_3,param_4,local_10,local_14,local_res10,&local_c,
                      local_18);
        if (local_res10[0] != -1) {
          lVar5 = FUN_140d89d60(&DAT_141c53470,local_res10[0],local_c);
          if (((lVar5 != 0) && (7 < *(int *)(lVar5 + 0x298))) &&
             ((*(byte *)(*(longlong *)(lVar5 + 0x290) + 7) & 0x20) != 0)) goto LAB_140d9d6b5;
        }
      }
      else {
        cVar1 = FUN_14014e2f0(uVar7 & 0xffff);
        if (cVar1 == '\0') {
          cVar1 = FUN_1403647e0();
          if (cVar1 == '\0') {
            cVar1 = FUN_1403647b0(uVar7 & 0xffff);
            if (cVar1 == '\0') goto LAB_140d9d6b5;
          }
        }
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

