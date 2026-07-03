// FUN_1408a4c00 @ 1408a4c00
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14014a480 FUN_14014a480


void FUN_1408a4c00(ulonglong param_1,uint *param_2,undefined2 *param_3,int param_4)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_4;
  plVar1 = (longlong *)(param_1 + lVar6 * 0x18);
  if (*(longlong *)(param_1 + 8 + lVar6 * 0x18) - *plVar1 >> 2 == 0) {
    uVar5 = DAT_141d6e1b0 - DAT_141d6e1a8 >> 3;
    if ((uint)uVar5 < 2) {
      uVar3 = 0;
      puVar4 = param_2;
    }
    else {
      uVar2 = FUN_1409fc0c0();
      uVar2 = uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff;
      uVar3 = (int)(0x7fffffff / (uVar5 & 0xffffffff)) + 1;
      param_1 = (ulonglong)uVar3;
      uVar3 = uVar2 / uVar3;
      puVar4 = (uint *)((ulonglong)uVar2 % param_1);
    }
    *param_2 = uVar3;
    uVar2 = FUN_1409fc0c0(param_1,puVar4);
    *param_3 = (short)((uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) *
                                0x7fffffff) / 0xe38e38f);
    FUN_14014a480("Impoverished Word Selector");
  }
  else {
    uVar5 = plVar1[1] - *plVar1 >> 2;
    if ((uint)uVar5 < 2) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1409fc0c0();
      uVar2 = (uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              ((int)(0x7fffffff / (uVar5 & 0xffffffff)) + 1U);
    }
    *param_2 = *(uint *)((longlong)(int)uVar2 * 4 + *plVar1);
    *param_3 = *(undefined2 *)
                ((longlong)(int)uVar2 * 4 + *(longlong *)(param_1 + 0x90 + lVar6 * 0x18));
  }
  return;
}

