// FUN_140c333e0 @ 140c333e0
// callees:
//   -> 140c3c220 FUN_140c3c220
//   -> 1407f2a40 FUN_1407f2a40


ulonglong FUN_140c333e0(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  iVar10 = 0;
  iVar7 = 0;
  iVar6 = FUN_140c3c220(param_1,0x2e);
  uVar11 = 0;
  uVar13 = uVar11;
  if (*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3 != 0) {
    do {
      lVar2 = **(longlong **)(uVar13 + *(longlong *)(param_1 + 0x3f8));
      if ((*(uint *)(lVar2 + 0x10) & 0x20000000) == 0) {
        FUN_1407f2a40(lVar2);
      }
      iVar8 = *(int *)(lVar2 + 0x70);
      iVar9 = *(int *)(lVar2 + 0x74);
      puVar3 = *(undefined8 **)(uVar13 + *(longlong *)(param_1 + 0x3f8));
      sVar1 = *(short *)(puVar3 + 1);
      if (((sVar1 == 2) || (sVar1 == 5)) &&
         (cVar5 = (**(code **)(*(longlong *)*puVar3 + 0x6d0))(), cVar5 != '\0')) {
        if (iVar6 < 0xf) {
          if (1 < iVar6) {
            iVar8 = iVar8 * (0xf - iVar6) >> 4;
            iVar9 = iVar9 * (0xf - iVar6) >> 4;
          }
        }
        else {
          iVar8 = 0;
          iVar9 = iVar8;
        }
      }
      iVar10 = iVar10 + iVar8;
      iVar7 = iVar7 + iVar9;
      if (iVar7 < 0xf4241) {
        if (iVar7 < 0) {
          iVar10 = iVar10 - -iVar7 / 1000000;
          iVar7 = (-iVar7 / 1000000) * 1000000 + iVar7;
          if (iVar7 < 0) {
            iVar10 = iVar10 + -1;
            iVar7 = iVar7 + 1000000;
          }
        }
      }
      else {
        iVar10 = iVar10 + iVar7 / 1000000;
        iVar7 = iVar7 % 1000000;
      }
      uVar12 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar12;
      uVar13 = uVar13 + 8;
    } while ((ulonglong)(longlong)(int)uVar12 <
             (ulonglong)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3));
  }
  iVar6 = *(int *)(param_1 + 0x5e4) - *(int *)(param_1 + 0x5f4);
  piVar4 = *(int **)(param_1 + 0x8c8);
  if (piVar4 != (int *)0x0) {
    iVar6 = (*piVar4 * iVar6) / 100 + piVar4[6];
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  iVar6 = *(int *)(param_1 + 0x68c) / 10 + iVar6;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  return (longlong)iVar10 / (longlong)iVar6 & 0xffffffff;
}

