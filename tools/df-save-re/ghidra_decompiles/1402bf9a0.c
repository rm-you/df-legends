// FUN_1402bf9a0 @ 1402bf9a0
// callees:
//   -> 140282cb0 FUN_140282cb0
//   -> 1401b2f70 FUN_1401b2f70
//   -> 14000c390 FUN_14000c390
//   -> 1402cb240 FUN_1402cb240
//   -> 1400508e0 FUN_1400508e0
//   -> 14000bd10 FUN_14000bd10
//   -> 140002020 FUN_140002020
//   -> 140dfb5c4 operator_new
//   -> 1401069c0 FUN_1401069c0
//   -> 140071310 FUN_140071310
//   -> 14000bc60 FUN_14000bc60
//   -> 14000c420 FUN_14000c420
//   -> 1400025a0 FUN_1400025a0
//   -> 14000d840 FUN_14000d840
//   -> 1401b2e10 FUN_1401b2e10
//   -> 1402827a0 FUN_1402827a0
//   -> 140050340 FUN_140050340
//   -> 1402cbba0 FUN_1402cbba0
//   -> 1402c3280 FUN_1402c3280
//   -> 140106910 FUN_140106910
//   -> 1400717c0 FUN_1400717c0
//   -> 140282880 FUN_140282880
//   -> 140051ee0 FUN_140051ee0
//   -> EXTERNAL:000000f7 qsort
//   -> 140dfb5b4 free
//   -> 140050100 FUN_140050100
//   -> 140282da0 FUN_140282da0
//   -> 14007c030 FUN_14007c030
//   -> 1400025c0 FUN_1400025c0


void FUN_1402bf9a0(longlong *param_1)

{
  ulonglong *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short **ppsVar5;
  short **ppsVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  void *pvVar10;
  int *piVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  longlong lVar18;
  undefined2 *puVar19;
  int iVar20;
  undefined2 *puVar21;
  short sVar22;
  longlong lVar23;
  longlong lVar24;
  short *psVar25;
  longlong lVar26;
  short *psVar27;
  longlong *plVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong in_R11;
  short sVar32;
  undefined4 extraout_XMM0_Da;
  ushort local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int *in_stack_fffffffffffffd48;
  undefined4 uVar33;
  uint local_2a8;
  uint local_2a4;
  int local_2a0;
  uint local_29c;
  ulonglong local_298;
  ulonglong local_290;
  uint local_288 [2];
  int *local_280;
  int *piStack_278;
  int *local_270;
  undefined1 *local_268;
  undefined1 *puStack_260;
  undefined1 *local_258;
  int local_250 [2];
  longlong *local_248;
  undefined2 *local_240;
  int *local_238;
  int *piStack_230;
  int *local_228;
  short *local_220;
  int local_218 [2];
  short *local_210;
  undefined2 *local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e0;
  longlong local_1d8;
  longlong *local_1c8;
  longlong local_1c0 [3];
  longlong local_1a8;
  longlong local_1a0;
  longlong local_190 [3];
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong local_160 [3];
  undefined8 local_148;
  undefined1 *local_140;
  int *local_138;
  longlong local_130;
  short *local_128;
  short *local_120;
  longlong local_118;
  short *local_110;
  short *local_108;
  longlong local_100;
  short *local_f8;
  short *local_f0;
  longlong local_e8;
  short *local_e0;
  short *local_d8;
  longlong local_d0;
  short *local_c8;
  short *local_c0;
  longlong local_b8;
  short *local_b0;
  short *local_a8;
  longlong local_a0;
  short *local_98;
  short *local_90;
  short *local_88;
  longlong local_80;
  int *local_78;
  int *local_70;
  undefined1 *local_68;
  int *local_60;
  short *local_58;
  
  local_148 = 0xfffffffffffffffe;
  if (((*param_1 != 0) && (param_1[1] != 0)) && (param_1[9] != 0)) {
    FUN_140282cb0();
    uVar13 = (int)*(uint *)(param_1 + 2) >> 0x1f;
    iVar20 = (*(uint *)(param_1 + 2) ^ uVar13) - uVar13;
    uVar13 = (int)*(uint *)((longlong)param_1 + 0x14) >> 0x1f;
    iVar9 = (*(uint *)((longlong)param_1 + 0x14) ^ uVar13) - uVar13;
    if (iVar20 < iVar9) {
      iVar20 = iVar9;
    }
    local_268 = (undefined1 *)0x0;
    puStack_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_238 = (int *)0x0;
    piStack_230 = (int *)0x0;
    local_228 = (int *)0x0;
    local_280 = (int *)0x0;
    piStack_278 = (int *)0x0;
    local_270 = (int *)0x0;
    local_2a0 = 0;
    if (*(longlong *)(param_1[1] + 0x1698) - *(longlong *)(param_1[1] + 0x1690) >> 3 != 0) {
      do {
        local_res10[0] = 2;
        if ((local_res10 < puStack_260) && (local_268 <= local_res10)) {
          lVar18 = -(longlong)local_268;
          if (puStack_260 == local_258) {
            FUN_1401b2f70(&local_268,1);
          }
          if (puStack_260 != (undefined1 *)0x0) {
            *puStack_260 = local_268[(longlong)(local_res10 + lVar18)];
          }
        }
        else {
          if (puStack_260 == local_258) {
            FUN_1401b2f70(&local_268,1);
          }
          if (puStack_260 != (undefined1 *)0x0) {
            *puStack_260 = local_res10[0];
          }
        }
        puStack_260 = puStack_260 + 1;
        if ((&local_2a0 < piStack_230) && (local_238 <= &local_2a0)) {
          lVar18 = (longlong)&local_2a0 - (longlong)local_238;
          if (piStack_230 == local_228) {
            FUN_14000c390(&local_238,1);
          }
          if (piStack_230 != (int *)0x0) {
            iVar9 = local_238[lVar18 >> 2];
LAB_1402bfb61:
            *piStack_230 = iVar9;
          }
        }
        else {
          if (piStack_230 == local_228) {
            FUN_14000c390(&local_238,1);
          }
          iVar9 = local_2a0;
          if (piStack_230 != (int *)0x0) goto LAB_1402bfb61;
        }
        piStack_230 = piStack_230 + 1;
        piVar17 = (int *)(*(longlong *)
                           (*(longlong *)(param_1[1] + 0x1690) + (longlong)local_2a0 * 8) + 0x6c);
        if ((piVar17 < piStack_278) && (local_280 <= piVar17)) {
          lVar18 = (longlong)piVar17 - (longlong)local_280;
          if (piStack_278 == local_270) {
            FUN_14000c390(&local_280,1);
          }
          if (piStack_278 != (int *)0x0) {
            iVar9 = local_280[lVar18 >> 2];
LAB_1402bfbe9:
            *piStack_278 = iVar9;
          }
        }
        else {
          if (piStack_278 == local_270) {
            FUN_14000c390(&local_280,1);
          }
          if (piStack_278 != (int *)0x0) {
            iVar9 = *piVar17;
            goto LAB_1402bfbe9;
          }
        }
        piStack_278 = piStack_278 + 1;
        local_2a0 = local_2a0 + 1;
      } while ((ulonglong)(longlong)local_2a0 <
               (ulonglong)
               (*(longlong *)(param_1[1] + 0x1698) - *(longlong *)(param_1[1] + 0x1690) >> 3));
    }
    local_2a0 = 0;
    plVar28 = (longlong *)(param_1[1] + 0x15d0);
    if (*(longlong *)(param_1[1] + 0x15d8) - *plVar28 >> 3 != 0) {
      do {
        lVar24 = (longlong)local_2a0;
        lVar18 = *(longlong *)(*plVar28 + lVar24 * 8);
        iVar9 = *(int *)(lVar18 + 0x28);
        uVar13 = *(uint *)(lVar18 + 0x2c);
        in_R11 = (ulonglong)uVar13;
        iVar4 = *(int *)(param_1[3] + lVar24 * 4);
        if (iVar9 < iVar4) {
          if ((int)uVar13 <= iVar4) {
            local_250[0] = *(int *)(*(longlong *)(*plVar28 + lVar24 * 8) + 0x50) *
                           ((iVar4 - uVar13) + 1);
            goto LAB_1402bfca3;
          }
        }
        else {
          local_250[0] = *(int *)(*(longlong *)(*plVar28 + lVar24 * 8) + 0x50) *
                         ((iVar9 - iVar4) + 1);
LAB_1402bfca3:
          if (**(ushort **)(*(longlong *)(param_1[1] + 0x15d0) + lVar24 * 8) < 3) {
            local_250[0] = local_250[0] +
                           *(int *)(*(longlong *)(*(longlong *)(param_1[1] + 0x15d0) + lVar24 * 8) +
                                   0x50) * iVar20;
          }
          uVar14 = (longlong)piStack_278 - (longlong)local_280 >> 2;
          piVar17 = local_280;
          iVar9 = 0;
          iVar4 = 0;
          if (uVar14 != 0) {
            do {
              iVar9 = iVar4;
              if (*piVar17 < local_250[0]) {
                local_2a8 = local_2a8 & 0xffffff00;
                local_140 = local_268;
                FUN_1402cb240(&local_268,&local_220,local_268 + iVar9,plVar28,&local_2a8);
                local_138 = local_238;
                FUN_1400508e0(&local_238,&local_200,local_238 + iVar9);
                local_60 = local_280;
                in_stack_fffffffffffffd48 = local_250;
                FUN_1400508e0(&local_280,&local_1c8);
                break;
              }
              iVar9 = iVar9 + 1;
              piVar17 = piVar17 + 1;
              iVar4 = iVar9;
            } while ((ulonglong)(longlong)iVar9 < uVar14);
          }
          if ((longlong)iVar9 == (longlong)piStack_278 - (longlong)local_280 >> 2) {
            local_res18[0] = 0;
            if ((local_res18 < puStack_260) && (local_268 <= local_res18)) {
              lVar18 = -(longlong)local_268;
              if (puStack_260 == local_258) {
                FUN_1401b2f70(&local_268,1);
              }
              if (puStack_260 != (undefined1 *)0x0) {
                *puStack_260 = local_268[(longlong)(local_res18 + lVar18)];
              }
            }
            else {
              if (puStack_260 == local_258) {
                FUN_1401b2f70(&local_268,1);
              }
              if (puStack_260 != (undefined1 *)0x0) {
                *puStack_260 = local_res18[0];
              }
            }
            puStack_260 = puStack_260 + 1;
            if ((&local_2a0 < piStack_230) && (local_238 <= &local_2a0)) {
              lVar18 = (longlong)&local_2a0 - (longlong)local_238;
              if (piStack_230 == local_228) {
                FUN_14000c390(&local_238,1);
              }
              if (piStack_230 != (int *)0x0) {
                iVar9 = local_238[lVar18 >> 2];
LAB_1402bfe9f:
                *piStack_230 = iVar9;
              }
            }
            else {
              if (piStack_230 == local_228) {
                FUN_14000c390(&local_238,1);
              }
              iVar9 = local_2a0;
              if (piStack_230 != (int *)0x0) goto LAB_1402bfe9f;
            }
            piStack_230 = piStack_230 + 1;
            if ((local_250 < piStack_278) && (local_280 <= local_250)) {
              lVar18 = (longlong)local_250 - (longlong)local_280;
              if (piStack_278 == local_270) {
                FUN_14000c390(&local_280,1);
              }
              if (piStack_278 != (int *)0x0) {
                iVar9 = local_280[lVar18 >> 2];
LAB_1402bff1b:
                *piStack_278 = iVar9;
              }
            }
            else {
              if (piStack_278 == local_270) {
                FUN_14000c390(&local_280,1);
              }
              iVar9 = local_250[0];
              if (piStack_278 != (int *)0x0) goto LAB_1402bff1b;
            }
            piStack_278 = piStack_278 + 1;
          }
        }
        local_2a0 = local_2a0 + 1;
        plVar28 = (longlong *)(param_1[1] + 0x15d0);
      } while ((ulonglong)(longlong)local_2a0 <
               (ulonglong)(*(longlong *)(param_1[1] + 0x15d8) - *plVar28 >> 3));
    }
    if (*(longlong *)(param_1[1] + 0x15f0) - *(longlong *)(param_1[1] + 0x15e8) >> 3 != 0) {
      local_178 = 0;
      lStack_170 = 0;
      local_168 = 0;
      FUN_14000bd10(&local_178,
                    *(longlong *)(param_1[1] + 0x15f0) - *(longlong *)(param_1[1] + 0x15e8) >> 3);
      iVar20 = (int)(lStack_170 - local_178 >> 2);
      while (iVar20 = iVar20 + -1, -1 < iVar20) {
        *(undefined4 *)(local_178 + (longlong)iVar20 * 4) = 0;
      }
      local_2a0 = 0;
      if (param_1[7] - param_1[6] >> 2 != 0) {
        do {
          in_R11 = param_1[1];
          lVar24 = (longlong)*(int *)(*(longlong *)(in_R11 + 0x1600) + (longlong)local_2a0 * 4);
          lVar18 = *(longlong *)(*(longlong *)(in_R11 + 0x15e8) + lVar24 * 8);
          iVar20 = *(int *)(lVar18 + 0x28);
          iVar9 = *(int *)(lVar18 + 0x2c);
          iVar4 = *(int *)(param_1[6] + (longlong)local_2a0 * 4);
          if (iVar20 < iVar4) {
            if (iVar9 <= iVar4) {
              local_218[0] = *(int *)(*(longlong *)(*(longlong *)(in_R11 + 0x15e8) + lVar24 * 8) +
                                     0x50) * ((iVar4 - iVar9) + 1);
              goto LAB_1402c006a;
            }
          }
          else {
            local_218[0] = *(int *)(*(longlong *)(*(longlong *)(in_R11 + 0x15e8) + lVar24 * 8) +
                                   0x50) * ((iVar20 - iVar4) + 1);
LAB_1402c006a:
            if (*(int *)(local_178 + lVar24 * 4) < local_218[0]) {
              *(int *)(local_178 + lVar24 * 4) = local_218[0];
            }
          }
          local_2a0 = local_2a0 + 1;
        } while ((ulonglong)(longlong)local_2a0 < (ulonglong)(param_1[7] - param_1[6] >> 2));
      }
      local_2a0 = 0;
      if (*(longlong *)(param_1[1] + 0x15f0) - *(longlong *)(param_1[1] + 0x15e8) >> 3 != 0) {
        do {
          local_218[0] = *(int *)(local_178 + (longlong)local_2a0 * 4);
          uVar14 = (longlong)piStack_278 - (longlong)local_280 >> 2;
          piVar17 = local_280;
          iVar20 = 0;
          iVar9 = 0;
          if (uVar14 != 0) {
            do {
              iVar20 = iVar9;
              if (*piVar17 < local_218[0]) {
                local_2a8 = CONCAT31(local_2a8._1_3_,1);
                local_68 = local_268;
                FUN_1402cb240(&local_268,&local_220,local_268 + iVar20);
                local_70 = local_238;
                FUN_1400508e0(&local_238,&local_200,local_238 + iVar20);
                local_78 = local_280;
                in_stack_fffffffffffffd48 = local_218;
                FUN_1400508e0(&local_280,&local_1c8,local_280 + iVar20);
                break;
              }
              iVar20 = iVar20 + 1;
              piVar17 = piVar17 + 1;
              iVar9 = iVar20;
            } while ((ulonglong)(longlong)iVar20 < uVar14);
          }
          if ((longlong)iVar20 == (longlong)piStack_278 - (longlong)local_280 >> 2) {
            local_res20[0] = 1;
            if ((local_res20 < puStack_260) && (local_268 <= local_res20)) {
              lVar18 = -(longlong)local_268;
              if (puStack_260 == local_258) {
                FUN_1401b2f70(&local_268,1);
              }
              if (puStack_260 != (undefined1 *)0x0) {
                *puStack_260 = local_268[(longlong)(local_res20 + lVar18)];
              }
            }
            else {
              if (puStack_260 == local_258) {
                FUN_1401b2f70(&local_268,1);
              }
              if (puStack_260 != (undefined1 *)0x0) {
                *puStack_260 = local_res20[0];
              }
            }
            puStack_260 = puStack_260 + 1;
            if ((&local_2a0 < piStack_230) && (local_238 <= &local_2a0)) {
              lVar18 = (longlong)&local_2a0 - (longlong)local_238;
              if (piStack_230 == local_228) {
                FUN_14000c390(&local_238,1);
              }
              if (piStack_230 != (int *)0x0) {
                iVar20 = local_238[lVar18 >> 2];
LAB_1402c02af:
                *piStack_230 = iVar20;
              }
            }
            else {
              if (piStack_230 == local_228) {
                FUN_14000c390(&local_238,1);
              }
              iVar20 = local_2a0;
              if (piStack_230 != (int *)0x0) goto LAB_1402c02af;
            }
            piStack_230 = piStack_230 + 1;
            if ((local_218 < piStack_278) && (local_280 <= local_218)) {
              lVar18 = (longlong)local_218 - (longlong)local_280;
              if (piStack_278 == local_270) {
                FUN_14000c390(&local_280,1);
              }
              if (piStack_278 != (int *)0x0) {
                iVar20 = local_280[lVar18 >> 2];
LAB_1402c032b:
                *piStack_278 = iVar20;
              }
            }
            else {
              if (piStack_278 == local_270) {
                FUN_14000c390(&local_280,1);
              }
              iVar20 = local_218[0];
              if (piStack_278 != (int *)0x0) goto LAB_1402c032b;
            }
            piStack_278 = piStack_278 + 1;
          }
          local_2a0 = local_2a0 + 1;
        } while ((ulonglong)(longlong)local_2a0 <
                 (ulonglong)
                 (*(longlong *)(param_1[1] + 0x15f0) - *(longlong *)(param_1[1] + 0x15e8) >> 3));
      }
      if (local_178 != 0) {
        FUN_140002020(local_178,local_168 - local_178 >> 2,4);
        local_178 = 0;
        lStack_170 = 0;
        local_168 = 0;
      }
    }
    local_29c = 0;
    if (puStack_260 != local_268) {
      local_298 = 0;
      local_res8 = (ushort)param_1;
      local_290 = CONCAT44(local_290._4_4_,(uint)local_res8);
      local_2a4 = (uint)local_res8;
      do {
        uVar14 = local_298;
        uVar13 = local_29c;
        if ((local_280[local_298] != -1) && (1999 < local_280[local_298])) {
          cVar8 = local_268[local_298];
          if (cVar8 == '\0') {
            sVar32 = **(short **)
                       (*(longlong *)(param_1[1] + 0x15d0) + (longlong)local_238[local_298] * 8);
            if (-1 < sVar32) {
              if (sVar32 < 3) {
                local_290 = (ulonglong)local_290._2_6_ << 0x10;
              }
              else if (sVar32 < 0x18) {
                local_290 = CONCAT62(local_290._2_6_,1);
              }
            }
          }
          else if (cVar8 == '\x01') {
            switch(**(undefined2 **)
                     (*(longlong *)(param_1[1] + 0x15e8) + (longlong)local_238[local_298] * 8)) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x14:
            case 0x15:
              local_290 = CONCAT62(local_290._2_6_,2);
              break;
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
              local_290 = CONCAT62(local_290._2_6_,4);
              break;
            case 0x16:
            case 0x17:
              local_290 = CONCAT62(local_290._2_6_,3);
            }
          }
          else if (cVar8 == '\x02') {
            local_290 = CONCAT44(local_290._4_4_,2);
          }
          local_210 = operator_new(0xf8);
          local_210[4] = 0;
          local_210[5] = 0;
          local_210[6] = 0;
          local_210[7] = 0;
          local_210[8] = 0;
          local_210[9] = 0;
          local_210[10] = 0;
          local_210[0xb] = 0;
          local_210[0xc] = 0;
          local_210[0xd] = 0;
          local_210[0xe] = 0;
          local_210[0xf] = 0;
          local_210[0x10] = 0;
          local_210[0x11] = 0;
          local_210[0x12] = 0;
          local_210[0x13] = 0;
          local_210[0x14] = 0;
          local_210[0x15] = 0;
          local_210[0x16] = 0;
          local_210[0x17] = 0;
          local_210[0x18] = 0;
          local_210[0x19] = 0;
          local_210[0x1a] = 0;
          local_210[0x1b] = 0;
          local_210[0x1c] = 0;
          local_210[0x1d] = 0;
          local_210[0x1e] = 0;
          local_210[0x1f] = 0;
          local_210[0x20] = 0;
          local_210[0x21] = 0;
          local_210[0x22] = 0;
          local_210[0x23] = 0;
          local_210[0x24] = 0;
          local_210[0x25] = 0;
          local_210[0x26] = 0;
          local_210[0x27] = 0;
          local_210[0x28] = 0;
          local_210[0x29] = 0;
          local_210[0x2a] = 0;
          local_210[0x2b] = 0;
          local_210[0x2c] = 0;
          local_210[0x2d] = 0;
          local_210[0x2e] = 0;
          local_210[0x2f] = 0;
          local_210[0x30] = 0;
          local_210[0x31] = 0;
          local_210[0x32] = 0;
          local_210[0x33] = 0;
          local_210[0x34] = 0;
          local_210[0x35] = 0;
          local_210[0x36] = 0;
          local_210[0x37] = 0;
          local_210[0x38] = 0;
          local_210[0x39] = 0;
          local_210[0x3a] = 0;
          local_210[0x3b] = 0;
          local_210[0x3c] = 0;
          local_210[0x3d] = 0;
          local_210[0x3e] = 0;
          local_210[0x3f] = 0;
          local_210[0x40] = 0;
          local_210[0x41] = 0;
          local_210[0x42] = 0;
          local_210[0x43] = 0;
          local_210[0x44] = 0;
          local_210[0x45] = 0;
          local_210[0x46] = 0;
          local_210[0x47] = 0;
          local_210[0x48] = 0;
          local_210[0x49] = 0;
          local_210[0x4a] = 0;
          local_210[0x4b] = 0;
          local_210[0x4c] = 0;
          local_210[0x4d] = 0;
          local_210[0x4e] = 0;
          local_210[0x4f] = 0;
          local_210[0x50] = 0;
          local_210[0x51] = 0;
          local_210[0x52] = 0;
          local_210[0x53] = 0;
          local_210[0x54] = 0;
          local_210[0x55] = 0;
          local_210[0x56] = 0;
          local_210[0x57] = 0;
          local_210[0x58] = 0;
          local_210[0x59] = 0;
          local_210[0x5a] = 0;
          local_210[0x5b] = 0;
          local_210[0x5c] = 0;
          local_210[0x5d] = 0;
          local_210[0x5e] = 0;
          local_210[0x5f] = 0;
          local_210[0x60] = 0;
          local_210[0x61] = 0;
          local_210[0x62] = 0;
          local_210[99] = 0;
          local_210[100] = 0;
          local_210[0x65] = 0;
          local_210[0x66] = 0;
          local_210[0x67] = 0;
          local_210[0x68] = 0;
          local_210[0x69] = 0;
          local_210[0x6a] = 0;
          local_210[0x6b] = 0;
          local_210[0x6c] = 0;
          local_210[0x6d] = 0;
          local_210[0x6e] = 0;
          local_210[0x6f] = 0;
          local_210[0x70] = 0;
          local_210[0x71] = 0;
          local_210[0x72] = 0;
          local_210[0x73] = 0;
          local_210[0x74] = 0;
          local_210[0x75] = 0;
          local_210[0x76] = 0;
          local_210[0x77] = 0;
          local_210[0x78] = 0;
          local_210[0x79] = 0;
          local_210[0x7a] = 0;
          local_210[0x7b] = 0;
          *local_210 = (short)local_290;
          puVar1 = (ulonglong *)(param_1 + 0x29);
          ppsVar5 = (short **)param_1[0x2a];
          if ((&local_210 < ppsVar5) && (ppsVar6 = (short **)*puVar1, ppsVar6 <= &local_210)) {
            if (ppsVar5 == (short **)param_1[0x2b]) {
              FUN_1401069c0(puVar1);
            }
            if ((undefined8 *)param_1[0x2a] != (undefined8 *)0x0) {
              *(undefined8 *)param_1[0x2a] =
                   *(undefined8 *)(*puVar1 + ((longlong)&local_210 - (longlong)ppsVar6 >> 3) * 8);
            }
          }
          else {
            if (ppsVar5 == (short **)param_1[0x2b]) {
              FUN_1401069c0(puVar1);
            }
            if ((undefined8 *)param_1[0x2a] != (undefined8 *)0x0) {
              *(undefined8 *)param_1[0x2a] = local_210;
            }
          }
          param_1[0x2a] = param_1[0x2a] + 8;
          uVar29 = uVar14;
          uVar15 = uVar14;
          psVar27 = local_210;
          local_2a8 = uVar13;
          if (uVar14 < (ulonglong)((longlong)puStack_260 - (longlong)local_268)) {
            do {
              if (local_280[uVar15] != -1) {
                cVar8 = local_268[uVar15];
                if (cVar8 == '\0') {
                  sVar32 = **(short **)
                             (*(longlong *)(param_1[1] + 0x15d0) + (longlong)local_238[uVar15] * 8);
                  if (-1 < sVar32) {
                    if (sVar32 < 3) {
                      sVar32 = 0;
                      local_2a4 = 0;
                    }
                    else {
                      if (0x17 < sVar32) goto switchD_1402c0688_default;
                      sVar32 = 1;
                      local_2a4 = 1;
                    }
                    goto LAB_1402c0701;
                  }
switchD_1402c0688_default:
                  sVar32 = (short)local_2a4;
                }
                else {
                  if (cVar8 != '\x01') {
                    if (cVar8 == '\x02') {
                      local_2a4 = 2;
                    }
                    goto switchD_1402c0688_default;
                  }
                  switch(**(undefined2 **)
                           (*(longlong *)(param_1[1] + 0x15e8) + (longlong)local_238[uVar15] * 8)) {
                  case 0:
                  case 1:
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 10:
                  case 0xb:
                  case 0xc:
                  case 0xd:
                  case 0xe:
                  case 0xf:
                  case 0x14:
                  case 0x15:
                    sVar32 = 2;
                    local_2a4 = 2;
                    break;
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                    sVar32 = 4;
                    local_2a4 = 4;
                    break;
                  case 0x16:
                  case 0x17:
                    sVar32 = 3;
                    local_2a4 = 3;
                    break;
                  default:
                    goto switchD_1402c0688_default;
                  }
                }
LAB_1402c0701:
                if ((sVar32 == *psVar27) &&
                   (((1999 < local_280[uVar15] || ((short)local_2a4 == 0)) ||
                    ((ushort)((short)local_2a4 - 3U) < 2)))) {
                  if (cVar8 == '\0') {
                    if ((local_268[uVar14] == '\0') &&
                       ((ulonglong)
                        (*(longlong *)(psVar27 + 0x20) - *(longlong *)(psVar27 + 0x1c) >> 2) < 3)) {
                      piVar17 = local_238 + uVar15;
                      piVar11 = *(int **)(psVar27 + 0x20);
                      if ((piVar17 < piVar11) &&
                         (piVar7 = *(int **)(psVar27 + 0x1c), piVar7 <= piVar17)) {
                        if (piVar11 == *(int **)(psVar27 + 0x24)) {
                          FUN_14000c390(psVar27 + 0x1c,1);
                        }
                        piVar11 = *(int **)(psVar27 + 0x20);
                        if (piVar11 != (int *)0x0) {
                          iVar20 = *(int *)(*(longlong *)(psVar27 + 0x1c) +
                                           ((longlong)piVar17 - (longlong)piVar7 >> 2) * 4);
LAB_1402c0ff1:
                          *piVar11 = iVar20;
                        }
                      }
                      else {
                        if (piVar11 == *(int **)(psVar27 + 0x24)) {
                          FUN_14000c390(psVar27 + 0x1c,1);
                        }
                        piVar11 = *(int **)(psVar27 + 0x20);
                        if (piVar11 != (int *)0x0) {
                          iVar20 = *piVar17;
                          goto LAB_1402c0ff1;
                        }
                      }
                      psVar25 = local_210;
                      *(longlong *)(psVar27 + 0x20) = *(longlong *)(psVar27 + 0x20) + 4;
                      piVar17 = local_280 + uVar15;
                      piVar11 = *(int **)(local_210 + 0x2c);
                      if ((piVar17 < piVar11) &&
                         (piVar7 = *(int **)(local_210 + 0x28), piVar7 <= piVar17)) {
                        if (piVar11 == *(int **)(local_210 + 0x30)) {
                          FUN_14000c390(local_210 + 0x28,1);
                        }
                        piVar11 = *(int **)(psVar25 + 0x2c);
                        if (piVar11 != (int *)0x0) {
                          iVar20 = *(int *)(*(longlong *)(psVar25 + 0x28) +
                                           ((longlong)piVar17 - (longlong)piVar7 >> 2) * 4);
LAB_1402c1063:
                          *piVar11 = iVar20;
                        }
                      }
                      else {
                        if (piVar11 == *(int **)(local_210 + 0x30)) {
                          FUN_14000c390(local_210 + 0x28,1);
                        }
                        piVar11 = *(int **)(psVar25 + 0x2c);
                        if (piVar11 != (int *)0x0) {
                          iVar20 = *piVar17;
                          goto LAB_1402c1063;
                        }
                      }
                      *(longlong *)(psVar25 + 0x2c) = *(longlong *)(psVar25 + 0x2c) + 4;
                      local_280[uVar15] = -1;
                      psVar27 = local_210;
                    }
                  }
                  else if ((byte)(cVar8 - 1U) < 2) {
                    if (local_268[uVar14] == '\x01') {
                      lVar18 = *(longlong *)
                                (*(longlong *)(param_1[1] + 0x15e8) +
                                (longlong)local_238[uVar14] * 8);
                      if (cVar8 == '\x01') {
                        if (2 < (ulonglong)
                                (*(longlong *)(psVar27 + 8) - *(longlong *)(psVar27 + 4) >> 2))
                        goto LAB_1402c1087;
                        piVar17 = local_238 + uVar15;
                        lVar24 = *(longlong *)
                                  (*(longlong *)(param_1[1] + 0x15e8) + (longlong)*piVar17 * 8);
                        lVar23 = *(longlong *)(lVar24 + 0x80);
                        uVar14 = local_298;
                        if (*(longlong *)(lVar18 + 0x88) - *(longlong *)(lVar18 + 0x80) >> 1 ==
                            *(longlong *)(lVar24 + 0x88) - lVar23 >> 1) {
                          local_88 = *(short **)(lVar18 + 0x88);
                          local_98 = *(short **)(lVar18 + 0x80);
                          local_80 = lVar23;
                          if (local_98 != local_88) {
                            psVar25 = local_98;
                            do {
                              if (*psVar25 !=
                                  *(short *)((lVar23 - (longlong)local_98) + (longlong)psVar25))
                              goto LAB_1402c09a1;
                              psVar25 = psVar25 + 1;
                            } while (psVar25 != local_88);
                          }
                          lVar23 = *(longlong *)(lVar24 + 0x98);
                          if (*(longlong *)(lVar18 + 0xa0) - *(longlong *)(lVar18 + 0x98) >> 1 ==
                              *(longlong *)(lVar24 + 0xa0) - lVar23 >> 1) {
                            local_c8 = *(short **)(lVar18 + 0xa0);
                            local_90 = *(short **)(lVar18 + 0x98);
                            local_a0 = lVar23;
                            if (local_90 != local_c8) {
                              psVar25 = local_90;
                              do {
                                if (*psVar25 !=
                                    *(short *)((lVar23 - (longlong)local_90) + (longlong)psVar25))
                                goto LAB_1402c09a1;
                                psVar25 = psVar25 + 1;
                              } while (psVar25 != local_c8);
                            }
                            iVar20 = FUN_140071310(lVar18 + 0x58,lVar24 + 0x58);
                            uVar14 = local_298;
                            if ((iVar20 == 0) &&
                               (*(short *)(lVar18 + 0x78) == *(short *)(lVar24 + 0x78))) {
                              piVar11 = *(int **)(psVar27 + 8);
                              if ((piVar17 < piVar11) &&
                                 (piVar7 = *(int **)(psVar27 + 4), piVar7 <= piVar17)) {
                                if (piVar11 == *(int **)(psVar27 + 0xc)) {
                                  FUN_14000c390(psVar27 + 4,1);
                                }
                                piVar11 = *(int **)(psVar27 + 8);
                                if (piVar11 != (int *)0x0) {
                                  iVar20 = *(int *)(*(longlong *)(psVar27 + 4) +
                                                   ((longlong)piVar17 - (longlong)piVar7 >> 2) * 4);
LAB_1402c090b:
                                  *piVar11 = iVar20;
                                }
                              }
                              else {
                                if (piVar11 == *(int **)(psVar27 + 0xc)) {
                                  FUN_14000c390(psVar27 + 4,1);
                                }
                                piVar11 = *(int **)(psVar27 + 8);
                                if (piVar11 != (int *)0x0) {
                                  iVar20 = *piVar17;
                                  goto LAB_1402c090b;
                                }
                              }
                              psVar25 = local_210;
                              *(longlong *)(psVar27 + 8) = *(longlong *)(psVar27 + 8) + 4;
                              piVar17 = local_280 + uVar15;
                              piVar11 = *(int **)(local_210 + 0x14);
                              if ((piVar17 < piVar11) &&
                                 (piVar7 = *(int **)(local_210 + 0x10), piVar7 <= piVar17)) {
                                if (piVar11 == *(int **)(local_210 + 0x18)) {
                                  FUN_14000c390(local_210 + 0x10,1);
                                }
                                piVar11 = *(int **)(psVar25 + 0x14);
                                if (piVar11 != (int *)0x0) {
                                  iVar20 = *(int *)(*(longlong *)(psVar25 + 0x10) +
                                                   ((longlong)piVar17 - (longlong)piVar7 >> 2) * 4);
LAB_1402c097d:
                                  *piVar11 = iVar20;
                                }
                              }
                              else {
                                if (piVar11 == *(int **)(local_210 + 0x18)) {
                                  FUN_14000c390(local_210 + 0x10,1);
                                }
                                piVar11 = *(int **)(psVar25 + 0x14);
                                if (piVar11 != (int *)0x0) {
                                  iVar20 = *piVar17;
                                  goto LAB_1402c097d;
                                }
                              }
                              *(longlong *)(psVar25 + 0x14) = *(longlong *)(psVar25 + 0x14) + 4;
                              local_280[uVar15] = -1;
                              uVar14 = local_298;
                              psVar27 = local_210;
                            }
                          }
                        }
                      }
LAB_1402c09a1:
                      if (local_268[uVar15] == '\x02') {
                        piVar17 = local_238 + uVar15;
                        lVar24 = *(longlong *)
                                  (*(longlong *)(param_1[1] + 0x1690) + (longlong)*piVar17 * 8);
                        lVar23 = *(longlong *)(lVar24 + 0x30);
                        uVar14 = local_298;
                        if (*(longlong *)(lVar18 + 0x88) - *(longlong *)(lVar18 + 0x80) >> 1 ==
                            *(longlong *)(lVar24 + 0x38) - lVar23 >> 1) {
                          local_128 = *(short **)(lVar18 + 0x88);
                          local_120 = *(short **)(lVar18 + 0x80);
                          local_130 = lVar23;
                          if (local_120 != local_128) {
                            psVar25 = local_120;
                            do {
                              if (*psVar25 !=
                                  *(short *)((lVar23 - (longlong)local_120) + (longlong)psVar25))
                              goto LAB_1402c0bea;
                              psVar25 = psVar25 + 1;
                            } while (psVar25 != local_128);
                          }
                          lVar23 = *(longlong *)(lVar24 + 0x48);
                          if (*(longlong *)(lVar18 + 0xa0) - *(longlong *)(lVar18 + 0x98) >> 1 ==
                              *(longlong *)(lVar24 + 0x50) - lVar23 >> 1) {
                            local_110 = *(short **)(lVar18 + 0xa0);
                            local_108 = *(short **)(lVar18 + 0x98);
                            local_118 = lVar23;
                            if (local_108 != local_110) {
                              psVar25 = local_108;
                              do {
                                if (*psVar25 !=
                                    *(short *)((lVar23 - (longlong)local_108) + (longlong)psVar25))
                                goto LAB_1402c0aa6;
                                psVar25 = psVar25 + 1;
                              } while (psVar25 != local_110);
                            }
                          }
                          else {
LAB_1402c0aa6:
                            lVar23 = *(longlong *)
                                      (*(longlong *)param_1[9] +
                                      (longlong)**(short **)(lVar18 + 0x80) * 8);
                            if (*(longlong *)(lVar23 + 0x60) - *(longlong *)(lVar23 + 0x58) >> 3 !=
                                1) goto LAB_1402c0bea;
                          }
                          iVar20 = FUN_140071310(lVar18 + 0x58,lVar24 + 0x70);
                          uVar14 = local_298;
                          if ((iVar20 == 0) &&
                             (*(short *)(lVar18 + 0x78) == *(short *)(lVar24 + 0x90))) {
                            piVar11 = *(int **)(psVar27 + 0x38);
                            if ((piVar17 < piVar11) &&
                               (piVar7 = *(int **)(psVar27 + 0x34), piVar7 <= piVar17)) {
                              if (piVar11 == *(int **)(psVar27 + 0x3c)) {
                                FUN_14000c390(psVar27 + 0x34,1);
                              }
                              piVar11 = *(int **)(psVar27 + 0x38);
                              if (piVar11 != (int *)0x0) {
                                iVar20 = *(int *)(*(longlong *)(psVar27 + 0x34) +
                                                 ((longlong)piVar17 - (longlong)piVar7 >> 2) * 4);
LAB_1402c0b56:
                                *piVar11 = iVar20;
                              }
                            }
                            else {
                              if (piVar11 == *(int **)(psVar27 + 0x3c)) {
                                FUN_14000c390(psVar27 + 0x34,1);
                              }
                              piVar11 = *(int **)(psVar27 + 0x38);
                              if (piVar11 != (int *)0x0) {
                                iVar20 = *piVar17;
                                goto LAB_1402c0b56;
                              }
                            }
                            psVar25 = local_210;
                            *(longlong *)(psVar27 + 0x38) = *(longlong *)(psVar27 + 0x38) + 4;
                            piVar17 = local_280 + uVar15;
                            plVar28 = (longlong *)(local_210 + 0x40);
                            piVar11 = *(int **)(local_210 + 0x44);
                            if ((piVar17 < piVar11) && (piVar7 = (int *)*plVar28, piVar7 <= piVar17)
                               ) {
                              if (piVar11 == *(int **)(local_210 + 0x48)) {
                                FUN_14000c390(plVar28,1);
                              }
                              piVar11 = *(int **)(psVar25 + 0x44);
                              if (piVar11 != (int *)0x0) {
                                iVar20 = *(int *)(*plVar28 +
                                                 ((longlong)piVar17 - (longlong)piVar7 >> 2) * 4);
LAB_1402c0bc8:
                                *piVar11 = iVar20;
                              }
                            }
                            else {
                              if (piVar11 == *(int **)(local_210 + 0x48)) {
                                FUN_14000c390(plVar28,1);
                              }
                              piVar11 = *(int **)(psVar25 + 0x44);
                              if (piVar11 != (int *)0x0) {
                                iVar20 = *piVar17;
                                goto LAB_1402c0bc8;
                              }
                            }
                            *(longlong *)(psVar25 + 0x44) = *(longlong *)(psVar25 + 0x44) + 4;
                            local_280[uVar15] = -1;
                            uVar14 = local_298;
                            psVar27 = local_210;
                          }
                        }
                      }
                    }
LAB_1402c0bea:
                    if (local_268[uVar14] == '\x02') {
                      lVar18 = *(longlong *)
                                (*(longlong *)(param_1[1] + 0x1690) +
                                (longlong)local_238[uVar14] * 8);
                      if (local_268[uVar15] == '\x01') {
                        uVar14 = local_298;
                        if (2 < (ulonglong)
                                (*(longlong *)(psVar27 + 8) - *(longlong *)(psVar27 + 4) >> 2))
                        goto LAB_1402c1087;
                        lVar24 = *(longlong *)
                                  (*(longlong *)(param_1[1] + 0x15e8) +
                                  (longlong)local_238[uVar15] * 8);
                        lVar23 = *(longlong *)(lVar24 + 0x80);
                        if (*(longlong *)(lVar18 + 0x38) - *(longlong *)(lVar18 + 0x30) >> 1 ==
                            *(longlong *)(lVar24 + 0x88) - lVar23 >> 1) {
                          local_f8 = *(short **)(lVar18 + 0x38);
                          local_f0 = *(short **)(lVar18 + 0x30);
                          local_100 = lVar23;
                          if (local_f0 != local_f8) {
                            psVar25 = local_f0;
                            do {
                              if (*psVar25 !=
                                  *(short *)((lVar23 - (longlong)local_f0) + (longlong)psVar25))
                              goto LAB_1402c0d64;
                              psVar25 = psVar25 + 1;
                            } while (psVar25 != local_f8);
                          }
                          lVar23 = *(longlong *)(lVar24 + 0x98);
                          if (*(longlong *)(lVar18 + 0x50) - *(longlong *)(lVar18 + 0x48) >> 1 ==
                              *(longlong *)(lVar24 + 0xa0) - lVar23 >> 1) {
                            local_e0 = *(short **)(lVar18 + 0x50);
                            local_d8 = *(short **)(lVar18 + 0x48);
                            local_e8 = lVar23;
                            if (local_d8 != local_e0) {
                              psVar25 = local_d8;
                              do {
                                if (*psVar25 !=
                                    *(short *)((lVar23 - (longlong)local_d8) + (longlong)psVar25))
                                goto LAB_1402c0d64;
                                psVar25 = psVar25 + 1;
                              } while (psVar25 != local_e0);
                            }
                            iVar20 = FUN_140071310(lVar18 + 0x70,lVar24 + 0x58);
                            uVar14 = local_298;
                            if ((iVar20 == 0) &&
                               (*(short *)(lVar18 + 0x90) == *(short *)(lVar24 + 0x78))) {
                              FUN_14000bc60(psVar27 + 4,local_238 + uVar29);
                              FUN_14000bc60(local_210 + 0x10,local_280 + uVar29);
                              local_280[uVar15] = -1;
                              uVar14 = local_298;
                              psVar27 = local_210;
                            }
                          }
                        }
                      }
LAB_1402c0d64:
                      if (local_268[uVar15] == '\x02') {
                        piVar17 = local_238 + uVar15;
                        lVar24 = *(longlong *)
                                  (*(longlong *)(param_1[1] + 0x1690) + (longlong)*piVar17 * 8);
                        lVar23 = *(longlong *)(lVar24 + 0x30);
                        uVar14 = local_298;
                        if (*(longlong *)(lVar18 + 0x38) - *(longlong *)(lVar18 + 0x30) >> 1 ==
                            *(longlong *)(lVar24 + 0x38) - lVar23 >> 1) {
                          local_58 = *(short **)(lVar18 + 0x38);
                          local_c0 = *(short **)(lVar18 + 0x30);
                          local_d0 = lVar23;
                          if (local_c0 != local_58) {
                            psVar25 = local_c0;
                            do {
                              if (*psVar25 !=
                                  *(short *)((longlong)psVar25 + (lVar23 - (longlong)local_c0)))
                              goto LAB_1402c1087;
                              psVar25 = psVar25 + 1;
                            } while (psVar25 != local_58);
                          }
                          lVar23 = *(longlong *)(lVar24 + 0x48);
                          if (*(longlong *)(lVar18 + 0x50) - *(longlong *)(lVar18 + 0x48) >> 1 ==
                              *(longlong *)(lVar24 + 0x50) - lVar23 >> 1) {
                            local_b0 = *(short **)(lVar18 + 0x50);
                            local_a8 = *(short **)(lVar18 + 0x48);
                            local_b8 = lVar23;
                            if (local_a8 != local_b0) {
                              psVar25 = local_a8;
                              do {
                                if (*psVar25 !=
                                    *(short *)((lVar23 - (longlong)local_a8) + (longlong)psVar25))
                                goto LAB_1402c1087;
                                psVar25 = psVar25 + 1;
                              } while (psVar25 != local_b0);
                            }
                            iVar20 = FUN_140071310(lVar18 + 0x70,lVar24 + 0x70);
                            uVar14 = local_298;
                            if ((iVar20 == 0) &&
                               (*(short *)(lVar18 + 0x90) == *(short *)(lVar24 + 0x90))) {
                              piVar11 = *(int **)(psVar27 + 0x38);
                              if ((piVar17 < piVar11) &&
                                 (piVar7 = *(int **)(psVar27 + 0x34), piVar7 <= piVar17)) {
                                if (piVar11 == *(int **)(psVar27 + 0x3c)) {
                                  FUN_14000c390(psVar27 + 0x34,1);
                                }
                                piVar11 = *(int **)(psVar27 + 0x38);
                                if (piVar11 != (int *)0x0) {
                                  iVar20 = *(int *)(*(longlong *)(psVar27 + 0x34) +
                                                   ((longlong)piVar17 - (longlong)piVar7 >> 2) * 4);
LAB_1402c0edf:
                                  *piVar11 = iVar20;
                                }
                              }
                              else {
                                if (piVar11 == *(int **)(psVar27 + 0x3c)) {
                                  FUN_14000c390(psVar27 + 0x34,1);
                                }
                                piVar11 = *(int **)(psVar27 + 0x38);
                                if (piVar11 != (int *)0x0) {
                                  iVar20 = *piVar17;
                                  goto LAB_1402c0edf;
                                }
                              }
                              psVar25 = local_210;
                              *(longlong *)(psVar27 + 0x38) = *(longlong *)(psVar27 + 0x38) + 4;
                              piVar17 = local_280 + uVar15;
                              plVar28 = (longlong *)(local_210 + 0x40);
                              cVar8 = FUN_14000c420(plVar28,piVar17);
                              if (cVar8 == '\0') {
                                if (*(longlong *)(psVar25 + 0x44) == *(longlong *)(psVar25 + 0x48))
                                {
                                  FUN_14000c390(extraout_XMM0_Da,1);
                                }
                                piVar11 = *(int **)(psVar25 + 0x44);
                                if (piVar11 != (int *)0x0) {
                                  iVar20 = *piVar17;
                                  goto LAB_1402c0f4d;
                                }
                              }
                              else {
                                lVar18 = *plVar28;
                                if (*(longlong *)(psVar25 + 0x44) == *(longlong *)(psVar25 + 0x48))
                                {
                                  FUN_14000c390(extraout_XMM0_Da,1);
                                }
                                piVar11 = *(int **)(psVar25 + 0x44);
                                if (piVar11 != (int *)0x0) {
                                  iVar20 = *(int *)(*plVar28 + ((longlong)piVar17 - lVar18 >> 2) * 4
                                                   );
LAB_1402c0f4d:
                                  *piVar11 = iVar20;
                                }
                              }
                              *(longlong *)(psVar25 + 0x44) = *(longlong *)(psVar25 + 0x44) + 4;
                              local_280[uVar15] = -1;
                              uVar14 = local_298;
                              psVar27 = local_210;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_1402c1087:
              local_2a8 = local_2a8 + 1;
              uVar29 = (longlong)(int)local_2a8;
              uVar15 = uVar15 + 1;
              uVar13 = local_29c;
            } while ((ulonglong)(longlong)(int)local_2a8 <
                     (ulonglong)((longlong)puStack_260 - (longlong)local_268));
          }
        }
        local_29c = uVar13 + 1;
        local_298 = (ulonglong)(int)local_29c;
      } while (local_298 < (ulonglong)((longlong)puStack_260 - (longlong)local_268));
    }
    uVar14 = 0;
    FUN_1400025a0(&local_1a8);
    FUN_14000bd10(&local_1a8,((longlong *)param_1[9])[1] - *(longlong *)param_1[9] >> 3);
    iVar20 = (int)(local_1a0 - local_1a8 >> 2) + -1;
    if (-1 < iVar20) {
      lVar18 = (longlong)iVar20 * 4;
      in_R11 = (longlong)iVar20 * 8;
      do {
        *(undefined4 *)(local_1a8 + lVar18) = 0xffffffff;
        if ((*(byte *)(lVar18 + param_1[10]) & 2) == 0) {
          plVar28 = (longlong *)param_1[9];
          cVar8 = FUN_14000d840(*(longlong *)(*plVar28 + in_R11) + 0x48,5);
          if ((cVar8 == '\0') &&
             (*(longlong *)(*(longlong *)(*plVar28 + in_R11) + 0x60) -
              *(longlong *)(*(longlong *)(*plVar28 + in_R11) + 0x58) >> 3 != 0)) {
            uVar29 = uVar14;
            uVar15 = uVar14;
            do {
              lVar24 = *(longlong *)(*plVar28 + in_R11);
              lVar23 = *(longlong *)(uVar29 + *(longlong *)(lVar24 + 0x58));
              if ((*(int *)(lVar23 + 0x70) == -1) &&
                 ((*(byte *)(param_1[0xd] + (longlong)*(int *)(lVar23 + 0x68) * 4) & 1) == 0)) {
                *(int *)(local_1a8 + lVar18) = (int)uVar15;
                break;
              }
              uVar13 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar13;
              uVar29 = uVar29 + 8;
            } while ((ulonglong)(longlong)(int)uVar13 <
                     (ulonglong)(*(longlong *)(lVar24 + 0x60) - *(longlong *)(lVar24 + 0x58) >> 3));
          }
        }
        in_R11 = in_R11 - 8;
        lVar18 = lVar18 + -4;
        iVar20 = iVar20 + -1;
      } while (-1 < iVar20);
    }
    FUN_1400025a0(&local_1f8);
    FUN_1401b2e10(&local_1f8,param_1[0x11] - param_1[0x10] >> 1);
    uVar29 = uVar14;
    uVar15 = uVar14;
    if (local_1f0 != local_1f8) {
      do {
        *(undefined1 *)(uVar29 + local_1f8) = 0;
        uVar13 = (int)uVar15 + 1;
        uVar29 = (longlong)(int)uVar13;
        uVar15 = (ulonglong)uVar13;
      } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)(local_1f0 - local_1f8));
    }
    FUN_1400025a0(&local_1e0);
    FUN_1400025a0(local_190);
    FUN_1400025a0(local_160);
    FUN_1400025a0(local_1c0);
    FUN_1401b2e10(&local_1e0,
                  *(longlong *)(param_1[1] + 0x6c8) - *(longlong *)(param_1[1] + 0x6c0) >> 3);
    uVar29 = uVar14;
    uVar15 = uVar14;
    if (local_1d8 != local_1e0) {
      do {
        *(undefined1 *)(uVar29 + local_1e0) = 0;
        uVar13 = (int)uVar15 + 1;
        uVar29 = (longlong)(int)uVar13;
        uVar15 = (ulonglong)uVar13;
      } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)(local_1d8 - local_1e0));
    }
    FUN_1401b2e10(local_190,
                  *(longlong *)(param_1[1] + 0x730) - *(longlong *)(param_1[1] + 0x728) >> 1);
    FUN_1401b2e10(local_160,
                  *(longlong *)(param_1[1] + 0x730) - *(longlong *)(param_1[1] + 0x728) >> 1);
    FUN_1401b2e10(local_1c0,
                  *(longlong *)(param_1[1] + 0x730) - *(longlong *)(param_1[1] + 0x728) >> 1);
    uVar29 = uVar14;
    uVar15 = uVar14;
    if (local_1d8 != local_1e0) {
      do {
        *(undefined1 *)(uVar29 + local_190[0]) = 0;
        *(undefined1 *)(uVar29 + local_160[0]) = 0;
        *(undefined1 *)(uVar29 + local_1c0[0]) = 0;
        uVar13 = (int)uVar15 + 1;
        uVar29 = (longlong)(int)uVar13;
        uVar15 = (ulonglong)uVar13;
      } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)(local_1d8 - local_1e0));
    }
    local_298 = local_298 & 0xffffffff00000000;
    local_1c8 = param_1 + 0x29;
    if (param_1[0x2a] - *local_1c8 >> 3 != 0) {
      local_208 = (undefined2 *)0x0;
LAB_1402c13c0:
      iVar20 = (int)uVar14;
      lVar18 = param_1[0x29];
      lVar24 = *(longlong *)(lVar18 + (longlong)local_208 * 8);
      puVar19 = local_208;
      if (*(longlong *)(lVar24 + 0x10) - *(longlong *)(lVar24 + 8) >> 2 != 0) {
        local_29c = 0;
        if (*(longlong *)(lVar24 + 0x10) - *(longlong *)(lVar24 + 8) >> 2 != 0) {
          local_240 = (undefined2 *)0x0;
LAB_1402c1400:
          in_R11 = in_R11 & 0xffffffffffffff00;
          local_288[0] = (uint)in_R11;
          local_220 = *(short **)
                       (*(longlong *)(param_1[1] + 0x15e8) +
                       (longlong)
                       *(int *)(*(longlong *)(*(longlong *)(lVar18 + (longlong)puVar19 * 8) + 8) +
                               (longlong)local_240) * 8);
          local_2a4 = 0;
          if (*(longlong *)(local_220 + 0x44) - *(longlong *)(local_220 + 0x40) >> 1 != 0) {
            local_248 = (longlong *)0x0;
            do {
              plVar28 = param_1 + 0x29;
              sVar32 = *(short *)((longlong)local_248 + *(longlong *)(local_220 + 0x40));
              local_2a8 = CONCAT22(local_2a8._2_2_,sVar32);
              sVar22 = *(short *)((longlong)local_248 + *(longlong *)(local_220 + 0x4c));
              if (sVar22 != -1) {
                iVar20 = *(int *)(*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)param_1[9] + (longlong)sVar32 * 8)
                                     + 0x58) + (longlong)sVar22 * 8) + 0x80);
                lVar18 = (longlong)iVar20;
                local_290 = CONCAT44(local_290._4_4_,iVar20);
                if ((((iVar20 != -1) && (*(short *)(param_1[0x10] + lVar18 * 2) != -1)) &&
                    (*(int *)(param_1[0x13] + lVar18 * 4) != -1)) &&
                   ((*(int *)(param_1[0x16] + lVar18 * 4) != -1 &&
                    (*(int *)(param_1[0x19] + lVar18 * 4) != -1)))) {
                  if (*local_220 == 2) {
                    local_288[0] = CONCAT31(local_288[0]._1_3_,1);
                  }
                  else {
                    iVar9 = *(int *)(*(longlong *)(param_1[1] + 0x1678) + lVar18 * 4);
                    if (iVar9 != -1) {
                      in_R11 = in_R11 & 0xff;
                      if (*(int *)(param_1[6] + (longlong)iVar9 * 4) < 5) {
                        in_R11 = 1;
                      }
                      local_288[0] = (uint)in_R11;
                    }
                  }
                  if (*(char *)(lVar18 + local_1f8) == '\0') {
                    FUN_14000bc60(*(longlong *)(*plVar28 + (longlong)puVar19 * 8) + 0x98,&local_290)
                    ;
                    iVar20 = (int)(param_1[0x14] - param_1[0x13] >> 2) + -1;
                    lVar18 = (longlong)iVar20;
                    if (-1 < iVar20) {
                      lVar24 = (longlong)(int)local_290;
                      do {
                        if (((*(int *)(param_1[0x13] + lVar18 * 4) ==
                              *(int *)(param_1[0x13] + lVar24 * 4)) &&
                            (*(int *)(param_1[0x16] + lVar18 * 4) ==
                             *(int *)(param_1[0x16] + lVar24 * 4))) &&
                           (*(int *)(param_1[0x19] + lVar18 * 4) ==
                            *(int *)(param_1[0x19] + lVar24 * 4))) {
                          *(undefined1 *)(lVar18 + local_1f8) = 1;
                        }
                        lVar18 = lVar18 + -1;
                      } while (-1 < lVar18);
                    }
                    sVar32 = (short)local_2a8;
                    iVar20 = (int)local_290;
                  }
                  *(undefined1 *)(iVar20 + local_1f8) = 1;
                }
              }
              lVar18 = *plVar28;
              if (**(short **)(lVar18 + (longlong)puVar19 * 8) == 2) {
                lVar24 = (longlong)sVar32;
                if (*(char *)(local_1e0 + lVar24) == '\0') {
                  if ((*(byte *)(param_1[10] + lVar24 * 4) & 2) == 0) {
                    if (sVar22 != -1) {
                      lVar23 = (longlong)sVar22 * 8;
                      if ((*(char *)(*(int *)(*(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)param_1[9] + lVar24 * 8) + 0x58) +
                                               lVar23) + 0x68) + local_190[0]) == '\0') &&
                         ((*(byte *)(param_1[0xd] +
                                    (longlong)
                                    *(int *)(*(longlong *)
                                              (lVar23 + *(longlong *)
                                                         (*(longlong *)
                                                           (*(longlong *)param_1[9] + lVar24 * 8) +
                                                         0x58)) + 0x68) * 4) & 1) != 0)) {
                        local_290._0_4_ = (int)sVar32;
                        FUN_14000bc60(*(longlong *)(lVar18 + (longlong)puVar19 * 8) + 0xb0,
                                      &local_290);
                        local_290 = CONCAT44(local_290._4_4_,(int)sVar22);
                        FUN_14000bc60(*(longlong *)(*plVar28 + (longlong)puVar19 * 8) + 200,
                                      &local_290);
                        *(undefined1 *)
                         (*(int *)(*(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)(*(longlong *)param_1[9] + lVar24 * 8) + 0x58) +
                                    lVar23) + 0x68) + local_190[0]) = 1;
                        goto LAB_1402c1715;
                      }
                    }
                  }
                  else {
                    local_290._0_4_ = (int)sVar32;
                    FUN_14000bc60(*(longlong *)(lVar18 + (longlong)puVar19 * 8) + 0xb0,&local_290);
                    local_290 = CONCAT44(local_290._4_4_,0xffffffff);
                    FUN_14000bc60(*(longlong *)(*plVar28 + (longlong)puVar19 * 8) + 200,&local_290);
                    *(undefined1 *)(local_1e0 + lVar24) = 1;
LAB_1402c1715:
                    sVar32 = (short)local_2a8;
                  }
                }
                plVar28 = (longlong *)param_1[0x22];
                if ((plVar28 != (longlong *)0x0) &&
                   (iVar20 = (int)(plVar28[1] - *plVar28 >> 3) + -1, local_290 = (ulonglong)iVar20,
                   -1 < iVar20)) {
                  do {
                    lVar18 = *(longlong *)(*(longlong *)param_1[0x22] + local_290 * 8);
                    iVar20 = (int)(*(longlong *)(lVar18 + 0x10) - *(longlong *)(lVar18 + 8) >> 3) +
                             -1;
                    lVar23 = (longlong)iVar20;
                    if (-1 < iVar20) {
                      do {
                        lVar26 = *(longlong *)(*(longlong *)(lVar18 + 8) + lVar23 * 8);
                        sVar2 = *(short *)(lVar26 + 4);
                        if (((((sVar2 == sVar32) &&
                              (uVar13 = *(uint *)(lVar26 + 100), (uVar13 & 0x492000c) != 0)) &&
                             (*(short *)(lVar26 + 0x98) == 0)) &&
                            ((sVar3 = *(short *)(lVar26 + 6), sVar3 == sVar22 ||
                             ((sVar22 == -1 && (sVar3 != -1)))))) &&
                           ((iVar20 = *(int *)(local_1a8 + lVar24 * 4), sVar3 == iVar20 ||
                            (((iVar20 != -1 && ((uVar13 & 0x100008) != 0)) && ((uVar13 & 4) == 0))))
                           )) {
                          in_R11 = (ulonglong)sVar3;
                          if ((*(char *)(local_160[0] +
                                        *(int *)(*(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)param_1[9] + (longlong)sVar2 * 8
                                                      ) + 0x58) + in_R11 * 8) + 0x68)) == '\0') &&
                             ((*(byte *)(param_1[0xd] +
                                        (longlong)
                                        *(int *)(*(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)param_1[9] + (longlong)sVar2 * 8
                                                      ) + 0x58) + in_R11 * 8) + 0x68) * 4) & 1) == 0
                             )) {
                            in_stack_fffffffffffffd48 =
                                 (int *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffd48 >> 0x20)
                                                 ,(int)*(short *)(lVar26 + 0x60));
                            FUN_1402827a0(*(undefined8 *)(param_1[0x29] + (longlong)local_208 * 8),
                                          (int)sVar2,uVar13,(int)*(short *)(lVar26 + 0xc),
                                          in_stack_fffffffffffffd48);
                            *(undefined1 *)
                             (local_1c0[0] +
                             *(int *)(*(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)param_1[9] +
                                           (longlong)*(short *)(lVar26 + 4) * 8) + 0x58) +
                                       (longlong)*(short *)(lVar26 + 6) * 8) + 0x68)) = 1;
                            sVar32 = (short)local_2a8;
                          }
                          else {
                            sVar32 = (short)local_2a8;
                          }
                        }
                        lVar23 = lVar23 + -1;
                      } while (-1 < lVar23);
                    }
                    local_290 = local_290 - 1;
                    puVar19 = local_208;
                  } while (-1 < (longlong)local_290);
                }
              }
              uVar13 = local_29c;
              local_2a4 = local_2a4 + 1;
              local_248 = (longlong *)((longlong)local_248 + 2);
              if ((ulonglong)
                  (*(longlong *)(local_220 + 0x44) - *(longlong *)(local_220 + 0x40) >> 1) <=
                  (ulonglong)(longlong)(int)local_2a4) goto code_r0x0001402c1915;
              in_R11 = (ulonglong)local_288[0];
            } while( true );
          }
          goto LAB_1402c194e;
        }
        goto LAB_1402c1986;
      }
      goto LAB_1402c19ae;
    }
LAB_1402c1f38:
    iVar20 = 0;
    plVar28 = param_1 + 0x2c;
    local_248 = plVar28;
    FUN_1401b2e10(plVar28,((longlong *)param_1[9])[1] - *(longlong *)param_1[9] >> 3);
    FUN_1402cbba0(plVar28);
    local_290 = local_290 & 0xffffffff00000000;
    if (local_1f0 != local_1f8) {
      do {
        puVar19 = (undefined2 *)(longlong)iVar20;
        if (*(char *)((longlong)puVar19 + local_1f8) == '\0') {
          if ((((*(short *)(param_1[0x10] + (longlong)puVar19 * 2) != -1) &&
               (*(int *)(param_1[0x13] + (longlong)puVar19 * 4) != -1)) &&
              (*(int *)(param_1[0x16] + (longlong)puVar19 * 4) != -1)) &&
             (*(int *)(param_1[0x19] + (longlong)puVar19 * 4) != -1)) {
            pvVar10 = operator_new(0xf8);
            local_240 = (undefined2 *)FUN_1402c3280(pvVar10);
            *local_240 = 2;
            FUN_14000bc60(local_240 + 0x4c,&local_290);
            FUN_140106910(param_1 + 0x29,&local_240);
            iVar20 = (int)(param_1[0x14] - param_1[0x13] >> 2) + -1;
            lVar18 = (longlong)iVar20;
            if (-1 < iVar20) {
              lVar24 = (longlong)(int)local_290;
              do {
                if (((*(int *)(param_1[0x13] + lVar18 * 4) == *(int *)(param_1[0x13] + lVar24 * 4))
                    && (*(int *)(param_1[0x16] + lVar18 * 4) == *(int *)(param_1[0x16] + lVar24 * 4)
                       )) && (*(int *)(param_1[0x19] + lVar18 * 4) ==
                              *(int *)(param_1[0x19] + lVar24 * 4))) {
                  *(undefined1 *)(lVar18 + local_1f8) = 1;
                }
                lVar18 = lVar18 + -1;
              } while (-1 < lVar18);
            }
            puVar19 = (undefined2 *)(longlong)(int)local_290;
            local_208 = puVar19;
            local_298 = FUN_1400717c0(*(undefined4 *)(param_1[0x19] + (longlong)puVar19 * 4),
                                      param_1[1] + 0x16a8);
            if ((local_298 != 0) &&
               (iVar20 = (int)(*(longlong *)(local_298 + 0x28) - *(longlong *)(local_298 + 0x20) >>
                              1) + -1, local_200 = (longlong)iVar20, -1 < iVar20)) {
              do {
                puVar19 = local_240;
                sVar32 = *(short *)(*(longlong *)(local_298 + 0x20) + local_200 * 2);
                lVar18 = (longlong)sVar32;
                sVar22 = *(short *)(*(longlong *)(local_298 + 0x38) + local_200 * 2);
                if (*(char *)(lVar18 + local_1e0) == '\0') {
                  if ((*(byte *)(param_1[10] + lVar18 * 4) & 2) == 0) {
                    if (sVar22 != -1) {
                      lVar24 = (longlong)sVar22 * 8;
                      if ((*(char *)(*(int *)(*(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)param_1[9] + lVar18 * 8) + 0x58) +
                                               lVar24) + 0x68) + local_190[0]) == '\0') &&
                         ((*(byte *)(param_1[0xd] +
                                    (longlong)
                                    *(int *)(*(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(*(longlong *)param_1[9] + lVar18 * 8)
                                                + 0x58) + lVar24) + 0x68) * 4) & 1) != 0)) {
                        local_29c = (uint)sVar32;
                        FUN_14000bc60(local_240 + 0x58,&local_29c);
                        local_29c = (uint)sVar22;
                        FUN_14000bc60(puVar19 + 100,&local_29c);
                        *(undefined1 *)
                         (*(int *)(*(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)(*(longlong *)param_1[9] + (longlong)sVar32 * 8)
                                      + 0x58) + lVar24) + 0x68) + local_190[0]) = 1;
                      }
                    }
                  }
                  else {
                    local_29c = (uint)sVar32;
                    FUN_14000bc60(local_240 + 0x58,&local_29c);
                    local_29c = 0xffffffff;
                    FUN_14000bc60(puVar19 + 100,&local_29c);
                    *(undefined1 *)(sVar32 + local_1e0) = 1;
                  }
                }
                plVar28 = (longlong *)param_1[0x22];
                if ((plVar28 != (longlong *)0x0) &&
                   (iVar20 = (int)(plVar28[1] - *plVar28 >> 3) + -1,
                   local_220 = (short *)(longlong)iVar20, -1 < iVar20)) {
                  do {
                    lVar18 = *(longlong *)(*(longlong *)param_1[0x22] + (longlong)local_220 * 8);
                    iVar20 = (int)(*(longlong *)(lVar18 + 0x10) - *(longlong *)(lVar18 + 8) >> 3) +
                             -1;
                    lVar24 = (longlong)iVar20;
                    if (-1 < iVar20) {
                      do {
                        lVar23 = *(longlong *)(*(longlong *)(lVar18 + 8) + lVar24 * 8);
                        sVar2 = *(short *)(lVar23 + 4);
                        if (((((sVar2 == sVar32) &&
                              (uVar13 = *(uint *)(lVar23 + 100), (uVar13 & 0x492000c) != 0)) &&
                             (*(short *)(lVar23 + 0x98) == 0)) &&
                            ((sVar3 = *(short *)(lVar23 + 6), sVar3 == sVar22 ||
                             ((sVar22 == -1 && (sVar3 != -1)))))) &&
                           ((iVar20 = *(int *)(local_1a8 + (longlong)sVar32 * 4), sVar3 == iVar20 ||
                            (((iVar20 != -1 && ((uVar13 & 0x100008) != 0)) && ((uVar13 & 4) == 0))))
                           )) {
                          if ((*(char *)(*(int *)(*(longlong *)
                                                   (*(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)param_1[9] +
                                                       (longlong)sVar2 * 8) + 0x58) +
                                                   (longlong)sVar3 * 8) + 0x68) + local_160[0]) ==
                               '\0') &&
                             ((*(byte *)(param_1[0xd] +
                                        (longlong)
                                        *(int *)(*(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)param_1[9] + (longlong)sVar2 * 8
                                                      ) + 0x58) + (longlong)sVar3 * 8) + 0x68) * 4)
                              & 1) == 0)) {
                            in_stack_fffffffffffffd48 =
                                 (int *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffd48 >> 0x20)
                                                 ,(int)*(short *)(lVar23 + 0x60));
                            FUN_1402827a0(*(undefined8 *)(param_1[0x29] + (longlong)local_208 * 8),
                                          (int)sVar2,uVar13,(int)*(short *)(lVar23 + 0xc),
                                          in_stack_fffffffffffffd48);
                            *(undefined1 *)
                             (local_1c0[0] +
                             *(int *)(*(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)param_1[9] +
                                           (longlong)*(short *)(lVar23 + 4) * 8) + 0x58) +
                                       (longlong)*(short *)(lVar23 + 6) * 8) + 0x68)) = 1;
                          }
                        }
                        lVar24 = lVar24 + -1;
                      } while (-1 < lVar24);
                    }
                    local_220 = (short *)((longlong)local_220 + -1);
                  } while (-1 < (longlong)local_220);
                }
                local_200 = local_200 + -1;
                puVar19 = local_208;
              } while (-1 < local_200);
            }
            iVar20 = (int)local_290;
          }
          iVar9 = ((int)local_1c0[1] - (int)local_1c0[0]) + -1;
          lVar18 = (longlong)iVar9;
          if (-1 < iVar9) {
            do {
              if (*(char *)(lVar18 + local_1c0[0]) != '\0') {
                *(undefined1 *)(lVar18 + local_160[0]) = 1;
              }
              lVar18 = lVar18 + -1;
            } while (-1 < lVar18);
          }
          *(undefined1 *)(local_1f8 + (longlong)puVar19) = 1;
        }
        sVar32 = *(short *)(*(longlong *)(param_1[1] + 0x1648) + (longlong)puVar19 * 2);
        iVar9 = *(int *)(*(longlong *)(param_1[1] + 0x1678) + (longlong)puVar19 * 4);
        if (((iVar9 != -1) && (*(int *)(param_1[6] + (longlong)iVar9 * 4) < 5)) && (sVar32 != -1)) {
          *(undefined1 *)((longlong)sVar32 + param_1[0x2c]) = 1;
        }
        iVar20 = iVar20 + 1;
        local_290 = CONCAT44(local_290._4_4_,iVar20);
      } while ((ulonglong)(longlong)iVar20 < (ulonglong)(local_1f0 - local_1f8));
    }
    uVar14 = 0;
    sVar32 = 0;
    plVar28 = (longlong *)param_1[9];
    if (plVar28[1] - *plVar28 >> 3 != 0) {
      do {
        puVar19 = (undefined2 *)0x0;
        if ((*(byte *)(param_1[10] + uVar14 * 4) & 2) == 0) {
          sVar22 = 0;
          lVar18 = *(longlong *)(*plVar28 + uVar14 * 8);
          puVar21 = puVar19;
          if (*(longlong *)(lVar18 + 0x60) - *(longlong *)(lVar18 + 0x58) >> 3 != 0) {
            do {
              if (((*(byte *)(param_1[0xd] +
                             (longlong)
                             *(int *)(*(longlong *)
                                       (*(longlong *)(*(longlong *)(*plVar28 + uVar14 * 8) + 0x58) +
                                       (longlong)puVar21 * 8) + 0x68) * 4) & 1) != 0) &&
                 (*(char *)(local_190[0] +
                           *(int *)(*(longlong *)
                                     (*(longlong *)(*(longlong *)(*plVar28 + uVar14 * 8) + 0x58) +
                                     (longlong)puVar21 * 8) + 0x68)) == '\0')) {
                if (puVar19 == (undefined2 *)0x0) {
                  pvVar10 = operator_new(0xf8);
                  local_208 = (undefined2 *)FUN_1402c3280(pvVar10);
                  *local_208 = 2;
                  FUN_140106910(param_1 + 0x29,&local_208);
                  puVar19 = local_208;
                }
                local_29c = (uint)sVar32;
                FUN_14000bc60(puVar19 + 0x58,&local_29c);
                local_29c = (uint)sVar22;
                FUN_14000bc60(puVar19 + 100,&local_29c);
                *(undefined1 *)
                 (local_190[0] +
                 *(int *)(*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)param_1[9] + uVar14 * 8) + 0x58) +
                           (longlong)puVar21 * 8) + 0x68)) = 1;
              }
              sVar22 = sVar22 + 1;
              plVar28 = (longlong *)param_1[9];
              lVar18 = *(longlong *)(*plVar28 + uVar14 * 8);
              puVar21 = (undefined2 *)(longlong)sVar22;
            } while ((undefined2 *)(longlong)sVar22 <
                     (undefined2 *)
                     (*(longlong *)(lVar18 + 0x60) - *(longlong *)(lVar18 + 0x58) >> 3));
          }
        }
        else if (*(char *)(uVar14 + local_1e0) == '\0') {
          pvVar10 = operator_new(0xf8);
          local_208 = (undefined2 *)FUN_1402c3280(pvVar10);
          *local_208 = 2;
          FUN_140106910(param_1 + 0x29,&local_208);
          puVar19 = local_208;
          local_29c = (uint)sVar32;
          FUN_14000bc60(local_208 + 0x58,&local_29c);
          local_29c = 0xffffffff;
          FUN_14000bc60(puVar19 + 100,&local_29c);
          *(undefined1 *)(uVar14 + local_1e0) = 1;
        }
        sVar32 = sVar32 + 1;
        plVar28 = (longlong *)param_1[9];
        uVar14 = (ulonglong)sVar32;
      } while (uVar14 < (ulonglong)(plVar28[1] - *plVar28 >> 3));
    }
    plVar28 = (longlong *)param_1[0x22];
    if ((plVar28 != (longlong *)0x0) &&
       (iVar20 = (int)(plVar28[1] - *plVar28 >> 3) + -1, local_200 = (longlong)iVar20,
       puVar19 = local_240, -1 < iVar20)) {
      do {
        psVar27 = (short *)0x0;
        lVar18 = *(longlong *)(*(longlong *)param_1[0x22] + local_200 * 8);
        iVar20 = (int)(*(longlong *)(lVar18 + 0x10) - *(longlong *)(lVar18 + 8) >> 3) + -1;
        lVar24 = (longlong)iVar20;
        if (-1 < iVar20) {
          do {
            uVar33 = (undefined4)((ulonglong)in_stack_fffffffffffffd48 >> 0x20);
            lVar23 = *(longlong *)(*(longlong *)(lVar18 + 8) + lVar24 * 8);
            if (*(short *)(lVar23 + 4) != -1) {
              uVar13 = *(uint *)(lVar23 + 100);
              if ((((uVar13 & 0x492000c) != 0) && (*(short *)(lVar23 + 0x98) == 0)) &&
                 (sVar32 = *(short *)(lVar23 + 6), sVar32 != -1)) {
                lVar26 = (longlong)*(short *)(lVar23 + 4);
                if (((int)sVar32 != *(int *)(local_1a8 + lVar26 * 4)) &&
                   (((*(int *)(local_1a8 + lVar26 * 4) == -1 || ((uVar13 & 0x100008) == 0)) ||
                    ((uVar13 & 4) != 0)))) goto LAB_1402c2a81;
                if ((*(char *)(*(int *)(*(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)param_1[9] + lVar26 * 8) +
                                           0x58) + (longlong)sVar32 * 8) + 0x68) + local_160[0]) ==
                     '\0') &&
                   ((*(byte *)(param_1[0xd] +
                              (longlong)
                              *(int *)(*(longlong *)
                                        (*(longlong *)
                                          (*(longlong *)(*(longlong *)param_1[9] + lVar26 * 8) +
                                          0x58) + (longlong)sVar32 * 8) + 0x68) * 4) & 1) == 0)) {
                  if (psVar27 == (short *)0x0) {
                    pvVar10 = operator_new(0xf8);
                    local_220 = (short *)FUN_1402c3280(pvVar10);
                    *local_220 = 2;
                    FUN_140106910(param_1 + 0x29,&local_220);
                    psVar27 = local_220;
                  }
                  in_stack_fffffffffffffd48 = (int *)CONCAT44(uVar33,(int)*(short *)(lVar23 + 0x60))
                  ;
                  FUN_1402827a0(psVar27,(int)*(short *)(lVar23 + 4),*(undefined4 *)(lVar23 + 100),
                                (int)*(short *)(lVar23 + 0xc),in_stack_fffffffffffffd48);
                }
              }
              iVar20 = (int)(param_1[0x27] - param_1[0x26] >> 3) + -1;
              if (-1 < iVar20) {
                lVar26 = (longlong)iVar20;
                puVar16 = (undefined8 *)(param_1[0x26] + lVar26 * 8);
                do {
                  if (*(short *)*puVar16 == *(short *)(lVar23 + 4)) {
                    puVar19 = *(undefined2 **)(param_1[0x26] + (longlong)iVar20 * 8);
                    break;
                  }
                  iVar20 = iVar20 + -1;
                  puVar16 = puVar16 + -1;
                  lVar26 = lVar26 + -1;
                } while (-1 < lVar26);
              }
              if (iVar20 == -1) {
                local_220 = operator_new(0x50);
                local_240 = (undefined2 *)FUN_140282880(local_220);
                *local_240 = *(undefined2 *)(lVar23 + 4);
                if ((*(uint *)(param_1[10] + (longlong)*(short *)(lVar23 + 4) * 4) & 0x200000) != 0)
                {
                  *(undefined1 *)(local_240 + 0x14) = 1;
                }
                FUN_140106910(param_1 + 0x26,&local_240);
                puVar19 = local_240;
              }
              *(int *)(puVar19 + 4) = *(int *)(puVar19 + 4) + *(int *)(lVar23 + 0x6c);
              *(int *)(puVar19 + 6) = *(int *)(puVar19 + 6) + *(int *)(lVar23 + 0x84);
              if ((*(uint *)(lVar23 + 100) & 0x8000) != 0) {
                *(undefined1 *)((longlong)puVar19 + 0x29) = 1;
              }
              if ((*(byte *)(lVar23 + 0x68) & 4) != 0) {
                *(undefined1 *)(puVar19 + 0x15) = 1;
              }
              iVar20 = (int)(*(longlong *)(lVar23 + 0x50) - *(longlong *)(lVar23 + 0x48) >> 1) + -1;
              lVar26 = (longlong)iVar20;
              if (-1 < iVar20) {
                do {
                  iVar20 = (int)*(short *)(*(longlong *)(lVar23 + 0x18) + lVar26 * 2);
                  if (*(int *)(puVar19 + 8) < iVar20) {
                    *(int *)(puVar19 + 8) = iVar20;
                    puVar19[10] = *(undefined2 *)(*(longlong *)(lVar23 + 0x48) + lVar26 * 2);
                  }
                  if (0 < *(short *)(*(longlong *)(lVar23 + 0x18) + lVar26 * 2)) {
                    *(int *)(puVar19 + 0xc) = *(int *)(puVar19 + 0xc) + 1;
                  }
                  lVar26 = lVar26 + -1;
                } while (-1 < lVar26);
              }
              sVar32 = *(short *)(lVar23 + 6);
              if (sVar32 != -1) {
                lVar26 = FUN_140051ee0(&DAT_141d6dd30,*(undefined2 *)((longlong)param_1 + 0x11c));
                if ((lVar26 != 0) &&
                   (cVar8 = FUN_14000d840(*(longlong *)
                                           (*(longlong *)(lVar26 + 0x24c8) +
                                           (longlong)
                                           *(int *)(*(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)
                                                         (*(longlong *)param_1[9] +
                                                         (longlong)*(short *)(lVar23 + 4) * 8) +
                                                       0x58) + (longlong)sVar32 * 8) + 0x20) * 8) +
                                          0x20,4), cVar8 != '\0')) {
                  if (*(short *)(lVar23 + 0x98) < 100) {
                    if (0 < *(short *)(lVar23 + 0x98)) {
                      *(undefined1 *)(puVar19 + 0x16) = 1;
                    }
                  }
                  else {
                    *(undefined1 *)((longlong)puVar19 + 0x2b) = 1;
                  }
                }
                if (0 < *(int *)(lVar23 + 0xa0)) {
                  *(undefined1 *)((longlong)puVar19 + 0x2d) = 1;
                }
                if (*(short *)(lVar23 + 0x98) < 1) {
                  if (0 < *(int *)(lVar23 + 0x10)) {
                    if (*(int *)(puVar19 + 0x24) < *(int *)(lVar23 + 0x10)) {
                      puVar19[0x22] = *(undefined2 *)(lVar23 + 0xc);
                      *(undefined4 *)(puVar19 + 0x24) = *(undefined4 *)(lVar23 + 0x10);
                    }
                    *(int *)(puVar19 + 0x26) = *(int *)(puVar19 + 0x26) + 1;
                  }
                }
                else if (*(int *)(local_1a8 + (longlong)*(short *)(lVar23 + 4) * 4) ==
                         (int)*(short *)(lVar23 + 6)) {
                  if (*(int *)(puVar19 + 0x1e) < (int)*(short *)(lVar23 + 0x98)) {
                    *(undefined4 *)(puVar19 + 0x18) = *(undefined4 *)(lVar23 + 100);
                    puVar19[0x1a] = *(undefined2 *)(lVar23 + 0xc);
                    *(int *)(puVar19 + 0x1c) = (int)*(short *)(lVar23 + 0x60);
                    *(int *)(puVar19 + 0x1e) = (int)*(short *)(lVar23 + 0x98);
                  }
                  *(int *)(puVar19 + 0x20) = *(int *)(puVar19 + 0x20) + 1;
                }
                if (((*(uint *)(lVar23 + 100) & 0x10000000) != 0) &&
                   (*(int *)(local_1a8 + (longlong)*(short *)(lVar23 + 4) * 4) != -1)) {
                  iVar20 = (int)(*(longlong *)(lVar18 + 0x10) - *(longlong *)(lVar18 + 8) >> 3) + -1
                  ;
                  if (-1 < iVar20) {
                    lVar26 = (longlong)iVar20;
                    plVar28 = (longlong *)(*(longlong *)(lVar18 + 8) + lVar26 * 8);
                    do {
                      if (*(int *)(*plVar28 + 0x9c) ==
                          *(int *)(local_1a8 + (longlong)*(short *)(lVar23 + 4) * 4)) break;
                      iVar20 = iVar20 + -1;
                      plVar28 = plVar28 + -1;
                      lVar26 = lVar26 + -1;
                    } while (-1 < lVar26);
                  }
                  if ((iVar20 != -1) &&
                     (*(int *)(puVar19 + 0xe) = *(int *)(puVar19 + 0xe) + 1,
                     *(int *)(puVar19 + 0x10) != -1)) {
                    *(int *)(puVar19 + 0x10) = (int)*(short *)(lVar23 + 6);
                    *(undefined4 *)(puVar19 + 0x12) =
                         *(undefined4 *)(local_1a8 + (longlong)*(short *)(lVar23 + 4) * 4);
                  }
                }
              }
            }
LAB_1402c2a81:
            lVar24 = lVar24 + -1;
          } while (-1 < lVar24);
        }
        local_200 = local_200 + -1;
      } while (-1 < local_200);
    }
    if (param_1[0x27] - param_1[0x26] >> 3 != 0) {
      iVar20 = (int)(param_1[0x27] - param_1[0x26] >> 3) + -1;
      lVar18 = (longlong)iVar20;
      if (-1 < iVar20) {
        do {
          lVar24 = *(longlong *)(param_1[0x26] + lVar18 * 8);
          iVar20 = (*(int *)(lVar24 + 8) + 9) / 10;
          *(int *)(lVar24 + 4) = iVar20;
          iVar20 = (*(int *)(lVar24 + 0xc) + 999) / 1000 + iVar20;
          *(int *)(lVar24 + 4) = iVar20;
          iVar20 = *(int *)(lVar24 + 0x10) + iVar20;
          *(int *)(lVar24 + 4) = iVar20;
          if (0 < *(int *)(lVar24 + 0x1c)) {
            *(int *)(lVar24 + 4) = iVar20 + 0x32;
          }
          if (*(char *)(lVar24 + 0x29) != '\0') {
            *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 100;
          }
          if (*(char *)(lVar24 + 0x2d) != '\0') {
            *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 100;
          }
          if (*(char *)(lVar24 + 0x2a) != '\0') {
            *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 0x4b;
          }
          if (*(char *)(lVar24 + 0x2b) != '\0') {
            *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 0x32;
          }
          if (*(char *)(lVar24 + 0x2c) != '\0') {
            *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 0x19;
          }
          *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + *(int *)(lVar24 + 0x3c);
          *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + (*(int *)(lVar24 + 0x48) + 999999) / 1000000
          ;
          lVar18 = lVar18 + -1;
        } while (-1 < lVar18);
      }
      qsort((void *)param_1[0x26],param_1[0x27] - param_1[0x26] >> 3,8,FUN_1402bcb60);
    }
    plVar28 = param_1 + 0x29;
    local_29c = (int)(param_1[0x2a] - *plVar28 >> 3) - 1;
    if (-1 < (int)local_29c) {
      puVar19 = (undefined2 *)(longlong)(int)local_29c;
      do {
        lVar18 = *(longlong *)(*plVar28 + (longlong)puVar19 * 8);
        local_240 = puVar19;
        if ((*(longlong *)(lVar18 + 0x10) - *(longlong *)(lVar18 + 8) >> 2 != 0) &&
           (iVar20 = (int)(*(longlong *)(lVar18 + 0x10) - *(longlong *)(lVar18 + 8) >> 2) + -1,
           -1 < iVar20)) {
          lVar24 = (longlong)iVar20;
          lVar18 = lVar24 * 4;
          do {
            lVar23 = *(longlong *)(param_1[0x29] + (longlong)puVar19 * 8);
            lVar26 = *(longlong *)
                      (*(longlong *)(param_1[1] + 0x15e8) +
                      (longlong)*(int *)(*(longlong *)(lVar23 + 8) + lVar18) * 8);
            iVar9 = (int)(*(longlong *)(lVar26 + 0x88) - *(longlong *)(lVar26 + 0x80) >> 1) + -1;
            lVar31 = (longlong)iVar9;
            if (-1 < iVar9) {
              psVar27 = (short *)(*(longlong *)(lVar26 + 0x98) + lVar31 * 2);
              do {
                lVar30 = (longlong)
                         *(short *)((*(longlong *)(lVar26 + 0x80) - *(longlong *)(lVar26 + 0x98)) +
                                   (longlong)psVar27);
                puVar19 = local_240;
                if ((*(char *)(*local_248 + lVar30) == '\0') &&
                   (((*psVar27 != -1 &&
                     ((*(byte *)(param_1[0xd] +
                                (longlong)
                                *(int *)(*(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)(*(longlong *)param_1[9] + lVar30 * 8) +
                                            0x58) + (longlong)*psVar27 * 8) + 0x68) * 4) & 1) == 0))
                    || ((*(byte *)(param_1[10] + lVar30 * 4) & 2) == 0)))) break;
                iVar9 = iVar9 + -1;
                psVar27 = psVar27 + -1;
                lVar31 = lVar31 + -1;
              } while (-1 < lVar31);
            }
            if (iVar9 == -1) {
              FUN_140050340(lVar23 + 8,lVar24);
            }
            lVar24 = lVar24 + -1;
            lVar18 = lVar18 + -4;
            iVar20 = iVar20 + -1;
            plVar28 = local_1c8;
          } while (-1 < iVar20);
        }
        lVar18 = *(longlong *)(*plVar28 + (longlong)puVar19 * 8);
        if ((*(longlong *)(lVar18 + 0x70) - *(longlong *)(lVar18 + 0x68) >> 2 != 0) &&
           (iVar20 = (int)(*(longlong *)(lVar18 + 0x70) - *(longlong *)(lVar18 + 0x68) >> 2) + -1,
           -1 < iVar20)) {
          lVar24 = (longlong)iVar20;
          lVar18 = lVar24 * 4;
          do {
            lVar23 = *(longlong *)(*local_1c8 + (longlong)puVar19 * 8);
            lVar26 = *(longlong *)
                      (*(longlong *)(param_1[1] + 0x1690) +
                      (longlong)*(int *)(lVar18 + *(longlong *)(lVar23 + 0x68)) * 8);
            iVar9 = (int)(*(longlong *)(lVar26 + 0x38) - *(longlong *)(lVar26 + 0x30) >> 1) + -1;
            lVar31 = (longlong)iVar9;
            if (-1 < iVar9) {
              psVar27 = (short *)(*(longlong *)(lVar26 + 0x48) + lVar31 * 2);
              do {
                lVar30 = (longlong)
                         *(short *)((*(longlong *)(lVar26 + 0x30) - *(longlong *)(lVar26 + 0x48)) +
                                   (longlong)psVar27);
                puVar19 = local_240;
                if ((*(char *)(*local_248 + lVar30) == '\0') &&
                   (((*psVar27 != -1 &&
                     ((*(byte *)(param_1[0xd] +
                                (longlong)
                                *(int *)(*(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)(*(longlong *)param_1[9] + lVar30 * 8) +
                                            0x58) + (longlong)*psVar27 * 8) + 0x68) * 4) & 1) == 0))
                    || ((*(byte *)(param_1[10] + lVar30 * 4) & 2) == 0)))) break;
                iVar9 = iVar9 + -1;
                psVar27 = psVar27 + -1;
                lVar31 = lVar31 + -1;
              } while (-1 < lVar31);
            }
            if (iVar9 == -1) {
              FUN_140050340(lVar23 + 0x68,lVar24);
            }
            lVar24 = lVar24 + -1;
            lVar18 = lVar18 + -4;
            iVar20 = iVar20 + -1;
            plVar28 = local_1c8;
          } while (-1 < iVar20);
        }
        lVar18 = *(longlong *)(*plVar28 + (longlong)puVar19 * 8);
        if ((*(longlong *)(lVar18 + 0xa0) - *(longlong *)(lVar18 + 0x98) >> 2 != 0) &&
           (iVar20 = (int)(*(longlong *)(lVar18 + 0xa0) - *(longlong *)(lVar18 + 0x98) >> 2) + -1,
           -1 < iVar20)) {
          lVar24 = (longlong)iVar20;
          lVar18 = lVar24 * 4;
          do {
            lVar23 = *(longlong *)(*plVar28 + (longlong)puVar19 * 8);
            lVar26 = FUN_1400717c0(*(undefined4 *)
                                    (param_1[0x19] +
                                    (longlong)*(int *)(lVar18 + *(longlong *)(lVar23 + 0x98)) * 4),
                                   param_1[1] + 0x16a8);
            if (lVar26 != 0) {
              iVar9 = (int)(*(longlong *)(lVar26 + 0x28) - *(longlong *)(lVar26 + 0x20) >> 1) + -1;
              lVar31 = (longlong)iVar9;
              if (-1 < iVar9) {
                psVar27 = (short *)(*(longlong *)(lVar26 + 0x38) + lVar31 * 2);
                do {
                  sVar32 = *(short *)((*(longlong *)(lVar26 + 0x20) - *(longlong *)(lVar26 + 0x38))
                                     + (longlong)psVar27);
                  if (((*psVar27 != -1) &&
                      ((*(byte *)(param_1[0xd] +
                                 (longlong)
                                 *(int *)(*(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)param_1[9] + (longlong)sVar32 * 8) +
                                             0x58) + (longlong)*psVar27 * 8) + 0x68) * 4) & 1) == 0)
                      ) || ((*(byte *)(param_1[10] + (longlong)sVar32 * 4) & 2) == 0)) break;
                  iVar9 = iVar9 + -1;
                  psVar27 = psVar27 + -1;
                  lVar31 = lVar31 + -1;
                } while (-1 < lVar31);
              }
              if (iVar9 == -1) {
                FUN_140050340(lVar23 + 0x98,lVar24);
              }
            }
            lVar24 = lVar24 + -1;
            lVar18 = lVar18 + -4;
            iVar20 = iVar20 + -1;
            plVar28 = param_1 + 0x29;
          } while (-1 < iVar20);
          plVar28 = param_1 + 0x29;
        }
        lVar18 = *(longlong *)(*plVar28 + (longlong)puVar19 * 8);
        if ((*(longlong *)(lVar18 + 0xb8) - *(longlong *)(lVar18 + 0xb0) >> 2 != 0) &&
           (iVar20 = (int)(*(longlong *)(lVar18 + 0xb8) - *(longlong *)(lVar18 + 0xb0) >> 2) + -1,
           -1 < iVar20)) {
          lVar24 = (longlong)iVar20;
          lVar18 = lVar24 * 4;
          do {
            plVar12 = (longlong *)(*(longlong *)(*plVar28 + (longlong)puVar19 * 8) + 0xb0);
            sVar32 = *(short *)(*(longlong *)
                                 (*(longlong *)param_1[9] +
                                 (longlong)*(short *)(lVar18 + *plVar12) * 8) + 0x40);
            if ((sVar32 != -1) && ((*(byte *)(param_1[10] + (longlong)sVar32 * 4) & 2) != 0)) {
              FUN_140050340(plVar12,lVar24);
              FUN_140050340(*(longlong *)(*plVar28 + (longlong)puVar19 * 8) + 200,lVar24);
            }
            lVar24 = lVar24 + -1;
            lVar18 = lVar18 + -4;
            iVar20 = iVar20 + -1;
          } while (-1 < iVar20);
        }
        lVar18 = *(longlong *)(*plVar28 + (longlong)puVar19 * 8);
        if ((*(longlong *)(lVar18 + 0xe8) - *(longlong *)(lVar18 + 0xe0) >> 3 != 0) &&
           (iVar20 = (int)(*(longlong *)(lVar18 + 0xe8) - *(longlong *)(lVar18 + 0xe0) >> 3) + -1,
           -1 < iVar20)) {
          lVar24 = (longlong)iVar20;
          lVar18 = lVar24 * 8;
          do {
            lVar23 = *(longlong *)(*plVar28 + (longlong)puVar19 * 8);
            if (*(char *)((longlong)**(int **)(lVar18 + *(longlong *)(lVar23 + 0xe0)) + *local_248)
                != '\0') {
              free(*(void **)(lVar18 + *(longlong *)(lVar23 + 0xe0)));
              FUN_140050100(*(longlong *)(*plVar28 + (longlong)puVar19 * 8) + 0xe0,lVar24);
            }
            lVar24 = lVar24 + -1;
            lVar18 = lVar18 + -8;
            iVar20 = iVar20 + -1;
          } while (-1 < iVar20);
        }
        lVar18 = *(longlong *)(*plVar28 + (longlong)puVar19 * 8);
        if (((((*(longlong *)(lVar18 + 0x40) - *(longlong *)(lVar18 + 0x38) >> 2 == 0) &&
              (*(longlong *)(lVar18 + 0x10) - *(longlong *)(lVar18 + 8) >> 2 == 0)) &&
             (*(longlong *)(lVar18 + 0x70) - *(longlong *)(lVar18 + 0x68) >> 2 == 0)) &&
            ((*(longlong *)(lVar18 + 0xb8) - *(longlong *)(lVar18 + 0xb0) >> 2 == 0 &&
             (*(longlong *)(lVar18 + 0xe8) - *(longlong *)(lVar18 + 0xe0) >> 3 == 0)))) &&
           (*(longlong *)(lVar18 + 0xa0) - *(longlong *)(lVar18 + 0x98) >> 2 == 0)) {
          if (lVar18 != 0) {
            FUN_140282da0();
          }
          FUN_140050100(plVar28,puVar19);
        }
        local_29c = local_29c - 1;
        puVar19 = (undefined2 *)((longlong)puVar19 + -1);
        local_240 = puVar19;
      } while (-1 < (int)local_29c);
    }
    FUN_14007c030(local_1c0);
    FUN_14007c030(local_160);
    FUN_14007c030(local_190);
    FUN_14007c030(&local_1e0);
    FUN_14007c030(&local_1f8);
    FUN_1400025c0(&local_1a8);
    FUN_1400025c0(&local_280);
    FUN_1400025c0(&local_238);
    FUN_14007c030(&local_268);
  }
  return;
code_r0x0001402c1915:
  if ((char)local_288[0] != '\0') {
    FUN_140050340(*(longlong *)(param_1[0x29] + (longlong)puVar19 * 8) + 8,(longlong)(int)local_29c)
    ;
    local_29c = uVar13 - 1;
    local_240 = local_240 + -2;
  }
LAB_1402c194e:
  local_29c = local_29c + 1;
  local_240 = local_240 + 2;
  lVar18 = param_1[0x29];
  lVar24 = *(longlong *)(lVar18 + (longlong)puVar19 * 8);
  if ((ulonglong)(*(longlong *)(lVar24 + 0x10) - *(longlong *)(lVar24 + 8) >> 2) <=
      (ulonglong)(longlong)(int)local_29c) goto code_r0x0001402c1981;
  goto LAB_1402c1400;
code_r0x0001402c1981:
  iVar20 = (int)local_298;
LAB_1402c1986:
  iVar9 = ((int)local_1c0[1] - (int)local_1c0[0]) + -1;
  lVar18 = (longlong)iVar9;
  if (-1 < iVar9) {
    do {
      if (*(char *)(lVar18 + local_1c0[0]) != '\0') {
        *(undefined1 *)(lVar18 + local_160[0]) = 1;
      }
      lVar18 = lVar18 + -1;
    } while (-1 < lVar18);
  }
LAB_1402c19ae:
  lVar18 = param_1[0x29];
  lVar24 = *(longlong *)(lVar18 + (longlong)puVar19 * 8);
  if (*(longlong *)(lVar24 + 0x70) - *(longlong *)(lVar24 + 0x68) >> 2 != 0) {
    local_29c = 0;
    if (*(longlong *)(lVar24 + 0x70) - *(longlong *)(lVar24 + 0x68) >> 2 != 0) {
      local_220 = (short *)0x0;
      do {
        plVar28 = *(longlong **)
                   (*(longlong *)(param_1[1] + 0x1690) +
                   (longlong)
                   *(int *)(*(longlong *)(*(longlong *)(lVar18 + (longlong)puVar19 * 8) + 0x68) +
                           (longlong)local_220) * 8);
        local_2a4 = 0;
        if (*(longlong *)((longlong)plVar28 + 0x38) - *(longlong *)((longlong)plVar28 + 0x30) >> 1
            != 0) {
          local_200 = 0;
          local_248 = plVar28;
          do {
            plVar12 = param_1 + 0x29;
            sVar32 = *(short *)(local_200 + *(longlong *)((longlong)plVar28 + 0x30));
            local_2a8 = CONCAT22(local_2a8._2_2_,sVar32);
            sVar22 = *(short *)(local_200 + *(longlong *)((longlong)plVar28 + 0x48));
            if (sVar22 != -1) {
              iVar20 = *(int *)(*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)param_1[9] + (longlong)sVar32 * 8) +
                                   0x58) + (longlong)sVar22 * 8) + 0x80);
              lVar18 = (longlong)iVar20;
              local_290 = CONCAT44(local_290._4_4_,iVar20);
              if ((iVar20 != -1) && (*(char *)(lVar18 + local_1f8) == '\0')) {
                if ((*(short *)(param_1[0x10] + lVar18 * 2) != -1) &&
                   (((*(int *)(param_1[0x13] + lVar18 * 4) != -1 &&
                     (*(int *)(param_1[0x16] + lVar18 * 4) != -1)) &&
                    (*(int *)(param_1[0x19] + lVar18 * 4) != -1)))) {
                  FUN_14000bc60(*(longlong *)(*plVar12 + (longlong)puVar19 * 8) + 0x98,&local_290);
                  iVar20 = (int)(param_1[0x14] - param_1[0x13] >> 2) + -1;
                  lVar18 = (longlong)iVar20;
                  if (-1 < iVar20) {
                    lVar24 = (longlong)(int)local_290;
                    do {
                      if (((*(int *)(param_1[0x13] + lVar18 * 4) ==
                            *(int *)(param_1[0x13] + lVar24 * 4)) &&
                          (*(int *)(param_1[0x16] + lVar18 * 4) ==
                           *(int *)(param_1[0x16] + lVar24 * 4))) &&
                         (*(int *)(param_1[0x19] + lVar18 * 4) ==
                          *(int *)(param_1[0x19] + lVar24 * 4))) {
                        *(undefined1 *)(lVar18 + local_1f8) = 1;
                      }
                      lVar18 = lVar18 + -1;
                    } while (-1 < lVar18);
                  }
                  plVar28 = local_248;
                  sVar32 = (short)local_2a8;
                  iVar20 = (int)local_290;
                }
                *(undefined1 *)(iVar20 + local_1f8) = 1;
              }
            }
            lVar18 = *plVar12;
            if (**(short **)(lVar18 + (longlong)puVar19 * 8) == 2) {
              lVar24 = (longlong)sVar32;
              if (*(char *)(local_1e0 + lVar24) == '\0') {
                if ((*(byte *)(param_1[10] + lVar24 * 4) & 2) == 0) {
                  if (sVar22 != -1) {
                    lVar23 = (longlong)sVar22 * 8;
                    if ((*(char *)(*(int *)(*(longlong *)
                                             (lVar23 + *(longlong *)
                                                        (*(longlong *)
                                                          (*(longlong *)param_1[9] + lVar24 * 8) +
                                                        0x58)) + 0x68) + local_190[0]) == '\0') &&
                       ((*(byte *)(param_1[0xd] +
                                  (longlong)
                                  *(int *)(*(longlong *)
                                            (lVar23 + *(longlong *)
                                                       (*(longlong *)
                                                         (*(longlong *)param_1[9] + lVar24 * 8) +
                                                       0x58)) + 0x68) * 4) & 1) != 0)) {
                      local_288[0] = (uint)sVar32;
                      FUN_14000bc60(*(longlong *)(lVar18 + (longlong)puVar19 * 8) + 0xb0,local_288);
                      local_288[0] = (uint)sVar22;
                      FUN_14000bc60(*(longlong *)(*plVar12 + (longlong)puVar19 * 8) + 200,local_288)
                      ;
                      *(undefined1 *)
                       (*(int *)(*(longlong *)
                                  (lVar23 + *(longlong *)
                                             (*(longlong *)(*(longlong *)param_1[9] + lVar24 * 8) +
                                             0x58)) + 0x68) + local_190[0]) = 1;
                      goto LAB_1402c1cb5;
                    }
                  }
                }
                else {
                  local_288[0] = (uint)sVar32;
                  FUN_14000bc60(*(longlong *)(lVar18 + (longlong)puVar19 * 8) + 0xb0,local_288);
                  local_288[0] = 0xffffffff;
                  FUN_14000bc60(*(longlong *)(*plVar12 + (longlong)puVar19 * 8) + 200,local_288);
                  *(undefined1 *)(local_1e0 + lVar24) = 1;
LAB_1402c1cb5:
                  sVar32 = (short)local_2a8;
                }
              }
              plVar12 = (longlong *)param_1[0x22];
              plVar28 = local_248;
              if ((plVar12 != (longlong *)0x0) &&
                 (iVar20 = (int)(plVar12[1] - *plVar12 >> 3) + -1,
                 local_240 = (undefined2 *)(longlong)iVar20, -1 < iVar20)) {
                do {
                  lVar18 = *(longlong *)(*(longlong *)param_1[0x22] + (longlong)local_240 * 8);
                  iVar20 = (int)(*(longlong *)(lVar18 + 0x10) - *(longlong *)(lVar18 + 8) >> 3) + -1
                  ;
                  lVar23 = (longlong)iVar20;
                  if (-1 < iVar20) {
                    do {
                      lVar26 = *(longlong *)(*(longlong *)(lVar18 + 8) + lVar23 * 8);
                      sVar2 = *(short *)(lVar26 + 4);
                      if (((((sVar2 == sVar32) &&
                            (uVar13 = *(uint *)(lVar26 + 100), (uVar13 & 0x492000c) != 0)) &&
                           (*(short *)(lVar26 + 0x98) == 0)) &&
                          ((sVar3 = *(short *)(lVar26 + 6), sVar3 == sVar22 ||
                           ((sVar22 == -1 && (sVar3 != -1)))))) &&
                         ((iVar20 = *(int *)(local_1a8 + lVar24 * 4), sVar3 == iVar20 ||
                          (((iVar20 != -1 && ((uVar13 & 0x100008) != 0)) && ((uVar13 & 4) == 0))))))
                      {
                        in_R11 = (ulonglong)sVar3;
                        if ((*(char *)(*(int *)(*(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)
                                                     (*(longlong *)param_1[9] + (longlong)sVar2 * 8)
                                                   + 0x58) + in_R11 * 8) + 0x68) + local_160[0]) ==
                             '\0') &&
                           ((*(byte *)(param_1[0xd] +
                                      (longlong)
                                      *(int *)(*(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)param_1[9] + (longlong)sVar2 * 8)
                                                  + 0x58) + in_R11 * 8) + 0x68) * 4) & 1) == 0)) {
                          in_stack_fffffffffffffd48 =
                               (int *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffd48 >> 0x20),
                                               (int)*(short *)(lVar26 + 0x60));
                          FUN_1402827a0(*(undefined8 *)(param_1[0x29] + (longlong)local_208 * 8),
                                        (int)sVar2,uVar13,(int)*(short *)(lVar26 + 0xc),
                                        in_stack_fffffffffffffd48);
                          *(undefined1 *)
                           (*(int *)(*(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)
                                          (*(longlong *)param_1[9] +
                                          (longlong)*(short *)(lVar26 + 4) * 8) + 0x58) +
                                      (longlong)*(short *)(lVar26 + 6) * 8) + 0x68) + local_1c0[0])
                               = 1;
                          sVar32 = (short)local_2a8;
                        }
                        else {
                          sVar32 = (short)local_2a8;
                        }
                      }
                      lVar23 = lVar23 + -1;
                    } while (-1 < lVar23);
                  }
                  local_240 = (undefined2 *)((longlong)local_240 + -1);
                  plVar28 = local_248;
                  puVar19 = local_208;
                } while (-1 < (longlong)local_240);
              }
            }
            local_2a4 = local_2a4 + 1;
            local_200 = local_200 + 2;
          } while ((ulonglong)(longlong)(int)local_2a4 <
                   (ulonglong)
                   (*(longlong *)((longlong)plVar28 + 0x38) -
                    *(longlong *)((longlong)plVar28 + 0x30) >> 1));
        }
        local_29c = local_29c + 1;
        local_220 = local_220 + 2;
        lVar18 = param_1[0x29];
        lVar24 = *(longlong *)(lVar18 + (longlong)puVar19 * 8);
      } while ((ulonglong)(longlong)(int)local_29c <
               (ulonglong)(*(longlong *)(lVar24 + 0x70) - *(longlong *)(lVar24 + 0x68) >> 2));
    }
    iVar20 = ((int)local_1c0[1] - (int)local_1c0[0]) + -1;
    lVar18 = (longlong)iVar20;
    if (-1 < iVar20) {
      do {
        if (*(char *)(lVar18 + local_1c0[0]) != '\0') {
          *(undefined1 *)(lVar18 + local_160[0]) = 1;
        }
        lVar18 = lVar18 + -1;
      } while (-1 < lVar18);
    }
    iVar20 = (int)local_298;
  }
  uVar13 = iVar20 + 1;
  uVar14 = (ulonglong)uVar13;
  local_298 = CONCAT44(local_298._4_4_,uVar13);
  local_208 = (undefined2 *)(longlong)(int)uVar13;
  if ((undefined2 *)(param_1[0x2a] - param_1[0x29] >> 3) <= local_208) goto LAB_1402c1f38;
  goto LAB_1402c13c0;
}

