// FUN_1400bee40 @ 1400bee40
// callees:
//   -> 1400be820 FUN_1400be820
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_1400bee40(ulonglong *param_1)

{
  void *_Memory;
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = (param_1[1] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      _Memory = (void *)*puVar1;
      if (_Memory != (void *)0x0) {
        FUN_1400be820(_Memory);
        free(_Memory);
      }
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  param_1[1] = *param_1;
  uVar2 = *param_1;
  if (uVar2 != 0) {
    FUN_140002020(uVar2,(longlong)(param_1[2] - uVar2) >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

