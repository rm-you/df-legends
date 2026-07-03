// FUN_140c76780 @ 140c76780
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 14000be20 FUN_14000be20


void FUN_140c76780(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  
  plVar2 = (longlong *)(param_1 + 0xbc8);
  lVar3 = *(longlong *)(param_1 + 0xbd0) - *plVar2;
  local_res20[0] = param_4;
  local_res18[0] = param_3;
  local_res10[0] = param_2;
  while (0x31 < (ulonglong)(lVar3 >> 1)) {
    pvVar1 = (void *)(*plVar2 + 2);
    memmove((void *)*plVar2,pvVar1,*(longlong *)(param_1 + 0xbd0) - (longlong)pvVar1);
    *(longlong *)(param_1 + 0xbd0) = *(longlong *)(param_1 + 0xbd0) + -2;
    pvVar1 = (void *)((longlong)*(void **)(param_1 + 0xbe0) + 2);
    memmove(*(void **)(param_1 + 0xbe0),pvVar1,*(longlong *)(param_1 + 0xbe8) - (longlong)pvVar1);
    *(longlong *)(param_1 + 0xbe8) = *(longlong *)(param_1 + 0xbe8) + -2;
    pvVar1 = (void *)((longlong)*(void **)(param_1 + 0xbf8) + 2);
    memmove(*(void **)(param_1 + 0xbf8),pvVar1,*(longlong *)(param_1 + 0xc00) - (longlong)pvVar1);
    *(longlong *)(param_1 + 0xc00) = *(longlong *)(param_1 + 0xc00) + -2;
    lVar3 = *(longlong *)(param_1 + 0xbd0) - *plVar2;
  }
  FUN_14000be20(plVar2,local_res10);
  FUN_14000be20(param_1 + 0xbe0,local_res18);
  FUN_14000be20(param_1 + 0xbf8,local_res20);
  return;
}

