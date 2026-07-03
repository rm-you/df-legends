// FUN_14048e680 @ 14048e680
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void * FUN_14048e680(void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)((longlong)param_1 + 0x38) - lVar1 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x28) = 0;
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
    *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  }
  lVar1 = *(longlong *)((longlong)param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)((longlong)param_1 + 0x20) - lVar1 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  }
  free(param_1);
  return param_1;
}

