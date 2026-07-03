// FUN_140cc1410 @ 140cc1410
// callees:
//   -> 140038ff0 FUN_140038ff0


void FUN_140cc1410(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x2a8) - *(longlong *)(param_1 + 0x2a0) >> 2);
  if (0 < iVar2) {
    iVar2 = iVar2 + -1;
    lVar6 = (longlong)iVar2;
    lVar8 = DAT_141d64d98;
    if (-1 < iVar2) {
      do {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x2a0) + lVar6 * 4);
        lVar4 = DAT_141d64da0 - lVar8 >> 3;
        if ((lVar4 != 0) && (iVar2 != -1)) {
          iVar5 = (int)lVar4 + -1;
          iVar7 = 0;
          if (-1 < iVar5) {
            do {
              iVar3 = iVar7 + iVar5 >> 1;
              piVar1 = *(int **)(lVar8 + (longlong)iVar3 * 8);
              if (*piVar1 == iVar2) {
                if (piVar1 != (int *)0x0) {
                  FUN_140038ff0(piVar1);
                  lVar8 = DAT_141d64d98;
                }
                break;
              }
              if (iVar2 < *piVar1) {
                iVar5 = iVar3 + -1;
              }
              else {
                iVar7 = iVar3 + 1;
              }
            } while (iVar7 <= iVar5);
          }
        }
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
    *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x2a0);
  }
  return;
}

