// FUN_1400be0f0 @ 1400be0f0
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000cfe0 FUN_14000cfe0
//   -> 140dfc99c memset


char * FUN_1400be0f0(char *param_1,ulonglong param_2,char param_3)

{
  char *pcVar1;
  
  if (param_2 != 0xffffffffffffffff) {
    if (*(ulonglong *)(param_1 + 0x18) < param_2) {
      FUN_14000cfe0(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
    }
    if (param_2 != 0) {
      if (param_2 == 1) {
        if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
          *param_1 = param_3;
        }
        else {
          **(char **)param_1 = param_3;
        }
      }
      else {
        pcVar1 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
          pcVar1 = *(char **)param_1;
        }
        memset(pcVar1,(int)param_3,param_2);
      }
      *(ulonglong *)(param_1 + 0x10) = param_2;
      pcVar1 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar1 = *(char **)param_1;
      }
      pcVar1[param_2] = '\0';
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("string too long");
}

