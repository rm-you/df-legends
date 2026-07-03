// FUN_1402cb600 @ 1402cb600
// callees:
//   -> 140050410 FUN_140050410


void FUN_1402cb600(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar1 = (longlong *)param_2[1];
  plVar2 = (longlong *)*param_2;
  for (plVar3 = plVar2; plVar3 < plVar1; plVar3 = plVar3 + 1) {
    if (*plVar3 == param_1) {
      return;
    }
  }
  local_res8 = param_1;
  if ((&local_res8 < plVar1) && (plVar2 <= &local_res8)) {
    if (plVar1 == (longlong *)param_2[2]) {
      FUN_140050410(param_2);
    }
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] =
           *(undefined8 *)(*param_2 + ((longlong)&local_res8 - (longlong)plVar2 >> 3) * 8);
      param_2[1] = param_2[1] + 8;
      return;
    }
  }
  else {
    if (plVar1 == (longlong *)param_2[2]) {
      FUN_140050410(param_2);
    }
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = param_1;
    }
  }
  param_2[1] = param_2[1] + 8;
  return;
}

