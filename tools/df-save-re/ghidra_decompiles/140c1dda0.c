// FUN_140c1dda0 @ 140c1dda0
// callees:
//   -> 140c1df50 FUN_140c1df50
//   -> 140dfb5b4 free
//   -> EXTERNAL:00000013 SDL_FreeSurface


void FUN_140c1dda0(void)

{
  void *_Memory;
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar4 = 0;
  lVar2 = DAT_141c3d450;
  uVar3 = uVar4;
  uVar6 = uVar4;
  lVar1 = DAT_141c3d458;
  if (DAT_141c3d458 - DAT_141c3d450 >> 3 != 0) {
    do {
      _Memory = *(void **)(uVar6 + lVar2);
      if (_Memory != (void *)0x0) {
        FUN_140c1df50(_Memory);
        free(_Memory);
        lVar2 = DAT_141c3d450;
        lVar1 = DAT_141c3d458;
      }
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(lVar1 - lVar2 >> 3));
  }
  lVar1 = DAT_141c3d470;
  uVar3 = uVar4;
  uVar6 = uVar4;
  lVar7 = DAT_141c3d468;
  DAT_141c3d458 = lVar2;
  if (DAT_141c3d470 - DAT_141c3d468 >> 2 != 0) {
    do {
      lVar2 = (longlong)*(int *)(uVar6 + lVar7) * 8;
      if (*(longlong *)(lVar2 + DAT_141c33e80) != 0) {
        SDL_FreeSurface();
        *(undefined8 *)(lVar2 + DAT_141c33e80) = 0;
        lVar1 = DAT_141c3d470;
        lVar7 = DAT_141c3d468;
      }
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
      uVar6 = uVar6 + 4;
    } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(lVar1 - lVar7 >> 2));
  }
  lVar2 = DAT_141c3d480;
  uVar3 = uVar4;
  lVar1 = DAT_141c3d488;
  if (DAT_141c3d488 - DAT_141c3d480 >> 2 != 0) {
    do {
      lVar7 = (longlong)*(int *)(uVar3 + lVar2) * 8;
      if (*(longlong *)(lVar7 + DAT_141c33e80) != 0) {
        SDL_FreeSurface();
        *(undefined8 *)(lVar7 + DAT_141c33e80) = 0;
        lVar2 = DAT_141c3d480;
        lVar1 = DAT_141c3d488;
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar3 = uVar3 + 4;
    } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(lVar1 - lVar2 >> 2));
    DAT_141c3d470 = DAT_141c3d468;
    lVar7 = DAT_141c3d470;
  }
  DAT_141c3d470 = lVar7;
  DAT_141c3d488 = lVar2;
  return;
}

