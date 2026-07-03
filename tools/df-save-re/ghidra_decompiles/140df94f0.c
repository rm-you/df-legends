// FUN_140df94f0 @ 140df94f0
// callees:
//   -> 140dfb590 __security_check_cookie
//   -> 140dfb814 __report_rangecheckfailure


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_140df94f0(int param_1,ushort *param_2,uint param_3,longlong *param_4,uint *param_5,
             undefined *param_6)

{
  longlong lVar1;
  ushort uVar2;
  byte bVar3;
  undefined2 uVar5;
  uint uVar6;
  undefined8 uVar7;
  byte bVar8;
  ushort *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  uint local_cc;
  uint local_c8;
  int local_c4;
  undefined *local_b8;
  undefined *local_b0;
  longlong *local_a8;
  undefined *local_a0;
  ushort *local_98;
  uint *local_90;
  ushort auStack_88 [16];
  ushort auStack_68 [16];
  ulonglong local_48;
  char cVar4;
  
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_f8;
  uVar17 = 0;
  uVar11 = (ulonglong)param_3;
  local_90 = param_5;
  local_a0 = param_6;
  uVar22 = uVar17;
  do {
    if (0x1f < uVar22 * 2) {
      local_c4 = param_1;
      local_a8 = param_4;
      local_98 = param_2;
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    uVar20 = (int)uVar22 + 1;
    auStack_88[uVar22] = 0;
    uVar22 = (ulonglong)uVar20;
  } while (uVar20 < 0x10);
  puVar9 = param_2;
  if (param_3 != 0) {
    do {
      auStack_88[*puVar9] = auStack_88[*puVar9] + 1;
      uVar11 = uVar11 - 1;
      puVar9 = puVar9 + 1;
    } while (uVar11 != 0);
  }
  uVar20 = 0xd;
  uVar22 = 0xf;
  do {
    uVar21 = (uint)uVar22;
    uVar19 = 0xffffffff;
    if (auStack_88[uVar22] != 0) goto LAB_140df95fe;
    if (auStack_88[uVar20 + 1] != 0) {
      uVar21 = uVar21 - 1;
      goto LAB_140df95fe;
    }
    if (auStack_88[uVar20] != 0) {
      uVar21 = uVar21 - 2;
      goto LAB_140df95fe;
    }
    if (auStack_88[uVar20 - 1] != 0) {
      uVar21 = uVar21 - 3;
      goto LAB_140df95fe;
    }
    if (auStack_88[uVar20 - 2] != 0) {
      uVar21 = uVar21 - 4;
      goto LAB_140df95fe;
    }
    uVar22 = (ulonglong)(uVar21 - 5);
    uVar20 = uVar20 - 5;
  } while (uVar21 - 5 != 0);
  uVar21 = 0;
LAB_140df95fe:
  uVar20 = *param_5;
  if (uVar21 < *param_5) {
    uVar20 = uVar21;
  }
  if (uVar21 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    uVar7 = 0;
    *param_5 = 1;
  }
  else {
    uVar13 = 1;
    if (1 < uVar21) {
      puVar9 = auStack_88;
      do {
        puVar9 = puVar9 + 1;
        if (*puVar9 != 0) break;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar21);
    }
    uVar22 = 1;
    iVar16 = 1;
    if (uVar20 < uVar13) {
      uVar20 = uVar13;
    }
    do {
      iVar16 = iVar16 * 2 - (uint)auStack_88[uVar22];
      if (iVar16 < 0) goto LAB_140df9a32;
      uVar10 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar10;
    } while (uVar10 < 0x10);
    if ((iVar16 < 1) || ((param_1 != 0 && (uVar21 == 1)))) {
      auStack_68[1] = 0;
      lVar12 = 0xe;
      uVar22 = uVar17;
      do {
        *(short *)((longlong)auStack_68 + uVar22 + 4) =
             *(short *)((longlong)auStack_88 + uVar22 + 2) +
             *(short *)((longlong)auStack_68 + uVar22 + 2);
        uVar22 = uVar22 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      puVar9 = param_2;
      uVar22 = uVar17;
      if (param_3 != 0) {
        do {
          if (*puVar9 != 0) {
            *(short *)(param_6 + (ulonglong)auStack_68[*puVar9] * 2) = (short)uVar22;
            auStack_68[*puVar9] = auStack_68[*puVar9] + 1;
          }
          uVar10 = (int)uVar22 + 1;
          puVar9 = puVar9 + 1;
          uVar22 = (ulonglong)uVar10;
        } while (uVar10 < param_3);
      }
      if (param_1 == 0) {
        local_b8 = param_6;
        iVar16 = 0x13;
        local_b0 = param_6;
      }
      else if (param_1 == 1) {
        iVar16 = 0x100;
        local_b0 = &DAT_140e7e07e;
        local_b8 = &DAT_140e7e0be;
      }
      else {
        iVar16 = -1;
        local_b0 = &DAT_140e7e240;
        local_b8 = &DAT_140e7e300;
      }
      local_cc = 0;
      bVar8 = (byte)uVar20;
      local_c8 = 1 << (bVar8 & 0x1f);
      uVar22 = (ulonglong)local_c8;
      lVar12 = *param_4;
      uVar10 = 0;
      uVar6 = local_c8 - 1;
      if (param_1 == 1) {
        uVar11 = uVar17;
        if (local_c8 < 0x354) {
LAB_140df97f0:
          do {
            do {
              cVar4 = (char)uVar13;
              bVar14 = (byte)uVar10;
              bVar3 = cVar4 - bVar14;
              uVar2 = *(ushort *)(param_6 + uVar11 * 2);
              if ((int)(uint)uVar2 < iVar16) {
                local_d8 = (uint)CONCAT21(uVar2,bVar3) << 8;
              }
              else {
                if (iVar16 < (int)(uint)uVar2) {
                  local_d8._0_2_ = CONCAT11(bVar3,local_b8[(ulonglong)uVar2 * 2]);
                  uVar5 = *(undefined2 *)(local_b0 + (ulonglong)uVar2 * 2);
                }
                else {
                  local_d8 = CONCAT31((uint3)bVar3,0x60);
                  uVar5 = 0;
                }
                local_d8 = CONCAT22(uVar5,(ushort)local_d8);
              }
              uVar15 = (uint)uVar17;
              iVar23 = 1 << (cVar4 - bVar14 & 0x1f);
              uVar11 = (ulonglong)((uVar15 >> (bVar14 & 0x1f)) + (int)uVar22);
              uVar17 = uVar22;
              do {
                uVar11 = (ulonglong)(uint)((int)uVar11 - iVar23);
                *(uint *)(lVar12 + uVar11 * 4) = local_d8;
                uVar18 = (int)uVar17 - iVar23;
                uVar17 = (ulonglong)uVar18;
              } while (uVar18 != 0);
              for (uVar18 = 1 << (cVar4 - 1U & 0x1f); (uVar15 & uVar18) != 0; uVar18 = uVar18 >> 1)
              {
              }
              if (uVar18 == 0) {
                uVar17 = 0;
              }
              else {
                uVar17 = (ulonglong)((uVar15 & uVar18 - 1) + uVar18);
              }
              local_cc = local_cc + 1;
              uVar11 = (ulonglong)local_cc;
              puVar9 = auStack_88 + uVar13;
              *puVar9 = *puVar9 - 1;
              uVar15 = (uint)uVar17;
              if (*puVar9 == 0) {
                if (uVar13 == uVar21) {
                  local_d8._0_2_ = CONCAT11(cVar4 - bVar14,0x40);
                  local_d8 = (uint)(ushort)local_d8;
                  goto joined_r0x000140df99c2;
                }
                uVar13 = (uint)param_2[*(ushort *)(param_6 + uVar11 * 2)];
              }
            } while (uVar13 <= uVar20);
            uVar15 = uVar6 & uVar15;
          } while (uVar15 == uVar19);
          lVar12 = lVar12 + uVar22 * 4;
          if (uVar10 == 0) {
            uVar10 = uVar20;
          }
          iVar24 = uVar13 - uVar10;
          uVar19 = uVar10 + iVar24;
          for (iVar23 = 1 << ((byte)iVar24 & 0x1f);
              (uVar19 < uVar21 &&
              (uVar22 = (ulonglong)uVar19, 0 < (int)(iVar23 - (uint)auStack_88[uVar22])));
              iVar23 = (iVar23 - (uint)auStack_88[uVar22]) * 2) {
            iVar24 = iVar24 + 1;
            uVar19 = uVar19 + 1;
          }
          uVar19 = 1 << ((byte)iVar24 & 0x1f);
          uVar22 = (ulonglong)uVar19;
          local_c8 = local_c8 + uVar19;
          if (param_1 == 1) {
            bVar25 = local_c8 < 0x354;
LAB_140df9960:
            if (!bVar25) goto LAB_140df97a5;
          }
          else if (param_1 == 2) {
            bVar25 = local_c8 < 0x250;
            goto LAB_140df9960;
          }
          lVar1 = (ulonglong)uVar15 * 4;
          *(byte *)(lVar1 + *param_4) = (byte)iVar24;
          *(byte *)(lVar1 + 1 + *param_4) = bVar8;
          *(short *)(lVar1 + 2 + *param_4) = (short)(lVar12 - *param_4 >> 2);
          uVar11 = (ulonglong)local_cc;
          uVar19 = uVar15;
          goto LAB_140df97f0;
        }
      }
      else {
        uVar17 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar19 = 0xffffffff;
        if ((param_1 != 2) || (local_c8 < 0x250)) goto LAB_140df97f0;
      }
LAB_140df97a5:
      uVar7 = 1;
    }
    else {
LAB_140df9a32:
      uVar7 = 0xffffffff;
    }
  }
  return uVar7;
joined_r0x000140df99c2:
  if (uVar15 == 0) {
LAB_140df9a1b:
    *param_4 = *param_4 + (ulonglong)local_c8 * 4;
    *param_5 = uVar20;
    return 0;
  }
  uVar21 = (uint)uVar17;
  if ((uVar10 != 0) && ((uVar6 & uVar21) != uVar19)) {
    lVar12 = *param_4;
    local_d8._0_2_ = CONCAT11(bVar8,(undefined1)local_d8);
    local_d8 = (uint)(ushort)local_d8;
    uVar13 = uVar20;
    uVar10 = 0;
  }
  *(uint *)(lVar12 + (uVar17 >> ((byte)uVar10 & 0x3f)) * 4) = local_d8;
  for (uVar15 = 1 << ((char)uVar13 - 1U & 0x1f); (uVar21 & uVar15) != 0; uVar15 = uVar15 >> 1) {
  }
  if (uVar15 == 0) goto LAB_140df9a1b;
  uVar15 = (uVar21 & uVar15 - 1) + uVar15;
  uVar17 = (ulonglong)uVar15;
  goto joined_r0x000140df99c2;
}

