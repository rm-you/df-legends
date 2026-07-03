// FUN_1408d0040 @ 1408d0040
// callees:
//   -> 140071310 FUN_140071310
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 1400be580 FUN_1400be580
//   -> 14007b2f0 FUN_14007b2f0
//   -> 140280500 FUN_140280500
//   -> 140051e20 FUN_140051e20
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408d0040(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_a8 [48];
  undefined8 local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong uVar6;
  
  lVar2 = DAT_141d779c8;
  lVar1 = DAT_141d779c0;
  local_78 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_a8;
  uVar8 = 0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    uVar6 = uVar8;
    uVar7 = uVar8;
    if (DAT_141d779c8 - DAT_141d779c0 >> 3 != 0) {
      do {
        iVar5 = (int)uVar6;
        iVar3 = FUN_140071310(*(undefined8 *)(lVar1 + uVar7),param_1 + 0x1b8);
        if (iVar3 == 0) goto LAB_1408d00ef;
        uVar6 = (ulonglong)(iVar5 + 1U);
        uVar7 = uVar7 + 8;
      } while ((ulonglong)(longlong)(int)(iVar5 + 1U) < (ulonglong)(lVar2 - lVar1 >> 3));
    }
    iVar5 = -1;
LAB_1408d00ef:
    *(int *)(param_1 + 0x1d8) = iVar5;
    if (iVar5 == -1) {
      local_58 = 0xf;
      local_60 = 0;
      local_70 = 0;
      FUN_14000c780(&local_70,"Interaction Token not recognized : ",0x23);
      FUN_14000cb40(&local_70,param_1 + 0x1b8,0,0xffffffffffffffff);
      FUN_14014a240(&local_70);
      if (0xf < local_58) {
        FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
      }
    }
  }
  uVar6 = uVar8;
  uVar7 = uVar8;
  if (*(longlong *)(param_1 + 0x298) - *(longlong *)(param_1 + 0x290) >> 2 != 0) {
    do {
      local_58 = 0xf;
      local_60 = 0;
      local_70 = 0;
      puVar4 = (undefined1 *)
               FUN_1400be580(local_50,"data/speech/",
                             *(undefined8 *)(uVar7 + *(longlong *)(param_1 + 0x2a8)));
      if (&local_70 != puVar4) {
        if (0xf < local_58) {
          FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
        }
        local_58 = 0xf;
        local_60 = 0;
        local_70 = 0;
        FUN_14007b2f0(&local_70,puVar4);
      }
      if (0xf < local_38) {
        FUN_140002020(local_50[0],local_38 + 1,1);
      }
      FUN_140280500(&DAT_141c33eb0,&local_70,*(longlong *)(param_1 + 0x290) + uVar8 * 4);
      if (0xf < local_58) {
        FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
      }
      uVar9 = (int)uVar6 + 1;
      uVar8 = (ulonglong)(int)uVar9;
      uVar6 = (ulonglong)uVar9;
      uVar7 = uVar7 + 8;
    } while (uVar8 < (ulonglong)
                     (*(longlong *)(param_1 + 0x298) - *(longlong *)(param_1 + 0x290) >> 2));
  }
  FUN_140051e20(param_1 + 0x2a8);
  return;
}

