// FUN_140c21270 @ 140c21270
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0


int FUN_140c21270(ulonglong param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar2 = 0;
  if ((uint)param_1 < 2) {
    uVar3 = 0;
    uVar5 = param_2;
  }
  else {
    uVar1 = FUN_1409fc0c0();
    uVar1 = uVar1 + (int)((longlong)((ulonglong)uVar1 * 0x100000003) >> 0x3f) * 0x7fffffff;
    uVar3 = (int)(0x7fffffff / (param_1 & 0xffffffff)) + 1;
    param_1 = (ulonglong)uVar3;
    uVar3 = uVar1 / uVar3;
    uVar5 = (ulonglong)uVar1 % param_1;
  }
  uVar6 = ((int)param_2 * param_3 >> 1) + 1;
  uVar1 = uVar2;
  if (1 < uVar6) {
    uVar1 = FUN_1409fc0c0(param_1,uVar5);
    uVar1 = uVar1 + (int)((longlong)((ulonglong)uVar1 * 0x100000003) >> 0x3f) * 0x7fffffff;
    uVar4 = (int)(0x7fffffff / (ulonglong)uVar6) + 1;
    uVar2 = FUN_1409fc0c0((ulonglong)uVar4,(ulonglong)uVar1 % (ulonglong)uVar4);
    uVar2 = (uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            ((int)(0x7fffffff / (ulonglong)uVar6) + 1U);
    uVar1 = uVar1 / uVar4;
  }
  return uVar2 + uVar1 + uVar3;
}

