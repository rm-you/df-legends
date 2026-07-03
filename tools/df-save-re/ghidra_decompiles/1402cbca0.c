// FUN_1402cbca0 @ 1402cbca0
// callees:
//   -> 1402cbd60 FUN_1402cbd60
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_1402cbca0(void *param_1)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)((longlong)param_1 + 0x28) - *(longlong *)((longlong)param_1 + 0x20) >>
               3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      _Memory = *(void **)(*(longlong *)((longlong)param_1 + 0x20) + lVar2 * 8);
      if (_Memory != (void *)0x0) {
        FUN_1402cbd60(_Memory);
        free(_Memory);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_1 + 0x20);
  lVar2 = *(longlong *)((longlong)param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x30) - lVar2 >> 3,8);
    *(undefined8 *)((longlong)param_1 + 0x20) = 0;
    *(undefined8 *)((longlong)param_1 + 0x28) = 0;
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  _eh_vector_destructor_iterator_(param_1,0x20,1,FUN_14000c260);
  return;
}

