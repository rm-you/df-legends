// FUN_14000c5a0 @ 14000c5a0
// callees:
//   -> 140dfdcc6 memcpy
//   -> 140002020 FUN_140002020


void FUN_14000c5a0(longlong *param_1,char param_2,size_t param_3)

{
  void *_Src;
  
  if ((param_2 != '\0') && (0xf < (ulonglong)param_1[3])) {
    _Src = (void *)*param_1;
    if (param_3 != 0) {
      memcpy(param_1,_Src,param_3);
    }
    FUN_140002020(_Src,param_1[3] + 1,1);
  }
  param_1[3] = 0xf;
  param_1[2] = param_3;
  if (0xf < (ulonglong)param_1[3]) {
    *(undefined1 *)(*param_1 + param_3) = 0;
    return;
  }
  *(undefined1 *)((longlong)param_1 + param_3) = 0;
  return;
}

