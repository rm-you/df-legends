// FUN_14007be00 @ 14007be00
// callees:


void FUN_14007be00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[0] = 0;
  param_1[1] = 0;
  if ((0 < param_2) && (0 < param_3)) {
    param_2 = param_2 * 10;
    if (param_2 < 0x2711) {
      *param_1 = (param_2 * param_3) / 1000000;
      param_1[1] = (param_2 * param_3) % 1000000;
      return;
    }
    if (999999 < param_2) {
      *param_1 = (param_2 / 1000000) * param_3;
      param_2 = param_2 % 1000000;
    }
    iVar2 = param_2 - param_2 % 10000;
    iVar1 = (param_2 % 10000) * param_3 + param_1[1];
    *param_1 = *param_1 + iVar1 / 1000000;
    iVar1 = (param_3 % 100) * iVar2 + iVar1 % 1000000;
    param_1[1] = iVar1 % 1000000;
    *param_1 = *param_1 + ((param_3 - param_3 % 100) / 100) * (iVar2 / 10000) + iVar1 / 1000000;
  }
  return;
}

