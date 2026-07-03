// FUN_140cc55b0 @ 140cc55b0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140071810 FUN_140071810


void FUN_140cc55b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar5 = 0;
    lVar1 = *(longlong *)(param_1 + 0xd30);
    iVar4 = (int)(*(longlong *)(param_1 + 0xd38) - lVar1 >> 3) + -1;
    if (-1 < iVar4) {
      do {
        iVar3 = iVar4 + iVar5 >> 1;
        piVar2 = *(int **)(lVar1 + (longlong)iVar3 * 8);
        if (*piVar2 == *(int *)(param_2 + 0x1c)) goto LAB_140cc564c;
        if (*(int *)(param_2 + 0x1c) < *piVar2) {
          iVar4 = iVar3 + -1;
        }
        else {
          iVar5 = iVar3 + 1;
        }
      } while (iVar5 <= iVar4);
    }
    piVar2 = operator_new(0x10);
    *piVar2 = -1;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    *piVar2 = *(int *)(param_2 + 0x1c);
    FUN_140071810(piVar2,(longlong *)(param_1 + 0xd30));
LAB_140cc564c:
    piVar2[3] = piVar2[3] + 1;
  }
  return;
}

