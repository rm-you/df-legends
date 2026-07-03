// FUN_140d86a60 @ 140d86a60
// callees:
//   -> 1400048f0 FUN_1400048f0
//   -> 1401745b0 FUN_1401745b0
//   -> 140050410 FUN_140050410
//   -> 1401aa910 FUN_1401aa910
//   -> 140002020 FUN_140002020


void FUN_140d86a60(longlong param_1,short param_2,short param_3,short param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  ushort uVar10;
  uint uVar11;
  int iVar13;
  int iVar14;
  longlong lVar15;
  short local_res10;
  ushort uStack0000000000000028;
  longlong local_68 [2];
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  uint uVar12;
  
  local_68[1] = 0xfffffffffffffffe;
  local_58 = (longlong *)0x0;
  plStack_50 = (longlong *)0x0;
  plVar7 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_res10 = param_2 + -2;
  iVar13 = (int)param_2;
  iVar14 = (int)local_res10;
  plVar6 = (longlong *)0x0;
  plVar8 = (longlong *)0x0;
  if (iVar14 <= iVar13 + 2) {
    iVar2 = (int)param_3;
    do {
      uVar11 = (uint)(short)(param_3 - 2U);
      uStack0000000000000028 = param_3 - 2U;
      uVar12 = uVar11;
      if ((int)uVar11 <= iVar2 + 2) {
        do {
          uVar10 = (ushort)uVar12;
          uVar4 = FUN_1400048f0(param_1,local_res10,uVar12,param_4);
          if ((uVar4 & 7) != 0) {
            *(undefined1 *)(param_1 + 0x1d200) = 1;
          }
          if ((((iVar13 + -1 <= iVar14) && (iVar14 <= iVar13 + 1)) && (iVar2 + -1 <= (int)uVar11))
             && (((int)uVar11 <= iVar2 + 1 &&
                 (uVar4 = FUN_1400048f0(param_1,local_res10), (uVar4 & 7) != 0)))) {
            *(undefined1 *)(param_1 + 0x1d200) = 1;
            iVar3 = (int)(*(longlong *)(param_1 + 0x1cba8) - *(longlong *)(param_1 + 0x1cba0) >> 3)
                    + -1;
            lVar15 = (longlong)iVar3;
            if (-1 < iVar3) {
              do {
                plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x1cba0) + lVar15 * 8);
                cVar1 = (**(code **)(*plVar5 + 0x138))(plVar5);
                if ((cVar1 != '\0') && ((int)param_4 == (int)plVar5[4])) {
                  cVar1 = (**(code **)(*plVar5 + 0x148))(plVar5);
                  if ((cVar1 == '\0') || (plVar5[6] == 0)) {
                    if (((((int)plVar5[1] <= iVar14) &&
                         (iVar14 <= *(int *)((longlong)plVar5 + 0x14))) &&
                        (*(int *)((longlong)plVar5 + 0xc) <= (int)uVar11)) &&
                       ((int)uVar11 <= (int)plVar5[3])) goto LAB_140d86c4a;
                  }
                  else {
                    cVar1 = FUN_1401745b0(plVar5,local_res10,uStack0000000000000028,param_4);
                    if (cVar1 != '\0') {
LAB_140d86c4a:
                      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1cba0) + lVar15 * 8);
                      for (plVar5 = plVar8; local_68[0] = lVar9, plVar5 < plVar6;
                          plVar5 = plVar5 + 1) {
                        if (*plVar5 == lVar9) goto LAB_140d86cef;
                      }
                      if ((local_68 < plVar6) && (plVar8 <= local_68)) {
                        lVar9 = (longlong)local_68 - (longlong)plVar8;
                        if (plVar6 == plVar7) {
                          FUN_140050410(&local_58);
                          plVar6 = plStack_50;
                          plVar7 = local_48;
                          plVar8 = local_58;
                        }
                        if (plVar6 != (longlong *)0x0) {
                          *plVar6 = plVar8[lVar9 >> 3];
                        }
                      }
                      else {
                        if (plVar6 == plVar7) {
                          FUN_140050410(&local_58);
                          plVar6 = plStack_50;
                          plVar7 = local_48;
                          plVar8 = local_58;
                        }
                        if (plVar6 != (longlong *)0x0) {
                          *plVar6 = lVar9;
                        }
                      }
                      plVar6 = plVar6 + 1;
                      plStack_50 = plVar6;
                    }
                  }
                }
LAB_140d86cef:
                lVar15 = lVar15 + -1;
                uVar10 = uStack0000000000000028;
              } while (-1 < lVar15);
            }
          }
          uStack0000000000000028 = uVar10 + 1;
          uVar12 = (uint)uStack0000000000000028;
          uVar11 = (uint)(short)uStack0000000000000028;
        } while ((int)uVar11 <= iVar2 + 2);
      }
      local_res10 = local_res10 + 1;
      iVar14 = (int)local_res10;
    } while (iVar14 <= iVar13 + 2);
  }
  iVar13 = (int)((longlong)plVar6 - (longlong)plVar8 >> 3) + -1;
  lVar15 = (longlong)iVar13;
  if (-1 < iVar13) {
    do {
      FUN_1401aa910(plVar8[lVar15]);
      lVar15 = lVar15 + -1;
    } while (-1 < lVar15);
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_140002020(plVar8,(longlong)plVar7 - (longlong)plVar8 >> 3,8);
  }
  return;
}

