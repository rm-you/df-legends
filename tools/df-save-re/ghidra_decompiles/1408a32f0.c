// FUN_1408a32f0 @ 1408a32f0
// callees:
//   -> 1400be580 FUN_1400be580
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0
//   -> 140071310 FUN_140071310
//   -> 14000c390 FUN_14000c390
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140051e20 FUN_140051e20
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408a32f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  int local_68 [2];
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
  puVar7 = (undefined1 *)FUN_1400be580(&local_50,"*** Error(s) finalizing the symbol ",param_1);
  if (puVar7 != &DAT_141c3d418) {
    if (0xf < DAT_141c3d430) {
      FUN_140002020(CONCAT71(uRam0000000141c3d419,DAT_141c3d418),DAT_141c3d430 + 1,1);
    }
    DAT_141c3d430 = 0xf;
    DAT_141c3d428 = 0;
    DAT_141c3d418 = 0;
    FUN_14007b2f0(&DAT_141c3d418,puVar7);
  }
  if (0xf < local_38) {
    FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
  }
  iVar12 = 0;
  plVar1 = (longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x28) - *plVar1 >> 3 != 0) {
    lVar11 = 0;
    do {
      lVar5 = DAT_141d6e1a8;
      uVar2 = *(undefined8 *)(lVar11 + *plVar1);
      iVar10 = 0;
      uVar9 = DAT_141d6e1b0 - DAT_141d6e1a8 >> 3;
      if (uVar9 != 0) {
        lVar8 = 0;
        do {
          iVar6 = FUN_140071310(*(undefined8 *)(lVar5 + lVar8),uVar2);
          if (iVar6 == 0) goto LAB_1408a3431;
          iVar10 = iVar10 + 1;
          lVar8 = lVar8 + 8;
        } while ((ulonglong)(longlong)iVar10 < uVar9);
      }
      iVar10 = -1;
LAB_1408a3431:
      lVar5 = local_60;
      local_68[0] = iVar10;
      if (iVar10 == -1) {
        local_38 = 0xf;
        local_40 = 0;
        local_50 = 0;
        FUN_14000c780(&local_50,"Unrecognized word token: ",0x19);
        FUN_14000cb40(&local_50,*(undefined8 *)(lVar11 + *plVar1),0,0xffffffffffffffff);
        FUN_14014a240(&local_50);
        if (0xf < local_38) {
          FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
        }
      }
      else {
        piVar3 = *(int **)(local_60 + 0x40);
        if ((local_68 < piVar3) && (piVar4 = *(int **)(local_60 + 0x38), piVar4 <= local_68)) {
          if (piVar3 == *(int **)(local_60 + 0x48)) {
            FUN_14000c390(local_60 + 0x38,1);
          }
          if (*(undefined4 **)(lVar5 + 0x40) != (undefined4 *)0x0) {
            **(undefined4 **)(lVar5 + 0x40) =
                 *(undefined4 *)
                  (*(longlong *)(lVar5 + 0x38) + ((longlong)local_68 - (longlong)piVar4 >> 2) * 4);
          }
          *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 4;
        }
        else {
          if (piVar3 == *(int **)(local_60 + 0x48)) {
            FUN_14000c390(local_60 + 0x38,1);
          }
          if (*(int **)(lVar5 + 0x40) != (int *)0x0) {
            **(int **)(lVar5 + 0x40) = iVar10;
          }
          *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 4;
        }
      }
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 8;
    } while ((ulonglong)(longlong)iVar12 < (ulonglong)(*(longlong *)(param_1 + 0x28) - *plVar1 >> 3)
            );
  }
  FUN_140051e20(plVar1);
  DAT_141c3d428 = 0;
  puVar7 = &DAT_141c3d418;
  if (0xf < DAT_141c3d430) {
    puVar7 = (undefined1 *)CONCAT71(uRam0000000141c3d419,DAT_141c3d418);
  }
  *puVar7 = 0;
  return;
}

