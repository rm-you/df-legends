// FUN_140d1fb80 @ 140d1fb80
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void FUN_140d1fb80(undefined8 *param_1)

{
  undefined8 *_Memory;
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = (undefined8 *)*param_1;
  uVar4 = 0;
  uVar3 = (param_1[1] - (longlong)puVar2) + 7U >> 3;
  if ((undefined8 *)param_1[1] < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 == 0) {
    param_1[1] = puVar2;
  }
  else {
    do {
      _Memory = (undefined8 *)*puVar2;
      if (_Memory != (undefined8 *)0x0) {
        if (0xf < (ulonglong)_Memory[3]) {
          FUN_140002020(*_Memory,_Memory[3] + 1,1);
        }
        _Memory[3] = 0xf;
        _Memory[2] = 0;
        puVar1 = _Memory;
        if (0xf < (ulonglong)_Memory[3]) {
          puVar1 = (undefined8 *)*_Memory;
        }
        *(undefined1 *)puVar1 = 0;
        free(_Memory);
      }
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    param_1[1] = *param_1;
  }
  return;
}

