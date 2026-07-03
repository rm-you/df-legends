// FUN_140475650 @ 140475650
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free


void FUN_140475650(longlong *param_1)

{
  void *_Src;
  void *_Dst;
  short sVar1;
  short sVar2;
  short sVar3;
  void *_Memory;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar6 = (longlong)iVar4;
  lVar5 = DAT_141d69520;
  if (-1 < iVar4) {
    do {
      _Memory = *(void **)(*param_1 + lVar6 * 8);
      sVar1 = *(short *)((longlong)_Memory + 0x18);
      sVar2 = *(short *)((longlong)_Memory + 0x1c);
      sVar3 = *(short *)((longlong)_Memory + 0x1a);
      if ((((((sVar1 < 0) || (DAT_141d69554 <= sVar1)) || (sVar3 < 0)) ||
           ((DAT_141d69558 <= sVar3 || (sVar2 < 0)))) ||
          ((DAT_141d6955c <= sVar2 ||
           ((lVar5 == 0 ||
            (*(longlong *)
              (*(longlong *)
                (*(longlong *)(lVar5 + ((longlong)sVar1 >> 4) * 8) + ((longlong)sVar3 >> 4) * 8) +
              (longlong)sVar2 * 8) == 0)))))) && (_Memory != (void *)0x0)) {
        iVar4 = (int)(DAT_141c536a0 - DAT_141c53698 >> 3) + -1;
        if (-1 < iVar4) {
          lVar5 = (longlong)iVar4;
          do {
            if (*(void **)(DAT_141c53698 + lVar5 * 8) == _Memory) {
              _Dst = (void *)(DAT_141c53698 + (longlong)iVar4 * 8);
              _Src = (void *)((longlong)_Dst + 8);
              memmove(_Dst,_Src,DAT_141c536a0 - (longlong)_Src);
              DAT_141c536a0 = DAT_141c536a0 + -8;
              break;
            }
            iVar4 = iVar4 + -1;
            lVar5 = lVar5 + -1;
          } while (-1 < lVar5);
        }
        free(_Memory);
        lVar5 = DAT_141d69520;
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return;
}

