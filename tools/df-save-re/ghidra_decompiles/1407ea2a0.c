// FUN_1407ea2a0 @ 1407ea2a0
// callees:


void FUN_1407ea2a0(ushort *param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  int iVar2;
  
  if (param_3 != 0xea61) {
    if (param_3 < 2) {
      uVar1 = 0;
      param_2 = (uint)*param_1 + param_2;
      if (param_2 < 0) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else {
      iVar2 = (uint)param_1[1] + (uint)*param_1 * (uint)param_3 + param_2;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      param_2 = iVar2 / (int)(uint)param_3;
      uVar1 = (ushort)(iVar2 % (int)(uint)param_3);
    }
    param_1[1] = uVar1;
    uVar1 = (ushort)param_2;
    if (60000 < param_2) {
      uVar1 = 60000;
    }
    *param_1 = uVar1;
  }
  return;
}

