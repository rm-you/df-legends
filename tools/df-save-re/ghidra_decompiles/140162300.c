// FUN_140162300 @ 140162300
// callees:
//   -> 14000c8b0 FUN_14000c8b0


undefined8
FUN_140162300(longlong param_1,char *param_2,short param_3,ushort param_4,char param_5,char param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  
  if (-1 < param_3) {
    if (((ulonglong)(longlong)param_3 <
         (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3)) &&
       (param_4 < 0x87)) {
      if (param_5 == '\0') {
        lVar2 = (longlong)(short)param_4 + 0x127;
      }
      else {
        lVar2 = (longlong)(short)param_4 + 0x1ae;
      }
      pcVar3 = (char *)(lVar2 * 0x20 +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_3 * 8));
      if (param_2 != pcVar3) {
        FUN_14000c8b0(param_2,pcVar3,0,0xffffffffffffffff);
      }
      if (*(longlong *)(param_2 + 0x10) != 0) {
        if (param_6 != '\0') {
          uVar1 = *(ulonglong *)(param_2 + 0x18);
          pcVar3 = param_2;
          if (0xf < uVar1) {
            pcVar3 = *(char **)param_2;
          }
          if ('`' < *pcVar3) {
            pcVar3 = param_2;
            if (0xf < uVar1) {
              pcVar3 = *(char **)param_2;
            }
            if (*pcVar3 < '{') {
              if (0xf < uVar1) {
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
  return 0;
}

