// FUN_14001b620 @ 14001b620
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


void FUN_14001b620(int *param_1)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  plVar6 = *(longlong **)(param_1 + 2);
  uVar9 = 0;
  uVar7 = (*(longlong *)(param_1 + 4) - (longlong)plVar6) + 7U >> 3;
  if (*(longlong **)(param_1 + 4) < plVar6) {
    uVar7 = uVar9;
  }
  uVar8 = uVar9;
  if (uVar7 != 0) {
    do {
      plVar1 = (longlong *)*plVar6;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      plVar6 = plVar6 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 2);
  iVar5 = (int)(DAT_141d64da0 - DAT_141d64d98 >> 3) + -1;
  if (-1 < iVar5) {
    do {
      iVar4 = iVar5 + (int)uVar9 >> 1;
      piVar2 = *(int **)(DAT_141d64d98 + (longlong)iVar4 * 8);
      if (piVar2 == param_1) {
        _Dst = (void *)(DAT_141d64d98 + (longlong)iVar4 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141d64da0 - (longlong)_Src);
        DAT_141d64da0 = DAT_141d64da0 + -8;
        break;
      }
      if (*param_1 < *piVar2) {
        iVar5 = iVar4 + -1;
      }
      else {
        uVar9 = (ulonglong)(iVar4 + 1);
      }
    } while ((int)uVar9 <= iVar5);
  }
  lVar3 = *(longlong *)(param_1 + 2);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 6) - lVar3 >> 3,8);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

