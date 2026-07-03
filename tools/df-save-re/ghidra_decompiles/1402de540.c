// FUN_1402de540 @ 1402de540
// callees:
//   -> 140051cf0 FUN_140051cf0
//   -> 140071310 FUN_140071310
//   -> 14000c390 FUN_14000c390
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020


void FUN_1402de540(undefined2 param_1,ulonglong *param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int local_res8 [2];
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  
  local_70 = 0;
  lStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  switch(param_1) {
  case 0:
    FUN_140051cf0(&local_70,"NATURE",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "FOOD";
    break;
  case 1:
    FUN_140051cf0(&local_70,"NATURE",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "PRIMITIVE";
    break;
  case 2:
  case 0x55:
  case 0x66:
    FUN_140051cf0(&local_70,"FLOWERY",param_3,param_4,0xfffffffffffffffe);
  case 0x31:
  case 0x61:
  case 0x7f:
  case 0x80:
    pcVar9 = "THOUGHT";
    break;
  case 3:
    pcVar9 = "BALANCE";
    break;
  case 4:
    pcVar9 = "FLOWERY";
    break;
  case 5:
  case 0xb:
  case 0x10:
  case 0x21:
  case 0x59:
    pcVar9 = "NEW";
    break;
  case 6:
    puVar8 = &DAT_140eb6ee4;
    goto LAB_1402de62b;
  case 7:
    pcVar9 = "BOUNDARY";
    break;
  case 8:
    pcVar9 = "NAME_CAVE";
    break;
  case 9:
    pcVar9 = "VIOLENT";
    goto LAB_1402de65f;
  case 10:
  case 0x27:
  case 0x2c:
  case 0x2d:
    goto switchD_1402de5aa_caseD_a;
  case 0xc:
  case 0x5c:
  case 0x7b:
    goto switchD_1402de5aa_caseD_c;
  case 0xd:
  case 0x2e:
    pcVar9 = "PEACE";
    goto LAB_1402de67b;
  case 0xe:
  case 0x53:
  case 0x69:
    goto switchD_1402de5aa_caseD_e;
  case 0x11:
    FUN_140051cf0(&local_70,"FLOWERY",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "DANCE";
    break;
  case 0x13:
    FUN_140051cf0(&local_70,&DAT_140eb6eec,param_3,param_4,0xfffffffffffffffe);
  case 0x39:
    pcVar9 = "COLOR";
    goto LAB_1402de6c3;
  case 0x14:
    goto switchD_1402de5aa_caseD_14;
  case 0x15:
  case 0x6a:
    goto switchD_1402de5aa_caseD_15;
  case 0x16:
    goto switchD_1402de5aa_caseD_16;
  case 0x17:
    FUN_140051cf0(&local_70,&DAT_140ea7c04,param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "UGLY";
    goto LAB_1402de65f;
  case 0x18:
    pcVar9 = "LEADER";
    goto LAB_1402de6fb;
  case 0x19:
    pcVar9 = "DEATH";
    goto LAB_1402de717;
  case 0x1d:
  case 0x42:
  case 0x43:
    goto switchD_1402de5aa_caseD_1d;
  case 0x1e:
    pcVar9 = "FAMILY";
    goto LAB_1402de733;
  case 0x20:
    FUN_140051cf0(&local_70,"MYSTERY",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "MYTHIC";
    break;
  case 0x22:
    pcVar9 = "FESTIVAL";
LAB_1402de733:
    FUN_140051cf0(&local_70,pcVar9,param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "DOMESTIC";
    break;
  case 0x23:
    pcVar9 = "FIRE";
    break;
  case 0x24:
  case 0x25:
    pcVar9 = "NATURE";
    goto LAB_1402de780;
  case 0x26:
    pcVar9 = "FOOD";
    plVar7 = &local_70;
    goto LAB_1402dec65;
  case 0x28:
  case 0x5f:
    goto switchD_1402de5aa_caseD_28;
  case 0x29:
    pcVar9 = "FREEDOM";
    break;
  case 0x2a:
    FUN_140051cf0(&local_70,"GAMES",param_3,param_4,0xfffffffffffffffe);
    FUN_140051cf0(&local_70,&DAT_140eb3c34);
  case 0x7c:
    pcVar9 = "WEALTH";
    break;
  case 0x2b:
    pcVar9 = "GAMES";
    break;
  case 0x2f:
    FUN_140051cf0(&local_70,"PEACE",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "DOMESTIC";
    goto LAB_1402de67b;
  case 0x30:
    FUN_140051cf0(&local_70,"NATURE",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "PRIMITIVE";
    goto LAB_1402de65f;
  case 0x32:
    FUN_140051cf0(&local_70,&DAT_140ea7c04,param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "SUBORDINATE";
    break;
  case 0x33:
    pcVar9 = "COLOR";
    goto LAB_1402de844;
  case 0x34:
  case 0x3d:
    pcVar9 = "PROTECT";
    goto LAB_1402de67b;
  case 0x35:
    FUN_140051cf0(&local_70,"DOMESTIC",param_3,param_4,0xfffffffffffffffe);
  case 0xf:
    pcVar9 = "ARTIFICE";
    break;
  case 0x36:
    FUN_140051cf0(&local_70,"AQUATIC",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "NAME_LAKE";
    break;
  case 0x37:
    FUN_140051cf0(&local_70,"PROTECT",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "RESTRAIN";
LAB_1402de6fb:
    FUN_140051cf0(&local_70,pcVar9);
switchD_1402de5aa_caseD_50:
    pcVar9 = "ORDER";
    break;
  case 0x38:
  case 0x6c:
  case 0x72:
    FUN_140051cf0(&local_70,&DAT_140ea7c04,param_3,param_4,0xfffffffffffffffe);
  case 0x1a:
  case 0x45:
  case 0x5e:
  case 0x74:
    pcVar9 = "MYSTERY";
    break;
  case 0x3a:
    FUN_140051cf0(&local_70,"ASSERTIVE",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "WILD";
    goto LAB_1402de6c3;
  case 0x3b:
    pcVar9 = "OLD";
    break;
  case 0x3c:
  case 0x40:
    pcVar9 = "FLOWERY";
    goto LAB_1402de904;
  case 0x3e:
    pcVar9 = "LUCK";
    break;
  case 0x3f:
    pcVar9 = "PRIMITIVE";
    goto LAB_1402de904;
  case 0x41:
    pcVar9 = "GOOD";
    goto LAB_1402de935;
  case 0x44:
    pcVar9 = "NEGATIVE";
    break;
  case 0x46:
    FUN_140051cf0(&local_70,"MYSTERY",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "DARKNESS";
LAB_1402de6c3:
    FUN_140051cf0(&local_70,pcVar9);
switchD_1402de5aa_caseD_14:
    pcVar9 = "LIGHT";
    break;
  case 0x47:
    pcVar9 = "NAME_MOUNTAINS";
LAB_1402de844:
    FUN_140051cf0(&local_70,pcVar9,param_3,param_4,0xfffffffffffffffe);
switchD_1402de5aa_caseD_1d:
    pcVar9 = "EARTH";
    break;
  case 0x48:
    pcVar9 = "PRIMITIVE";
LAB_1402de717:
    FUN_140051cf0(&local_70,pcVar9,param_3,param_4,0xfffffffffffffffe);
switchD_1402de5aa_caseD_16:
    pcVar9 = "UGLY";
    break;
  case 0x49:
    puVar8 = &DAT_140ea7c04;
LAB_1402de62b:
    FUN_140051cf0(&local_70,puVar8,param_3,param_4,0xfffffffffffffffe);
switchD_1402de5aa_caseD_15:
    pcVar9 = "DEATH";
    break;
  case 0x4a:
    FUN_140051cf0(&local_70,"FLOWERY",param_3,param_4,0xfffffffffffffffe);
    FUN_140051cf0(&local_70,"MUSIC");
    pcVar9 = "SILENCE";
    plVar7 = &local_58;
    goto LAB_1402dec55;
  case 0x4b:
  case 0x54:
  case 0x62:
    pcVar9 = "NATURE";
    break;
  case 0x4d:
    FUN_140051cf0(&local_70,&DAT_140ea7c04,param_3,param_4,0xfffffffffffffffe);
    FUN_140051cf0(&local_70,"VIOLENT");
    FUN_140051cf0(&local_70,&DAT_140eb6ee4);
    FUN_140051cf0(&local_70,"DEATH");
  case 0x12:
  case 0x1b:
  case 0x76:
    FUN_140051cf0(&local_70,"MYSTERY");
  case 0x4c:
    pcVar9 = "DARKNESS";
    break;
  case 0x4e:
    pcVar9 = "ORDER";
LAB_1402de935:
    FUN_140051cf0(&local_70,pcVar9,param_3,param_4,0xfffffffffffffffe);
switchD_1402de5aa_caseD_28:
    pcVar9 = "PROTECT";
    break;
  case 0x4f:
    FUN_140051cf0(&local_70,"AQUATIC",param_3,param_4,0xfffffffffffffffe);
  case 0x60:
    pcVar9 = "NAME_OCEAN";
    break;
  case 0x50:
    goto switchD_1402de5aa_caseD_50;
  case 0x51:
    FUN_140051cf0(&local_70,"FLOWERY",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "COLOR";
    break;
  case 0x52:
    pcVar9 = "PEACE";
    break;
  case 0x56:
    pcVar9 = "NEW";
LAB_1402de904:
    FUN_140051cf0(&local_70,pcVar9,param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "ROMANTIC";
    break;
  case 0x57:
    pcVar9 = "SKY";
LAB_1402de780:
    FUN_140051cf0(&local_70,pcVar9,param_3,param_4,0xfffffffffffffffe);
switchD_1402de5aa_caseD_c:
    pcVar9 = "AQUATIC";
    break;
  case 0x58:
    pcVar9 = "COLOR";
    goto LAB_1402dea9d;
  case 0x5a:
    FUN_140051cf0(&local_70,&DAT_140ea7c60,param_3,param_4,0xfffffffffffffffe);
    FUN_140051cf0(&local_70,&DAT_140eb7294);
    pcVar9 = "FESTIVAL";
    break;
  case 0x5b:
    pcVar9 = "VIOLENT";
    break;
  case 99:
    FUN_140051cf0(&local_70,"PEACE",param_3,param_4,0xfffffffffffffffe);
    FUN_140051cf0(&local_70,"SILENCE");
    pcVar9 = "MUSIC";
    plVar7 = &local_58;
    goto LAB_1402dec55;
  case 100:
  case 0x7d:
    goto switchD_1402de5aa_caseD_64;
  case 0x65:
    FUN_140051cf0(&local_70,"FLOWERY",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "MUSIC";
    break;
  case 0x67:
    pcVar9 = "MYSTERY";
    goto LAB_1402dea9d;
  case 0x68:
  case 0x6e:
    FUN_140051cf0(&local_70,"ASSERTIVE",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "WILD";
    goto LAB_1402dea9d;
  case 0x6b:
    FUN_140051cf0(&local_70,"ASSERTIVE",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "LIGHT";
LAB_1402dea9d:
    FUN_140051cf0(&local_70,pcVar9);
switchD_1402de5aa_caseD_64:
    pcVar9 = "SKY";
    break;
  case 0x6d:
    FUN_140051cf0(&local_70,"SUBORDINATE",param_3,param_4,0xfffffffffffffffe);
  case 0x1c:
  case 0x5d:
    pcVar9 = "LEADER";
    break;
  case 0x6f:
    pcVar9 = "EVIL";
    break;
  case 0x70:
  case 0x71:
    FUN_140051cf0(&local_70,"TRADE",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "TRAVEL";
    break;
  case 0x73:
    FUN_140051cf0(&local_70,"NATURE",param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "NAME_FOREST";
    break;
  case 0x75:
    pcVar9 = "TRUTH";
LAB_1402de67b:
    FUN_140051cf0(&local_70,pcVar9);
switchD_1402de5aa_caseD_a:
    pcVar9 = "GOOD";
    break;
  case 0x77:
    pcVar9 = "VIOLENT";
    goto LAB_1402dec41;
  case 0x79:
    FUN_140051cf0(&local_70,&DAT_140eb3ad4,param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "NAME_VOLCANO";
    break;
  case 0x7a:
    FUN_140051cf0(&local_70,"VIOLENT",param_3,param_4,0xfffffffffffffffe);
  case 0x1f:
  case 0x78:
    pcVar9 = "LEADER";
    goto LAB_1402dec41;
  case 0x7e:
    FUN_140051cf0(&local_70,&DAT_140eb3d5c,param_3,param_4,0xfffffffffffffffe);
    pcVar9 = "ASSERTIVE";
LAB_1402de65f:
    FUN_140051cf0(&local_70,pcVar9);
    pcVar9 = "WILD";
    break;
  case 0x81:
    pcVar9 = "NEW";
LAB_1402dec41:
    FUN_140051cf0(&local_70,pcVar9);
switchD_1402de5aa_caseD_e:
    pcVar9 = "ASSERTIVE";
    break;
  default:
    goto switchD_1402de5aa_default;
  }
  plVar7 = &local_70;
LAB_1402dec55:
  FUN_140051cf0(plVar7,pcVar9);
switchD_1402de5aa_default:
  pcVar9 = "DOMESTIC";
  plVar7 = &local_58;
LAB_1402dec65:
  FUN_140051cf0(plVar7,pcVar9);
  FUN_140051cf0(&local_58,"SUBORDINATE");
  FUN_140051cf0(&local_58,"NEGATIVE");
  FUN_140051cf0(&local_58,&DAT_140eb6ee4);
  FUN_140051cf0(&local_58,"NEGATOR");
  FUN_140051cf0(&local_58,&DAT_140ea7c04);
  FUN_140051cf0(&local_58,"DEATH");
  FUN_140051cf0(&local_58,"VIOLENT");
  lVar4 = local_70;
  iVar5 = (int)(lStack_68 - local_70 >> 3) + -1;
  lVar11 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      uVar1 = *(undefined8 *)(lVar4 + lVar11 * 8);
      iVar5 = 0;
      uVar12 = DAT_141d6e1c8 - (longlong)DAT_141d6e1c0 >> 3;
      puVar10 = DAT_141d6e1c0;
      if (uVar12 != 0) {
        do {
          iVar6 = FUN_140071310(*puVar10,uVar1);
          if (iVar6 == 0) goto LAB_1402ded40;
          iVar5 = iVar5 + 1;
          puVar10 = puVar10 + 1;
        } while ((ulonglong)(longlong)iVar5 < uVar12);
      }
      iVar5 = -1;
LAB_1402ded40:
      local_res8[0] = iVar5;
      if (iVar5 != -1) {
        piVar2 = (int *)param_2[1];
        if ((local_res8 < piVar2) && (piVar3 = (int *)*param_2, piVar3 <= local_res8)) {
          if (piVar2 == (int *)param_2[2]) {
            FUN_14000c390(param_2,1);
          }
          if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
            *(undefined4 *)param_2[1] =
                 *(undefined4 *)(*param_2 + ((longlong)local_res8 - (longlong)piVar3 >> 2) * 4);
          }
        }
        else {
          if (piVar2 == (int *)param_2[2]) {
            FUN_14000c390(param_2,1);
          }
          if ((int *)param_2[1] != (int *)0x0) {
            *(int *)param_2[1] = iVar5;
          }
        }
        param_2[1] = param_2[1] + 4;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  lVar4 = local_58;
  iVar5 = (int)(lStack_50 - local_58 >> 3) + -1;
  lVar11 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      uVar1 = *(undefined8 *)(lVar4 + lVar11 * 8);
      iVar5 = 0;
      uVar12 = DAT_141d6e1c8 - (longlong)DAT_141d6e1c0 >> 3;
      puVar10 = DAT_141d6e1c0;
      if (uVar12 != 0) {
        do {
          iVar6 = FUN_140071310(*puVar10,uVar1);
          if (iVar6 == 0) goto LAB_1402dee21;
          iVar5 = iVar5 + 1;
          puVar10 = puVar10 + 1;
        } while ((ulonglong)(longlong)iVar5 < uVar12);
      }
      iVar5 = -1;
LAB_1402dee21:
      local_res8[0] = iVar5;
      if (iVar5 != -1) {
        piVar2 = (int *)param_3[1];
        if ((local_res8 < piVar2) && (piVar3 = (int *)*param_3, piVar3 <= local_res8)) {
          if (piVar2 == (int *)param_3[2]) {
            FUN_14000c390(param_3,1);
          }
          if ((undefined4 *)param_3[1] != (undefined4 *)0x0) {
            *(undefined4 *)param_3[1] =
                 *(undefined4 *)(*param_3 + ((longlong)local_res8 - (longlong)piVar3 >> 2) * 4);
          }
        }
        else {
          if (piVar2 == (int *)param_3[2]) {
            FUN_14000c390(param_3,1);
          }
          if ((int *)param_3[1] != (int *)0x0) {
            *(int *)param_3[1] = iVar5;
          }
        }
        param_3[1] = param_3[1] + 4;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  FUN_140051e20(&local_58);
  if (local_58 != 0) {
    FUN_140002020(local_58,local_48 - local_58 >> 3,8);
  }
  FUN_140051e20(&local_70);
  if (local_70 != 0) {
    FUN_140002020(local_70,local_60 - local_70 >> 3,8);
  }
  return;
}

