// FUN_1403670c0 @ 1403670c0
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_1403670c0(longlong *param_1)

{
  void *_Memory;
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 7;
  plVar3 = param_1;
  do {
    iVar2 = (int)(plVar3[1] - *plVar3 >> 3) + -1;
    lVar5 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        _Memory = *(void **)(*plVar3 + lVar5 * 8);
        if (_Memory != (void *)0x0) {
          lVar1 = *(longlong *)((longlong)_Memory + 0x18);
          if (lVar1 != 0) {
            FUN_140002020(lVar1,*(longlong *)((longlong)_Memory + 0x28) - lVar1 >> 2,4);
            *(undefined8 *)((longlong)_Memory + 0x18) = 0;
            *(undefined8 *)((longlong)_Memory + 0x20) = 0;
            *(undefined8 *)((longlong)_Memory + 0x28) = 0;
          }
          free(_Memory);
        }
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    plVar3[1] = *plVar3;
    plVar3 = plVar3 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = param_1[0x1a];
  if (lVar4 != 0) {
    FUN_140002020(lVar4,param_1[0x1c] - lVar4 >> 2,4);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  plVar3 = param_1 + 0x15;
  if (0xf < (ulonglong)param_1[0x18]) {
    FUN_140002020(*plVar3,param_1[0x18] + 1,1);
  }
  param_1[0x18] = 0xf;
  param_1[0x17] = 0;
  if (0xf < (ulonglong)param_1[0x18]) {
    plVar3 = (longlong *)*plVar3;
  }
  *(undefined1 *)plVar3 = 0;
  _eh_vector_destructor_iterator_(param_1,0x18,7,FUN_1400030c0);
  return;
}

