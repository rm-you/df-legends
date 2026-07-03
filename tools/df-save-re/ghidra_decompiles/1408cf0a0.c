// FUN_1408cf0a0 @ 1408cf0a0
// callees:
//   -> 140071310 FUN_140071310
//   -> 14000bed0 FUN_14000bed0
//   -> 14000bd10 FUN_14000bd10
//   -> 1402ea6e0 FUN_1402ea6e0
//   -> 1402e9e70 FUN_1402e9e70
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 1408cf9b0 FUN_1408cf9b0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408cf0a0(longlong param_1,undefined2 *param_2,undefined2 param_3)

{
  byte *pbVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  short sVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int *piVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined2 *local_c0;
  undefined2 *local_b8;
  undefined2 *local_b0;
  undefined4 *local_a8;
  undefined2 local_a0;
  longlong local_98;
  undefined2 local_88 [2];
  undefined2 local_84 [2];
  undefined2 local_80 [2];
  undefined4 local_7c;
  undefined2 *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  lVar5 = DAT_141d778b0;
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_e8;
  puVar10 = (undefined8 *)(param_1 + 0x5c8);
  local_78 = param_2;
  local_70 = param_1;
  if (*(longlong *)(param_1 + 0x5d8) != 0) {
    sVar7 = (short)(DAT_141d778b8 - DAT_141d778b0 >> 3);
    do {
      sVar7 = sVar7 + -1;
      if (sVar7 < 0) {
        sVar7 = -1;
        break;
      }
      iVar3 = FUN_140071310(*(undefined8 *)(lVar5 + (longlong)sVar7 * 8),puVar10);
    } while (iVar3 != 0);
    *(short *)(param_1 + 0x4cc) = sVar7;
    if ((sVar7 != -1) && (4 < *(int *)(param_1 + 0x298))) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x290) + 4);
      *pbVar1 = *pbVar1 | 2;
    }
    *(undefined8 *)(param_1 + 0x5d8) = 0;
    if (0xf < *(ulonglong *)(param_1 + 0x5e0)) {
      puVar10 = (undefined8 *)*puVar10;
    }
    *(undefined1 *)puVar10 = 0;
  }
  FUN_14000bed0(param_1 + 0x360,*(longlong *)(param_1 + 0x350) - *(longlong *)(param_1 + 0x348) >> 3
               );
  FUN_14000bed0(param_1 + 0x378,*(longlong *)(param_1 + 0x350) - *(longlong *)(param_1 + 0x348) >> 3
               );
  FUN_14000bed0(param_1 + 0x390,*(longlong *)(param_1 + 0x350) - *(longlong *)(param_1 + 0x348) >> 3
               );
  FUN_14000bd10(param_1 + 0x3a8,*(longlong *)(param_1 + 0x350) - *(longlong *)(param_1 + 0x348) >> 3
               );
  sVar7 = (short)(*(longlong *)(param_1 + 0x350) - *(longlong *)(param_1 + 0x348) >> 3) + -1;
  if (-1 < sVar7) {
    lVar5 = (longlong)sVar7;
    lVar12 = lVar5 * 4;
    lVar9 = lVar5 * 2;
    lVar5 = lVar5 * 8;
    do {
      local_a8 = &local_7c;
      local_b0 = local_80;
      local_b8 = local_84;
      local_c0 = local_88;
      local_c8 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x420));
      local_a0 = param_3;
      local_98 = param_1;
      FUN_1402ea6e0(*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x3c0)),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x3d8) + lVar5),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x3f0) + lVar5),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x408) + lVar5));
      *(undefined2 *)(lVar9 + *(longlong *)(param_1 + 0x360)) = local_88[0];
      *(undefined2 *)(lVar9 + *(longlong *)(param_1 + 0x378)) = local_84[0];
      *(undefined2 *)(lVar9 + *(longlong *)(param_1 + 0x390)) = local_80[0];
      *(undefined4 *)(lVar12 + *(longlong *)(param_1 + 0x3a8)) = local_7c;
      lVar5 = lVar5 + -8;
      lVar9 = lVar9 + -2;
      lVar12 = lVar12 + -4;
      sVar7 = sVar7 + -1;
      param_2 = local_78;
    } while (-1 < sVar7);
  }
  if (*(longlong *)(param_1 + 0x450) != 0) {
    local_c0 = (undefined2 *)(param_1 + 0x480);
    local_c8 = param_1 + 0x460;
    local_b8 = param_2;
    FUN_1402e9e70(param_1 + 0x438,param_1 + 0x43c,param_3);
  }
  puVar2 = local_78;
  piVar11 = (int *)(param_1 + 0x9c);
  plVar13 = (longlong *)(param_1 + 0x5f8);
  param_1 = param_1 + 0x5e8;
  lVar5 = 6;
  do {
    if (*plVar13 != 0) {
      iVar3 = 0;
      uVar8 = DAT_141d778e8 - (longlong)DAT_141d778e0 >> 3;
      puVar10 = DAT_141d778e0;
      if (uVar8 != 0) {
        do {
          iVar4 = FUN_140071310(*puVar10,param_1);
          if (iVar4 == 0) {
            if (iVar3 != -1) {
              *piVar11 = iVar3;
              goto LAB_1408cf456;
            }
            break;
          }
          iVar3 = iVar3 + 1;
          puVar10 = puVar10 + 1;
        } while ((ulonglong)(longlong)iVar3 < uVar8);
      }
      local_48 = 0xf;
      local_50 = 0;
      local_60 = 0;
      FUN_14000c8b0(&local_60,puVar2,0,0xffffffffffffffff);
      FUN_14000c9f0(&local_60,": Unrecognized Color Token in Material Template: ");
      FUN_14000cb40(&local_60,param_1,0,0xffffffffffffffff);
      FUN_14014a240(&local_60);
      if (0xf < local_48) {
        FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1);
      }
LAB_1408cf456:
      *plVar13 = 0;
      if ((ulonglong)plVar13[1] < 0x10) {
        plVar6 = plVar13 + -2;
      }
      else {
        plVar6 = (longlong *)plVar13[-2];
      }
      *(undefined1 *)plVar6 = 0;
    }
    param_1 = param_1 + 0x20;
    piVar11 = piVar11 + 1;
    plVar13 = plVar13 + 4;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      FUN_1408cf9b0(local_70 + 0x4d0);
      return;
    }
  } while( true );
}

