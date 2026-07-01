// FUN_14000c8b0 @ 14000c8b0
// callees:
//   -> EXTERNAL:00000098 _Xout_of_range
//   -> 14000c6b0 FUN_14000c6b0
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000cfe0 FUN_14000cfe0
//   -> 140dfdcc6 memcpy


undefined8 *
FUN_14000c8b0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  if ((ulonglong)param_2[2] < param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = param_2[2] - param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  if (param_1 == param_2) {
    param_3 = param_3 + param_4;
    if ((ulonglong)param_1[2] < param_3) {
                    /* WARNING: Subroutine does not return */
      std::_Xout_of_range("invalid string position");
    }
    param_1[2] = param_3;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)puVar2 + param_3) = 0;
    FUN_14000c6b0(param_1,0);
  }
  else {
    if (param_4 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((ulonglong)param_1[3] < param_4) {
      FUN_14000cfe0(param_1,param_4,param_1[2]);
      if (param_4 == 0) {
        return param_1;
      }
    }
    else if (param_4 == 0) {
      param_1[2] = 0;
      if (0xf < (ulonglong)param_1[3]) {
        *(undefined1 *)*param_1 = 0;
        return param_1;
      }
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (param_4 != 0) {
      memcpy(puVar2,(void *)((longlong)param_2 + param_3),param_4);
    }
    param_1[2] = param_4;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)puVar2 + param_4) = 0;
  }
  return param_1;
}

