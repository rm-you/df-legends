// FUN_1400b9c40 @ 1400b9c40
// callees:
//   -> 14000c8b0 FUN_14000c8b0


undefined8
FUN_1400b9c40(longlong param_1,char *param_2,short param_3,short param_4,uint param_5,char param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  if (-1 < param_3) {
    if (((ulonglong)(longlong)param_3 <
         (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3)) &&
       (-1 < param_4)) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_3 * 8);
      if (((ulonglong)(longlong)param_4 <
           (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) &&
         (param_5 < 0x23)) {
        pcVar3 = (char *)((longlong)(int)param_5 * 0x20 +
                         *(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_4 * 8));
        if (param_2 != pcVar3) {
          FUN_14000c8b0(param_2,pcVar3,0,0xffffffffffffffff);
        }
        if (*(longlong *)(param_2 + 0x10) != 0) {
          if (param_6 != '\0') {
            uVar2 = *(ulonglong *)(param_2 + 0x18);
            pcVar3 = param_2;
            if (0xf < uVar2) {
              pcVar3 = *(char **)param_2;
            }
            if ('`' < *pcVar3) {
              pcVar3 = param_2;
              if (0xf < uVar2) {
                pcVar3 = *(char **)param_2;
              }
              if (*pcVar3 < '{') {
                if (0xf < uVar2) {
                  param_2 = *(char **)param_2;
                }
                *param_2 = *param_2 + -0x20;
              }
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

