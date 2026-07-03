// FUN_140cf1960 @ 140cf1960
// callees:
//   -> 140cf1a50 FUN_140cf1a50
//   -> 140ceec60 FUN_140ceec60
//   -> 140dfb5b4 free


void FUN_140cf1960(longlong *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  void *_Memory;
  int iVar5;
  longlong lVar6;
  
  iVar5 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar6 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      lVar4 = *(longlong *)(*param_1 + lVar6 * 8);
      sVar1 = *(short *)(lVar4 + 4);
      sVar2 = *(short *)(lVar4 + 8);
      sVar3 = *(short *)(lVar4 + 6);
      if (((((sVar1 < 0) || (DAT_141d69554 <= sVar1)) || (sVar3 < 0)) ||
          ((DAT_141d69558 <= sVar3 || (sVar2 < 0)))) ||
         ((DAT_141d6955c <= sVar2 ||
          ((DAT_141d69520 == 0 ||
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(DAT_141d69520 + ((longlong)sVar1 >> 4) * 8) +
               ((longlong)sVar3 >> 4) * 8) + (longlong)sVar2 * 8) == 0)))))) {
        FUN_140cf1a50();
        _Memory = *(void **)(*param_1 + lVar6 * 8);
        if (_Memory != (void *)0x0) {
          FUN_140ceec60(_Memory);
          free(_Memory);
        }
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return;
}

