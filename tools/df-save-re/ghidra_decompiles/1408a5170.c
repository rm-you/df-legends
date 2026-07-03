// FUN_1408a5170 @ 1408a5170
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140051cf0 FUN_140051cf0
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140051b70 FUN_140051b70
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408a5170(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_98;
  uVar7 = 0;
  local_78 = 0;
  uVar8 = uVar7;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      iVar9 = 0;
      uVar5 = (uint)uVar7;
      lVar1 = *(longlong *)(*param_1 + uVar8);
      if ((*(uint *)(lVar1 + 0x148) & 0x10000) != 0) {
        puVar4 = operator_new(0x18);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        local_70 = puVar4;
        FUN_140051cf0(puVar4,"language_layer");
        FUN_140051cf0(puVar4,"[OBJECT:LANGUAGE]");
        local_48 = 0xf;
        local_50 = 0;
        local_60 = 0;
        FUN_14000c780(&local_60,"[WORD:",6);
        FUN_14000cb40(&local_60,lVar1,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_60,&DAT_140e7aafc,1);
        FUN_140051b70(puVar4,&local_60);
        if (*(longlong *)(lVar1 + 0x158) - *(longlong *)(lVar1 + 0x150) >> 3 != 0) {
          lVar6 = 0;
          do {
            FUN_140051b70(puVar4,*(undefined8 *)(*(longlong *)(lVar1 + 0x150) + lVar6));
            iVar9 = iVar9 + 1;
            lVar6 = lVar6 + 8;
            uVar5 = local_78;
          } while ((ulonglong)(longlong)iVar9 <
                   (ulonglong)(*(longlong *)(lVar1 + 0x158) - *(longlong *)(lVar1 + 0x150) >> 3));
        }
        ppuVar2 = (undefined8 **)param_2[1];
        if ((&local_70 < ppuVar2) && (ppuVar3 = (undefined8 **)*param_2, ppuVar3 <= &local_70)) {
          if (ppuVar2 == (undefined8 **)param_2[2]) {
            FUN_14000c2d0(param_2,1);
          }
          if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
            *(undefined8 *)param_2[1] =
                 *(undefined8 *)(*param_2 + ((longlong)&local_70 - (longlong)ppuVar3 >> 3) * 8);
          }
        }
        else {
          if (ppuVar2 == (undefined8 **)param_2[2]) {
            FUN_14000c2d0(param_2,1);
          }
          if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
            *(undefined8 *)param_2[1] = puVar4;
          }
        }
        param_2[1] = param_2[1] + 8;
        if (0xf < local_48) {
          FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
        }
      }
      local_78 = uVar5 + 1;
      uVar7 = (ulonglong)local_78;
      uVar8 = uVar8 + 8;
    } while ((ulonglong)(longlong)(int)local_78 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  uVar7 = 0;
  local_78 = 0;
  uVar8 = uVar7;
  if (param_1[4] - param_1[3] >> 3 != 0) {
    do {
      iVar9 = 0;
      uVar5 = (uint)uVar7;
      lVar1 = *(longlong *)(param_1[3] + uVar8);
      if ((*(byte *)(lVar1 + 0x50) & 1) != 0) {
        puVar4 = operator_new(0x18);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        local_70 = puVar4;
        FUN_140051cf0(puVar4,"language_layer");
        FUN_140051cf0(puVar4,"[OBJECT:LANGUAGE]");
        local_48 = 0xf;
        local_50 = 0;
        local_60 = 0;
        FUN_14000c780(&local_60,"[SYMBOL:",8);
        FUN_14000cb40(&local_60,lVar1,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_60,&DAT_140e7aafc,1);
        FUN_140051b70(puVar4,&local_60);
        if (*(longlong *)(lVar1 + 0x60) - *(longlong *)(lVar1 + 0x58) >> 3 != 0) {
          lVar6 = 0;
          do {
            FUN_140051b70(puVar4,*(undefined8 *)(lVar6 + *(longlong *)(lVar1 + 0x58)));
            iVar9 = iVar9 + 1;
            lVar6 = lVar6 + 8;
            uVar5 = local_78;
          } while ((ulonglong)(longlong)iVar9 <
                   (ulonglong)(*(longlong *)(lVar1 + 0x60) - *(longlong *)(lVar1 + 0x58) >> 3));
        }
        ppuVar2 = (undefined8 **)param_2[1];
        if ((&local_70 < ppuVar2) && (ppuVar3 = (undefined8 **)*param_2, ppuVar3 <= &local_70)) {
          if (ppuVar2 == (undefined8 **)param_2[2]) {
            FUN_14000c2d0(param_2,1);
          }
          if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
            *(undefined8 *)param_2[1] =
                 *(undefined8 *)(*param_2 + ((longlong)&local_70 - (longlong)ppuVar3 >> 3) * 8);
          }
        }
        else {
          if (ppuVar2 == (undefined8 **)param_2[2]) {
            FUN_14000c2d0(param_2,1);
          }
          if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
            *(undefined8 *)param_2[1] = puVar4;
          }
        }
        param_2[1] = param_2[1] + 8;
        if (0xf < local_48) {
          FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
        }
      }
      local_78 = uVar5 + 1;
      uVar7 = (ulonglong)local_78;
      uVar8 = uVar8 + 8;
    } while ((ulonglong)(longlong)(int)local_78 < (ulonglong)(param_1[4] - param_1[3] >> 3));
  }
  uVar7 = 0;
  local_78 = 0;
  uVar8 = uVar7;
  if (param_1[7] - param_1[6] >> 3 != 0) {
    do {
      iVar9 = 0;
      uVar5 = (uint)uVar7;
      lVar1 = *(longlong *)(param_1[6] + uVar8);
      if ((*(byte *)(lVar1 + 0x68) & 1) != 0) {
        puVar4 = operator_new(0x18);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        local_70 = puVar4;
        FUN_140051cf0(puVar4,"language_layer");
        FUN_140051cf0(puVar4,"[OBJECT:LANGUAGE]");
        local_48 = 0xf;
        local_50 = 0;
        local_60 = 0;
        FUN_14000c780(&local_60,"[TRANSLATION:",0xd);
        FUN_14000cb40(&local_60,lVar1,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_60,&DAT_140e7aafc,1);
        FUN_140051b70(puVar4,&local_60);
        if (*(longlong *)(lVar1 + 0x78) - *(longlong *)(lVar1 + 0x70) >> 3 != 0) {
          lVar6 = 0;
          do {
            FUN_140051b70(puVar4,*(undefined8 *)(lVar6 + *(longlong *)(lVar1 + 0x70)));
            iVar9 = iVar9 + 1;
            lVar6 = lVar6 + 8;
            uVar5 = local_78;
          } while ((ulonglong)(longlong)iVar9 <
                   (ulonglong)(*(longlong *)(lVar1 + 0x78) - *(longlong *)(lVar1 + 0x70) >> 3));
        }
        ppuVar2 = (undefined8 **)param_2[1];
        if ((&local_70 < ppuVar2) && (ppuVar3 = (undefined8 **)*param_2, ppuVar3 <= &local_70)) {
          if (ppuVar2 == (undefined8 **)param_2[2]) {
            FUN_14000c2d0(param_2,1);
          }
          if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
            *(undefined8 *)param_2[1] =
                 *(undefined8 *)(*param_2 + ((longlong)&local_70 - (longlong)ppuVar3 >> 3) * 8);
          }
        }
        else {
          if (ppuVar2 == (undefined8 **)param_2[2]) {
            FUN_14000c2d0(param_2,1);
          }
          if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
            *(undefined8 *)param_2[1] = puVar4;
          }
        }
        param_2[1] = param_2[1] + 8;
        if (0xf < local_48) {
          FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
        }
      }
      local_78 = uVar5 + 1;
      uVar7 = (ulonglong)local_78;
      uVar8 = uVar8 + 8;
    } while ((ulonglong)(longlong)(int)local_78 < (ulonglong)(param_1[7] - param_1[6] >> 3));
  }
  return;
}

