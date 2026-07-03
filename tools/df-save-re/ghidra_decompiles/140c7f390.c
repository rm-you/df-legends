// FUN_140c7f390 @ 140c7f390
// callees:


void FUN_140c7f390(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  if ((*(byte *)(param_1 + 0x118) & 4) == 0) {
    iVar5 = (int)(*(longlong *)(param_1 + 0x598) - *(longlong *)(param_1 + 0x590) >> 3) + -1;
    lVar7 = (longlong)iVar5;
    if (-1 < iVar5) {
      do {
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + lVar7 * 8) + 0x2c);
        *puVar1 = *puVar1 & 0xfffffffb;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    iVar5 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
    lVar7 = (longlong)iVar5;
    if (-1 < iVar5) {
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + lVar7 * 8);
        if (*(short *)(lVar3 + 8) == 6) {
          iVar8 = 0;
          iVar2 = *(int *)(lVar3 + 0x10);
          iVar5 = (int)(*(longlong *)(param_1 + 0x598) - *(longlong *)(param_1 + 0x590) >> 3) + -1;
          if (-1 < iVar5) {
            do {
              iVar6 = iVar5 + iVar8 >> 1;
              piVar4 = *(int **)(*(longlong *)(param_1 + 0x590) + (longlong)iVar6 * 8);
              if (*piVar4 == iVar2) {
                if (piVar4 != (int *)0x0) {
                  piVar4[0xb] = piVar4[0xb] | 4;
                }
                break;
              }
              if (iVar2 < *piVar4) {
                iVar5 = iVar6 + -1;
              }
              else {
                iVar8 = iVar6 + 1;
              }
            } while (iVar8 <= iVar5);
          }
        }
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 4;
  }
  return;
}

