// FUN_140428a80 @ 140428a80
// callees:
//   -> 14000c2d0 FUN_14000c2d0


void FUN_140428a80(longlong param_1,ulonglong *param_2)

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
      FUN_14000c2d0(param_2,1);
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
      FUN_14000c2d0(param_2,1);
    }
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = param_1;
    }
  }
  param_2[1] = param_2[1] + 8;
  return;
}

