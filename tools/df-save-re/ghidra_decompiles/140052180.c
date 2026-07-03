// FUN_140052180 @ 140052180
// callees:


undefined8 FUN_140052180(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((((*(longlong *)(param_1 + 0x2a0) != 0) && (-1 < param_2)) &&
      (param_2 < *(int *)(param_1 + 0xa0))) &&
     (((-1 < param_3 && (param_3 < *(int *)(param_1 + 0xa4))) &&
      ((iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + (longlong)param_2 * 8) +
                         0x60 + (longlong)param_3 * 0x70), -1 < iVar1 &&
       ((ulonglong)(longlong)iVar1 <
        (ulonglong)(*(longlong *)(param_1 + 0x230) - *(longlong *)(param_1 + 0x228) >> 3))))))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar1 * 8);
  }
  return 0;
}

