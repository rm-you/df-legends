// FUN_140c21380 @ 140c21380
// callees:


void FUN_140c21380(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != -1) {
    param_1[3] = 0;
    if (0 < param_1[5]) {
      param_1[5] = param_1[5] + -1;
    }
    if (0 < param_1[6]) {
      param_1[6] = param_1[6] + -1;
    }
    iVar1 = param_1[4];
    if (0 < iVar1) {
      iVar2 = (param_2 >> 1) + 1;
      iVar3 = iVar2 / 10 + 1;
      if (iVar1 < iVar3) {
        iVar2 = iVar1 * 10 + -10;
        iVar3 = iVar1;
      }
      param_2 = param_2 - iVar2;
      param_1[4] = iVar1 - iVar3;
    }
    if (0 < param_2) {
      param_1[2] = param_1[2] + param_2;
      iVar1 = param_1[2];
      if (param_3 <= iVar1) {
        iVar3 = *param_1;
        do {
          iVar1 = iVar1 - param_3;
          if (iVar3 < param_1[1]) {
            iVar3 = iVar3 + 1;
          }
        } while (param_3 <= iVar1);
        param_1[2] = iVar1;
        *param_1 = iVar3;
      }
    }
  }
  return;
}

