// FUN_140b84110 @ 140b84110
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140dfb5bc free
//   -> 140002020 FUN_140002020


void FUN_140b84110(undefined8 *param_1)

{
  undefined8 *_Memory;
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar3 = (undefined8 *)param_1[4];
  uVar4 = 0;
  uVar5 = (param_1[5] - (longlong)puVar3) + 7U >> 3;
  if ((undefined8 *)param_1[5] < puVar3) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      _Memory = (undefined8 *)*puVar3;
      if (_Memory != (undefined8 *)0x0) {
        if ((void *)*_Memory != (void *)0x0) {
          free((void *)*_Memory);
          *_Memory = 0;
        }
        free(_Memory);
      }
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  param_1[5] = param_1[4];
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x20,*(__uint64 *)((longlong)pvVar1 + -8),FUN_14000c260);
    free((__uint64 *)((longlong)pvVar1 + -8));
    param_1[7] = 0;
  }
  pvVar1 = (void *)param_1[8];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x20,*(__uint64 *)((longlong)pvVar1 + -8),FUN_14000c260);
    free((__uint64 *)((longlong)pvVar1 + -8));
    param_1[8] = 0;
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[6] - lVar2 >> 3,8);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if (0xf < (ulonglong)param_1[3]) {
    FUN_140002020(*param_1,param_1[3] + 1,1);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    *(undefined1 *)*param_1 = 0;
  }
  return;
}

