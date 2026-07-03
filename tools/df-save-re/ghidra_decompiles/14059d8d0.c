// FUN_14059d8d0 @ 14059d8d0
// callees:
//   -> 14014a5c0 FUN_14014a5c0
//   -> 140050540 FUN_140050540
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140d89d60 FUN_140d89d60
//   -> 14000cb40 FUN_14000cb40
//   -> 14007b5f0 FUN_14007b5f0
//   -> 140002020 FUN_140002020
//   -> 1402cbb00 FUN_1402cbb00
//   -> 14000c780 FUN_14000c780
//   -> 14060f6b0 FUN_14060f6b0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14059d8d0(ushort *param_1,undefined8 *param_2,short param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_88 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_f8;
  param_2[2] = 0;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar2 = 0;
  if (1 < param_3) {
    iVar7 = (int)param_3;
    if (*param_1 < 0x5a) {
      iVar8 = iVar7 >> 0x1f;
      switch(*param_1) {
      case 0:
      case 0x44:
      case 0x45:
      case 0x48:
        if (0x95 < iVar7) {
          iVar8 = iVar7 / 0x96 + iVar8;
LAB_14059d9af:
          iVar7 = iVar8 - (iVar8 >> 0x1f);
        }
        break;
      case 0x38:
        if (14999 < iVar7) {
          iVar8 = iVar7 / 15000 + iVar8;
          goto LAB_14059d9af;
        }
        break;
      case 0x39:
      case 0x59:
        if (9999 < iVar7) {
          iVar8 = iVar7 / 10000 + iVar8;
          goto LAB_14059d9af;
        }
      }
    }
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    FUN_14014a5c0(iVar7,param_2);
    FUN_140050540(param_2,1,0x20);
  }
  iVar7 = *(int *)(param_1 + 0x44);
  if (1 < iVar7) {
    uVar1 = *param_1;
    if (uVar1 == 0x38) {
      bVar11 = iVar7 == 15000;
    }
    else {
      if ((uVar1 != 0x39) && (uVar1 != 0x59)) goto LAB_14059da1a;
      bVar11 = iVar7 == 10000;
    }
    if (bVar11) {
      FUN_14000c9f0(param_2,"unused ",7);
    }
  }
LAB_14059da1a:
  if ((param_1[6] & 1) != 0) {
    FUN_14000c9f0(param_2,"improvable ",0xb);
  }
  if ((param_1[6] & 2) != 0) {
    FUN_14000c9f0(param_2,"butcherable ",0xc);
  }
  if ((param_1[6] & 4) != 0) {
    FUN_14000c9f0(param_2,"millable ",9);
  }
  if ((param_1[6] & 8) != 0) {
    FUN_14000c9f0(param_2,"possibly buriable ",0x12);
  }
  if ((param_1[6] & 0x10) != 0) {
    FUN_14000c9f0(param_2,"unrotten ",9);
  }
  if ((param_1[6] & 0x20) != 0) {
    FUN_14000c9f0(param_2,"undisturbed ",0xc);
  }
  if ((param_1[6] & 0x40) != 0) {
    FUN_14000c9f0(param_2,"collected ",10);
  }
  if ((*(int *)(param_1 + 4) == -1) && ((param_1[6] & 0x80) != 0)) {
    FUN_14000c9f0(param_2,"sharpenable ",0xc);
  }
  if ((*(uint *)(param_1 + 6) & 0x100) != 0) {
    FUN_14000c9f0(param_2,"murdered ",9);
  }
  if ((*(uint *)(param_1 + 6) & 0x400) != 0) {
    FUN_14000c9f0(param_2,"empty ",6);
  }
  if ((*(uint *)(param_1 + 6) & 0x800) != 0) {
    FUN_14000c9f0(param_2,"processable ",0xc);
  }
  if ((*(uint *)(param_1 + 6) & 0x2000) != 0) {
    FUN_14000c9f0(param_2,"cookable ",9);
  }
  if ((*(uint *)(param_1 + 6) & 0x100000) != 0) {
    FUN_14000c9f0(param_2,"solid ",6);
  }
  if ((*(uint *)(param_1 + 6) & 0x4000) != 0) {
    FUN_14000c9f0(param_2,"extract-bearing plant ",0x16);
  }
  if ((*(uint *)(param_1 + 6) & 0x8000) != 0) {
    FUN_14000c9f0(param_2,"extract-bearing fish ",0x15);
  }
  if ((*(uint *)(param_1 + 6) & 0x10000) != 0) {
    FUN_14000c9f0(param_2,"extract-bearing small creature ",0x1f);
  }
  if ((*(uint *)(param_1 + 6) & 0x20000) != 0) {
    FUN_14000c9f0(param_2,"processable (to vial) ",0x16);
  }
  if ((*(uint *)(param_1 + 6) & 0x80000) != 0) {
    FUN_14000c9f0(param_2,"processable (to barrel) ",0x18);
  }
  if ((*(uint *)(param_1 + 6) & 0x200000) != 0) {
    FUN_14000c9f0(param_2,"tameable small creature ",0x18);
  }
  if ((*(uint *)(param_1 + 6) & 0x400000) != 0) {
    FUN_14000c9f0(param_2,"nearby ",7);
  }
  if ((*(uint *)(param_1 + 6) & 0x800000) != 0) {
    FUN_14000c9f0(param_2,"sand-bearing ",0xd);
  }
  if ((*(uint *)(param_1 + 6) & 0x1000000) != 0) {
    FUN_14000c9f0(param_2,"glass ",6);
  }
  if ((*(uint *)(param_1 + 6) & 0x80000000) != 0) {
    FUN_14000c9f0(param_2,"lye-bearing ",0xc);
  }
  if ((*(uint *)(param_1 + 6) & 0x2000000) != 0) {
    FUN_14000c9f0(param_2,"milk ",5);
  }
  if ((*(uint *)(param_1 + 6) & 0x4000000) != 0) {
    FUN_14000c9f0(param_2,"milkable ",9);
  }
  if ((*(uint *)(param_1 + 6) & 0x8000000) != 0) {
    FUN_14000c9f0(param_2,"finished good ",0xe);
  }
  if ((*(uint *)(param_1 + 6) & 0x10000000) != 0) {
    FUN_14000c9f0(param_2,"ammo ",5);
  }
  if ((*(uint *)(param_1 + 6) & 0x20000000) != 0) {
    FUN_14000c9f0(param_2,"furniture ",10);
  }
  if ((param_1[0xe] & 1) != 0) {
    FUN_14000c9f0(param_2,&DAT_140eded74,4);
  }
  if ((param_1[0xe] & 2) != 0) {
    FUN_14000c9f0(param_2,"dyeable ",8);
  }
  if ((*(uint *)(param_1 + 0xe) & 0x80000) != 0) {
    FUN_14000c9f0(param_2,"totemable ",10);
  }
  if ((param_1[0xe] & 0x10) != 0) {
    FUN_14000c9f0(param_2,"glass-making ",0xd);
  }
  if ((param_1[0xe] & 4) != 0) {
    FUN_14000c9f0(param_2,"dyed ",5);
  }
  if ((*(uint *)(param_1 + 0xe) & 0x400) != 0) {
    FUN_14000c9f0(param_2,"melt-designated ",0x10);
  }
  if ((*(int *)(param_1 + 4) == -1) && ((*(uint *)(param_1 + 0xe) & 0x200) != 0)) {
    FUN_14000c9f0(param_2,"deep material ",0xe);
  }
  if ((param_1[0xe] & 8) != 0) {
    FUN_14000c9f0(param_2,"sewn-imageless ",0xf);
  }
  if ((param_1[0xe] & 0x20) != 0) {
    FUN_14000c9f0(param_2,"screw ",6);
  }
  if (*(int *)(param_1 + 4) == -1) {
    if ((param_1[0xe] & 0x80) != 0) {
      FUN_14000c9f0(param_2,"fire-safe ",10);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x100) != 0) {
      FUN_14000c9f0(param_2,"magma-safe ",0xb);
    }
    if ((param_1[0xe] & 0x40) != 0) {
      FUN_14000c9f0(param_2,"building material ",0x12);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x800) != 0) {
      FUN_14000c9f0(param_2,"non-economic ",0xd);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x4000) != 0) {
      FUN_14000c9f0(param_2,"plant ",6);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x8000) != 0) {
      FUN_14000c9f0(param_2,"silk ",5);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x80000000) != 0) {
      FUN_14000c9f0(param_2,"yarn ",5);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x10000) != 0) {
      FUN_14000c9f0(param_2,"leather ",8);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x20000) != 0) {
      FUN_14000c9f0(param_2,"bone ",5);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x40000000) != 0) {
      FUN_14000c9f0(param_2,"hair/wool ",10);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x40000) != 0) {
      FUN_14000c9f0(param_2,"shell ",6);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x100000) != 0) {
      FUN_14000c9f0(param_2,"horn ",5);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x200000) != 0) {
      FUN_14000c9f0(param_2,"pearl ",6);
    }
  }
  if ((*(uint *)(param_1 + 0xe) & 0x400000) != 0) {
    FUN_14000c9f0(param_2,"plaster-containing ",0x13);
  }
  if (*(int *)(param_1 + 4) == -1) {
    if ((*(uint *)(param_1 + 0xe) & 0x1000000) != 0) {
      FUN_14000c9f0(param_2,"soap ",5);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x4000000) != 0) {
      FUN_14000c9f0(param_2,"ivory/tooth ",0xc);
    }
  }
  if ((*(uint *)(param_1 + 0xe) & 0x8000000) != 0) {
    FUN_14000c9f0(param_2,"lye/milk-free ",0xe);
  }
  if ((*(uint *)(param_1 + 0xe) & 0x10000000) != 0) {
    FUN_14000c9f0(param_2,"blunt ",6);
  }
  if ((*(uint *)(param_1 + 0xe) & 0x20000000) != 0) {
    FUN_14000c9f0(param_2,"unengraved ",0xb);
  }
  if ((param_1[0x12] & 1) != 0) {
    FUN_14000c9f0(param_2,"unimproved ",0xb);
  }
  if ((*(uint *)(param_1 + 0x12) & 0x800) != 0) {
    FUN_14000c9f0(param_2,"written-on ",0xb);
  }
  if ((param_1[0x12] & 4) != 0) {
    FUN_14000c9f0(param_2,"non-absorbent ",0xe);
  }
  if ((param_1[0x12] & 0x80) != 0) {
    FUN_14000c9f0(param_2,"food storage ",0xd);
  }
  if ((param_1[0x12] & 8) != 0) {
    FUN_14000c9f0(param_2,"non-pressed ",0xc);
  }
  if (*(int *)(param_1 + 4) == -1) {
    if ((param_1[0x12] & 0x40) != 0) {
      FUN_14000c9f0(param_2,"hard ",5);
    }
    if ((*(uint *)(param_1 + 0x12) & 0x100) != 0) {
      FUN_14000c9f0(param_2,"metal ",6);
    }
    if ((*(uint *)(param_1 + 0x12) & 0x200) != 0) {
      FUN_14000c9f0(param_2,"sand ",5);
    }
  }
  if ((*(uint *)(param_1 + 0x12) & 0x1000) != 0) {
    FUN_14000c9f0(param_2,"edged ",6);
  }
  if ((*(uint *)(param_1 + 0x12) & 0x2000) != 0) {
    FUN_14000c9f0(param_2,"on-ground ",10);
  }
  if (*(int *)(param_1 + 4) == -1) {
    if (*(int *)(param_1 + 0x40) != -1) {
      local_68 = 0xf;
      local_70 = 0;
      local_80 = 0;
      lVar3 = FUN_140d89d60(&DAT_141c53470,0);
      if (lVar3 == 0) {
        FUN_14000c9f0(&local_80,"unknown material",0x10);
      }
      else {
        if (*(longlong *)(lVar3 + 0x518) != 0) {
          FUN_14000cb40(&local_80,lVar3 + 0x508,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_80,&DAT_140e59864,1);
        }
        FUN_14000cb40(&local_80,lVar3 + 0xb8,0,0xffffffffffffffff);
      }
      uVar4 = FUN_14007b5f0(local_60,&local_80,"-bearing ");
      FUN_14000cb40(param_2,uVar4,0,0xffffffffffffffff);
      if (0xf < local_48) {
        FUN_140002020(local_60[0],local_48 + 1,1);
      }
      if (0xf < local_68) {
        FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1,1);
      }
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      uVar4 = FUN_1402cbb00(local_60,param_1 + 0x20,0x20);
      FUN_14000cb40(param_2,uVar4,0,0xffffffffffffffff);
      if (0xf < local_48) {
        FUN_140002020(local_60[0],local_48 + 1,1);
      }
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      uVar4 = FUN_14007b5f0(local_60,param_1 + 0x30,"-producing ");
      FUN_14000cb40(param_2,uVar4,0,0xffffffffffffffff);
      if (0xf < local_48) {
        FUN_140002020(local_60[0],local_48 + 1,1);
      }
    }
  }
  iVar7 = *(int *)(param_1 + 0x46);
  if (((-1 < iVar7) &&
      ((ulonglong)(longlong)iVar7 < (ulonglong)(DAT_141d77948 - DAT_141d77940 >> 3))) &&
     (lVar3 = *(longlong *)(DAT_141d77940 + (longlong)iVar7 * 8), lVar3 != 0)) {
    piVar6 = *(int **)(param_1 + 0x48);
    uVar10 = 0;
    uVar9 = (ulonglong)((longlong)*(int **)(param_1 + 0x4c) + (3 - (longlong)piVar6)) >> 2;
    if (*(int **)(param_1 + 0x4c) < piVar6) {
      uVar9 = uVar10;
    }
    if (uVar9 != 0) {
      do {
        FUN_14000cb40(param_2,*(longlong *)(*(longlong *)(lVar3 + 0x50) + (longlong)*piVar6 * 8) + 8
                      ,0,0xffffffffffffffff);
        FUN_14000c9f0(param_2,"-containing ");
        piVar6 = piVar6 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar9);
    }
  }
  switch(param_1[0x55]) {
  case 0:
    uVar4 = 0xe;
    pcVar5 = "liquid cooking";
    break;
  case 1:
    uVar4 = 0xc;
    pcVar5 = "liquid scoop";
    break;
  case 2:
    uVar4 = 0x1a;
    pcVar5 = "powder grinding receptacle";
    break;
  case 3:
    pcVar5 = "powder grinding";
    goto LAB_14059e5d8;
  case 4:
    uVar4 = 0xc;
    pcVar5 = "meat carving";
    break;
  case 5:
    uVar4 = 0xb;
    pcVar5 = "meat boning";
    break;
  case 6:
    uVar4 = 0xc;
    pcVar5 = "meat slicing";
    break;
  case 7:
    uVar4 = 0xd;
    pcVar5 = "meat cleaving";
    break;
  case 8:
    uVar4 = 0x13;
    pcVar5 = "meat-carving holder";
    break;
  case 9:
    uVar4 = 0xe;
    pcVar5 = "meal container";
    break;
  case 10:
    uVar4 = 0x10;
    pcVar5 = "liquid container";
    break;
  case 0xb:
    uVar4 = 0xc;
    pcVar5 = "food storage";
    break;
  case 0xc:
    uVar4 = 4;
    pcVar5 = "hive";
    break;
  case 0xd:
    uVar4 = 8;
    pcVar5 = "nest box";
    break;
  case 0xe:
    uVar4 = 0x16;
    pcVar5 = "small object container";
    break;
  case 0xf:
    uVar4 = 10;
    pcVar5 = "track cart";
    break;
  case 0x10:
    uVar4 = 0x13;
    pcVar5 = "heavy object hauler";
    break;
  case 0x11:
    uVar4 = 0xe;
    pcVar5 = "stand-and-work";
    break;
  case 0x12:
    uVar4 = 0xc;
    pcVar5 = "sheet roller";
    break;
  case 0x13:
    uVar4 = 0x16;
    pcVar5 = "folded sheet protector";
    break;
  case 0x14:
    uVar4 = 0x11;
    pcVar5 = "writing container";
    break;
  case 0x15:
    uVar4 = 8;
    pcVar5 = "bookcase";
    break;
  case 0x16:
    uVar4 = 0xe;
    pcVar5 = "display object";
    break;
  case 0x17:
    uVar4 = 0x12;
    pcVar5 = "offering placement";
    break;
  case 0x18:
    uVar4 = 10;
    pcVar5 = "divination";
    break;
  case 0x19:
    pcVar5 = "games of chance";
LAB_14059e5d8:
    uVar4 = 0xf;
    break;
  default:
    goto switchD_14059e42b_default;
  }
  FUN_14000c780(param_2,pcVar5,uVar4);
switchD_14059e42b_default:
  if ((*(uint *)(param_1 + 6) & 0x1000) == 0) {
    if ((*(uint *)(param_1 + 0xe) & 0x2000000) == 0) {
      if (param_1[0x55] != 0xffff) {
        if (((*param_1 == 0x55) && (param_1[1] == 0xffff)) &&
           ((param_1[2] == 0xffff && (*(int *)(param_1 + 4) == -1)))) goto LAB_14059e73f;
        if (param_1[0x55] != 0xffff) {
          FUN_14000c9f0(param_2,&DAT_140e59864,1);
        }
      }
      local_68 = 0xf;
      local_70 = 0;
      local_80 = 0;
      local_d0 = 0xffffffff;
      if (param_3 == 1) {
        local_d0 = 1;
      }
      local_90 = 0;
      local_98 = 0;
      local_a0 = 1;
      local_a8 = 0xffffffff;
      local_b0 = 0xffffffff;
      local_b8 = 0;
      local_c0 = 0;
      local_c8 = 0;
      local_d8 = *(undefined4 *)(param_1 + 4);
      FUN_14060f6b0(&local_80,*param_1,param_1[1],param_1[2]);
      FUN_14000cb40(param_2,&local_80,0,0xffffffffffffffff);
      if (0xf < local_68) {
        FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1,1);
      }
    }
    else {
      if (param_1[0x55] != 0xffff) {
        FUN_14000c9f0(param_2,&DAT_140e59864,1);
      }
      FUN_14000c9f0(param_2,"body part",9);
    }
  }
  else {
    if (param_1[0x55] != 0xffff) {
      FUN_14000c9f0(param_2,&DAT_140e59864,1);
    }
    FUN_14000c9f0(param_2,&DAT_140edeee0,3);
  }
LAB_14059e73f:
  if ((*(uint *)(param_1 + 6) & 0x40000000) != 0) {
    FUN_14000c9f0(param_2," that isn\'t a bin",0x11);
  }
  return;
}

