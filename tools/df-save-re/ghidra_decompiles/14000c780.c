// FUN_14000c780 @ 14000c780
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000cfe0 FUN_14000cfe0
//   -> 140dfdcc6 memcpy


undefined8 * FUN_14000c780(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_1[3];
    puVar2 = param_1;
    if (0xf < uVar1) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (puVar2 <= param_2) {
      puVar2 = param_1;
      if (0xf < uVar1) {
        puVar2 = (undefined8 *)*param_1;
      }
      if (param_2 < (undefined8 *)((longlong)puVar2 + param_1[2])) {
        puVar2 = param_1;
        if (0xf < uVar1) {
          puVar2 = (undefined8 *)*param_1;
        }
        puVar2 = (undefined8 *)
                 FUN_14000c8b0(param_1,param_1,(longlong)param_2 - (longlong)puVar2,param_3);
        return puVar2;
      }
    }
  }
  if (param_3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if ((ulonglong)param_1[3] < param_3) {
    FUN_14000cfe0(param_1,param_3,param_1[2]);
  }
  else if (param_3 == 0) {
    param_1[2] = 0;
    if ((ulonglong)param_1[3] < 0x10) {
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
    *(undefined1 *)*param_1 = 0;
    return param_1;
  }
  if (param_3 != 0) {
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (param_3 != 0) {
      memcpy(puVar2,param_2,param_3);
    }
    param_1[2] = param_3;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)puVar2 + param_3) = 0;
  }
  return param_1;
}

