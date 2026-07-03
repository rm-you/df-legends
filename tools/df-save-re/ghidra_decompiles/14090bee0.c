// FUN_14090bee0 @ 14090bee0
// callees:
//   -> 140019a10 FUN_140019a10
//   -> 140051210 FUN_140051210
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020
//   -> 14009a6b0 FUN_14009a6b0


void FUN_14090bee0(int *param_1)

{
  void *pvVar1;
  int *_Memory;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  void *_Dst;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if ((*(longlong *)(*(longlong *)(param_1 + 4) + 0x130) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x130) + 0x28), lVar4 != 0))
  {
    iVar9 = 0;
    if ((*(int *)(lVar4 + 4) != -1) && (lVar4 = FUN_140019a10(DAT_141d6cfd0), lVar4 != 0)) {
      FUN_140051210(*param_1,lVar4 + 0x90);
      if (*(short *)(lVar4 + 0x80) == 0) {
        lVar11 = *(longlong *)(lVar4 + 0xf0);
        iVar10 = (int)(*(longlong *)(lVar4 + 0xf8) - lVar11 >> 3) + -1;
        iVar8 = iVar9;
        if (-1 < iVar10) {
          do {
            iVar7 = iVar10 + iVar8 >> 1;
            iVar6 = **(int **)(lVar11 + (longlong)iVar7 * 8);
            if (iVar6 == *(int *)(*(longlong *)(param_1 + 4) + 0xd8)) {
              if (iVar7 != -1) {
                free(*(void **)((longlong)iVar7 * 8 + lVar11));
                _Dst = (void *)(*(longlong *)(lVar4 + 0xf0) + (longlong)iVar7 * 8);
                pvVar1 = (void *)((longlong)_Dst + 8);
                memmove(_Dst,pvVar1,*(longlong *)(lVar4 + 0xf8) - (longlong)pvVar1);
                *(longlong *)(lVar4 + 0xf8) = *(longlong *)(lVar4 + 0xf8) + -8;
              }
              break;
            }
            if (*(int *)(*(longlong *)(param_1 + 4) + 0xd8) < iVar6) {
              iVar10 = iVar7 + -1;
            }
            else {
              iVar8 = iVar7 + 1;
            }
          } while (iVar8 <= iVar10);
        }
      }
      lVar4 = *(longlong *)(lVar4 + 0x308);
      if (lVar4 != 0) {
        piVar5 = (int *)(lVar4 + 0x228d4);
        if (0 < *(int *)(lVar4 + 0x40564)) {
          iVar10 = iVar9;
          do {
            if (*piVar5 == *param_1) {
              *piVar5 = -1;
              piVar5[1] = 0;
              break;
            }
            iVar10 = iVar10 + 1;
            piVar5 = piVar5 + 0x3d;
          } while (iVar10 < *(int *)(lVar4 + 0x40564));
        }
      }
    }
    iVar10 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x130) + 0x28) + 0x10
                     );
    if ((iVar10 != -1) && (iVar8 = (int)(DAT_141d69258 - DAT_141d69250 >> 3) + -1, -1 < iVar8)) {
      do {
        iVar6 = iVar8 + iVar9 >> 1;
        piVar5 = *(int **)(DAT_141d69250 + (longlong)iVar6 * 8);
        if (*piVar5 == iVar10) {
          if (piVar5 == (int *)0x0) {
            return;
          }
          bVar3 = false;
          iVar9 = (int)(*(longlong *)(piVar5 + 10) - *(longlong *)(piVar5 + 8) >> 3) + -1;
          if (iVar9 < 0) {
            return;
          }
          lVar4 = (longlong)iVar9 * 8;
          lVar11 = lVar4;
          do {
            _Memory = *(int **)(lVar4 + *(longlong *)(piVar5 + 8));
            if (*_Memory == *param_1) {
              if (_Memory != (int *)0x0) {
                FUN_140051e20(_Memory + 0x10);
                lVar2 = *(longlong *)(_Memory + 0x10);
                if (lVar2 != 0) {
                  FUN_140002020(lVar2,*(longlong *)(_Memory + 0x14) - lVar2 >> 3,8);
                  _Memory[0x10] = 0;
                  _Memory[0x11] = 0;
                  _Memory[0x12] = 0;
                  _Memory[0x13] = 0;
                  _Memory[0x14] = 0;
                  _Memory[0x15] = 0;
                }
                free(_Memory);
              }
              pvVar1 = (void *)(*(longlong *)(piVar5 + 8) + lVar11 + 8);
              memmove((void *)(*(longlong *)(piVar5 + 8) + lVar11),pvVar1,
                      *(longlong *)(piVar5 + 10) - (longlong)pvVar1);
              *(longlong *)(piVar5 + 10) = *(longlong *)(piVar5 + 10) + -8;
              bVar3 = true;
            }
            lVar11 = lVar11 + -8;
            lVar4 = lVar4 + -8;
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
          if (!bVar3) {
            return;
          }
          FUN_14009a6b0(piVar5);
          return;
        }
        if (iVar10 < *piVar5) {
          iVar8 = iVar6 + -1;
        }
        else {
          iVar9 = iVar6 + 1;
        }
      } while (iVar9 <= iVar8);
    }
  }
  return;
}

