// FUN_140c14800 @ 140c14800
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void FUN_140c14800(longlong *param_1)

{
  void *_Memory;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      _Memory = *(void **)(*param_1 + lVar3 * 8);
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
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  param_1[1] = *param_1;
  lVar3 = param_1[0xc];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0xe] - lVar3 >> 2,4);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar3 = param_1[9];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0xb] - lVar3 >> 2,4);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[8] - lVar3 >> 2,4);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[5] - lVar3 >> 2,4);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[2] - lVar3 >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

