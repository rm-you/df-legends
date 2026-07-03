// FUN_1402cdbf0 @ 1402cdbf0
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140162300 FUN_140162300


undefined8
FUN_1402cdbf0(longlong param_1,char *param_2,short param_3,short param_4,ushort param_5,char param_6
             ,char param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  
  if ((param_3 < 0) ||
     ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) <=
      (ulonglong)(longlong)param_3)) {
    return 0;
  }
  if (param_5 < 0x87) {
    if (-1 < param_4) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_3 * 8);
      if ((ulonglong)(longlong)param_4 <
          (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) {
        lVar5 = (longlong)(short)param_5 * 0x20 + 0x28c8;
        if (param_6 == '\0') {
          lVar5 = (longlong)(short)param_5 * 0x20 + 0x17e8;
        }
        pcVar4 = (char *)(lVar5 + *(longlong *)
                                   (*(longlong *)(lVar1 + 0x178) + (longlong)param_4 * 8));
        if (param_2 != pcVar4) {
          FUN_14000c8b0(param_2,pcVar4,0,0xffffffffffffffff);
        }
        if (*(longlong *)(param_2 + 0x10) != 0) {
          if (param_7 != '\0') {
            uVar2 = *(ulonglong *)(param_2 + 0x18);
            pcVar4 = param_2;
            if (0xf < uVar2) {
              pcVar4 = *(char **)param_2;
            }
            if ('`' < *pcVar4) {
              pcVar4 = param_2;
              if (0xf < uVar2) {
                pcVar4 = *(char **)param_2;
              }
              if (*pcVar4 < '{') {
                if (0xf < uVar2) {
                  param_2 = *(char **)param_2;
                }
                *param_2 = *param_2 + -0x20;
              }
            }
          }
          return 1;
        }
        uVar3 = FUN_140162300(param_1,param_2,param_3,param_5,param_6,param_7);
        return uVar3;
      }
    }
    uVar3 = FUN_140162300(param_1,param_2,param_3,param_5,param_6,param_7);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

