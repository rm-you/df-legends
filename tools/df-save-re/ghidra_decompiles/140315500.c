// FUN_140315500 @ 140315500
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140a40530 FUN_140a40530
//   -> 140050410 FUN_140050410


void FUN_140315500(undefined8 param_1,ulonglong *param_2,undefined4 param_3)

{
  longlong **pplVar1;
  longlong **pplVar2;
  longlong *plVar3;
  int iVar4;
  int local_res20 [2];
  longlong *local_28 [2];
  
  FUN_1405bba90(param_1,local_res20,4);
  iVar4 = 0;
  if (0 < local_res20[0]) {
    do {
      plVar3 = (longlong *)FUN_140a40530(param_1);
      local_28[0] = plVar3;
      (**(code **)(*plVar3 + 8))(plVar3,param_1,param_3);
      pplVar1 = (longlong **)param_2[1];
      if ((local_28 < pplVar1) && (pplVar2 = (longlong **)*param_2, pplVar2 <= local_28)) {
        if (pplVar1 == (longlong **)param_2[2]) {
          FUN_140050410(param_2);
        }
        if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
          *(undefined8 *)param_2[1] =
               *(undefined8 *)(*param_2 + ((longlong)local_28 - (longlong)pplVar2 >> 3) * 8);
        }
      }
      else {
        if (pplVar1 == (longlong **)param_2[2]) {
          FUN_140050410(param_2);
        }
        if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
          *(undefined8 *)param_2[1] = plVar3;
        }
      }
      param_2[1] = param_2[1] + 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_res20[0]);
  }
  return;
}

