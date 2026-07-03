// FUN_1400b4080 @ 1400b4080
// callees:
//   -> 14014a480 FUN_14014a480
//   -> 1400b4450 FUN_1400b4450
//   -> 14000d7e0 FUN_14000d7e0


longlong FUN_1400b4080(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1[1] - *param_1 & 0xfffffffffffffffcU) == 0) {
    FUN_14014a480("Empty biased index vector");
    return 0xffffffff;
  }
  uVar1 = FUN_1400b4450();
  iVar2 = FUN_14000d7e0(uVar1);
  piVar3 = (int *)*param_1;
  while( true ) {
    if ((int *)param_1[1] <= piVar3) {
      FUN_14014a480("Biased index vector computation error");
      return 0;
    }
    if (iVar2 < *piVar3) break;
    iVar2 = iVar2 - *piVar3;
    piVar3 = piVar3 + 1;
  }
  return (longlong)piVar3 - *param_1 >> 2;
}

