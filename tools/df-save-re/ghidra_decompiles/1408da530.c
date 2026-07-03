// FUN_1408da530 @ 1408da530
// callees:
//   -> 14007b5f0 FUN_14007b5f0
//   -> 140050410 FUN_140050410
//   -> 14000bc60 FUN_14000bc60
//   -> 14000cb40 FUN_14000cb40
//   -> 1408cf0a0 FUN_1408cf0a0
//   -> 140002020 FUN_140002020
//   -> 1402e9e70 FUN_1402e9e70
//   -> 140d89d60 FUN_140d89d60
//   -> 1402ea6e0 FUN_1402ea6e0
//   -> 14000c110 FUN_14000c110
//   -> 14000c390 FUN_14000c390
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408da530(undefined2 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  short sVar3;
  undefined2 **ppuVar4;
  undefined2 **ppuVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  short *psVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  short *local_d0;
  undefined2 *local_c8;
  undefined2 *local_c0;
  undefined4 *local_b8;
  undefined2 local_b0;
  undefined8 *local_a8;
  undefined2 *local_98;
  ulonglong local_90;
  undefined2 *local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70 [3];
  ulonglong local_58;
  undefined8 local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  
  local_78 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_f8;
  FUN_14007b5f0(local_50,param_1,&DAT_140e7aaf8);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  local_98 = param_1;
  if (9 < *(int *)(param_1 + 0x24)) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 9) & 0x40) != 0) {
      if ((&local_98 < DAT_141d6dc60) && (DAT_141d6dc58 <= &local_98)) {
        lVar8 = (longlong)&local_98 - (longlong)DAT_141d6dc58;
        if (DAT_141d6dc60 == DAT_141d6dc68) {
          FUN_140050410(&DAT_141d6dc58);
        }
        if (DAT_141d6dc60 != (undefined2 **)0x0) {
          *DAT_141d6dc60 = DAT_141d6dc58[lVar8 >> 3];
        }
      }
      else {
        if (DAT_141d6dc60 == DAT_141d6dc68) {
          FUN_140050410(&DAT_141d6dc58);
        }
        if (DAT_141d6dc60 != (undefined2 **)0x0) {
          *DAT_141d6dc60 = param_1;
        }
      }
      DAT_141d6dc60 = DAT_141d6dc60 + 1;
      puVar6 = &DAT_141d6dc70;
      goto LAB_1408da796;
    }
    if ((9 < *(int *)(param_1 + 0x24)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x20) + 9) & 0x80) != 0)) {
      if ((&local_98 < DAT_141d6dc90) && (DAT_141d6dc88 <= &local_98)) {
        lVar8 = (longlong)&local_98 - (longlong)DAT_141d6dc88;
        if (DAT_141d6dc90 == DAT_141d6dc98) {
          FUN_140050410(&DAT_141d6dc88);
        }
        if (DAT_141d6dc90 != (undefined2 **)0x0) {
          *DAT_141d6dc90 = DAT_141d6dc88[lVar8 >> 3];
        }
      }
      else {
        if (DAT_141d6dc90 == DAT_141d6dc98) {
          FUN_140050410(&DAT_141d6dc88);
        }
        if (DAT_141d6dc90 != (undefined2 **)0x0) {
          *DAT_141d6dc90 = param_1;
        }
      }
      DAT_141d6dc90 = DAT_141d6dc90 + 1;
      puVar6 = (undefined8 *)&DAT_141d6dca0;
      goto LAB_1408da796;
    }
  }
  if ((&local_98 < DAT_141d6dc30) && (DAT_141d6dc28 <= &local_98)) {
    lVar8 = (longlong)&local_98 - (longlong)DAT_141d6dc28;
    if (DAT_141d6dc30 == DAT_141d6dc38) {
      FUN_140050410(&DAT_141d6dc28);
    }
    if (DAT_141d6dc30 != (undefined2 **)0x0) {
      *DAT_141d6dc30 = DAT_141d6dc28[lVar8 >> 3];
    }
  }
  else {
    if (DAT_141d6dc30 == DAT_141d6dc38) {
      FUN_140050410(&DAT_141d6dc28);
    }
    if (DAT_141d6dc30 != (undefined2 **)0x0) {
      *DAT_141d6dc30 = param_1;
    }
  }
  DAT_141d6dc30 = DAT_141d6dc30 + 1;
  puVar6 = &DAT_141d6dc40;
LAB_1408da796:
  FUN_14000bc60(puVar6);
  iVar11 = 0;
  if (*(longlong *)(param_1 + 300) - *(longlong *)(param_1 + 0x128) >> 3 != 0) {
    lVar8 = 0;
    do {
      FUN_14007b5f0(local_70,param_1,&DAT_140e7aaf8);
      FUN_14000cb40(local_70,*(undefined8 *)(lVar8 + *(longlong *)(param_1 + 0x128)),0,
                    0xffffffffffffffff);
      FUN_1408cf0a0(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + lVar8),local_70,
                    *(undefined4 *)(param_1 + 0x10));
      if (0xf < local_58) {
        FUN_140002020(local_70[0],local_58 + 1,1);
      }
      iVar11 = iVar11 + 1;
      lVar8 = lVar8 + 8;
    } while ((ulonglong)(longlong)iVar11 <
             (ulonglong)(*(longlong *)(param_1 + 300) - *(longlong *)(param_1 + 0x128) >> 3));
  }
  iVar11 = 0;
  puVar13 = (undefined4 *)(param_1 + 0x13e);
  psVar9 = param_1 + 0x134;
  plVar10 = (longlong *)(param_1 + 0x158);
  do {
    *psVar9 = -1;
    *puVar13 = 0xffffffff;
    if (*plVar10 != 0) {
      lVar8 = (longlong)iVar11;
      local_d0 = param_1 + lVar8 * 0x30 + 0x170;
      local_d8 = param_1 + lVar8 * 0x30 + 0x160;
      local_c8 = param_1;
      FUN_1402e9e70(param_1 + lVar8 + 0x134,param_1 + lVar8 * 2 + 0x13e,param_1[0x10],
                    param_1 + (lVar8 + 7) * 0x30);
      if ((((iVar11 == 0) && (*psVar9 != -1)) &&
          (lVar8 = FUN_140d89d60(&DAT_141c53470,*psVar9,*puVar13), lVar8 != 0)) &&
         (9 < *(int *)(lVar8 + 0x298))) {
        pbVar1 = (byte *)(*(longlong *)(lVar8 + 0x290) + 9);
        *pbVar1 = *pbVar1 | 2;
      }
    }
    iVar11 = iVar11 + 1;
    plVar10 = plVar10 + 0xc;
    psVar9 = psVar9 + 1;
    puVar13 = puVar13 + 1;
  } while (iVar11 < 9);
  uVar7 = 0;
  local_98 = (undefined2 *)((ulonglong)local_98 & 0xffffffff00000000);
  plVar10 = *(longlong **)(param_1 + 0x304);
  local_90 = 0;
  local_80 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x308) + (7 - (longlong)plVar10)) >> 3;
  if (*(longlong **)(param_1 + 0x308) < plVar10) {
    local_80 = uVar7;
  }
  if (local_80 != 0) {
    do {
      lVar8 = *plVar10;
      local_c0 = (undefined2 *)(lVar8 + 0x104);
      local_d8 = (undefined2 *)(lVar8 + 0xe0);
      local_a8 = local_50;
      local_b0 = param_1[0x10];
      local_d0 = (short *)(lVar8 + 0x100);
      local_c8 = (undefined2 *)(lVar8 + 0x102);
      local_b8 = (undefined4 *)(lVar8 + 0x108);
      local_88 = local_c0;
      FUN_1402ea6e0(lVar8 + 0x60,lVar8 + 0x80,lVar8 + 0xa0,lVar8 + 0xc0);
      if ((*(longlong *)(lVar8 + 0x90) == 0) ||
         (iVar11 = FUN_14000c110(lVar8 + 0x80,&DAT_140e8cc54), iVar11 == 0)) {
        *(undefined2 *)(lVar8 + 0x102) = (short)uVar7;
      }
      sVar3 = *(short *)(lVar8 + 0x100);
      if ((((sVar3 == 0x37) || (sVar3 == 0x34)) &&
          ((lVar8 = FUN_140d89d60(&DAT_141c53470,*local_88,*(undefined4 *)(lVar8 + 0x108)),
           lVar8 != 0 && (0 < *(int *)(lVar8 + 0x298))))) &&
         (((**(byte **)(lVar8 + 0x290) & 8) != 0 ||
          ((0 < *(int *)(lVar8 + 0x298) && ((**(byte **)(lVar8 + 0x290) & 0x10) != 0)))))) {
        if (1 < *(int *)(param_1 + 0x24)) {
          *(byte *)(*(longlong *)(param_1 + 0x20) + 1) =
               *(byte *)(*(longlong *)(param_1 + 0x20) + 1) | 0x40;
        }
        uVar12 = 0;
        if ((0 < *(int *)(lVar8 + 0x298)) && (uVar12 = 0, (**(byte **)(lVar8 + 0x290) & 8) != 0)) {
          uVar12 = 1;
        }
        if ((0 < *(int *)(lVar8 + 0x298)) && ((**(byte **)(lVar8 + 0x290) & 0x10) != 0)) {
          uVar12 = uVar12 | 2;
        }
        puVar2 = (ulonglong *)(param_1 + 0x38c);
        ppuVar4 = *(undefined2 ***)(param_1 + 0x390);
        if ((&local_98 < ppuVar4) && (ppuVar5 = (undefined2 **)*puVar2, ppuVar5 <= &local_98)) {
          if (ppuVar4 == *(undefined2 ***)(param_1 + 0x394)) {
            FUN_14000c390(puVar2,1);
          }
          if (*(undefined4 **)(param_1 + 0x390) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x390) =
                 *(undefined4 *)(*puVar2 + ((longlong)&local_98 - (longlong)ppuVar5 >> 2) * 4);
          }
        }
        else {
          if (ppuVar4 == *(undefined2 ***)(param_1 + 0x394)) {
            FUN_14000c390(puVar2,1);
          }
          if (*(int **)(param_1 + 0x390) != (int *)0x0) {
            **(int **)(param_1 + 0x390) = (int)uVar7;
          }
        }
        *(longlong *)(param_1 + 0x390) = *(longlong *)(param_1 + 0x390) + 4;
        local_98 = (undefined2 *)CONCAT44(local_98._4_4_,uVar12);
        puVar2 = (ulonglong *)(param_1 + 0x398);
        ppuVar4 = *(undefined2 ***)(param_1 + 0x39c);
        if ((&local_98 < ppuVar4) && (ppuVar5 = (undefined2 **)*puVar2, ppuVar5 <= &local_98)) {
          if (ppuVar4 == *(undefined2 ***)(param_1 + 0x3a0)) {
            FUN_14000c390(puVar2,1);
          }
          if (*(undefined4 **)(param_1 + 0x39c) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x39c) =
                 *(undefined4 *)(*puVar2 + ((longlong)&local_98 - (longlong)ppuVar5 >> 2) * 4);
          }
        }
        else {
          if (ppuVar4 == *(undefined2 ***)(param_1 + 0x3a0)) {
            FUN_14000c390(puVar2,1);
          }
          if (*(uint **)(param_1 + 0x39c) != (uint *)0x0) {
            **(uint **)(param_1 + 0x39c) = uVar12;
          }
        }
        *(longlong *)(param_1 + 0x39c) = *(longlong *)(param_1 + 0x39c) + 4;
      }
      uVar12 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar12;
      local_98 = (undefined2 *)CONCAT44(local_98._4_4_,uVar12);
      plVar10 = plVar10 + 1;
      local_90 = local_90 + 1;
    } while (local_90 < local_80);
  }
  if (0xf < local_38) {
    FUN_140002020(local_50[0],local_38 + 1,1);
  }
  return;
}

