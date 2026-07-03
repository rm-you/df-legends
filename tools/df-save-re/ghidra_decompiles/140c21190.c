// FUN_140c21190 @ 140c21190
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 1407ea2a0 FUN_1407ea2a0


undefined8
FUN_140c21190(ushort *param_1,undefined8 param_2,undefined2 param_3,short param_4,ushort param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_1 + 1 < (uint)param_5) {
    iVar3 = 0x1e;
LAB_140c21237:
    FUN_1407ea2a0(param_1,iVar3,param_3);
    return 1;
  }
  if (param_5 + 1 < (uint)*param_1) {
    iVar3 = 0x1e;
    if (0 < param_4) {
      iVar1 = -((int)param_4 >> 4);
      iVar3 = iVar1 + 0x1e;
      uVar2 = FUN_1409fc0c0();
      uVar4 = (int)param_4 & 0x8000000f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
      }
      if ((int)(uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff >>
               0x1b) < (int)uVar4) {
        iVar3 = iVar1 + 0x1d;
      }
      if (iVar3 < 2) {
        iVar3 = 1;
      }
    }
    iVar3 = -iVar3;
    if (iVar3 != 0) goto LAB_140c21237;
  }
  return 0;
}

