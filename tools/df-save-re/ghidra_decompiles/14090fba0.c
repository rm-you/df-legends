// FUN_14090fba0 @ 14090fba0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free
//   -> 1400516f0 FUN_1400516f0
//   -> 140019a10 FUN_140019a10
//   -> 1400046c0 FUN_1400046c0
//   -> 140002020 FUN_140002020


void FUN_14090fba0(int *param_1)

{
  void *_Src;
  void *_Dst;
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = 0;
  iVar5 = (int)(DAT_141d69438 - DAT_141d69430 >> 3) + -1;
  uVar7 = uVar9;
  if (-1 < iVar5) {
    do {
      iVar3 = iVar5 + (int)uVar7 >> 1;
      piVar1 = *(int **)(DAT_141d69430 + (longlong)iVar3 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d69430 + (longlong)iVar3 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141d69438 - (longlong)_Src);
        DAT_141d69438 = DAT_141d69438 + -8;
        break;
      }
      if (*param_1 < *piVar1) {
        iVar5 = iVar3 + -1;
      }
      else {
        uVar7 = (ulonglong)(iVar3 + 1);
      }
    } while ((int)uVar7 <= iVar5);
  }
  puVar6 = *(undefined8 **)(param_1 + 8);
  uVar7 = (*(longlong *)(param_1 + 10) - (longlong)puVar6) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 10) < puVar6) {
    uVar7 = uVar9;
  }
  uVar8 = uVar9;
  if (uVar7 != 0) {
    do {
      free((void *)*puVar6);
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 < uVar7);
  }
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 8);
  iVar5 = param_1[3];
  if (((iVar5 != -1) && (iVar3 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3), iVar3 != 0)) &&
     (iVar3 = iVar3 + -1, -1 < iVar3)) {
    do {
      iVar4 = (int)uVar9 + iVar3 >> 1;
      lVar2 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar4 * 8);
      if (*(int *)(lVar2 + 0x130) == iVar5) {
        if (lVar2 != 0) {
          FUN_1400516f0(param_1,lVar2 + 0x1398);
        }
        break;
      }
      if (iVar5 < *(int *)(lVar2 + 0x130)) {
        iVar3 = iVar4 + -1;
      }
      else {
        uVar9 = (ulonglong)(iVar4 + 1);
      }
    } while ((int)uVar9 <= iVar3);
  }
  if (((param_1[5] != -1) && (DAT_141d6cfd0 != 0)) &&
     ((lVar2 = FUN_140019a10(), lVar2 != 0 && (lVar2 = FUN_1400046c0(lVar2,param_1[4]), lVar2 != 0))
     )) {
    FUN_1400516f0(param_1,lVar2 + 0xa0);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xc) - lVar2 >> 3,8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  return;
}

