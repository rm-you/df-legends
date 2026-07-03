// FUN_1407d5800 @ 1407d5800
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void FUN_1407d5800(ulonglong *param_1)

{
  void *_Memory;
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  puVar2 = (undefined8 *)*param_1;
  uVar3 = (param_1[1] - (longlong)puVar2) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      _Memory = (void *)*puVar2;
      if (_Memory != (void *)0x0) {
        lVar1 = *(longlong *)((longlong)_Memory + 0x10);
        if (lVar1 != 0) {
          FUN_140002020(lVar1,*(longlong *)((longlong)_Memory + 0x20) - lVar1 >> 2,4);
          *(undefined8 *)((longlong)_Memory + 0x10) = 0;
          *(undefined8 *)((longlong)_Memory + 0x18) = 0;
          *(undefined8 *)((longlong)_Memory + 0x20) = 0;
        }
        free(_Memory);
      }
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  param_1[1] = *param_1;
  uVar3 = *param_1;
  if (uVar3 != 0) {
    FUN_140002020(uVar3,(longlong)(param_1[2] - uVar3) >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

