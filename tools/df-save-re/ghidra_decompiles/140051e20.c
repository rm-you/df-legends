// FUN_140051e20 @ 140051e20
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_140051e20(longlong *param_1)

{
  void *_Src;
  undefined8 *_Memory;
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[1] - *param_1;
  while (lVar1 >> 3 != 0) {
    _Memory = *(undefined8 **)*param_1;
    if (_Memory != (undefined8 *)0x0) {
      if (0xf < (ulonglong)_Memory[3]) {
        FUN_140002020(*_Memory,_Memory[3] + 1,1);
      }
      _Memory[3] = 0xf;
      _Memory[2] = 0;
      puVar2 = _Memory;
      if (0xf < (ulonglong)_Memory[3]) {
        puVar2 = (undefined8 *)*_Memory;
      }
      *(undefined1 *)puVar2 = 0;
      free(_Memory);
    }
    _Src = (void *)(*param_1 + 8);
    memmove((void *)*param_1,_Src,param_1[1] - (longlong)_Src);
    param_1[1] = param_1[1] + -8;
    lVar1 = param_1[1] - *param_1;
  }
  return;
}

