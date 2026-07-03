// FUN_1402b9d70 @ 1402b9d70
// callees:


uint FUN_1402b9d70(longlong param_1,short param_2,short param_3,uint param_4,int param_5,int param_6
                  ,char param_7,char param_8)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  if (((((param_8 != '\0') || (param_7 != '\0')) && (-1 < param_2)) &&
      (((ulonglong)(longlong)param_2 <
        (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) &&
       (-1 < param_3)))) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8),
     (ulonglong)(longlong)param_3 <
     (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3))) {
    uVar2 = param_4;
    if (param_7 != '\0') {
      if (param_8 != '\0') {
        uVar2 = (int)param_4 / 2;
        uVar3 = param_4 & 0x80000001;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
        }
        param_4 = uVar2;
        if (uVar3 == 1) {
          param_4 = uVar2 + 1;
        }
      }
      if (0 < (int)param_4) {
        if (param_8 == '\0') {
          uVar2 = 0;
        }
        if (5000 < param_5) {
          param_5 = 5000;
        }
        param_4 = (int)(param_4 * param_5) / 1000;
      }
    }
    if ((param_8 != '\0') && (0 < (int)uVar2)) {
      if (param_7 == '\0') {
        param_4 = 0;
      }
      if (999999 < param_6) {
        param_6 = 999999;
      }
      uVar2 = (int)((param_6 / 0x9c4) * uVar2) / 100;
    }
    return uVar2 + param_4;
  }
  return param_4;
}

