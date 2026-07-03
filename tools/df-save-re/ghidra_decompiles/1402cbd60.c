// FUN_1402cbd60 @ 1402cbd60
// callees:
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_1402cbd60(void *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)((longlong)param_1 + 0xb8);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 200) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
    *(undefined8 *)((longlong)param_1 + 200) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0xa0);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0xb0) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
    *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  }
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x88));
  }
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  _eh_vector_destructor_iterator_(param_1,0x20,4,FUN_14000c260);
  return;
}

