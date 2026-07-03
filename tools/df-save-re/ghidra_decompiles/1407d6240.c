// FUN_1407d6240 @ 1407d6240
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 1407d5800 FUN_1407d5800
//   -> 1407d6420 FUN_1407d6420
//   -> 1407d5a20 FUN_1407d5a20
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_1407d6240(int *param_1)

{
  void *_Dst;
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1;
  if (-1 < iVar5) {
    do {
      iVar4 = iVar5 + iVar6 >> 1;
      piVar1 = *(int **)(DAT_141d691a8 + (longlong)iVar4 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d691a8 + (longlong)iVar4 * 8);
        pvVar2 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar2,DAT_141d691b0 - (longlong)pvVar2);
        DAT_141d691b0 = DAT_141d691b0 + -8;
        break;
      }
      if (*param_1 < *piVar1) {
        iVar5 = iVar4 + -1;
      }
      else {
        iVar6 = iVar4 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  pvVar2 = *(void **)(param_1 + 0x44);
  if (pvVar2 != (void *)0x0) {
    iVar5 = param_1[1];
    if (iVar5 == 6) {
      FUN_1407d5a20(pvVar2);
    }
    else if (iVar5 == 7) {
      FUN_1407d6420(pvVar2);
    }
    else if (iVar5 == 8) {
      FUN_1407d6420(pvVar2);
    }
    else if (iVar5 == 9) {
      FUN_1407d5800(pvVar2);
    }
    else {
      if (iVar5 != 10) goto LAB_1407d6341;
      FUN_1407d5800(pvVar2);
    }
    free(pvVar2);
  }
LAB_1407d6341:
  lVar3 = *(longlong *)(param_1 + 0x2e);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x32) - lVar3 >> 2,4);
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x24) - lVar3 >> 2,4);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x14) - lVar3 >> 2,4);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 2);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 6) - lVar3 >> 2,4);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

