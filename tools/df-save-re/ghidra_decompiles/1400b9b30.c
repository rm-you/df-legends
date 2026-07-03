// FUN_1400b9b30 @ 1400b9b30
// callees:
//   -> 14000c8b0 FUN_14000c8b0


undefined8 FUN_1400b9b30(longlong *param_1,int param_2,char *param_3,char param_4,char param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  if (-1 < param_2) {
    if ((ulonglong)(longlong)param_2 < (ulonglong)(param_1[1] - *param_1 >> 3)) {
      lVar1 = *(longlong *)(*param_1 + (longlong)param_2 * 8);
      if (param_5 == '\0') {
        pcVar3 = (char *)(lVar1 + 0x50);
      }
      else {
        pcVar3 = (char *)(lVar1 + 0x70);
      }
      if (param_3 != pcVar3) {
        FUN_14000c8b0(param_3,pcVar3,0,0xffffffffffffffff);
      }
      if ((*(longlong *)(param_3 + 0x10) != 0) && (param_4 != '\0')) {
        uVar2 = *(ulonglong *)(param_3 + 0x18);
        pcVar3 = param_3;
        if (0xf < uVar2) {
          pcVar3 = *(char **)param_3;
        }
        if ('`' < *pcVar3) {
          pcVar3 = param_3;
          if (0xf < uVar2) {
            pcVar3 = *(char **)param_3;
          }
          if (*pcVar3 < '{') {
            if (0xf < uVar2) {
              param_3 = *(char **)param_3;
            }
            *param_3 = *param_3 + -0x20;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

