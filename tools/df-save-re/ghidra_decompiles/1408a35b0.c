// FUN_1408a35b0 @ 1408a35b0
// callees:
//   -> 1400be580 FUN_1400be580
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0
//   -> 140051e20 FUN_140051e20
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140071310 FUN_140071310
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408a35b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  int local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  puVar6 = (undefined1 *)FUN_1400be580(&local_50,"*** Error(s) finalizing the translation ",param_1)
  ;
  if (puVar6 != &DAT_141c3d418) {
    if (0xf < DAT_141c3d430) {
      FUN_140002020(CONCAT71(uRam0000000141c3d419,DAT_141c3d418),DAT_141c3d430 + 1,1);
    }
    DAT_141c3d430 = 0xf;
    DAT_141c3d428 = 0;
    DAT_141c3d418 = 0;
    FUN_14007b2f0(&DAT_141c3d418,puVar6);
  }
  if (0xf < local_38) {
    FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  FUN_140051e20(plVar1);
  FUN_14000b9d0(plVar1,DAT_141d6e1b0 - DAT_141d6e1a8 >> 3);
  iVar11 = 0;
  if (*(longlong *)(param_1 + 0x58) - *plVar1 >> 3 != 0) {
    lVar9 = 0;
    do {
      puVar7 = operator_new(0x20);
      puVar7[3] = 0xf;
      puVar7[2] = 0;
      puVar8 = puVar7;
      if (0xf < (ulonglong)puVar7[3]) {
        puVar8 = (undefined8 *)*puVar7;
      }
      *(undefined1 *)puVar8 = 0;
      *(undefined8 **)(lVar9 + *plVar1) = puVar7;
      iVar11 = iVar11 + 1;
      lVar9 = lVar9 + 8;
    } while ((ulonglong)(longlong)iVar11 < (ulonglong)(*(longlong *)(param_1 + 0x58) - *plVar1 >> 3)
            );
  }
  local_68 = 0;
  plVar2 = (longlong *)(param_1 + 0x20);
  lVar9 = param_1;
  if (*(longlong *)(param_1 + 0x28) - *plVar2 >> 3 != 0) {
    lVar13 = 0;
    do {
      lVar4 = DAT_141d6e1a8;
      uVar3 = *(undefined8 *)(lVar13 + *plVar2);
      iVar11 = 0;
      lVar12 = 0;
      uVar10 = DAT_141d6e1b0 - DAT_141d6e1a8 >> 3;
      if (uVar10 != 0) {
        do {
          iVar5 = FUN_140071310(*(undefined8 *)(lVar4 + lVar12 * 8),uVar3);
          lVar9 = local_60;
          if (iVar5 == 0) {
            if ((-1 < iVar11) &&
               ((ulonglong)(longlong)iVar11 <
                (ulonglong)(*(longlong *)(param_1 + 0x58) - *plVar1 >> 3))) {
              lVar4 = *(longlong *)(lVar13 + *(longlong *)(local_60 + 0x38));
              lVar12 = *(longlong *)(*plVar1 + lVar12 * 8);
              if (lVar12 != lVar4) {
                FUN_14000c8b0(lVar12,lVar4,0,0xffffffffffffffff);
              }
              goto LAB_1408a3827;
            }
            break;
          }
          iVar11 = iVar11 + 1;
          lVar12 = lVar12 + 1;
        } while ((ulonglong)(longlong)iVar11 < uVar10);
      }
      local_38 = 0xf;
      local_40 = 0;
      local_50 = 0;
      FUN_14000c780(&local_50,"Unrecognized word token: ");
      FUN_14000cb40(&local_50,*(undefined8 *)(lVar13 + *plVar2));
      FUN_14014a240(&local_50);
      lVar9 = local_60;
      if (0xf < local_38) {
        FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1);
        lVar9 = local_60;
      }
LAB_1408a3827:
      local_68 = local_68 + 1;
      lVar13 = lVar13 + 8;
    } while ((ulonglong)(longlong)local_68 <
             (ulonglong)(*(longlong *)(param_1 + 0x28) - *plVar2 >> 3));
  }
  FUN_140051e20(plVar2);
  FUN_140051e20(lVar9 + 0x38);
  DAT_141c3d428 = 0;
  puVar6 = &DAT_141c3d418;
  if (0xf < DAT_141c3d430) {
    puVar6 = (undefined1 *)CONCAT71(uRam0000000141c3d419,DAT_141c3d418);
  }
  *puVar6 = 0;
  return;
}

