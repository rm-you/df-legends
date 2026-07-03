// FUN_140cdf540 @ 140cdf540
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 140cdf540 FUN_140cdf540


ulonglong FUN_140cdf540(longlong param_1,short param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  char local_res8;
  uint local_res20;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  
  sVar10 = *(short *)(param_1 + 0xa4);
  if (sVar10 < 0) {
    return 0;
  }
  if ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar10) {
    return 0;
  }
  lVar2 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar10 * 8);
  if (lVar2 == 0) {
    return 0;
  }
  plVar15 = *(longlong **)(param_1 + 0x5d8);
  if (-1 < param_2) {
    if ((ulonglong)(longlong)param_2 < (ulonglong)(plVar15[1] - *plVar15 >> 3)) {
      local_res8 = FUN_14000d840(*(longlong *)(*plVar15 + (longlong)param_2 * 8) + 0x48,0x24);
      goto LAB_140cdf5e4;
    }
  }
  local_res8 = '\0';
LAB_140cdf5e4:
  uVar9 = 0;
  iVar17 = 0;
  local_48 = 0;
  local_44 = 0;
  local_res20 = 0;
  local_3c = 0;
  iVar11 = 0;
  local_40 = 0;
  lVar3 = *(longlong *)((longlong)param_2 * 8 + *plVar15);
  plVar7 = *(longlong **)(lVar3 + 0x58);
  plVar4 = *(longlong **)(lVar3 + 0x60);
  uVar6 = (ulonglong)((longlong)plVar4 + (7 - (longlong)plVar7)) >> 3;
  if (plVar4 < plVar7) {
    uVar6 = uVar9;
  }
  uVar13 = uVar9;
  uVar14 = uVar9;
  uVar16 = uVar9;
  uVar18 = uVar9;
  uVar19 = uVar9;
  iVar8 = iVar17;
  if (uVar6 != 0) {
    do {
      iVar11 = *(int *)(*plVar7 + 0x20);
      if (iVar11 == -1) {
LAB_140cdf782:
        uVar16 = (ulonglong)local_48;
      }
      else {
        iVar17 = *(int *)(*plVar7 + 0x68);
        if ((iVar17 == -1) ||
           (lVar3 = (longlong)iVar17 * 4,
           (*(byte *)(lVar3 + *(longlong *)(param_1 + 0x518)) & 1) != 0)) {
          uVar9 = (ulonglong)local_res20;
          goto LAB_140cdf782;
        }
        bVar20 = true;
        if (((9999 < *(int *)(lVar3 + *(longlong *)(param_1 + 0x578))) ||
            (24999 < *(int *)(lVar3 + *(longlong *)(param_1 + 0x560)))) ||
           (9999 < *(int *)(lVar3 + *(longlong *)(param_1 + 0x548)))) {
          bVar20 = false;
        }
        if (((local_res8 != '\0') &&
            (lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x24c8) + (longlong)iVar11 * 8),
            1 < *(int *)(lVar3 + 0x28))) &&
           (((*(byte *)(*(longlong *)(lVar3 + 0x20) + 1) & 0x40) != 0 && (bVar20)))) {
          local_3c = local_3c + 1;
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x24c8) + (longlong)iVar11 * 8);
        if (*(int *)(lVar3 + 0x28) < 1) {
LAB_140cdf762:
          local_44 = local_44 + 1;
          uVar9 = (ulonglong)local_res20;
          uVar16 = (ulonglong)local_48;
          if (bVar20) {
            uVar14 = (ulonglong)((int)uVar14 + 1);
          }
        }
        else if ((**(byte **)(lVar3 + 0x20) & 0x10) == 0) {
          if ((*(int *)(lVar3 + 0x28) < 1) || ((**(byte **)(lVar3 + 0x20) & 0x80) == 0))
          goto LAB_140cdf762;
          uVar9 = (ulonglong)local_res20;
          local_48 = local_48 + 1;
          uVar16 = (ulonglong)local_48;
          if (bVar20) {
            local_res20 = local_res20 + 1;
            uVar9 = (ulonglong)local_res20;
          }
        }
        else {
          uVar9 = (ulonglong)local_res20;
          uVar18 = (ulonglong)((int)uVar18 + 1);
          uVar16 = (ulonglong)local_48;
          if (bVar20) {
            uVar13 = (ulonglong)((int)uVar13 + 1);
          }
        }
      }
      iVar8 = (int)uVar9;
      iVar11 = (int)uVar13;
      iVar17 = (int)uVar18;
      plVar7 = plVar7 + 1;
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar6);
    plVar15 = *(longlong **)(param_1 + 0x5d8);
    uVar9 = (ulonglong)local_44;
    local_40 = (int)uVar14;
  }
  uVar6 = 0;
  if ((iVar17 < 1) && (iVar11 = iVar8, (int)uVar16 < 1)) {
    if (0 < (int)uVar9) {
      if (((param_2 < 0) ||
          ((ulonglong)(plVar15[1] - *plVar15 >> 3) <= (ulonglong)(longlong)param_2)) ||
         (cVar5 = FUN_14000d840(*(longlong *)(*plVar15 + (longlong)param_2 * 8) + 0x48,0x25),
         cVar5 == '\0')) {
        uVar6 = (ulonglong)(local_40 == 0);
      }
      else {
        uVar6 = 1;
      }
    }
  }
  else {
    uVar6 = (ulonglong)(iVar11 == 0);
  }
  if ((local_res8 == '\0') || (local_3c < 1)) {
    if ((((char)uVar6 != '\0') &&
        ((-1 < param_2 && ((ulonglong)(longlong)param_2 < (ulonglong)(plVar15[1] - *plVar15 >> 3))))
        ) && (cVar5 = FUN_14000d840(*(longlong *)(*plVar15 + (longlong)param_2 * 8) + 0x48,0x25),
             cVar5 != '\0')) {
      uVar12 = (uint)(plVar15[1] - *plVar15 >> 3);
      do {
        do {
          do {
            uVar12 = uVar12 - 1;
            if ((int)uVar12 <= (int)param_2) {
              return 1;
            }
            plVar15 = *(longlong **)(param_1 + 0x5d8);
          } while (((*(short *)(*(longlong *)(*plVar15 + (longlong)(int)uVar12 * 8) + 0x40) !=
                     param_2) ||
                   (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)(int)uVar12 * 4),
                   uVar6 = (ulonglong)uVar1, (uVar1 & 2) != 0)) ||
                  (sVar10 = (short)uVar12, sVar10 < 0));
        } while (((ulonglong)(plVar15[1] - *plVar15 >> 3) <= (ulonglong)(longlong)sVar10) ||
                (cVar5 = FUN_14000d840(*(longlong *)(*plVar15 + (longlong)sVar10 * 8) + 0x48,0x24),
                cVar5 == '\0'));
        if (param_3 == '\0') {
          cVar5 = FUN_140cdf540(param_1,uVar12 & 0xffff,0);
          bVar20 = cVar5 == '\0';
        }
        else {
          bVar20 = (uVar6 & 0x200000) == 0;
        }
      } while (!bVar20);
      return 0;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6 & 0xff;
}

