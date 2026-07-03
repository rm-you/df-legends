// FUN_14014d540 @ 14014d540
// callees:
//   -> EXTERNAL:00000098 _Xout_of_range
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000cfe0 FUN_14000cfe0
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfdcc6 memcpy


undefined8 *
FUN_14014d540(undefined8 *param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4,
             ulonglong param_5,ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *_Dst;
  void *_Src;
  ulonglong uVar5;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  if ((ulonglong)param_4[2] < param_5) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar5 = uVar1 - param_2;
  if (uVar5 < param_3) {
    param_3 = uVar5;
  }
  uVar2 = param_4[2] - param_5;
  if (uVar2 < param_6) {
    param_6 = uVar2;
  }
  if (-param_6 - 1 <= uVar1 - param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  uVar5 = uVar5 - param_3;
  uVar2 = (uVar1 - param_3) + param_6;
  if (uVar1 < uVar2) {
    if (uVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((ulonglong)param_1[3] < uVar2) {
      FUN_14000cfe0(param_1,uVar2);
    }
    else if (uVar2 == 0) {
      param_1[2] = 0;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      *(undefined1 *)puVar3 = 0;
    }
  }
  if (param_6 == param_3) {
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    puVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    if (param_6 == 0) goto LAB_14014d8f7;
    _Src = (void *)((longlong)param_4 + param_5);
    _Dst = (void *)((longlong)puVar3 + param_2);
    uVar5 = param_6;
  }
  else {
    if (param_1 != param_4) {
      puVar4 = param_1;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
        puVar3 = (undefined8 *)*param_1;
      }
      if (uVar5 != 0) {
        memmove((void *)((longlong)puVar4 + param_6 + param_2),
                (void *)((longlong)puVar3 + param_3 + param_2),uVar5);
      }
      if (0xf < (ulonglong)param_4[3]) {
        param_4 = (undefined8 *)*param_4;
      }
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      if (param_6 != 0) {
        memcpy((void *)((longlong)puVar3 + param_2),(void *)((longlong)param_4 + param_5),param_6);
      }
      goto LAB_14014d8f7;
    }
    if (param_6 < param_3) {
      puVar4 = param_1;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
        puVar3 = (undefined8 *)*param_1;
      }
      if (param_6 != 0) {
        memmove((void *)((longlong)puVar4 + param_2),(void *)((longlong)puVar3 + param_5),param_6);
      }
      puVar4 = param_1;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
        puVar3 = (undefined8 *)*param_1;
      }
      if (uVar5 == 0) goto LAB_14014d8f7;
      _Src = (void *)((longlong)puVar3 + param_3 + param_2);
      _Dst = (void *)((longlong)puVar4 + param_6 + param_2);
    }
    else if (param_2 < param_5) {
      if (param_5 < param_2 + param_3) {
        puVar4 = param_1;
        puVar3 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
          puVar3 = (undefined8 *)*param_1;
        }
        if (param_3 != 0) {
          memmove((void *)((longlong)puVar4 + param_2),(void *)((longlong)puVar3 + param_5),param_3)
          ;
        }
        puVar4 = param_1;
        puVar3 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
          puVar3 = (undefined8 *)*param_1;
        }
        if (uVar5 != 0) {
          memmove((void *)((longlong)puVar4 + param_6 + param_2),
                  (void *)((longlong)puVar3 + param_3 + param_2),uVar5);
        }
        puVar4 = param_1;
        puVar3 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
          puVar3 = (undefined8 *)*param_1;
        }
        uVar5 = param_6 - param_3;
        if (uVar5 == 0) goto LAB_14014d8f7;
        _Src = (void *)((longlong)puVar3 + param_6 + param_5);
        _Dst = (void *)((longlong)puVar4 + param_3 + param_2);
      }
      else {
        puVar4 = param_1;
        puVar3 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
          puVar3 = (undefined8 *)*param_1;
        }
        if (uVar5 != 0) {
          memmove((void *)((longlong)puVar4 + param_6 + param_2),
                  (void *)((longlong)puVar3 + param_3 + param_2),uVar5);
        }
        puVar4 = param_1;
        puVar3 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
          puVar3 = (undefined8 *)*param_1;
        }
        if (param_6 == 0) goto LAB_14014d8f7;
        _Dst = (void *)((longlong)puVar4 + param_2);
        _Src = (void *)((longlong)puVar3 + param_6 + (param_5 - param_3));
        uVar5 = param_6;
      }
    }
    else {
      puVar4 = param_1;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
        puVar3 = (undefined8 *)*param_1;
      }
      if (uVar5 != 0) {
        memmove((void *)((longlong)puVar4 + param_6 + param_2),
                (void *)((longlong)puVar3 + param_3 + param_2),uVar5);
      }
      puVar4 = param_1;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
        puVar3 = (undefined8 *)*param_1;
      }
      if (param_6 == 0) goto LAB_14014d8f7;
      _Src = (void *)((longlong)puVar3 + param_5);
      _Dst = (void *)((longlong)puVar4 + param_2);
      uVar5 = param_6;
    }
  }
  memmove(_Dst,_Src,uVar5);
LAB_14014d8f7:
  param_1[2] = uVar2;
  puVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  *(undefined1 *)((longlong)puVar3 + uVar2) = 0;
  return param_1;
}

