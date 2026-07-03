// FUN_1400b8820 @ 1400b8820
// callees:
//   -> 140dfc99c memset
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> EXTERNAL:000000e1 memmove


void FUN_1400b8820(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  __uint64 _Size;
  
  if ((0 < *(int *)(param_1 + 1)) && ((void *)*param_1 != (void *)0x0)) {
    memset((void *)*param_1,0,(longlong)*(int *)(param_1 + 1));
  }
  iVar1 = *(int *)(param_2 + 1);
  _Size = (__uint64)iVar1;
  if (0 < iVar1) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
    }
    _Dst = operator_new(_Size);
    *param_1 = _Dst;
    memset(_Dst,0,_Size);
    *(int *)(param_1 + 1) = iVar1;
    memmove((void *)*param_1,(void *)*param_2,_Size);
  }
  return;
}

