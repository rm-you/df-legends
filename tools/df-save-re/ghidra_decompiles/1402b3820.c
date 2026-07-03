// FUN_1402b3820 @ 1402b3820
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 1400be580 FUN_1400be580
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0
//   -> 1402e9e70 FUN_1402e9e70
//   -> 140071310 FUN_140071310
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402b3820(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_98;
  iVar7 = 0;
  if (param_1[1] - *param_1 >> 3 != 0) {
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar8);
      iVar2 = FUN_14000c110(lVar1 + 0x70,"LOCAL_CREATURE_MAT");
      if (iVar2 == 0) {
        *(undefined2 *)(lVar1 + 0xd0) = 0xffff;
        *(undefined4 *)(lVar1 + 0xd4) = 0xffffffff;
      }
      else {
        iVar2 = FUN_14000c110(lVar1 + 0x70,"LOCAL_PLANT_MAT");
        if (iVar2 == 0) {
          *(undefined2 *)(lVar1 + 0xd0) = 0xffff;
          *(undefined4 *)(lVar1 + 0xd4) = 0xffffffff;
        }
        else {
          puVar4 = (undefined1 *)
                   FUN_1400be580(&local_50,"*** Error(s) finalizing the template ",lVar1);
          if (puVar4 != &DAT_141c3d418) {
            if (0xf < DAT_141c3d430) {
              FUN_140002020(CONCAT71(uRam0000000141c3d419,DAT_141c3d418),DAT_141c3d430 + 1,1);
            }
            DAT_141c3d430 = 0xf;
            DAT_141c3d428 = 0;
            DAT_141c3d418 = 0;
            FUN_14007b2f0(&DAT_141c3d418,puVar4);
          }
          if (0xf < local_38) {
            FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
          }
          local_70 = lVar1 + 0xb0;
          local_78 = lVar1 + 0x90;
          local_68 = lVar1;
          FUN_1402e9e70(lVar1 + 0xd0,lVar1 + 0xd4,0xffffffff,lVar1 + 0x70);
          puVar5 = (undefined8 *)(lVar1 + 0x120);
          if (*(longlong *)(lVar1 + 0x130) != 0) {
            iVar2 = 0;
            uVar9 = DAT_141d778d0 - (longlong)DAT_141d778c8 >> 3;
            puVar6 = DAT_141d778c8;
            if (uVar9 != 0) {
              do {
                iVar3 = FUN_140071310(*puVar6,puVar5);
                if (iVar3 == 0) goto LAB_1402b39fc;
                iVar2 = iVar2 + 1;
                puVar6 = puVar6 + 1;
              } while ((ulonglong)(longlong)iVar2 < uVar9);
            }
            iVar2 = -1;
LAB_1402b39fc:
            *(int *)(lVar1 + 0xec) = iVar2;
            if (iVar2 == -1) {
              local_38 = 0xf;
              local_40 = 0;
              local_50 = 0;
              FUN_14000c780(&local_50,"Custom tissue shape not found: ",0x1f);
              FUN_14000cb40(&local_50,puVar5,0,0xffffffffffffffff);
              FUN_14014a240(&local_50);
              *(undefined2 *)(lVar1 + 0xe8) = 0;
              if (0xf < local_38) {
                FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
              }
            }
            *(undefined8 *)(lVar1 + 0x130) = 0;
            if (0xf < *(ulonglong *)(lVar1 + 0x138)) {
              puVar5 = (undefined8 *)*puVar5;
            }
            *(undefined1 *)puVar5 = 0;
          }
          DAT_141c3d428 = 0;
          puVar4 = &DAT_141c3d418;
          if (0xf < DAT_141c3d430) {
            puVar4 = (undefined1 *)CONCAT71(uRam0000000141c3d419,DAT_141c3d418);
          }
          *puVar4 = 0;
        }
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((ulonglong)(longlong)iVar7 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  return;
}

