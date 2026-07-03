// FUN_140273de0 @ 140273de0
// callees:


int FUN_140273de0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  switch(param_1[9]) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0x11:
    return param_1[1];
  case 2:
    iVar4 = 0;
    iVar3 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1;
    if (-1 < iVar3) {
      do {
        iVar2 = iVar3 + iVar4 >> 1;
        piVar1 = *(int **)(DAT_141d691a8 + (longlong)iVar2 * 8);
        if (*piVar1 == param_1[1]) {
          if (piVar1 == (int *)0x0) {
            return -1;
          }
          return piVar1[0x35];
        }
        if (param_1[1] < *piVar1) {
          iVar3 = iVar2 + -1;
        }
        else {
          iVar4 = iVar2 + 1;
        }
      } while (iVar4 <= iVar3);
    }
    break;
  case 3:
  case 0xe:
  case 0xf:
    return *param_1;
  }
  return -1;
}

