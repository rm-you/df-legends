// FUN_14030c5a0 @ 14030c5a0
// callees:
//   -> 140051e20 FUN_140051e20


void FUN_14030c5a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (param_1[1] - *param_1 >> 3 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *param_1);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while ((ulonglong)(longlong)iVar2 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  param_1[1] = *param_1;
  param_1[4] = param_1[3];
  *(undefined2 *)(param_1 + 7) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  plVar1 = param_1 + 9;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xb] = 0;
  if (0xf < (ulonglong)param_1[0xc]) {
    plVar1 = (longlong *)*plVar1;
  }
  *(undefined1 *)plVar1 = 0;
  FUN_140051e20(param_1 + 0xd);
  return;
}

