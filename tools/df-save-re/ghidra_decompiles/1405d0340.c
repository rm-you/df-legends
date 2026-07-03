// FUN_1405d0340 @ 1405d0340
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free


void FUN_1405d0340(longlong *param_1)

{
  void *_Src;
  void *_Dst;
  void *_Memory;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  lVar2 = param_1[1] - lVar3;
  do {
    if (lVar2 >> 3 == 0) {
      return;
    }
    _Memory = *(void **)(lVar3 + -8 + (lVar2 >> 3) * 8);
    if (_Memory != (void *)0x0) {
      iVar1 = (int)(DAT_141c536b8 - DAT_141c536b0 >> 3) + -1;
      if (-1 < iVar1) {
        lVar3 = (longlong)iVar1;
        do {
          if (*(void **)(DAT_141c536b0 + lVar3 * 8) == _Memory) {
            _Dst = (void *)(DAT_141c536b0 + (longlong)iVar1 * 8);
            _Src = (void *)((longlong)_Dst + 8);
            memmove(_Dst,_Src,DAT_141c536b8 - (longlong)_Src);
            DAT_141c536b8 = DAT_141c536b8 + -8;
            break;
          }
          iVar1 = iVar1 + -1;
          lVar3 = lVar3 + -1;
        } while (-1 < lVar3);
      }
      free(_Memory);
    }
    lVar3 = *param_1;
    lVar2 = param_1[1] - lVar3;
  } while( true );
}

