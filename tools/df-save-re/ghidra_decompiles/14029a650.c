// FUN_14029a650 @ 14029a650
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14000d7e0 FUN_14000d7e0


void FUN_14029a650(longlong param_1,short param_2,short param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  longlong local_40;
  
  if (((-1 < param_2) &&
      (uVar6 = (ulonglong)param_2,
      uVar6 < (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3))) &&
     (-1 < param_3)) {
    uVar7 = (ulonglong)param_3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar6 * 8);
    if (uVar7 < (ulonglong)(*(longlong *)(lVar8 + 0x180) - *(longlong *)(lVar8 + 0x178) >> 3)) {
      if ((uVar6 < (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3))
         && (uVar7 < (ulonglong)(*(longlong *)(lVar8 + 0x180) - *(longlong *)(lVar8 + 0x178) >> 3)))
      {
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x178) + uVar7 * 8) + 0x57c;
      }
      else {
        lVar8 = 0;
      }
      local_40 = 0x32;
      lVar3 = lVar8 - (longlong)param_4;
      do {
        if (lVar8 == 0) {
          sVar13 = 0;
          sVar10 = 0x32;
          sVar1 = 100;
        }
        else {
          sVar13 = *(short *)((longlong)param_4 + lVar3);
          sVar1 = *(short *)((longlong)param_4 + lVar3 + 200);
          sVar10 = *(short *)((longlong)param_4 + lVar3 + 100);
        }
        iVar11 = (int)sVar10;
        iVar9 = (int)sVar13;
        iVar4 = iVar11 * 4 + iVar9;
        iVar5 = iVar9 * 4 + iVar11;
        sVar12 = ((short)(iVar4 / 5) + (short)(iVar4 >> 0x1f)) -
                 (short)((longlong)iVar4 * 0x66666667 >> 0x3f);
        sVar10 = ((short)(iVar5 / 5) + (short)(iVar5 >> 0x1f)) -
                 (short)((longlong)iVar5 * 0x66666667 >> 0x3f);
        uVar2 = FUN_1409fc0c0();
        if ((uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x2aaaaaab == 0) {
          uVar2 = FUN_1409fc0c0();
          if ((uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0x2aaaaaab == 0) {
            uVar2 = FUN_1409fc0c0();
            if ((uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                0x2aaaaaab == 0) {
              sVar1 = FUN_14000d7e0((sVar1 - iVar9) + 1);
              sVar1 = sVar1 + sVar13;
            }
            else {
              sVar1 = FUN_14000d7e0(((int)(short)((sVar1 * 4 + iVar11) / 5) - (int)sVar10) + 1);
              sVar1 = sVar1 + sVar10;
            }
          }
          else {
            sVar13 = (short)(iVar9 + iVar11 >> 1);
            sVar1 = FUN_14000d7e0(((int)(short)(sVar1 + iVar11 >> 1) - (int)sVar13) + 1);
            sVar1 = sVar1 + sVar13;
          }
        }
        else {
          sVar1 = FUN_14000d7e0(((int)(short)(((int)sVar1 + iVar11 * 4) / 5) - (int)sVar12) + 1);
          sVar1 = sVar1 + sVar12;
        }
        *param_4 = sVar1;
        param_4 = param_4 + 1;
        local_40 = local_40 + -1;
      } while (local_40 != 0);
    }
  }
  return;
}

