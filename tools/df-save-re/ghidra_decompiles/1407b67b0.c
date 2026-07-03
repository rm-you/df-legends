// FUN_1407b67b0 @ 1407b67b0
// callees:
//   -> 1407b5400 FUN_1407b5400
//   -> 140dfb5c4 operator_new
//   -> 1400b3ef0 FUN_1400b3ef0
//   -> 1407b5980 FUN_1407b5980


int * FUN_1407b67b0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  FUN_1407b5400();
  if (param_2 == -1) {
    return (int *)0x0;
  }
  iVar7 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x60);
  lVar3 = *(longlong *)(lVar2 + 0x30);
  iVar6 = (int)(*(longlong *)(lVar2 + 0x38) - lVar3 >> 3) + -1;
  if (-1 < iVar6) {
    do {
      iVar4 = iVar6 + iVar7 >> 1;
      piVar5 = *(int **)(lVar3 + (longlong)iVar4 * 8);
      iVar1 = *piVar5;
      if (iVar1 == param_2) {
        return piVar5;
      }
      if (param_2 < iVar1) {
        iVar6 = iVar4 + -1;
      }
      else {
        iVar7 = iVar4 + 1;
      }
    } while (iVar7 <= iVar6);
  }
  piVar5 = operator_new(0x50);
  piVar5[2] = 0;
  piVar5[3] = 0;
  piVar5[4] = 0;
  piVar5[5] = 0;
  piVar5[6] = 0;
  piVar5[7] = 0;
  piVar5[8] = 0;
  piVar5[9] = 0;
  piVar5[10] = 0;
  piVar5[0xb] = 0;
  piVar5[0xc] = 0;
  piVar5[0xd] = 0;
  piVar5[0xe] = 0;
  piVar5[0xf] = 0;
  piVar5[0x10] = 0;
  piVar5[0x11] = 0;
  piVar5[0x12] = 0;
  *piVar5 = param_2;
  FUN_1400b3ef0(piVar5,*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x60) + 0x30);
  FUN_1407b5980(param_1,piVar5 + 0xe,param_3);
  return piVar5;
}

