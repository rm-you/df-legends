// FUN_140493660 @ 140493660
// callees:
//   -> 140087a10 FUN_140087a10
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140dfb5b4 free


void FUN_140493660(longlong *param_1)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (iVar1 < 0) {
    param_1[1] = *param_1;
  }
  else {
    do {
      _Memory = *(void **)(*param_1 + lVar2 * 8);
      if (_Memory != (void *)0x0) {
        FUN_140087a10(_Memory);
        _eh_vector_destructor_iterator_
                  ((void *)((longlong)_Memory + 0x22d8),0x18,0x100,FUN_1400030c0);
        free(_Memory);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
    param_1[1] = *param_1;
  }
  return;
}

