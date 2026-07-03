// FUN_1400b9420 @ 1400b9420
// callees:


void FUN_1400b9420(longlong *param_1)

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
        (**(code **)(*plVar1 + 0x20))(plVar1,1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while ((ulonglong)(longlong)iVar2 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  iVar2 = 0;
  param_1[1] = *param_1;
  if (param_1[4] - param_1[3] >> 3 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + param_1[3]);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while ((ulonglong)(longlong)iVar2 < (ulonglong)(param_1[4] - param_1[3] >> 3));
  }
  param_1[4] = param_1[3];
  plVar1 = (longlong *)param_1[0x19];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1,1);
    param_1[0x19] = 0;
  }
  return;
}

