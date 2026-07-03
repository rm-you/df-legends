// FUN_1401b2ee0 @ 1401b2ee0
// callees:
//   -> 1401b2f70 FUN_1401b2f70


void FUN_1401b2ee0(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined1 *)*param_1, puVar2 <= param_2)) {
    if (puVar1 == (undefined1 *)param_1[2]) {
      FUN_1401b2f70(param_1,1);
    }
    if ((undefined1 *)param_1[1] != (undefined1 *)0x0) {
      *(undefined1 *)param_1[1] = param_2[*param_1 - (longlong)puVar2];
      param_1[1] = param_1[1] + 1;
      return;
    }
  }
  else {
    if (puVar1 == (undefined1 *)param_1[2]) {
      FUN_1401b2f70(param_1,1);
    }
    if ((undefined1 *)param_1[1] != (undefined1 *)0x0) {
      *(undefined1 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 1;
  return;
}

