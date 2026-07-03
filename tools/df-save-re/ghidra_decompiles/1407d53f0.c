// FUN_1407d53f0 @ 1407d53f0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_1407d53f0(int *param_1)

{
  void *_Src;
  void *_Dst;
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  iVar4 = (int)(DAT_141d69498 - DAT_141d69490 >> 3) + -1;
  uVar6 = uVar7;
  if (-1 < iVar4) {
    do {
      iVar3 = iVar4 + (int)uVar6 >> 1;
      piVar1 = *(int **)(DAT_141d69490 + (longlong)iVar3 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d69490 + (longlong)iVar3 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141d69498 - (longlong)_Src);
        DAT_141d69498 = DAT_141d69498 + -8;
        break;
      }
      if (*param_1 < *piVar1) {
        iVar4 = iVar3 + -1;
      }
      else {
        uVar6 = (ulonglong)(iVar3 + 1);
      }
    } while ((int)uVar6 <= iVar4);
  }
  puVar5 = *(undefined8 **)(param_1 + 2);
  uVar6 = (*(longlong *)(param_1 + 4) - (longlong)puVar5) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 4) < puVar5) {
    uVar6 = uVar7;
  }
  if (uVar6 != 0) {
    do {
      free((void *)*puVar5);
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 < uVar6);
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 2);
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xc) - lVar2 >> 1,2);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 2);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 6) - lVar2 >> 3,8);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

