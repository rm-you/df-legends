// FUN_1401426a0 @ 1401426a0
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void * FUN_1401426a0(void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)((longlong)param_1 + 0x50) - lVar1 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x40) = 0;
    *(undefined8 *)((longlong)param_1 + 0x48) = 0;
    *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  }
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)((longlong)param_1 + 0x38) - lVar1 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x28) = 0;
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
    *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  }
  free(param_1);
  return param_1;
}

