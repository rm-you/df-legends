// FUN_140087a10 @ 140087a10
// callees:
//   -> 140dfb5b4 free


void FUN_140087a10(longlong param_1)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)(param_1 + 0x22d8);
  lVar5 = 0x10;
  do {
    lVar2 = 0x10;
    do {
      iVar1 = (int)(plVar3[1] - *plVar3 >> 3) + -1;
      lVar4 = (longlong)iVar1;
      if (-1 < iVar1) {
        do {
          _Memory = *(void **)(*plVar3 + lVar4 * 8);
          if (_Memory != (void *)0x0) {
            if (*(void **)((longlong)_Memory + 0x30) != (void *)0x0) {
              free(*(void **)((longlong)_Memory + 0x30));
            }
            *(undefined8 *)((longlong)_Memory + 0x30) = 0;
            *(undefined4 *)((longlong)_Memory + 0x38) = 0;
            free(_Memory);
          }
          lVar4 = lVar4 + -1;
        } while (-1 < lVar4);
      }
      plVar3[1] = *plVar3;
      plVar3 = plVar3 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

