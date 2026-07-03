// FUN_1408b0fb0 @ 1408b0fb0
// callees:
//   -> 1400be580 FUN_1400be580
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0
//   -> 14000bed0 FUN_14000bed0
//   -> 14000bd10 FUN_14000bd10
//   -> 1402ea6e0 FUN_1402ea6e0
//   -> 1402e9e70 FUN_1402e9e70
//   -> 140071310 FUN_140071310
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 1408cf9b0 FUN_1408cf9b0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408b0fb0(longlong *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  short sVar6;
  short sVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int *piVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 *local_c0;
  undefined2 *local_b8;
  undefined2 *local_b0;
  undefined4 *local_a8;
  short local_a0;
  undefined2 *local_98;
  undefined2 local_88 [2];
  undefined2 local_84 [2];
  undefined2 local_80 [2];
  int local_7c;
  undefined4 local_78 [2];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_60 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_e8;
  local_7c = 0;
  if (param_1[1] - *param_1 >> 3 != 0) {
    local_70 = 0;
    uVar11 = 0xffffffffffffffff;
    local_68 = param_1;
    do {
      puVar1 = *(undefined2 **)(local_70 + *local_68);
      puVar4 = (undefined1 *)
               FUN_1400be580(&local_58,"*** Error(s) finalizing the material template ",puVar1);
      if (puVar4 != &DAT_141c3d418) {
        if (0xf < DAT_141c3d430) {
          FUN_140002020(CONCAT71(uRam0000000141c3d419,DAT_141c3d418),DAT_141c3d430 + 1,1);
        }
        DAT_141c3d430 = 0xf;
        DAT_141c3d428 = 0;
        DAT_141c3d418 = 0;
        FUN_14007b2f0(&DAT_141c3d418,puVar4);
      }
      if (0xf < local_40) {
        FUN_140002020(CONCAT71(uStack_57,local_58),local_40 + 1,1);
      }
      FUN_14000bed0(puVar1 + 0x1b0,
                    *(longlong *)(puVar1 + 0x1a8) - *(longlong *)(puVar1 + 0x1a4) >> 3);
      FUN_14000bed0(puVar1 + 0x1bc,
                    *(longlong *)(puVar1 + 0x1a8) - *(longlong *)(puVar1 + 0x1a4) >> 3);
      FUN_14000bed0(puVar1 + 0x1c8,
                    *(longlong *)(puVar1 + 0x1a8) - *(longlong *)(puVar1 + 0x1a4) >> 3);
      FUN_14000bd10(puVar1 + 0x1d4,
                    *(longlong *)(puVar1 + 0x1a8) - *(longlong *)(puVar1 + 0x1a4) >> 3);
      iVar2 = (int)(*(longlong *)(puVar1 + 0x1a8) - *(longlong *)(puVar1 + 0x1a4) >> 3) + -1;
      lVar8 = (longlong)iVar2;
      if (-1 < iVar2) {
        do {
          local_a8 = local_78;
          local_b0 = local_80;
          local_b8 = local_84;
          local_c0 = local_88;
          local_c8 = *(undefined2 **)(*(longlong *)(puVar1 + 0x210) + lVar8 * 8);
          local_a0 = (short)uVar11;
          local_98 = puVar1;
          FUN_1402ea6e0(*(undefined8 *)(*(longlong *)(puVar1 + 0x1e0) + lVar8 * 8),
                        *(undefined8 *)(*(longlong *)(puVar1 + 0x1ec) + lVar8 * 8),
                        *(undefined8 *)(*(longlong *)(puVar1 + 0x1f8) + lVar8 * 8),
                        *(undefined8 *)(*(longlong *)(puVar1 + 0x204) + lVar8 * 8));
          *(undefined2 *)(*(longlong *)(puVar1 + 0x1b0) + lVar8 * 2) = local_88[0];
          *(undefined2 *)(*(longlong *)(puVar1 + 0x1bc) + lVar8 * 2) = local_84[0];
          *(undefined2 *)(*(longlong *)(puVar1 + 0x1c8) + lVar8 * 2) = local_80[0];
          *(undefined4 *)(*(longlong *)(puVar1 + 0x1d4) + lVar8 * 4) = local_78[0];
          lVar8 = lVar8 + -1;
        } while (-1 < lVar8);
      }
      if (*(longlong *)(puVar1 + 0x228) != 0) {
        local_c0 = puVar1 + 0x240;
        local_c8 = puVar1 + 0x230;
        local_b8 = puVar1;
        FUN_1402e9e70(puVar1 + 0x21c,puVar1 + 0x21e,uVar11 & 0xffffffff);
      }
      lVar8 = DAT_141d778b0;
      puVar10 = (undefined8 *)(puVar1 + 0x284);
      if (*(longlong *)(puVar1 + 0x28c) != 0) {
        sVar6 = (short)(DAT_141d778b8 - DAT_141d778b0 >> 3);
        do {
          sVar6 = sVar6 + -1;
          sVar7 = (short)uVar11;
          if (sVar6 < 0) break;
          iVar2 = FUN_140071310(*(undefined8 *)(lVar8 + (longlong)sVar6 * 8),puVar10);
          sVar7 = sVar6;
        } while (iVar2 != 0);
        puVar1[0x266] = sVar7;
        if ((sVar7 != -1) && (4 < *(int *)(puVar1 + 0x14c))) {
          *(byte *)(*(longlong *)(puVar1 + 0x148) + 4) =
               *(byte *)(*(longlong *)(puVar1 + 0x148) + 4) | 2;
        }
        *(undefined8 *)(puVar1 + 0x28c) = 0;
        if (0xf < *(ulonglong *)(puVar1 + 0x290)) {
          puVar10 = (undefined8 *)*puVar10;
        }
        *(undefined1 *)puVar10 = 0;
      }
      piVar12 = (int *)(puVar1 + 0x4e);
      plVar14 = (longlong *)(puVar1 + 0x29c);
      puVar9 = puVar1 + 0x294;
      lVar8 = 6;
      do {
        lVar13 = lVar8;
        iVar2 = 0;
        if (*plVar14 != 0) {
          uVar11 = DAT_141d778e8 - (longlong)DAT_141d778e0 >> 3;
          puVar10 = DAT_141d778e0;
          if (uVar11 != 0) {
            do {
              iVar3 = FUN_140071310(*puVar10,puVar9);
              if (iVar3 == 0) {
                if (iVar2 != -1) {
                  *piVar12 = iVar2;
                  goto LAB_1408b13d9;
                }
                break;
              }
              iVar2 = iVar2 + 1;
              puVar10 = puVar10 + 1;
            } while ((ulonglong)(longlong)iVar2 < uVar11);
          }
          local_40 = 0xf;
          local_48 = 0;
          local_58 = 0;
          FUN_14000c9f0(&local_58,"Unrecognized Color Token in Material Template: ",0x2f);
          FUN_14000cb40(&local_58,puVar9,0,0xffffffffffffffff);
          FUN_14014a240(&local_58);
          if (0xf < local_40) {
            FUN_140002020(CONCAT71(uStack_57,local_58),local_40 + 1,1);
          }
LAB_1408b13d9:
          *plVar14 = 0;
          if ((ulonglong)plVar14[1] < 0x10) {
            plVar5 = plVar14 + -2;
          }
          else {
            plVar5 = (longlong *)plVar14[-2];
          }
          *(undefined1 *)plVar5 = 0;
        }
        puVar9 = puVar9 + 0x10;
        piVar12 = piVar12 + 1;
        plVar14 = plVar14 + 4;
        lVar8 = lVar13 + -1;
      } while (lVar8 != 0);
      FUN_1408cf9b0(puVar1 + 0x268);
      DAT_141c3d428 = 0;
      puVar4 = &DAT_141c3d418;
      if (0xf < DAT_141c3d430) {
        puVar4 = (undefined1 *)CONCAT71(uRam0000000141c3d419,DAT_141c3d418);
      }
      *puVar4 = 0;
      local_7c = local_7c + 1;
      local_70 = local_70 + 8;
      uVar11 = lVar13 - 2;
    } while ((ulonglong)(longlong)local_7c < (ulonglong)(local_68[1] - *local_68 >> 3));
  }
  return;
}

