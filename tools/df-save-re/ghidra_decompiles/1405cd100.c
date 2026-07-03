// FUN_1405cd100 @ 1405cd100
// callees:
//   -> 140c41a40 FUN_140c41a40
//   -> 140dfb5b4 free


void FUN_1405cd100(longlong *param_1)

{
  longlong lVar1;
  void *_Memory;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  lVar2 = param_1[1] - lVar1;
  while (lVar2 >> 3 != 0) {
    _Memory = *(void **)(lVar1 + (longlong)((int)(lVar2 >> 3) + -1) * 8);
    if (_Memory != (void *)0x0) {
      FUN_140c41a40(_Memory);
      free(_Memory);
    }
    lVar1 = *param_1;
    lVar2 = param_1[1] - lVar1;
  }
  uVar5 = 0;
  puVar3 = (undefined8 *)param_1[0xf];
  uVar4 = (ulonglong)(param_1[0x10] + (7 - (longlong)puVar3)) >> 3;
  if ((undefined8 *)param_1[0x10] < puVar3) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      free((void *)*puVar3);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar4);
  }
  param_1[0x10] = param_1[0xf];
  return;
}

