// FUN_14007f4e0 @ 14007f4e0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140071810 FUN_140071810


int * FUN_14007f4e0(longlong *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar4 = (int *)0x0;
  iVar5 = (int)(param_1[1] - *param_1 >> 3) + -1;
  piVar2 = piVar4;
  piVar6 = piVar4;
  if (-1 < iVar5) {
    do {
      iVar3 = iVar5 + (int)piVar6 >> 1;
      piVar2 = *(int **)(*param_1 + (longlong)iVar3 * 8);
      iVar1 = *piVar2;
      if (iVar1 == param_2) break;
      if (param_2 < iVar1) {
        iVar5 = iVar3 + -1;
      }
      else {
        piVar6 = (int *)(ulonglong)(iVar3 + 1);
      }
      piVar2 = piVar4;
    } while ((int)piVar6 <= iVar5);
  }
  if (piVar2 == (int *)0x0) {
    piVar2 = operator_new(0x48);
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    *(undefined2 *)(piVar2 + 1) = 0;
    piVar2[2] = -1;
    piVar2[0x10] = 0;
    piVar2[0x11] = 0;
    *piVar2 = param_2;
    FUN_140071810(piVar2,param_1);
  }
  return piVar2;
}

