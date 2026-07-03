// FUN_140b87300 @ 140b87300
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void FUN_140b87300(longlong *param_1)

{
  longlong *plVar1;
  void *_Memory;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  iVar2 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      plVar1 = *(longlong **)(*param_1 + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  param_1[1] = *param_1;
  iVar2 = (int)(param_1[4] - param_1[3] >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      _Memory = *(void **)(param_1[3] + lVar3 * 8);
      if (_Memory != (void *)0x0) {
        puVar4 = (undefined8 *)((longlong)_Memory + 8);
        if (0xf < *(ulonglong *)((longlong)_Memory + 0x20)) {
          FUN_140002020(*puVar4,*(ulonglong *)((longlong)_Memory + 0x20) + 1,1);
        }
        *(undefined8 *)((longlong)_Memory + 0x20) = 0xf;
        *(undefined8 *)((longlong)_Memory + 0x18) = 0;
        if (0xf < *(ulonglong *)((longlong)_Memory + 0x20)) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
        free(_Memory);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  param_1[4] = param_1[3];
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[5] - lVar3 >> 3,8);
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

