// FUN_14000be20 @ 14000be20
// callees:
//   -> 14000c460 FUN_14000c460


void FUN_14000be20(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined2 *)*param_1, puVar2 <= param_2)) {
    if (puVar1 == (undefined2 *)param_1[2]) {
      FUN_14000c460(param_1,1);
    }
    if ((undefined2 *)param_1[1] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[1] =
           *(undefined2 *)(*param_1 + ((longlong)param_2 - (longlong)puVar2 >> 1) * 2);
      param_1[1] = param_1[1] + 2;
      return;
    }
  }
  else {
    if (puVar1 == (undefined2 *)param_1[2]) {
      FUN_14000c460(param_1,1);
    }
    if ((undefined2 *)param_1[1] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 2;
  return;
}

