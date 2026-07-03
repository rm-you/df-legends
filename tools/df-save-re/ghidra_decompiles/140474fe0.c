// FUN_140474fe0 @ 140474fe0
// callees:
//   -> 140475070 FUN_140475070


void FUN_140474fe0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined4 *)*param_1, puVar2 <= param_2)) {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_140475070(param_1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] =
           *(undefined4 *)(*param_1 + ((longlong)param_2 - (longlong)puVar2 >> 2) * 4);
      param_1[1] = param_1[1] + 4;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_140475070(param_1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 4;
  return;
}

