// FUN_14007e640 @ 14007e640
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140dfc99c memset
//   -> 140050070 FUN_140050070


void FUN_14007e640(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  void *local_res8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (((iVar1 < 0) || (0x3f < *(int *)(*(longlong *)(*param_1 + (longlong)iVar1 * 8) + 0x704))) &&
     (*(int *)((longlong)param_1 + 0x24) = iVar1 + 1,
     (ulonglong)(param_1[1] - *param_1 >> 3) <= (ulonglong)(longlong)(iVar1 + 1))) {
    _Dst = operator_new(0x708);
    local_res8 = _Dst;
    memset(_Dst,0,0x400);
    *(undefined4 *)((longlong)_Dst + 0x400) = 0;
    memset((void *)((longlong)_Dst + 0x404),0,0x300);
    *(undefined4 *)((longlong)_Dst + 0x704) = 0;
    local_res8 = _Dst;
    FUN_140050070(param_1,&local_res8);
  }
  lVar2 = *(longlong *)(*param_1 + (longlong)*(int *)((longlong)param_1 + 0x24) * 8);
  *(undefined4 *)(lVar2 + 0x404 + (longlong)*(int *)(lVar2 + 0x704) * 4) = param_2;
  *(undefined4 *)(lVar2 + 0x504 + (longlong)*(int *)(lVar2 + 0x704) * 4) = param_3;
  *(undefined4 *)(lVar2 + 0x604 + (longlong)*(int *)(lVar2 + 0x704) * 4) = param_4;
  *(int *)(lVar2 + 0x704) = *(int *)(lVar2 + 0x704) + 1;
  return;
}

