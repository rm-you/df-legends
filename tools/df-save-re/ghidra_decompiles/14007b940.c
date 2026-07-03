// FUN_14007b940 @ 14007b940
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000cfe0 FUN_14000cfe0
//   -> 14000c5a0 FUN_14000c5a0


void FUN_14007b940(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1[2];
  if ((uVar1 <= param_2) && (uVar2 = param_1[3], uVar2 != param_2)) {
    if (param_2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if (uVar2 < param_2) {
      FUN_14000cfe0(param_1,(char)param_2,uVar1);
    }
    else if (param_2 < 0x10) {
      uVar2 = uVar1;
      if (param_2 < uVar1) {
        uVar2 = param_2;
      }
      FUN_14000c5a0(param_1,1,uVar2);
    }
    else if (param_2 == 0) {
      param_1[2] = 0;
      if (0xf < uVar2) {
        param_1 = (undefined8 *)*param_1;
      }
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (param_2 != 0) {
      param_1[2] = uVar1;
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (undefined8 *)*param_1;
      }
      *(undefined1 *)((longlong)param_1 + uVar1) = 0;
    }
  }
  return;
}

