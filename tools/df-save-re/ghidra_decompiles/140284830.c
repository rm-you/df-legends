// FUN_140284830 @ 140284830
// callees:
//   -> 140284930 FUN_140284930
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_140284830(void *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_140284930();
  plVar1 = (longlong *)((longlong)param_1 + 0xa8);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0xb8) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
    *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x90);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0xa0) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x98) = 0;
    *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x58);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x68) - lVar2 >> 3,8);
    *(undefined8 *)((longlong)param_1 + 0x58) = 0;
    *(undefined8 *)((longlong)param_1 + 0x60) = 0;
    *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x48));
  }
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  _eh_vector_destructor_iterator_(param_1,0x20,2,FUN_14000c260);
  return;
}

