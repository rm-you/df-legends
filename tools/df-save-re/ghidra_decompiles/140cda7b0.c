// FUN_140cda7b0 @ 140cda7b0
// callees:
//   -> 14000f360 FUN_14000f360
//   -> 140c2efa0 FUN_140c2efa0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140cda750 FUN_140cda750
//   -> 14000c780 FUN_14000c780
//   -> 140c303c0 FUN_140c303c0
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 140c30b20 FUN_140c30b20
//   -> 14061fbe0 FUN_14061fbe0
//   -> 1408054d0 FUN_1408054d0
//   -> 140074660 FUN_140074660
//   -> 140ce2110 FUN_140ce2110
//   -> 140050b50 FUN_140050b50
//   -> 140c8a660 FUN_140c8a660
//   -> 140c88b10 FUN_140c88b10
//   -> 140c8a700 FUN_140c8a700
//   -> 140ca8390 FUN_140ca8390
//   -> 140cc1de0 FUN_140cc1de0
//   -> 1407b52b0 FUN_1407b52b0
//   -> 140103280 FUN_140103280
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cda7b0(longlong param_1,char param_2,undefined2 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 uVar5;
  short sVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 uVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined2 local_b8 [2];
  undefined2 local_b4 [2];
  undefined2 local_b0 [2];
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  int *piStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_a8 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_e8;
  piVar20 = (int *)0x0;
  iVar12 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1;
  piVar7 = piVar20;
  piVar18 = piVar20;
  if (-1 < iVar12) {
    do {
      iVar10 = iVar12 + (int)piVar7 >> 1;
      piVar18 = *(int **)(DAT_141d691a8 + (longlong)iVar10 * 8);
      if (*piVar18 == *(int *)(param_1 + 0x7dc)) {
        if (piVar18 != (int *)0x0) {
          piVar18[0x3b] = piVar18[0x3b] | 3;
        }
        break;
      }
      if (*(int *)(param_1 + 0x7dc) < *piVar18) {
        iVar12 = iVar10 + -1;
      }
      else {
        piVar7 = (int *)(ulonglong)(iVar10 + 1);
      }
      piVar18 = piVar20;
    } while ((int)piVar7 <= iVar12);
  }
  piVar7 = piVar20;
  if (*(int *)(param_1 + 0x3b4) != -1) {
    piVar7 = (int *)FUN_14000f360(&DAT_141c66fd0);
  }
  local_88 = 0xf;
  local_90 = 0;
  local_a0 = 0;
  if (DAT_1410b67dc == 1) {
    local_c8 = 1;
    FUN_140c2efa0(param_1,&local_a0,1,1);
    if (param_1 == *DAT_141c66fe8) {
      FUN_14000c9f0(&local_a0," have ",6);
    }
    else {
      FUN_14000c9f0(&local_a0," has ",5);
    }
  }
  else {
    local_60 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffffffffffff00;
    lVar8 = FUN_140cda750(param_1);
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x72) == '\0')) {
      FUN_14000c780(&local_a0,&DAT_140e5de34,4);
    }
    FUN_140c303c0(param_1,&local_78,0);
    FUN_14000cb40(&local_a0,&local_78,0,0xffffffffffffffff);
    FUN_14000c9f0(&local_a0," has ",5);
    if (0xf < local_60) {
      FUN_140002020(local_78,local_60 + 1,1);
    }
  }
  if (param_2 == '\0') {
    switch(param_3) {
    case 0:
    case 3:
    case 4:
    case 6:
    case 7:
    case 9:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x19:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x2b:
    case 0x2f:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x36:
      uVar17 = 0x10;
      pcVar14 = "been found dead.";
      break;
    case 1:
      uVar17 = 0x1d;
      pcVar14 = "been found, starved to death.";
      break;
    case 2:
      uVar17 = 0x1c;
      pcVar14 = "been found dead, dehydrated.";
      break;
    case 5:
    case 0x22:
    case 0x35:
      uVar17 = 0x19;
      pcVar14 = "been found dead, drowned.";
      break;
    case 8:
      uVar17 = 0x14;
      pcVar14 = "been found scuttled.";
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x23:
      uVar17 = 0x1e;
      pcVar14 = "been found dead, badly burned.";
      break;
    case 0xf:
    case 0x10:
    case 0x11:
      uVar17 = 0x1f;
      pcVar14 = "been found dead, badly crushed.";
      break;
    case 0x12:
      goto switchD_140cda9a5_caseD_12;
    case 0x13:
      goto switchD_140cda9a5_caseD_13;
    default:
      goto switchD_140cda9a5_caseD_17;
    case 0x1a:
    case 0x1e:
      uVar17 = 0x18;
      pcVar14 = "been found dead, frozen.";
      break;
    case 0x27:
      uVar17 = 0x12;
      pcVar14 = "been found boiled.";
      break;
    case 0x28:
      uVar17 = 0x12;
      pcVar14 = "been found melted.";
      break;
    case 0x29:
      uVar17 = 0x15;
      pcVar14 = "been found condensed.";
      break;
    case 0x2a:
      uVar17 = 0x16;
      pcVar14 = "been found solidified.";
      break;
    case 0x2c:
      goto switchD_140cda9a5_caseD_2c;
    case 0x2d:
      uVar17 = 0x23;
      pcVar14 = "been found dead, contorted in fear!";
      break;
    case 0x2e:
      goto switchD_140cda9a5_caseD_2e;
    case 0x30:
      uVar17 = 0x2d;
      pcVar14 = "been found dead, completely drained of blood!";
    }
    goto LAB_140cdaf71;
  }
  switch(param_3) {
  case 0:
    uVar17 = 0x10;
    pcVar14 = "died of old age.";
    break;
  case 1:
    pcVar14 = "starved to death.";
    goto LAB_140cdaf6b;
  case 2:
    uVar17 = 0xf;
    pcVar14 = "died of thirst.";
    break;
  case 3:
    uVar17 = 0x15;
    pcVar14 = "been shot and killed.";
    break;
  case 4:
    uVar17 = 0xe;
    pcVar14 = "bled to death.";
    break;
  case 5:
  case 0x35:
    uVar17 = 8;
    pcVar14 = "drowned.";
    break;
  case 6:
    uVar17 = 0xb;
    pcVar14 = "suffocated.";
    break;
  case 7:
    pcVar14 = "been struck down.";
    goto LAB_140cdaf6b;
  case 8:
    uVar17 = 0xe;
    pcVar14 = "been scuttled.";
    break;
  case 9:
    uVar17 = 0x26;
    pcVar14 = "died after colliding with an obstacle.";
    break;
  case 10:
    uVar17 = 0x13;
    pcVar14 = "burned up in magma.";
    break;
  case 0xb:
    uVar17 = 0x1a;
    pcVar14 = "burned up in a magma mist.";
    break;
  case 0xc:
    uVar17 = 0x19;
    pcVar14 = "burned up in dragon fire.";
    break;
  case 0xd:
    uVar17 = 0x10;
    pcVar14 = "burned to death.";
    break;
  case 0xe:
    uVar17 = 0x16;
    pcVar14 = "been scalded to death.";
    break;
  case 0xf:
    uVar17 = 0x2a;
    pcVar14 = "been crushed under the collapsing ceiling.";
    break;
  case 0x10:
    uVar17 = 0x1d;
    pcVar14 = "been crushed by a drawbridge.";
    break;
  case 0x11:
    uVar17 = 0x1d;
    pcVar14 = "been killed by falling rocks.";
    break;
  case 0x12:
switchD_140cda9a5_caseD_12:
    uVar17 = 0x19;
    pcVar14 = "fallen into a deep chasm.";
    break;
  case 0x13:
switchD_140cda9a5_caseD_13:
    uVar17 = 0xf;
    pcVar14 = "died in a cage.";
    break;
  case 0x14:
    FUN_14000c9f0(&local_a0,"been murdered by ",0x11);
    if (piVar7 != (int *)0x0) {
      local_60 = 0xf;
      local_68 = 0;
      local_78 = local_78 & 0xffffffffffffff00;
      FUN_14061fbe0(piVar7 + 2,&local_78);
      FUN_14000cb40(&local_a0,&local_78,0,0xffffffffffffffff);
      goto LAB_140cdaa2d;
    }
LAB_140cdad4d:
    uVar17 = 8;
    pcVar14 = "somebody";
LAB_140cdad5a:
    FUN_14000c9f0(&local_a0,pcVar14,uVar17);
    goto LAB_140cdaa49;
  case 0x15:
    uVar17 = 0x16;
    pcVar14 = "been killed by a trap.";
    break;
  case 0x16:
    uVar17 = 9;
    pcVar14 = "vanished.";
    break;
  default:
    goto switchD_140cda9a5_caseD_17;
  case 0x19:
    pcVar14 = "died in the heat.";
    goto LAB_140cdaf6b;
  case 0x1a:
    uVar17 = 0x10;
    pcVar14 = "frozen to death.";
    break;
  case 0x1b:
    uVar17 = 0x17;
    pcVar14 = "been impaled on spikes.";
    break;
  case 0x1c:
    uVar17 = 0x1d;
    pcVar14 = "been encased in cooling lava.";
    break;
  case 0x1d:
    uVar17 = 0x1e;
    pcVar14 = "been encased in cooling magma.";
    break;
  case 0x1e:
    uVar17 = 0x14;
    pcVar14 = "been encased in ice.";
    break;
  case 0x1f:
    uVar17 = 0xe;
    pcVar14 = "been beheaded.";
    break;
  case 0x20:
    uVar17 = 0xf;
    pcVar14 = "been crucified.";
    break;
  case 0x21:
    uVar17 = 0x12;
    pcVar14 = "been buried alive.";
    break;
  case 0x22:
    uVar17 = 0x1a;
    pcVar14 = "been executed by drowning.";
    break;
  case 0x23:
    uVar17 = 0x12;
    pcVar14 = "been burned alive.";
    break;
  case 0x24:
    uVar17 = 0x13;
    pcVar14 = "been fed to beasts.";
    break;
  case 0x25:
    uVar17 = 0x16;
    pcVar14 = "been hacked to pieces.";
    break;
  case 0x26:
    uVar17 = 0x2b;
    pcVar14 = "been executed by being left out in the air.";
    break;
  case 0x27:
    uVar17 = 7;
    pcVar14 = "boiled.";
    break;
  case 0x28:
    uVar17 = 7;
    pcVar14 = "melted.";
    break;
  case 0x29:
    uVar17 = 10;
    pcVar14 = "condensed.";
    break;
  case 0x2a:
    uVar17 = 0xb;
    pcVar14 = "solidified.";
    break;
  case 0x2b:
    uVar17 = 0x17;
    pcVar14 = "succumbed to infection.";
    break;
  case 0x2c:
switchD_140cda9a5_caseD_2c:
    pcVar14 = "been put to rest.";
    goto LAB_140cdaf6b;
  case 0x2d:
    FUN_14000c9f0(&local_a0,"been scared to death",0x14);
    if (piVar7 == (int *)0x0) goto LAB_140cdaa49;
    FUN_14000c9f0(&local_a0,&DAT_140e5de74,4);
    local_60 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffffffffffff00;
    FUN_140c30b20(piVar7,&local_78);
    FUN_14000cb40(&local_a0,&local_78,0,0xffffffffffffffff);
    goto LAB_140cdaa2d;
  case 0x2e:
switchD_140cda9a5_caseD_2e:
    pcVar14 = "died in the dark.";
    goto LAB_140cdaf6b;
  case 0x2f:
    uVar17 = 10;
    pcVar14 = "collapsed.";
    break;
  case 0x30:
    if ((DAT_1410b67dc == 1) && (piVar7 == (int *)*DAT_141c66fe8)) {
      uVar17 = 0x15;
      pcVar14 = "been drained of blood";
      goto LAB_140cdad5a;
    }
    FUN_14000c9f0(&local_a0,"been drained of blood by ",0x19);
    if (piVar7 == (int *)0x0) goto LAB_140cdad4d;
    local_60 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffffffffffff00;
    FUN_14061fbe0(piVar7 + 2,&local_78);
    FUN_14000cb40(&local_a0,&local_78,0,0xffffffffffffffff);
LAB_140cdaa2d:
    if (0xf < local_60) {
      FUN_140002020(local_78,local_60 + 1,1);
    }
LAB_140cdaa49:
    uVar17 = 1;
    pcVar14 = "!";
    break;
  case 0x31:
    pcVar14 = "been slaughtered.";
LAB_140cdaf6b:
    uVar17 = 0x11;
    break;
  case 0x32:
    uVar17 = 0x19;
    pcVar14 = "been killed by a vehicle.";
    break;
  case 0x33:
    uVar17 = 0x1f;
    pcVar14 = "been killed by a flying object.";
    break;
  case 0x34:
    uVar17 = 0x1a;
    pcVar14 = "leapt from a great height.";
    break;
  case 0x36:
    uVar17 = 0xe;
    pcVar14 = "been executed.";
  }
LAB_140cdaf71:
  FUN_14000c9f0(&local_a0,pcVar14,uVar17);
switchD_140cda9a5_caseD_17:
  uVar4 = local_78;
  uStack_70 = (ulonglong)(uint)uStack_70;
  local_68 = CONCAT26(local_68._6_2_,0x8ad08ad08ad0);
  local_58 = 0;
  piStack_50 = (int *)0x0;
  local_48 = 0xffffffffffffffff;
  local_40 = 0xffffffff;
  local_3c = 0;
  if (DAT_1410b67dc == 1) {
    uVar5 = 0x68;
  }
  else if ((*(uint *)(param_1 + 0x110) & 0x4000000) == 0) {
    uVar5 = 0x69;
  }
  else {
    uVar5 = 0x6a;
  }
  local_78._5_3_ = SUB83(uVar4,5);
  local_78._0_5_ = CONCAT14(1,CONCAT22(5,uVar5));
  local_60 = CONCAT26((short)(local_60 >> 0x30),0x7d000000000);
  local_b8[0] = 0x8ad0;
  if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
    local_b8[0] = *(undefined2 *)(param_1 + 0xa8);
    local_b4[0] = *(undefined2 *)(param_1 + 0xaa);
    local_b0[0] = *(undefined2 *)(param_1 + 0xac);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x1c8);
    for (puVar15 = *(undefined8 **)(param_1 + 0x1c0); puVar15 < puVar2; puVar15 = puVar15 + 1) {
      iVar12 = (**(code **)(*(longlong *)*puVar15 + 0x10))();
      if ((iVar12 == 0xb) && (lVar8 = (**(code **)(*(longlong *)*puVar15 + 0x18))(), lVar8 != 0)) {
        FUN_1408054d0(lVar8,local_b8,local_b4,local_b0);
        break;
      }
    }
  }
  local_78 = CONCAT26(local_b8[0],(undefined6)local_78);
  uStack_70._0_4_ = CONCAT22(local_b0[0],local_b4[0]);
  if ((*(uint *)(param_1 + 0x118) & 0x1000) == 0) {
    local_58 = param_1;
    piStack_50 = piVar7;
  }
  FUN_140074660(&DAT_141d64dc8,&local_a0,&local_78);
  if ((((*(longlong *)(param_1 + 0xd60) == 0) && ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) &&
      (DAT_1410b67dc == 0)) && (piVar18 != (int *)0x0)) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    if ((*(int *)(param_1 + 0x3a4) != -1) && (lVar8 = FUN_14000f360(&DAT_141c66fd0), lVar8 != 0)) {
      FUN_140ce2110(lVar8,piVar18,0xffffffff);
      FUN_140050b50(*(undefined4 *)(lVar8 + 0x130),&local_78);
    }
    if ((*(int *)(param_1 + 0x3a8) != -1) && (lVar8 = FUN_14000f360(&DAT_141c66fd0), lVar8 != 0)) {
      FUN_140ce2110(lVar8,piVar18,0xffffffff);
      FUN_140050b50(*(undefined4 *)(lVar8 + 0x130),&local_78);
      FUN_140c8a660(param_1,2,*(undefined4 *)(lVar8 + 0xc10),0);
      FUN_140c8a660(lVar8,2,*(undefined4 *)(param_1 + 0xc10),0);
      sVar6 = FUN_140c88b10(param_1,0xe,*(undefined4 *)(lVar8 + 0xc10));
      if (sVar6 == 0) {
        local_c8 = 0;
        FUN_140c8a700(param_1,0xe,*(undefined4 *)(lVar8 + 0xc10),100);
      }
      sVar6 = FUN_140c88b10(lVar8,0xf,*(undefined4 *)(param_1 + 0xc10));
      if (sVar6 == 0) {
        local_c8 = 0;
        FUN_140c8a700(lVar8,0xf,*(undefined4 *)(param_1 + 0xc10),100);
      }
    }
    lVar8 = FUN_140ca8390(param_1);
    if (lVar8 != 0) {
      plVar16 = *(longlong **)(lVar8 + 0x118);
      piVar7 = (int *)((ulonglong)
                       ((longlong)*(longlong **)(lVar8 + 0x120) + (7 - (longlong)plVar16)) >> 3);
      if (*(longlong **)(lVar8 + 0x120) < plVar16) {
        piVar7 = piVar20;
      }
      piVar19 = piVar20;
      if (piVar7 != (int *)0x0) {
        do {
          sVar6 = (*(code *)**(undefined8 **)*plVar16)();
          iVar12 = (int)sVar6;
          if ((((iVar12 == 2) || (iVar12 == 5)) || (iVar12 - 0xeU < 2)) &&
             ((lVar8 = FUN_140cc1de0(&DAT_141c66fd0,*(undefined4 *)(*plVar16 + 8)), lVar8 != 0 &&
              ((~(*(uint *)(lVar8 + 0x110) >> 1) & 1) != 0)))) {
            FUN_140ce2110(lVar8,piVar18,0xffffffff);
            FUN_140050b50(*(undefined4 *)(lVar8 + 0x130),&local_78);
          }
          plVar16 = plVar16 + 1;
          piVar19 = (int *)((longlong)piVar19 + 1);
        } while (piVar19 < piVar7);
      }
    }
    if ((*(int *)(param_1 + 0x3ac) != -1) && (lVar8 = FUN_14000f360(&DAT_141c66fd0), lVar8 != 0)) {
      FUN_140ce2110(lVar8,piVar18,0xffffffff);
      FUN_140050b50(*(undefined4 *)(lVar8 + 0x130),&local_78);
    }
    if ((*(int *)(param_1 + 0x3b0) != -1) && (lVar8 = FUN_14000f360(&DAT_141c66fd0), lVar8 != 0)) {
      FUN_140ce2110(lVar8,piVar18,0xffffffff);
      FUN_140050b50(*(undefined4 *)(lVar8 + 0x130),&local_78);
    }
    lVar8 = local_78;
    piVar7 = (int *)((ulonglong)((longlong)DAT_141c66ff0 + (7 - (longlong)DAT_141c66fe8)) >> 3);
    if (DAT_141c66ff0 < DAT_141c66fe8) {
      piVar7 = piVar20;
    }
    plVar16 = DAT_141c66fe8;
    if (piVar7 != (int *)0x0) {
      do {
        iVar12 = 0;
        lVar3 = *plVar16;
        if (lVar3 != param_1) {
          iVar10 = *(int *)(lVar3 + 0x130);
          iVar13 = (int)((longlong)(uStack_70 - lVar8) >> 2);
          if (((iVar13 != 0) && (iVar10 != -1)) && (iVar13 = iVar13 + -1, -1 < iVar13)) {
            do {
              iVar11 = iVar13 + iVar12 >> 1;
              iVar1 = *(int *)(lVar8 + (longlong)iVar11 * 4);
              if (iVar1 == iVar10) {
                if (iVar11 != -1) goto LAB_140cdb44a;
                break;
              }
              if (iVar10 < iVar1) {
                iVar13 = iVar11 + -1;
              }
              else {
                iVar12 = iVar11 + 1;
              }
            } while (iVar12 <= iVar13);
          }
          iVar12 = *(int *)(lVar3 + 0x3ac);
          if (((((iVar12 == *(int *)(param_1 + 0x130)) ||
                (iVar10 = *(int *)(lVar3 + 0x3b0), iVar10 == *(int *)(param_1 + 0x130))) ||
               ((iVar12 != -1 && (iVar12 == *(int *)(param_1 + 0x3ac))))) ||
              ((iVar10 != -1 && (iVar10 == *(int *)(param_1 + 0x3b0))))) ||
             ((lVar9 = FUN_140ca8390(), lVar9 != 0 &&
              (((lVar9 = FUN_1407b52b0(lVar9,*(undefined4 *)(param_1 + 0xc10)), lVar9 != 0 &&
                (iVar12 = FUN_140103280(lVar9,local_ac), (iVar12 - 0xdU & 0xfffffffa) == 0)) &&
               (iVar12 != 0x11)))))) {
            FUN_140ce2110(lVar3,piVar18,0xffffffff);
          }
        }
LAB_140cdb44a:
        plVar16 = plVar16 + 1;
        piVar20 = (int *)((longlong)piVar20 + 1);
      } while (piVar20 < piVar7);
    }
    if (lVar8 != 0) {
      FUN_140002020(lVar8,local_68 - lVar8 >> 2,4);
    }
  }
  if (0xf < local_88) {
    FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
  }
  return;
}

