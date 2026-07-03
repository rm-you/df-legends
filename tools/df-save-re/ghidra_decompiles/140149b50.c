// FUN_140149b50 @ 140149b50
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void FUN_140149b50(int *param_1)

{
  void *_Src;
  void *_Dst;
  int *piVar1;
  longlong *_Memory;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar6 = 0;
  iVar4 = (int)(DAT_141d694c8 - DAT_141d694c0 >> 3) + -1;
  iVar8 = 0;
  if (-1 < iVar4) {
    do {
      iVar3 = iVar4 + iVar8 >> 1;
      piVar1 = *(int **)(DAT_141d694c0 + (longlong)iVar3 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d694c0 + (longlong)iVar3 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141d694c8 - (longlong)_Src);
        DAT_141d694c8 = DAT_141d694c8 + -8;
        break;
      }
      if (*param_1 < *piVar1) {
        iVar4 = iVar3 + -1;
      }
      else {
        iVar8 = iVar3 + 1;
      }
    } while (iVar8 <= iVar4);
  }
  puVar5 = *(undefined8 **)(param_1 + 10);
  uVar7 = (*(longlong *)(param_1 + 0xc) - (longlong)puVar5) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0xc) < puVar5) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      _Memory = (longlong *)*puVar5;
      if (_Memory != (longlong *)0x0) {
        lVar2 = *_Memory;
        if (lVar2 != 0) {
          FUN_140002020(lVar2,_Memory[2] - lVar2 >> 2,4);
          *_Memory = 0;
          _Memory[1] = 0;
          _Memory[2] = 0;
        }
        free(_Memory);
      }
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 10);
  lVar2 = *(longlong *)(param_1 + 10);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xe) - lVar2 >> 3,8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 4);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 8) - lVar2 >> 2,4);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  return;
}

