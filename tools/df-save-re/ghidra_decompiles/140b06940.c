// FUN_140b06940 @ 140b06940
// callees:


void FUN_140b06940(longlong param_1)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar7;
  
  uVar5 = 0;
  iVar10 = 10000;
  *(undefined8 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)(param_1 + 0x274) = 10000;
  *(undefined8 *)(param_1 + 0x27c) = 10000;
  iVar12 = (int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 1);
  if (0 < iVar12) {
    psVar3 = *(short **)(param_1 + 0x80);
    psVar2 = *(short **)(param_1 + 0x98);
    uVar13 = (ulonglong)((longlong)*(short **)(param_1 + 0x88) + (1 - (longlong)psVar3)) >> 1;
    if (*(short **)(param_1 + 0x88) < psVar3) {
      uVar13 = uVar5;
    }
    if (uVar13 != 0) {
      iVar4 = 10000;
      uVar7 = uVar5;
      uVar8 = uVar5;
      uVar9 = uVar5;
      uVar11 = uVar5;
      do {
        uVar6 = (int)uVar7 + (int)*psVar3;
        uVar7 = (ulonglong)uVar6;
        *(uint *)(param_1 + 0x26c) = uVar6;
        uVar6 = (int)uVar5 + (int)*psVar2;
        uVar5 = (ulonglong)uVar6;
        *(uint *)(param_1 + 0x270) = uVar6;
        iVar1 = (int)*psVar3;
        if (iVar1 < iVar10) {
          *(int *)(param_1 + 0x274) = iVar1;
          iVar10 = iVar1;
        }
        iVar1 = (int)*psVar2;
        if (iVar1 < iVar4) {
          *(int *)(param_1 + 0x27c) = iVar1;
          iVar4 = iVar1;
        }
        uVar6 = (uint)*psVar3;
        if ((int)uVar11 < (int)uVar6) {
          uVar11 = (ulonglong)uVar6;
          *(uint *)(param_1 + 0x278) = uVar6;
        }
        uVar6 = (uint)*psVar2;
        if ((int)uVar8 < (int)uVar6) {
          uVar8 = (ulonglong)uVar6;
          *(uint *)(param_1 + 0x280) = uVar6;
        }
        psVar2 = psVar2 + 1;
        psVar3 = psVar3 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar13);
    }
    *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x26c) / iVar12;
    *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) / iVar12;
  }
  return;
}

