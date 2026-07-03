// FUN_140050070 @ 140050070
// callees:
//   -> 14000c2d0 FUN_14000c2d0


void FUN_140050070(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined8 *)*param_1, puVar2 <= param_2)) {
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_14000c2d0(param_1,1);
    }
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[1] =
           *(undefined8 *)(*param_1 + ((longlong)param_2 - (longlong)puVar2 >> 3) * 8);
      param_1[1] = param_1[1] + 8;
      return;
    }
  }
  else {
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_14000c2d0(param_1,1);
    }
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 8;
  return;
}

