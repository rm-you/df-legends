// FUN_140c21090 @ 140c21090
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 1407ea2a0 FUN_1407ea2a0


undefined8
FUN_140c21090(ushort *param_1,ushort param_2,undefined2 param_3,short param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  iVar3 = 0;
  uVar2 = (uint)param_2;
  if (uVar1 + 1 < uVar2) {
    iVar3 = uVar2 - uVar1;
  }
  else {
    if ((uint)uVar1 <= uVar2 + 1) goto LAB_140c21143;
    iVar3 = uVar1 - uVar2;
  }
  iVar3 = iVar3 * param_5;
  if ((0 < iVar3) && (0 < param_4)) {
    iVar3 = iVar3 - ((int)param_4 >> 2);
    uVar2 = FUN_1409fc0c0();
    uVar4 = (int)param_4 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    if ((int)(uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1d
             ) < (int)uVar4) {
      iVar3 = iVar3 + -1;
    }
    if (iVar3 < 2) {
      iVar3 = 1;
    }
  }
LAB_140c21143:
  if (param_2 < *param_1) {
    iVar3 = -iVar3;
  }
  if (iVar3 != 0) {
    FUN_1407ea2a0(param_1,iVar3,param_3);
    return 1;
  }
  return 0;
}

