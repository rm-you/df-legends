// FUN_140280210 @ 140280210
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> EXTERNAL:000000e1 memmove


/* WARNING: Removing unreachable block (ram,0x000140280227) */

void FUN_140280210(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  void *_Dst;
  void *_Src;
  void *pvVar2;
  ulonglong uVar3;
  
  pvVar2 = (void *)*param_1;
  _Src = (void *)param_1[1];
  uVar3 = param_2 + 0x1f >> 5;
  if (uVar3 < (ulonglong)((longlong)_Src - (longlong)pvVar2 >> 2)) {
    _Dst = (void *)((longlong)pvVar2 + uVar3 * 4);
    if (_Dst != pvVar2) {
      if (_Dst == _Src) goto LAB_140280294;
      memmove(_Dst,_Src,0);
      pvVar2 = _Dst;
    }
    param_1[1] = (longlong)pvVar2;
  }
LAB_140280294:
  param_1[3] = param_2;
  if ((param_2 & 0x1f) != 0) {
    puVar1 = (uint *)(*param_1 + uVar3 * 4 + -4);
    *puVar1 = *puVar1 & (1 << ((byte)param_2 & 0x1f)) - 1U;
  }
  return;
}

