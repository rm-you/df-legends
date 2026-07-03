// FUN_140c30b20 @ 140c30b20
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 1407ad250 FUN_1407ad250
//   -> 1407d4c00 FUN_1407d4c00
//   -> 140004650 FUN_140004650
//   -> 14000c780 FUN_14000c780
//   -> 1407b52b0 FUN_1407b52b0
//   -> 140050d30 FUN_140050d30
//   -> 140050540 FUN_140050540
//   -> 14061fbe0 FUN_14061fbe0
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 14000c8b0 FUN_14000c8b0
//   -> 1402cdb40 FUN_1402cdb40
//   -> 1402cdbf0 FUN_1402cdbf0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14078e060 FUN_14078e060
//   -> 140527030 FUN_140527030
//   -> 140541a20 FUN_140541a20
//   -> 14073eb00 FUN_14073eb00
//   -> 140740270 FUN_140740270
//   -> 14000c1b0 FUN_14000c1b0
//   -> 140669610 FUN_140669610
//   -> 14014b430 FUN_14014b430
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c30b20(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 *puVar11;
  char *pcVar12;
  uint uVar13;
  short sVar14;
  undefined8 uVar15;
  undefined1 auStack_138 [32];
  uint *local_118;
  undefined1 local_110;
  undefined1 local_108;
  uint local_f8;
  undefined4 uStack_f4;
  short local_f0;
  undefined1 local_ee [6];
  undefined4 *local_e8;
  uint local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char local_c0;
  undefined7 uStack_bf;
  longlong local_b0;
  ulonglong local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  ulonglong local_88;
  char local_80;
  undefined7 uStack_7f;
  longlong local_70;
  ulonglong local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_c8 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_138;
  if (DAT_1410b67d8 - 4U < 2) {
    lVar6 = *(longlong *)(param_1 + 0xd60);
    if ((lVar6 == 0) || (puVar11 = (undefined8 *)(lVar6 + 0x20), *(longlong *)(lVar6 + 0x30) == 0))
    {
      puVar11 = (undefined8 *)(param_1 + 8);
    }
    if (param_2 == puVar11) {
      return;
    }
    FUN_14000c8b0(param_2,puVar11,0,0xffffffffffffffff);
    return;
  }
  local_d8 = param_1 + 8;
  sVar14 = *(short *)(param_1 + 0xa0);
  local_f0 = sVar14;
  lVar6 = FUN_140ca8390();
  if (lVar6 == 0) {
    local_e8 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)FUN_1407ad250(lVar6);
    local_e8 = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      lVar6 = FUN_1407d4c00(puVar7);
      local_d8 = lVar6;
      if (((puVar7[0x22] != -1) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) &&
         (0 < *(int *)(lVar8 + 0xd0))) {
        if ((**(byte **)(lVar8 + 200) & 4) == 0) {
          if ((*(int *)(lVar8 + 0xd0) < 1) || ((**(byte **)(lVar8 + 200) & 8) == 0))
          goto LAB_140c30efc;
          FUN_14000c780(param_2,"the force",9);
          if (DAT_1410b67d8 != 1) {
            FUN_140050540(param_2,1,0x20);
            local_88 = 0xf;
            local_90 = 0;
            local_a0 = 0;
            FUN_14061fbe0(lVar6,&local_a0);
            FUN_14000cb40(param_2,&local_a0,0,0xffffffffffffffff);
            goto LAB_140c30d5c;
          }
          if (DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3 == 0) {
            return;
          }
          lVar8 = FUN_140ca8390(*DAT_141c66fe8);
          if (lVar8 == 0) {
            return;
          }
          bVar2 = false;
          if ((*(int *)(param_1 + 0xc10) == -1) || (lVar9 = FUN_1407b52b0(lVar8), lVar9 == 0)) {
LAB_140c30e32:
            if ((((*(int *)(param_1 + 0x14c) != -1) && (*(longlong *)(lVar8 + 0x130) != 0)) &&
                (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + 0x60), lVar8 != 0)) &&
               (iVar5 = FUN_140050d30(*(int *)(param_1 + 0x14c),lVar8 + 0x48), iVar5 != -1))
            goto LAB_140c30e61;
            if (!bVar2) {
              return;
            }
          }
          else {
            if ((*(byte *)(lVar9 + 4) & 1) == 0) {
              iVar5 = FUN_140050d30(*local_e8,lVar9 + 8);
              bVar2 = false;
              if (iVar5 != -1) {
                bVar2 = true;
              }
              goto LAB_140c30e32;
            }
LAB_140c30e61:
            lVar6 = param_1 + 8;
          }
          FUN_140050540(param_2,1,0x20);
          local_88 = 0xf;
          local_90 = 0;
          local_a0 = 0;
          FUN_14061fbe0(lVar6,&local_a0);
          FUN_14000cb40(param_2,&local_a0,0,0xffffffffffffffff);
          goto LAB_140c30d5c;
        }
        FUN_14000c780(param_2,"the deity",9);
        if (*(char *)(lVar6 + 0x72) == '\0') {
          return;
        }
        if (DAT_1410b67d8 != 1) {
          FUN_140050540(param_2,1,0x20);
          local_88 = 0xf;
          local_90 = 0;
          local_a0 = 0;
          FUN_14061fbe0(lVar6,&local_a0);
          FUN_14000cb40(param_2,&local_a0,0,0xffffffffffffffff);
          goto LAB_140c30d5c;
        }
        if (DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3 == 0) {
          return;
        }
        bVar2 = false;
        lVar8 = FUN_140ca8390(*DAT_141c66fe8);
        if (lVar8 == 0) {
          return;
        }
        if ((*(int *)(param_1 + 0xc10) == -1) || (lVar9 = FUN_1407b52b0(lVar8), lVar9 == 0)) {
LAB_140c30c9a:
          if (((*(int *)(param_1 + 0x14c) != -1) && (*(longlong *)(lVar8 + 0x130) != 0)) &&
             ((lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + 0x60), lVar8 != 0 &&
              (iVar5 = FUN_140050d30(*(int *)(param_1 + 0x14c),lVar8 + 0x48), iVar5 != -1))))
          goto LAB_140c30cc9;
          if (!bVar2) {
            return;
          }
        }
        else {
          if ((*(byte *)(lVar9 + 4) & 1) == 0) {
            iVar5 = FUN_140050d30(*local_e8,lVar9 + 8);
            if (iVar5 != -1) {
              bVar2 = true;
            }
            goto LAB_140c30c9a;
          }
LAB_140c30cc9:
          lVar6 = param_1 + 8;
        }
        FUN_140050540(param_2,1,0x20);
        local_88 = 0xf;
        local_90 = 0;
        local_a0 = 0;
        FUN_14061fbe0(lVar6,&local_a0);
        FUN_14000cb40(param_2,&local_a0,0,0xffffffffffffffff);
LAB_140c30d5c:
        if (local_88 < 0x10) {
          return;
        }
        FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
        return;
      }
LAB_140c30efc:
      sVar4 = *(short *)(puVar7 + 0x2b);
      local_f0 = sVar14;
      if (sVar4 != -1) {
        sVar14 = sVar4;
        local_f0 = sVar4;
      }
    }
  }
  local_48 = 0xf;
  local_50 = 0;
  local_60 = 0;
  if ((*(longlong *)(param_1 + 0xd60) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xd60) + 0x30) != 0)) {
    FUN_14000c780(param_2,&DAT_140e59f70,4);
    FUN_14000cb40(param_2,*(longlong *)(param_1 + 0xd60) + 0x20,0,0xffffffffffffffff);
    goto LAB_140c31f6b;
  }
  if (DAT_1410b67dc == 1) {
    if (DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3 == 0) {
LAB_140c30fc5:
      local_f8 = 0xffffffff;
    }
    else {
      local_f8 = (uint)*(ushort *)(*DAT_141c66fe8 + 0xa4);
    }
  }
  else {
    if (DAT_1410b67dc != 0) goto LAB_140c30fc5;
    local_f8 = (uint)DAT_141c36b8c;
  }
  local_a8 = 0xf;
  local_b0 = 0;
  local_c0 = '\0';
  local_68 = 0xf;
  local_70 = 0;
  local_80 = '\0';
  local_e0 = (uint)(sVar14 != 0x68);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    uVar13 = local_f8;
    if (&local_c0 != (char *)(param_1 + 0x80)) {
      FUN_14000c8b0(&local_c0,(char *)(param_1 + 0x80),0,0xffffffffffffffff);
      uVar13 = local_f8;
    }
    goto LAB_140c31d4d;
  }
  sVar4 = *(short *)(param_1 + 300);
  sVar1 = *(short *)(param_1 + 0xa4);
  cVar3 = FUN_1402cdb40(&DAT_141d6dd30,sVar1,sVar4,local_f0);
  uVar13 = local_f8;
  if (cVar3 != '\0') {
    local_108 = 1;
    local_110 = 0;
    local_118 = (uint *)CONCAT62(local_118._2_6_,local_f0);
    FUN_1402cdbf0(&DAT_141d6dd30,&local_c0,sVar1,sVar4);
    uVar13 = local_f8;
    goto LAB_140c31d4d;
  }
  switch(sVar14) {
  case 0:
    uVar15 = 5;
    pcVar12 = "Miner";
    break;
  case 1:
    uVar15 = 10;
    pcVar12 = "Woodworker";
    break;
  case 2:
    uVar15 = 9;
    pcVar12 = "Carpenter";
    break;
  case 3:
    uVar15 = 6;
    pcVar12 = "Bowyer";
    break;
  case 4:
    uVar15 = 10;
    pcVar12 = "Woodcutter";
    break;
  case 5:
    uVar15 = 0xb;
    pcVar12 = "Stoneworker";
    break;
  case 6:
    uVar15 = 8;
    pcVar12 = "Engraver";
    break;
  case 7:
    uVar15 = 5;
    pcVar12 = "Mason";
    break;
  case 8:
    uVar15 = 6;
    pcVar12 = "Ranger";
    break;
  case 9:
    uVar15 = 0x10;
    pcVar12 = "Animal Caretaker";
    break;
  case 10:
    uVar15 = 0xe;
    pcVar12 = "Animal Trainer";
    break;
  case 0xb:
    uVar15 = 6;
    pcVar12 = "Hunter";
    break;
  case 0xc:
    uVar15 = 7;
    pcVar12 = "Trapper";
    break;
  case 0xd:
    uVar15 = 0x10;
    pcVar12 = "Animal Dissector";
    break;
  case 0xe:
    uVar15 = 10;
    pcVar12 = "Metalsmith";
    break;
  case 0xf:
    uVar15 = 0x10;
    pcVar12 = "Furnace Operator";
    break;
  case 0x10:
    uVar15 = 0xb;
    pcVar12 = "Weaponsmith";
    break;
  case 0x11:
    uVar15 = 7;
    pcVar12 = "Armorer";
    break;
  case 0x12:
    uVar15 = 10;
    pcVar12 = "Blacksmith";
    break;
  case 0x13:
    uVar15 = 0xc;
    pcVar12 = "Metalcrafter";
    break;
  case 0x14:
    uVar15 = 7;
    pcVar12 = "Jeweler";
    break;
  case 0x15:
    uVar15 = 10;
    pcVar12 = "Gem Cutter";
    break;
  case 0x16:
    uVar15 = 10;
    pcVar12 = "Gem Setter";
    break;
  case 0x17:
    uVar15 = 9;
    pcVar12 = "Craftsman";
    break;
  case 0x18:
    uVar15 = 0xb;
    pcVar12 = "Woodcrafter";
    break;
  case 0x19:
    uVar15 = 0xc;
    pcVar12 = "Stonecrafter";
    break;
  case 0x1a:
    uVar15 = 0xd;
    pcVar12 = "Leatherworker";
    break;
  case 0x1b:
    uVar15 = 0xb;
    pcVar12 = "Bone Carver";
    break;
  case 0x1c:
    uVar15 = 6;
    pcVar12 = "Weaver";
    break;
  case 0x1d:
    uVar15 = 8;
    pcVar12 = "Clothier";
    break;
  case 0x1e:
    uVar15 = 10;
    pcVar12 = "Glassmaker";
    break;
  case 0x1f:
    uVar15 = 6;
    pcVar12 = "Potter";
    break;
  case 0x20:
    uVar15 = 6;
    pcVar12 = "Glazer";
    break;
  case 0x21:
    uVar15 = 10;
    pcVar12 = "Wax Worker";
    break;
  case 0x22:
    FUN_14000c9f0(&local_c0,"Strand Extractor",0x10);
    uVar13 = local_f8;
    goto LAB_140c31bb4;
  case 0x23:
    uVar15 = 0xe;
    pcVar12 = "Fishery Worker";
    break;
  case 0x24:
    uVar15 = 9;
    pcVar12 = "Fisherman";
    break;
  case 0x25:
    uVar15 = 0xe;
    pcVar12 = "Fish Dissector";
    break;
  case 0x26:
    uVar15 = 0xc;
    pcVar12 = "Fish Cleaner";
    break;
  case 0x27:
    uVar15 = 6;
    pcVar12 = "Farmer";
    break;
  case 0x28:
    uVar15 = 0xc;
    pcVar12 = "Cheese Maker";
    break;
  case 0x29:
    uVar15 = 6;
    pcVar12 = "Milker";
    break;
  case 0x2a:
    uVar15 = 4;
    pcVar12 = "Cook";
    break;
  case 0x2b:
    uVar15 = 8;
    pcVar12 = "Thresher";
    break;
  case 0x2c:
    uVar15 = 6;
    pcVar12 = "Miller";
    break;
  case 0x2d:
    uVar15 = 7;
    pcVar12 = "Butcher";
    break;
  case 0x2e:
    uVar15 = 6;
    pcVar12 = "Tanner";
    break;
  case 0x2f:
    uVar15 = 4;
    pcVar12 = "Dyer";
    break;
  case 0x30:
    uVar15 = 7;
    pcVar12 = "Planter";
    break;
  case 0x31:
    uVar15 = 9;
    pcVar12 = "Herbalist";
    break;
  case 0x32:
    uVar15 = 6;
    pcVar12 = "Brewer";
    break;
  case 0x33:
    uVar15 = 10;
    pcVar12 = "Soap Maker";
    break;
  case 0x34:
    uVar15 = 0xc;
    pcVar12 = "Potash Maker";
    break;
  case 0x35:
    uVar15 = 9;
    pcVar12 = "Lye Maker";
    break;
  case 0x36:
    uVar15 = 0xb;
    pcVar12 = "Wood Burner";
    break;
  case 0x37:
    uVar15 = 7;
    pcVar12 = "Shearer";
    break;
  case 0x38:
    uVar15 = 7;
    pcVar12 = "Spinner";
    break;
  case 0x39:
    uVar15 = 7;
    pcVar12 = "Presser";
    break;
  case 0x3a:
    uVar15 = 9;
    pcVar12 = "Beekeeper";
    break;
  case 0x3b:
    uVar15 = 8;
    pcVar12 = "Engineer";
    break;
  case 0x3c:
    uVar15 = 8;
    pcVar12 = "Mechanic";
    break;
  case 0x3d:
    uVar15 = 0xe;
    pcVar12 = "Siege Engineer";
    break;
  case 0x3e:
    uVar15 = 0xe;
    pcVar12 = "Siege Operator";
    break;
  case 0x3f:
    uVar15 = 0xd;
    pcVar12 = "Pump Operator";
    break;
  case 0x40:
    uVar15 = 5;
    pcVar12 = "Clerk";
    break;
  case 0x41:
    uVar15 = 0xd;
    pcVar12 = "Administrator";
    break;
  case 0x42:
    uVar15 = 6;
    pcVar12 = "Trader";
    break;
  case 0x43:
    uVar15 = 9;
    pcVar12 = "Architect";
    break;
  case 0x44:
    uVar15 = 9;
    pcVar12 = "Alchemist";
    break;
  case 0x45:
    uVar15 = 6;
    pcVar12 = "Doctor";
    break;
  case 0x46:
    uVar15 = 9;
    pcVar12 = "Diagnoser";
    break;
  case 0x47:
    uVar15 = 0xb;
    pcVar12 = "Bone Doctor";
    break;
  case 0x48:
    uVar15 = 7;
    pcVar12 = "Suturer";
    break;
  case 0x49:
    uVar15 = 7;
    pcVar12 = "Surgeon";
    break;
  case 0x4a:
    uVar15 = 8;
    pcVar12 = "Merchant";
    break;
  case 0x4b:
    uVar15 = 9;
    pcVar12 = "Hammerman";
    break;
  case 0x4c:
    uVar15 = 0xb;
    pcVar12 = "Hammer Lord";
    break;
  case 0x4d:
    uVar15 = 8;
    pcVar12 = "Spearman";
    break;
  case 0x4e:
    uVar15 = 0xb;
    pcVar12 = "Spearmaster";
    break;
  case 0x4f:
    uVar15 = 0xb;
    pcVar12 = "Crossbowman";
    break;
  case 0x50:
    uVar15 = 0x11;
    pcVar12 = "Elite Crossbowman";
    break;
  case 0x51:
    uVar15 = 8;
    pcVar12 = "Wrestler";
    break;
  case 0x52:
    uVar15 = 0xe;
    pcVar12 = "Elite Wrestler";
    break;
  case 0x53:
    uVar15 = 6;
    pcVar12 = "Axeman";
    break;
  case 0x54:
    uVar15 = 8;
    pcVar12 = "Axe Lord";
    break;
  case 0x55:
    uVar15 = 9;
    pcVar12 = "Swordsman";
    break;
  case 0x56:
    uVar15 = 0xb;
    pcVar12 = "Swordmaster";
    break;
  case 0x57:
    uVar15 = 7;
    pcVar12 = "Maceman";
    break;
  case 0x58:
    uVar15 = 9;
    pcVar12 = "Mace Lord";
    break;
  case 0x59:
    uVar15 = 7;
    pcVar12 = "Pikeman";
    break;
  case 0x5a:
    uVar15 = 10;
    pcVar12 = "Pikemaster";
    break;
  case 0x5b:
    uVar15 = 6;
    pcVar12 = "Bowman";
    break;
  case 0x5c:
    uVar15 = 0xc;
    pcVar12 = "Elite Bowman";
    break;
  case 0x5d:
    uVar15 = 10;
    pcVar12 = "Blowgunner";
    break;
  case 0x5e:
    uVar15 = 0x11;
    pcVar12 = "Master Blowgunner";
    break;
  case 0x5f:
    uVar15 = 6;
    pcVar12 = "Lasher";
    break;
  case 0x60:
    uVar15 = 0xd;
    pcVar12 = "Master Lasher";
    break;
  case 0x61:
    uVar15 = 7;
    pcVar12 = "Recruit";
    break;
  case 0x62:
    uVar15 = 7;
    pcVar12 = "Hunting";
    pcVar10 = &local_80;
    goto LAB_140c31bab;
  case 99:
    uVar15 = 3;
    pcVar12 = "War";
    pcVar10 = &local_80;
    goto LAB_140c31bab;
  case 100:
    uVar15 = 0xc;
    pcVar12 = "Master Thief";
    break;
  case 0x65:
    uVar15 = 5;
    pcVar12 = "Thief";
    break;
  default:
    if (*(int *)(param_1 + 0xa4) == (int)(short)local_f8) {
      FUN_14000c780(&local_c0,"Peasant",7);
    }
    goto LAB_140c31bb4;
  case 0x67:
    if (((-1 < sVar1) &&
        ((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
       (-1 < sVar4)) {
      lVar6 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
      if ((((ulonglong)(longlong)sVar4 <
            (ulonglong)(*(longlong *)(lVar6 + 0x180) - *(longlong *)(lVar6 + 0x178) >> 3)) &&
          (pcVar12 = (char *)(*(longlong *)(*(longlong *)(lVar6 + 0x178) + (longlong)sVar4 * 8) +
                             0x100), &local_c0 != pcVar12)) &&
         (FUN_14000c8b0(&local_c0,pcVar12,0,0xffffffffffffffff), local_b0 != 0)) {
LAB_140c31a97:
        pcVar12 = (char *)CONCAT71(uStack_bf,local_c0);
        pcVar10 = &local_c0;
        if (0xf < local_a8) {
          pcVar10 = pcVar12;
        }
        uVar13 = local_f8;
        if ('`' < *pcVar10) {
          pcVar10 = &local_c0;
          if (0xf < local_a8) {
            pcVar10 = pcVar12;
          }
          if (*pcVar10 < '{') {
            pcVar10 = &local_c0;
            if (0xf < local_a8) {
              pcVar10 = pcVar12;
            }
            *pcVar10 = *pcVar10 + -0x20;
          }
        }
        goto LAB_140c31bb4;
      }
    }
    uVar15 = 5;
    pcVar12 = "Child";
    break;
  case 0x68:
    if (((-1 < sVar1) &&
        ((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
       (-1 < sVar4)) {
      lVar6 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
      if ((((ulonglong)(longlong)sVar4 <
            (ulonglong)(*(longlong *)(lVar6 + 0x180) - *(longlong *)(lVar6 + 0x178) >> 3)) &&
          (pcVar12 = (char *)(*(longlong *)(*(longlong *)(lVar6 + 0x178) + (longlong)sVar4 * 8) +
                             0xc0), &local_c0 != pcVar12)) &&
         (FUN_14000c8b0(&local_c0,pcVar12,0,0xffffffffffffffff), local_b0 != 0)) goto LAB_140c31a97;
    }
    uVar15 = 4;
    pcVar12 = "Baby";
    break;
  case 0x69:
    uVar15 = 5;
    pcVar12 = "Drunk";
    break;
  case 0x6a:
    uVar15 = 0xe;
    pcVar12 = "Monster Slayer";
    break;
  case 0x6b:
    uVar15 = 5;
    pcVar12 = "Scout";
    break;
  case 0x6c:
    uVar15 = 0xc;
    pcVar12 = "Beast Hunter";
    break;
  case 0x6d:
    uVar15 = 8;
    pcVar12 = "Snatcher";
    break;
  case 0x6e:
    uVar15 = 9;
    pcVar12 = "Mercenary";
    break;
  case 0x6f:
    uVar15 = 6;
    pcVar12 = "Gelder";
    break;
  case 0x70:
    uVar15 = 9;
    pcVar12 = "Performer";
    break;
  case 0x71:
    uVar15 = 4;
    pcVar12 = "Poet";
    break;
  case 0x72:
    uVar15 = 4;
    pcVar12 = "Bard";
    break;
  case 0x73:
    uVar15 = 6;
    pcVar12 = "Dancer";
    break;
  case 0x74:
    uVar15 = 4;
    pcVar12 = "Sage";
    break;
  case 0x75:
    uVar15 = 7;
    pcVar12 = "Scholar";
    break;
  case 0x76:
    uVar15 = 0xb;
    pcVar12 = "Philosopher";
    break;
  case 0x77:
    uVar15 = 0xd;
    pcVar12 = "Mathematician";
    break;
  case 0x78:
    uVar15 = 9;
    pcVar12 = "Historian";
    break;
  case 0x79:
    uVar15 = 10;
    pcVar12 = "Astronomer";
    break;
  case 0x7a:
    uVar15 = 10;
    pcVar12 = "Naturalist";
    break;
  case 0x7b:
    uVar15 = 7;
    pcVar12 = "Chemist";
    break;
  case 0x7c:
    uVar15 = 10;
    pcVar12 = "Geographer";
    break;
  case 0x7d:
    uVar15 = 6;
    pcVar12 = "Scribe";
    break;
  case 0x7e:
    uVar15 = 10;
    pcVar12 = "Papermaker";
    break;
  case 0x7f:
    uVar15 = 10;
    pcVar12 = "Bookbinder";
    break;
  case 0x80:
    uVar15 = 0xd;
    pcVar12 = "Tavern Keeper";
    break;
  case 0x81:
    uVar15 = 8;
    pcVar12 = "Criminal";
    break;
  case 0x82:
    uVar15 = 7;
    pcVar12 = "Peddler";
    break;
  case 0x83:
    uVar15 = 7;
    pcVar12 = "Prophet";
    break;
  case 0x84:
    uVar15 = 7;
    pcVar12 = "Pilgrim";
    break;
  case 0x85:
    uVar15 = 4;
    pcVar12 = "Monk";
    break;
  case 0x86:
    uVar15 = 9;
    pcVar12 = "Messenger";
  }
  pcVar10 = &local_c0;
LAB_140c31bab:
  FUN_14000c780(pcVar10,pcVar12,uVar15);
  uVar13 = local_f8;
LAB_140c31bb4:
  lVar6 = FUN_140ca8390(param_1);
  if (lVar6 != 0) {
    local_118 = &local_f8;
    lVar6 = FUN_14078e060(lVar6,0xffffffff,local_ee,&local_d0);
    if ((lVar6 != 0) && (lVar8 = FUN_140ca8390(param_1), lVar8 != 0)) {
      pcVar12 = (char *)FUN_140527030(lVar6,*(undefined1 *)(lVar8 + 6));
      if (&local_c0 != pcVar12) {
        FUN_14000c8b0(&local_c0,pcVar12,0,0xffffffffffffffff);
      }
      if (0 < *(short *)(lVar6 + 0x2c8)) {
        FUN_140541a20(local_d0,CONCAT44(uStack_f4,local_f8),&local_60);
      }
    }
  }
  lVar6 = FUN_140ca8390(param_1);
  sVar14 = local_f0;
  if ((lVar6 != 0) && (sVar4 = FUN_14073eb00(lVar6,4,0xffffffff), sVar14 = local_f0, 0 < sVar4)) {
    if (((ushort)(local_f0 - 0x67U) < 2) && (local_b0 != 0)) {
      FUN_14000c9f0(&local_c0," Slave",6);
    }
    else {
      FUN_14000c780(&local_c0,"Slave",5);
    }
  }
  lVar6 = FUN_140ca8390(param_1);
  if (((lVar6 != 0) && (sVar4 = FUN_14073eb00(lVar6,6,0xffffffff), 0 < sVar4)) ||
     ((lVar6 = FUN_140ca8390(param_1), lVar6 != 0 &&
      (sVar4 = FUN_140740270(lVar6,7,0xffffffff), 0 < sVar4)))) {
    if (((ushort)(sVar14 - 0x67U) < 2) && (local_b0 != 0)) {
      FUN_14000c9f0(&local_c0," Prisoner",9);
    }
    else {
      FUN_14000c780(&local_c0,"Prisoner",8);
    }
  }
LAB_140c31d4d:
  if (((char)local_e0 == '\0') && (*(longlong *)(param_1 + 0x90) == 0)) {
    FUN_14000c1b0(param_2,0);
  }
  else {
    FUN_14000c780(param_2,&DAT_140e59f70,4);
  }
  if (local_70 != 0) {
    FUN_14000cb40(param_2,&local_80,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2,&DAT_140e59864,1);
  }
  if (((*(uint *)(param_1 + 0x118) & 0x1000) != 0) && (*(char *)(param_1 + 0x81c) == '\0')) {
    if (param_2[2] != 0) {
      puVar11 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar11 = (undefined8 *)*param_2;
      }
      if (*(char *)((longlong)puVar11 + param_2[2] + -1) != ' ') {
        FUN_140050540(param_2,1,0x20);
      }
    }
    if ((local_b0 == 0) && (*(int *)(param_1 + 0xa4) == (int)(short)uVar13)) {
      uVar15 = 5;
      pcVar12 = "Ghost";
    }
    else {
      uVar15 = 8;
      pcVar12 = "Ghostly ";
    }
    FUN_14000c9f0(param_2,pcVar12,uVar15);
  }
  if (*(int *)(param_1 + 0xa4) != (int)(short)uVar13) {
    local_88 = 0xf;
    local_90 = 0;
    local_a0 = 0;
    FUN_140669610(*(undefined2 *)(param_1 + 0xa4),&local_a0,0,*(undefined2 *)(param_1 + 300));
    FUN_14014b430(&local_a0);
    FUN_14000cb40(param_2,&local_a0,0,0xffffffffffffffff);
    if (local_b0 != 0) {
      FUN_140050540(param_2,1,0x20);
    }
    if (0xf < local_88) {
      FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
    }
  }
  if (*(char *)(param_1 + 0x81c) != '\0') {
    if (param_2[2] != 0) {
      FUN_140050540(param_2,1,0x20);
    }
    FUN_14000cb40(param_2,param_1 + 0x820,0,0xffffffffffffffff);
    if (local_b0 != 0) {
      FUN_140050540(param_2,1,0x20);
    }
  }
  FUN_14000cb40(param_2,&local_c0,0,0xffffffffffffffff);
  if (0xf < local_68) {
    FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1,1);
  }
  local_68 = 0xf;
  local_70 = 0;
  local_80 = '\0';
  if (0xf < local_a8) {
    FUN_140002020(CONCAT71(uStack_bf,local_c0),local_a8 + 1,1);
  }
LAB_140c31f6b:
  lVar6 = local_d8;
  if (*(char *)(local_d8 + 0x72) == '\0') goto LAB_140c320d1;
  if (DAT_1410b67d8 == 1) {
    if (DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3 == 0) goto LAB_140c320d1;
    bVar2 = false;
    lVar8 = FUN_140ca8390(*DAT_141c66fe8);
    if (lVar8 == 0) goto LAB_140c320d1;
    if ((*(int *)(param_1 + 0xc10) == -1) || (lVar9 = FUN_1407b52b0(lVar8), lVar9 == 0)) {
LAB_140c31ffc:
      if ((((*(int *)(param_1 + 0x14c) != -1) && (*(longlong *)(lVar8 + 0x130) != 0)) &&
          (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + 0x60), lVar8 != 0)) &&
         (iVar5 = FUN_140050d30(*(int *)(param_1 + 0x14c),lVar8 + 0x48), iVar5 != -1))
      goto LAB_140c3202b;
      if (!bVar2) goto LAB_140c320d1;
    }
    else {
      if ((*(byte *)(lVar9 + 4) & 1) == 0) {
        if ((local_e8 != (undefined4 *)0x0) &&
           (iVar5 = FUN_140050d30(*local_e8,lVar9 + 8), bVar2 = false, iVar5 != -1)) {
          bVar2 = true;
        }
        goto LAB_140c31ffc;
      }
LAB_140c3202b:
      lVar6 = param_1 + 8;
    }
    FUN_140050540(param_2,1,0x20);
    local_88 = 0xf;
    local_90 = 0;
    local_a0 = 0;
    FUN_14061fbe0(lVar6,&local_a0);
    FUN_14000cb40(param_2,&local_a0,0,0xffffffffffffffff);
  }
  else {
    FUN_140050540(param_2,1,0x20);
    local_88 = 0xf;
    local_90 = 0;
    local_a0 = 0;
    FUN_14061fbe0(lVar6,&local_a0);
    FUN_14000cb40(param_2,&local_a0,0,0xffffffffffffffff);
  }
  if (0xf < local_88) {
    FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
  }
LAB_140c320d1:
  if (local_50 != 0) {
    FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
  }
  if (0xf < local_48) {
    FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
  }
  return;
}

