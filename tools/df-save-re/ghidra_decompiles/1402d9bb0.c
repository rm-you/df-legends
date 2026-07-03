// FUN_1402d9bb0 @ 1402d9bb0
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 14000c390 FUN_14000c390
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140002020 FUN_140002020
//   -> 140071310 FUN_140071310
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1402d9bb0(short param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  uint *local_60;
  undefined8 local_58;
  uint *local_50;
  uint *puStack_48;
  uint *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    iVar1 = FUN_14000c110(param_2);
    plVar7 = DAT_141d6dbe0;
    if (iVar1 == 0) {
      if ((longlong)DAT_141d6dbe8 - (longlong)DAT_141d6dbe0 >> 3 == 0) {
        return 0xffffffff;
      }
      local_50 = (uint *)0x0;
      puStack_48 = (uint *)0x0;
      puVar5 = (uint *)0x0;
      local_40 = (uint *)0x0;
      local_68[0] = 0;
      puVar3 = (uint *)((ulonglong)((longlong)DAT_141d6dbe8 + (7 - (longlong)DAT_141d6dbe0)) >> 3);
      if (DAT_141d6dbe8 < DAT_141d6dbe0) {
        puVar3 = puVar5;
      }
      puVar8 = (uint *)0x0;
      puVar4 = (uint *)0x0;
      puVar11 = puVar5;
      puVar12 = puVar5;
      local_60 = puVar3;
      if (puVar3 != (uint *)0x0) {
        do {
          if ((0 < *(int *)(*plVar7 + 0x40)) && ((**(byte **)(*plVar7 + 0x38) & 1) != 0)) {
            if ((local_68 < puVar8) && (puVar4 <= local_68)) {
              lVar6 = (longlong)local_68 - (longlong)puVar4;
              if (puVar8 == puVar12) {
                FUN_14000c390(&local_50);
                puVar3 = local_60;
                puVar4 = local_50;
                puVar8 = puStack_48;
                puVar12 = local_40;
              }
              if (puVar8 != (uint *)0x0) {
                *puVar8 = puVar4[lVar6 >> 2];
              }
            }
            else {
              if (puVar8 == puVar12) {
                FUN_14000c390(&local_50);
                puVar3 = local_60;
                puVar4 = local_50;
                puVar8 = puStack_48;
                puVar12 = local_40;
              }
              if (puVar8 != (uint *)0x0) {
                *puVar8 = (uint)puVar5;
              }
            }
            puVar8 = puVar8 + 1;
            puStack_48 = puVar8;
          }
          local_68[0] = (uint)puVar5 + 1;
          puVar5 = (uint *)(ulonglong)local_68[0];
          plVar7 = plVar7 + 1;
          puVar11 = (uint *)((longlong)puVar11 + 1);
        } while (puVar11 < puVar3);
      }
      uVar2 = 0;
      uVar9 = (longlong)puVar8 - (longlong)puVar4 >> 2;
      if (uVar9 == 0) {
        if (puVar4 == (uint *)0x0) {
          return 0xffffffff;
        }
        FUN_140002020(puVar4,(longlong)puVar12 - (longlong)puVar4 >> 2,4);
        return 0xffffffff;
      }
      if (1 < (uint)uVar9) {
        uVar2 = FUN_1409fc0c0();
        uVar2 = (uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (uVar9 & 0xffffffff)) + 1U);
      }
      uVar2 = puVar4[(int)uVar2];
      if (puVar4 == (uint *)0x0) {
        return uVar2;
      }
      lVar6 = (longlong)puVar12 - (longlong)puVar4 >> 2;
      uVar10 = 4;
      goto LAB_1402d9f28;
    }
    uVar2 = (int)((longlong)DAT_141d6dbe8 - (longlong)DAT_141d6dbe0 >> 3) - 1;
    if (-1 < (int)uVar2) {
      lVar6 = (longlong)(int)uVar2;
      do {
        iVar1 = FUN_140071310(plVar7[lVar6],param_2);
        if (iVar1 == 0) {
          if (uVar2 != 0xffffffff) {
            return uVar2;
          }
          goto LAB_1402d9ea8;
        }
        uVar2 = uVar2 - 1;
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
    uVar2 = 0xffffffff;
LAB_1402d9ea8:
    iVar1 = FUN_14000c110(param_2,"NO_MATGLOSS");
    if (iVar1 == 0) {
      return uVar2;
    }
    iVar1 = FUN_14000c110(param_2,&DAT_140e8cc54);
    if (iVar1 == 0) {
      return uVar2;
    }
    local_38 = 0xf;
    local_40 = (uint *)0x0;
    local_50 = (uint *)((ulonglong)local_50 & 0xffffffffffffff00);
    FUN_14000c780(&local_50,"Unrecognized Inorganic Token: ",0x1e);
    FUN_14000cb40(&local_50,param_2,0,0xffffffffffffffff);
    FUN_14014a240(&local_50);
  }
  else {
    if (param_1 != 7) {
      return 0xffffffff;
    }
    iVar1 = FUN_14000c110(param_2,&DAT_140eb58fc);
    uVar2 = 0xffffffff;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    iVar1 = FUN_14000c110(param_2,"CHARCOAL");
    if (iVar1 == 0) {
      return 1;
    }
    if (uVar2 != 0xffffffff) {
      return uVar2;
    }
    iVar1 = FUN_14000c110(param_2,"NO_MATGLOSS");
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    local_38 = 0xf;
    local_40 = (uint *)0x0;
    local_50 = (uint *)((ulonglong)local_50 & 0xffffffffffffff00);
    FUN_14000c780(&local_50,"Unrecognized Coal Token: ",0x19);
    FUN_14000cb40(&local_50,param_2,0,0xffffffffffffffff);
    FUN_14014a240(&local_50);
    uVar2 = 0xffffffff;
  }
  if (local_38 < 0x10) {
    return uVar2;
  }
  uVar10 = 1;
  lVar6 = local_38 + 1;
  puVar4 = local_50;
LAB_1402d9f28:
  FUN_140002020(puVar4,lVar6,uVar10);
  return uVar2;
}

