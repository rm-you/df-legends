// FUN_1402827a0 @ 1402827a0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 1402cb420 FUN_1402cb420


void FUN_1402827a0(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((0 < param_4) && (param_2 != -1)) {
    lVar1 = *(longlong *)(param_1 + 0xe0);
    iVar4 = (int)(*(longlong *)(param_1 + 0xe8) - lVar1 >> 3) + -1;
    iVar5 = 0;
    if (-1 < iVar4) {
      do {
        iVar3 = iVar4 + iVar5 >> 1;
        piVar2 = *(int **)(lVar1 + (longlong)iVar3 * 8);
        if (*piVar2 == param_2) goto LAB_140282841;
        if (param_2 < *piVar2) {
          iVar4 = iVar3 + -1;
        }
        else {
          iVar5 = iVar3 + 1;
        }
      } while (iVar5 <= iVar4);
    }
    piVar2 = operator_new(0x14);
    piVar2[1] = 0;
    *(undefined2 *)(piVar2 + 2) = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    *piVar2 = param_2;
    FUN_1402cb420(piVar2,(longlong *)(param_1 + 0xe0));
LAB_140282841:
    if ((short)piVar2[2] < param_4) {
      piVar2[3] = param_5;
      piVar2[1] = param_3;
      *(short *)(piVar2 + 2) = (short)param_4;
    }
    piVar2[4] = piVar2[4] + 1;
  }
  return;
}

