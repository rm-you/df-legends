// FUN_140df4ec0 @ 140df4ec0
// callees:


uint FUN_140df4ec0(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  
  uVar19 = param_1 >> 0x10;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = param_1 + *param_2;
    if (0xfff0 < param_1) {
      param_1 = param_1 - 0xfff1;
    }
    uVar19 = uVar19 + param_1;
    if (0xfff0 < uVar19) {
      return (uVar19 - 0xfff1) * 0x10000 | param_1;
    }
  }
  else {
    if (param_2 == (byte *)0x0) {
      return 1;
    }
    if (param_3 < 0x10) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        bVar2 = *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + bVar2;
        uVar19 = uVar19 + param_1;
      }
      if (0xfff0 < param_1) {
        param_1 = param_1 - 0xfff1;
      }
      return ((uVar19 / 0xfff1) * 0xf + uVar19) * 0x10000 | param_1;
    }
    if (0x15af < param_3) {
      uVar20 = (ulonglong)param_3 / 0x15b0;
      do {
        param_3 = param_3 - 0x15b0;
        iVar18 = 0x15b;
        do {
          iVar3 = param_1 + *param_2;
          iVar4 = iVar3 + (uint)param_2[1];
          iVar5 = iVar4 + (uint)param_2[2];
          iVar6 = iVar5 + (uint)param_2[3];
          iVar7 = iVar6 + (uint)param_2[4];
          iVar8 = iVar7 + (uint)param_2[5];
          iVar9 = iVar8 + (uint)param_2[6];
          iVar10 = iVar9 + (uint)param_2[7];
          iVar11 = iVar10 + (uint)param_2[8];
          iVar12 = iVar11 + (uint)param_2[9];
          iVar13 = iVar12 + (uint)param_2[10];
          iVar14 = iVar13 + (uint)param_2[0xb];
          iVar15 = iVar14 + (uint)param_2[0xc];
          iVar16 = iVar15 + (uint)param_2[0xd];
          iVar17 = iVar16 + (uint)param_2[0xe];
          pbVar1 = param_2 + 0xf;
          param_2 = param_2 + 0x10;
          param_1 = iVar17 + (uint)*pbVar1;
          uVar19 = uVar19 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11
                   + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + param_1;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
        param_1 = param_1 % 0xfff1;
        uVar19 = uVar19 % 0xfff1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    if (param_3 != 0) {
      if (0xf < param_3) {
        uVar20 = (ulonglong)(param_3 >> 4);
        do {
          param_3 = param_3 - 0x10;
          iVar18 = param_1 + *param_2;
          iVar3 = iVar18 + (uint)param_2[1];
          iVar4 = iVar3 + (uint)param_2[2];
          iVar5 = iVar4 + (uint)param_2[3];
          iVar6 = iVar5 + (uint)param_2[4];
          iVar7 = iVar6 + (uint)param_2[5];
          iVar8 = iVar7 + (uint)param_2[6];
          iVar9 = iVar8 + (uint)param_2[7];
          iVar10 = iVar9 + (uint)param_2[8];
          iVar11 = iVar10 + (uint)param_2[9];
          iVar12 = iVar11 + (uint)param_2[10];
          iVar13 = iVar12 + (uint)param_2[0xb];
          iVar14 = iVar13 + (uint)param_2[0xc];
          iVar15 = iVar14 + (uint)param_2[0xd];
          iVar16 = iVar15 + (uint)param_2[0xe];
          pbVar1 = param_2 + 0xf;
          param_2 = param_2 + 0x10;
          param_1 = iVar16 + (uint)*pbVar1;
          uVar19 = uVar19 + iVar18 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10
                   + iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + param_1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      for (; param_3 != 0; param_3 = param_3 - 1) {
        bVar2 = *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + bVar2;
        uVar19 = uVar19 + param_1;
      }
      param_1 = param_1 % 0xfff1;
      uVar19 = uVar19 % 0xfff1;
    }
  }
  return uVar19 << 0x10 | param_1;
}

