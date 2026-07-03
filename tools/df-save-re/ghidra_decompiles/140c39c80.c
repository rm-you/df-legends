// FUN_140c39c80 @ 140c39c80
// callees:
//   -> 140c6ead0 FUN_140c6ead0
//   -> 140c88550 FUN_140c88550
//   -> 140ca8390 FUN_140ca8390
//   -> 140760ab0 FUN_140760ab0
//   -> 140cda750 FUN_140cda750
//   -> 14061fbe0 FUN_14061fbe0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140c2fd00 FUN_140c2fd00
//   -> 14000cb40 FUN_14000cb40
//   -> 140074660 FUN_140074660
//   -> 140002020 FUN_140002020
//   -> 1400f1760 FUN_1400f1760
//   -> 1402d4400 FUN_1402d4400
//   -> 140c88a90 FUN_140c88a90
//   -> 140c88940 FUN_140c88940
//   -> 1400199b0 FUN_1400199b0
//   -> 14000bc60 FUN_14000bc60
//   -> 140c88a50 FUN_140c88a50
//   -> 140019d50 FUN_140019d50
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14000c1f0 FUN_14000c1f0
//   -> 140050380 FUN_140050380
//   -> 140019a90 FUN_140019a90
//   -> 14000c260 FUN_14000c260
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140c39c80(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  longlong lVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  short *psVar14;
  uint uVar15;
  short *psVar16;
  int iVar17;
  short *psVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined2 local_c2;
  undefined2 local_c0;
  undefined2 local_be;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined4 local_b0;
  undefined2 local_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  short *local_88;
  undefined8 local_80;
  ulonglong local_78 [2];
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_80 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_f8;
  lVar8 = *(longlong *)(param_1 + 0xa78);
  if (lVar8 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x140) == -1) {
    return;
  }
  sVar6 = *(short *)(param_1 + 0xa0);
  psVar14 = (short *)0x0;
  switch((int)sVar6) {
  case 0x4b:
  case 0x4d:
  case 0x4f:
  case 0x51:
  case 0x53:
  case 0x55:
  case 0x57:
  case 0x59:
  case 0x5b:
  case 0x5d:
  case 0x5f:
    iVar17 = -1;
    psVar10 = psVar14;
    psVar9 = psVar14;
    psVar16 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 != 0) {
      do {
        psVar18 = *(short **)((longlong)psVar10 + *(longlong *)(lVar8 + 0x218));
        if ((((((((*psVar18 == 0x26) || (*psVar18 == 0x27)) || (*psVar18 == 0x29)) ||
               ((*psVar18 == 0x2a || (*psVar18 == 0x2b)))) ||
              ((*psVar18 == 0x2c || ((*psVar18 == 0x34 || (*psVar18 == 0x35)))))) ||
             (*psVar18 == 0x33)) ||
            ((((*psVar18 == 0x32 || (*psVar18 == 0x65)) || (*psVar18 == 0x67)) ||
             ((*psVar18 == 0x66 || (*psVar18 == 0x68)))))) && ((int)psVar16 < *(int *)(psVar18 + 2))
           ) {
          iVar17 = (int)*psVar18;
          psVar16 = (short *)(ulonglong)*(uint *)(psVar18 + 2);
        }
        uVar15 = (int)psVar9 + 1;
        psVar10 = psVar10 + 4;
        psVar9 = (short *)(ulonglong)uVar15;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)(*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3));
      if (iVar17 != -1) {
        switch(iVar17) {
        case 0x26:
          *(undefined2 *)(param_1 + 0xa0) = 0x53;
          break;
        case 0x27:
          *(undefined2 *)(param_1 + 0xa0) = 0x55;
          break;
        case 0x29:
          *(undefined2 *)(param_1 + 0xa0) = 0x57;
          break;
        case 0x2a:
          *(undefined2 *)(param_1 + 0xa0) = 0x4b;
          break;
        case 0x2b:
          *(undefined2 *)(param_1 + 0xa0) = 0x4d;
          break;
        case 0x2c:
          *(undefined2 *)(param_1 + 0xa0) = 0x4f;
          break;
        case 0x32:
          *(undefined2 *)(param_1 + 0xa0) = 0x59;
          break;
        case 0x33:
          *(undefined2 *)(param_1 + 0xa0) = 0x5f;
          break;
        case 0x34:
          *(undefined2 *)(param_1 + 0xa0) = 0x5b;
          break;
        case 0x35:
          *(undefined2 *)(param_1 + 0xa0) = 0x5d;
          break;
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
          *(undefined2 *)(param_1 + 0xa0) = 0x51;
        }
        if ((int)*(short *)(param_1 + 0xa0) != (int)sVar6) {
          *(undefined2 *)(param_1 + 0xa0) = 0x61;
        }
      }
    }
  }
  sVar6 = *(short *)(param_1 + 0xa0);
  switch(sVar6) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x66:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x86:
    sVar5 = FUN_140c6ead0(param_1);
    *(short *)(param_1 + 0xa0) = sVar5;
    cVar4 = FUN_140c88550(param_1);
    if (cVar4 != '\0') {
      uVar19 = extraout_XMM0_Da;
      if (sVar5 == sVar6) {
LAB_140c3a0b2:
        if (DAT_1410b67dc != 0) goto switchD_140c39ee0_caseD_4a;
      }
      else {
        if ((sVar5 != 0x66) &&
           (lVar8 = FUN_140ca8390(param_1), uVar19 = extraout_XMM0_Da_00, lVar8 != 0)) {
          uVar19 = FUN_140760ab0(lVar8,sVar5,1);
        }
        if ((*(byte *)(param_1 + 0x114) & 4) != 0) goto LAB_140c3a0b2;
        if (DAT_1410b67dc != 0) {
          if ((DAT_141c34528 & 8) != 0) goto LAB_140c39f60;
          goto LAB_140c3a0b2;
        }
        if ((DAT_141c34528 & 0x70) != 0) {
LAB_140c39f60:
          local_60 = 0xf;
          local_68 = 0;
          local_78[0]._0_1_ = 0;
          lVar8 = FUN_140cda750(param_1);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
            FUN_14061fbe0(lVar8,local_78);
          }
          FUN_14000c9f0(local_78," has become a ",0xe);
          local_40 = 0xf;
          local_48 = 0;
          local_58 = local_58 & 0xffffffffffffff00;
          FUN_140c2fd00(param_1,&local_58,0);
          FUN_14000cb40(local_78,&local_58,0,0xffffffffffffffff);
          FUN_14000c9f0(local_78,&DAT_140e597bc,1);
          local_bc = 0;
          local_b8 = 0x8ad08ad0;
          local_b4 = 0x8ad0;
          local_b0 = 0;
          local_a0 = 0;
          local_98 = 0xffffffffffffffff;
          local_90 = 0xffffffff;
          local_8c = 0;
          local_c8 = 0x700ea;
          local_c4 = 0;
          local_ac = 2000;
          local_c2 = *(undefined2 *)(param_1 + 0xa8);
          local_c0 = *(undefined2 *)(param_1 + 0xaa);
          local_be = *(undefined2 *)(param_1 + 0xac);
          local_a8 = param_1;
          uVar19 = FUN_140074660(&DAT_141d64dc8,local_78,&local_c8);
          if (0xf < local_40) {
            uVar19 = FUN_140002020(local_58,local_40 + 1,1);
          }
          local_40 = 0xf;
          local_48 = 0;
          local_58 = local_58 & 0xffffffffffffff00;
          if (0xf < local_60) {
            uVar19 = FUN_140002020(CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]),local_60 + 1,
                                   1);
          }
          goto LAB_140c3a0b2;
        }
      }
      if ((DAT_141c3d258 != 0) && (param_2 != '\0')) {
        sVar6 = *(short *)(param_1 + 0xa0);
        if ((-1 < sVar6) && ((sVar6 < 0x40 || ((int)sVar6 - 0x45U < 5)))) {
          psVar9 = (short *)FUN_1400f1760(uVar19,sVar6);
          local_88 = psVar9;
          sVar5 = FUN_1402d4400(sVar6);
          psVar10 = psVar14;
          if (sVar6 != sVar5) {
            psVar10 = (short *)FUN_1400f1760(extraout_XMM0_Da_01,sVar5);
          }
          if (psVar9 == (short *)0x0) {
            if (psVar10 == (short *)0x0) goto switchD_140c39ee0_caseD_4a;
LAB_140c3a15d:
            sVar6 = FUN_140c88a90(param_1,0,*(undefined4 *)(psVar10 + 2));
            if (sVar6 == 0) {
              local_d8 = 1;
              FUN_140c88940(param_1,0,*(undefined4 *)(psVar10 + 2));
            }
          }
          else {
            sVar6 = FUN_140c88a90(param_1,0,*(undefined4 *)(psVar9 + 2));
            if (sVar6 == 0) {
              local_d8 = 1;
              FUN_140c88940(param_1,0,*(undefined4 *)(psVar9 + 2));
            }
            if (psVar10 != (short *)0x0) goto LAB_140c3a15d;
          }
          lVar8 = FUN_140ca8390(param_1);
          psVar9 = local_88;
          if (lVar8 != 0) {
            local_58 = 0;
            uStack_50 = 0;
            local_48 = 0;
            plVar13 = *(longlong **)(lVar8 + 0xe8);
            psVar16 = (short *)((ulonglong)
                                ((longlong)*(longlong **)(lVar8 + 0xf0) + (7 - (longlong)plVar13))
                               >> 3);
            if (*(longlong **)(lVar8 + 0xf0) < plVar13) {
              psVar16 = psVar14;
            }
            psVar18 = psVar14;
            if (psVar16 != (short *)0x0) {
              do {
                sVar6 = (*(code *)**(undefined8 **)*plVar13)();
                if ((((sVar6 == 0) &&
                     (psVar11 = (short *)FUN_1400199b0(&DAT_141c53718,*(undefined4 *)(*plVar13 + 8))
                     , psVar11 != (short *)0x0)) && (*psVar11 == 10)) &&
                   ((psVar11 != psVar9 && (psVar11 != psVar10)))) {
                  FUN_14000bc60(&local_58,psVar11 + 2);
                }
                plVar13 = plVar13 + 1;
                psVar18 = (short *)((longlong)psVar18 + 1);
              } while (psVar18 < psVar16);
            }
            lVar8 = local_48;
            uVar3 = local_58;
            psVar10 = (short *)((uStack_50 - local_58) + 3 >> 2);
            if (uStack_50 < local_58) {
              psVar10 = psVar14;
            }
            psVar9 = psVar14;
            if (psVar10 != (short *)0x0) {
              do {
                FUN_140c88a50(param_1);
                psVar9 = (short *)((longlong)psVar9 + 1);
              } while (psVar9 < psVar10);
            }
            if (uVar3 != 0) {
              FUN_140002020(uVar3,(longlong)(lVar8 - uVar3) >> 2,4);
            }
          }
        }
      }
    }
  default:
switchD_140c39ee0_caseD_4a:
    goto LAB_140c3a58f;
  case 0x61:
    iVar17 = -1;
    psVar10 = psVar14;
    psVar9 = psVar14;
    psVar16 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 == 0)
    goto switchD_140c39ee0_caseD_4a;
    do {
      psVar18 = *(short **)((longlong)psVar10 + *(longlong *)(lVar8 + 0x218));
      if ((((((*psVar18 == 0x26) || (*psVar18 == 0x27)) ||
            ((*psVar18 == 0x29 || (((*psVar18 == 0x2a || (*psVar18 == 0x2b)) || (*psVar18 == 0x34)))
             ))) || ((*psVar18 == 0x35 || (*psVar18 == 0x32)))) ||
          ((*psVar18 == 0x33 ||
           (((*psVar18 == 0x2c || (*psVar18 == 0x65)) ||
            ((*psVar18 == 0x67 || ((*psVar18 == 0x66 || (*psVar18 == 0x68)))))))))) &&
         ((int)psVar9 < *(int *)(psVar18 + 2))) {
        iVar17 = (int)*psVar18;
        psVar9 = (short *)(ulonglong)*(uint *)(psVar18 + 2);
      }
      uVar15 = (int)psVar16 + 1;
      psVar10 = psVar10 + 4;
      psVar16 = (short *)(ulonglong)uVar15;
    } while ((ulonglong)(longlong)(int)uVar15 <
             (ulonglong)(*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3));
    if (iVar17 == -1) goto switchD_140c39ee0_caseD_4a;
  }
  switch(iVar17) {
  case 0x26:
    *(undefined2 *)(param_1 + 0xa0) = 0x53;
    goto switchD_140c3a37c_caseD_28;
  case 0x27:
    uVar7 = 0x55;
    break;
  default:
    goto switchD_140c3a37c_caseD_28;
  case 0x29:
    uVar7 = 0x57;
    break;
  case 0x2a:
    uVar7 = 0x4b;
    break;
  case 0x2b:
    uVar7 = 0x4d;
    break;
  case 0x2c:
    uVar7 = 0x4f;
    break;
  case 0x32:
    uVar7 = 0x59;
    break;
  case 0x33:
    uVar7 = 0x5f;
    break;
  case 0x34:
    uVar7 = 0x5b;
    break;
  case 0x35:
    uVar7 = 0x5d;
    break;
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
    *(undefined2 *)(param_1 + 0xa0) = 0x51;
    goto switchD_140c3a37c_caseD_28;
  }
  *(undefined2 *)(param_1 + 0xa0) = uVar7;
switchD_140c3a37c_caseD_28:
  if (((*(short *)(param_1 + 0xa0) != 0x61) && (cVar4 = FUN_140c88550(param_1), cVar4 != '\0')) &&
     ((*(byte *)(param_1 + 0x114) & 4) == 0)) {
    if (DAT_1410b67dc == 0) {
      bVar2 = DAT_141c3452c & 0x70;
    }
    else {
      bVar2 = DAT_141c3452c & 8;
    }
    if (bVar2 != 0) {
      local_40 = 0xf;
      local_48 = 0;
      local_58 = local_58 & 0xffffffffffffff00;
      lVar8 = FUN_140cda750(param_1);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
        FUN_14061fbe0(lVar8,&local_58);
      }
      FUN_14000c9f0(&local_58," has become a ",0xe);
      local_60 = 0xf;
      local_68 = 0;
      local_78[0]._0_1_ = 0;
      FUN_140c2fd00(param_1,local_78,0);
      FUN_14000cb40(&local_58,local_78,0,0xffffffffffffffff);
      FUN_14000c9f0(&local_58,&DAT_140e597bc,1);
      local_bc = 0;
      local_b8 = 0x8ad08ad0;
      local_b4 = 0x8ad0;
      local_b0 = 0;
      local_a0 = 0;
      local_98 = 0xffffffffffffffff;
      local_90 = 0xffffffff;
      local_8c = 0;
      local_c8 = 0x700eb;
      local_c4 = 0;
      local_ac = 2000;
      local_c2 = *(undefined2 *)(param_1 + 0xa8);
      local_c0 = *(undefined2 *)(param_1 + 0xaa);
      local_be = *(undefined2 *)(param_1 + 0xac);
      local_a8 = param_1;
      FUN_140074660(&DAT_141d64dc8,&local_58,&local_c8);
      if (0xf < local_60) {
        FUN_140002020(CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]),local_60 + 1,1);
      }
      local_60 = 0xf;
      local_68 = 0;
      local_78[0]._0_1_ = 0;
      if (0xf < local_40) {
        FUN_140002020(local_58,local_40 + 1,1);
      }
    }
  }
LAB_140c3a58f:
  switch(*(undefined2 *)(param_1 + 0xa0)) {
  case 0x4b:
    lVar8 = *(longlong *)(param_1 + 0xa78);
    psVar10 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar8 + 0x218);
        if (**(short **)((longlong)psVar14 + lVar1) == 0x2a) {
          if (*(int *)(*(longlong *)(lVar1 + (longlong)(int)psVar10 * 8) + 4) < 0xb) {
            return;
          }
          *(undefined2 *)(param_1 + 0xa0) = 0x4c;
          if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
            return;
          }
          cVar4 = FUN_140c88550(param_1);
          if (cVar4 == '\0') {
            return;
          }
          if (DAT_1410b67dc == 0) {
            bVar2 = DAT_141c34530 & 0x70;
          }
          else {
            bVar2 = DAT_141c34530 & 8;
          }
          if (bVar2 == 0) {
            return;
          }
          local_40 = 0xf;
          local_48 = 0;
          local_58 = local_58 & 0xffffffffffffff00;
          lVar8 = FUN_140cda750(param_1);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
            FUN_14061fbe0(lVar8,&local_58);
          }
          FUN_14000c9f0(&local_58," has become a ",0xe);
          local_60 = 0xf;
          local_68 = 0;
          local_78[0]._0_1_ = 0;
          FUN_140c2fd00(param_1,local_78,0);
          FUN_14000cb40(&local_58,local_78,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_58,&DAT_140e597bc,1);
          local_bc = 0;
          local_b8 = 0x8ad08ad0;
          local_b4 = 0x8ad0;
          local_b0 = 0;
          local_a0 = 0;
          local_98 = 0xffffffffffffffff;
          local_90 = 0xffffffff;
          local_8c = 0;
          local_c8 = 0x700ec;
          local_c4 = 1;
          local_ac = 2000;
          local_c2 = *(undefined2 *)(param_1 + 0xa8);
          local_c0 = *(undefined2 *)(param_1 + 0xaa);
          local_be = *(undefined2 *)(param_1 + 0xac);
          local_a8 = param_1;
          FUN_140074660(&DAT_141d64dc8,&local_58,&local_c8);
          if (0xf < local_60) {
            FUN_140002020(CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]),local_60 + 1,1);
          }
LAB_140c3a79f:
          local_60 = 0xf;
          local_68 = 0;
          local_78[0]._0_1_ = 0;
          if (local_40 < 0x10) {
            return;
          }
          FUN_140002020(local_58,local_40 + 1,1);
          return;
        }
        uVar15 = (int)psVar10 + 1;
        psVar14 = psVar14 + 4;
        psVar10 = (short *)(ulonglong)uVar15;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)(*(longlong *)(lVar8 + 0x220) - lVar1 >> 3));
    }
    break;
  case 0x4d:
    lVar8 = *(longlong *)(param_1 + 0xa78);
    psVar10 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar8 + 0x218);
        if (**(short **)((longlong)psVar14 + lVar1) == 0x2b) {
          if (*(int *)(*(longlong *)(lVar1 + (longlong)(int)psVar10 * 8) + 4) < 0xb) {
            return;
          }
          *(undefined2 *)(param_1 + 0xa0) = 0x4e;
          if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
            return;
          }
          cVar4 = FUN_140c88550(param_1);
          if (cVar4 == '\0') {
            return;
          }
          if (DAT_1410b67dc == 0) {
            bVar2 = DAT_141c34530 & 0x70;
          }
          else {
            bVar2 = DAT_141c34530 & 8;
          }
          if (bVar2 == 0) {
            return;
          }
          local_40 = 0xf;
          local_48 = 0;
          local_58 = local_58 & 0xffffffffffffff00;
          lVar8 = FUN_140cda750(param_1);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
            FUN_14061fbe0(lVar8,&local_58);
          }
          FUN_14000c9f0(&local_58," has become a ",0xe);
          local_60 = 0xf;
          local_68 = 0;
          local_78[0]._0_1_ = 0;
          FUN_140c2fd00(param_1,local_78,0);
          FUN_14000cb40(&local_58,local_78,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_58,&DAT_140e597bc,1);
          local_bc = 0;
          local_b8 = 0x8ad08ad0;
          local_b4 = 0x8ad0;
          local_b0 = 0;
          local_a0 = 0;
          local_98 = 0xffffffffffffffff;
          local_90 = 0xffffffff;
          local_8c = 0;
          local_c8 = 0x700ec;
          local_c4 = 1;
          local_ac = 2000;
          local_c2 = *(undefined2 *)(param_1 + 0xa8);
          local_c0 = *(undefined2 *)(param_1 + 0xaa);
          local_be = *(undefined2 *)(param_1 + 0xac);
          local_a8 = param_1;
          FUN_140074660(&DAT_141d64dc8,&local_58,&local_c8);
          if (0xf < local_60) {
            FUN_140002020(CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]),local_60 + 1,1);
          }
          goto LAB_140c3a79f;
        }
        uVar15 = (int)psVar10 + 1;
        psVar14 = psVar14 + 4;
        psVar10 = (short *)(ulonglong)uVar15;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)(*(longlong *)(lVar8 + 0x220) - lVar1 >> 3));
    }
    break;
  case 0x4f:
    lVar8 = *(longlong *)(param_1 + 0xa78);
    psVar10 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar8 + 0x218);
        if (**(short **)((longlong)psVar14 + lVar1) == 0x2c) {
          if (*(int *)(*(longlong *)(lVar1 + (longlong)(int)psVar10 * 8) + 4) < 0xb) {
            return;
          }
          *(undefined2 *)(param_1 + 0xa0) = 0x50;
          if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
            return;
          }
          cVar4 = FUN_140c88550(param_1);
          if (cVar4 == '\0') {
            return;
          }
          if (DAT_1410b67dc == 0) {
            bVar2 = DAT_141c34530 & 0x70;
          }
          else {
            bVar2 = DAT_141c34530 & 8;
          }
          if (bVar2 == 0) {
            return;
          }
          local_40 = 0xf;
          local_48 = 0;
          local_58 = local_58 & 0xffffffffffffff00;
          lVar8 = FUN_140cda750(param_1);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
            FUN_14061fbe0(lVar8,&local_58);
          }
          FUN_14000c9f0(&local_58," has become a ",0xe);
          local_60 = 0xf;
          local_68 = 0;
          local_78[0]._0_1_ = 0;
          FUN_140c2fd00(param_1,local_78,0);
          FUN_14000cb40(&local_58,local_78,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_58,&DAT_140e597bc,1);
          local_bc = 0;
          local_b8 = 0x8ad08ad0;
          local_b4 = 0x8ad0;
          local_b0 = 0;
          local_a0 = 0;
          local_98 = 0xffffffffffffffff;
          local_90 = 0xffffffff;
          local_8c = 0;
          local_c8 = 0x700ec;
          local_c4 = 1;
          local_ac = 2000;
          local_c2 = *(undefined2 *)(param_1 + 0xa8);
          local_c0 = *(undefined2 *)(param_1 + 0xaa);
          local_be = *(undefined2 *)(param_1 + 0xac);
          local_a8 = param_1;
          FUN_140074660(&DAT_141d64dc8,&local_58,&local_c8);
          if (0xf < local_60) {
            FUN_140002020(CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]),local_60 + 1,1);
          }
          goto LAB_140c3a79f;
        }
        uVar15 = (int)psVar10 + 1;
        psVar14 = psVar14 + 4;
        psVar10 = (short *)(ulonglong)uVar15;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)(*(longlong *)(lVar8 + 0x220) - lVar1 >> 3));
    }
    break;
  case 0x51:
    lVar8 = *(longlong *)(param_1 + 0xa78);
    psVar10 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar8 + 0x218);
        psVar9 = *(short **)((longlong)psVar10 + lVar1);
        if ((((*psVar9 == 0x65) || (*psVar9 == 0x67)) || (*psVar9 == 0x66)) || (*psVar9 == 0x68)) {
          if (*(int *)(*(longlong *)(lVar1 + (longlong)(int)psVar14 * 8) + 4) < 0xb) {
            return;
          }
          *(undefined2 *)(param_1 + 0xa0) = 0x52;
          if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
            return;
          }
          cVar4 = FUN_140c88550(param_1);
          if (cVar4 == '\0') {
            return;
          }
          cVar4 = FUN_140019d50(&DAT_141c34180,0xec);
          if (cVar4 == '\0') {
            return;
          }
          FUN_14000c2b0(local_78);
          lVar8 = FUN_140cda750(param_1);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
            FUN_14061fbe0(lVar8,local_78);
          }
          FUN_14000c1f0(local_78," has become a ");
          FUN_14000c2b0(&local_58);
          FUN_140c2fd00(param_1,&local_58,0);
          FUN_140050380(local_78,&local_58);
          FUN_14000c1f0(local_78,&DAT_140e597bc);
          FUN_140019a90(&local_c8);
          local_c8 = 0x700ec;
          local_c4 = 1;
          local_ac = 2000;
          local_c2 = *(undefined2 *)(param_1 + 0xa8);
          local_c0 = *(undefined2 *)(param_1 + 0xaa);
          local_be = *(undefined2 *)(param_1 + 0xac);
          local_a8 = param_1;
          FUN_140074660(&DAT_141d64dc8,local_78,&local_c8);
          FUN_14000c260(&local_58);
LAB_140c3ba55:
          puVar12 = local_78;
LAB_140c3ba59:
          FUN_14000c260(puVar12);
          return;
        }
        uVar15 = (int)psVar14 + 1;
        psVar14 = (short *)(ulonglong)uVar15;
        psVar10 = psVar10 + 4;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)(*(longlong *)(lVar8 + 0x220) - lVar1 >> 3));
    }
    break;
  case 0x53:
    lVar8 = *(longlong *)(param_1 + 0xa78);
    psVar10 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar8 + 0x218);
        if (**(short **)((longlong)psVar14 + lVar1) == 0x26) {
          if (*(int *)(*(longlong *)(lVar1 + (longlong)(int)psVar10 * 8) + 4) < 0xb) {
            return;
          }
          *(undefined2 *)(param_1 + 0xa0) = 0x54;
          if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
            return;
          }
          cVar4 = FUN_140c88550(param_1);
          if (cVar4 == '\0') {
            return;
          }
          if (DAT_1410b67dc == 0) {
            bVar2 = DAT_141c34530 & 0x70;
          }
          else {
            bVar2 = DAT_141c34530 & 8;
          }
          if (bVar2 == 0) {
            return;
          }
          local_40 = 0xf;
          local_48 = 0;
          local_58 = local_58 & 0xffffffffffffff00;
          lVar8 = FUN_140cda750(param_1);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
            FUN_14061fbe0(lVar8,&local_58);
          }
          FUN_14000c9f0(&local_58," has become a ",0xe);
          local_60 = 0xf;
          local_68 = 0;
          local_78[0]._0_1_ = 0;
          FUN_140c2fd00(param_1,local_78,0);
          FUN_14000cb40(&local_58,local_78,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_58,&DAT_140e597bc,1);
          local_bc = 0;
          local_b8 = 0x8ad08ad0;
          local_b4 = 0x8ad0;
          local_b0 = 0;
          local_a0 = 0;
          local_98 = 0xffffffffffffffff;
          local_90 = 0xffffffff;
          local_8c = 0;
          local_c8 = 0x700ec;
          local_c4 = 1;
          local_ac = 2000;
          local_c2 = *(undefined2 *)(param_1 + 0xa8);
          local_c0 = *(undefined2 *)(param_1 + 0xaa);
          local_be = *(undefined2 *)(param_1 + 0xac);
          local_a8 = param_1;
          FUN_140074660(&DAT_141d64dc8,&local_58,&local_c8);
          if (0xf < local_60) {
            FUN_140002020(CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]),local_60 + 1,1);
          }
          goto LAB_140c3a79f;
        }
        uVar15 = (int)psVar10 + 1;
        psVar14 = psVar14 + 4;
        psVar10 = (short *)(ulonglong)uVar15;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)(*(longlong *)(lVar8 + 0x220) - lVar1 >> 3));
    }
    break;
  case 0x55:
    lVar8 = *(longlong *)(param_1 + 0xa78);
    psVar10 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar8 + 0x218);
        if (**(short **)((longlong)psVar14 + lVar1) == 0x27) {
          if (*(int *)(*(longlong *)(lVar1 + (longlong)(int)psVar10 * 8) + 4) < 0xb) {
            return;
          }
          *(undefined2 *)(param_1 + 0xa0) = 0x56;
          if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
            return;
          }
          cVar4 = FUN_140c88550(param_1);
          if (cVar4 == '\0') {
            return;
          }
          if (DAT_1410b67dc == 0) {
            bVar2 = DAT_141c34530 & 0x70;
          }
          else {
            bVar2 = DAT_141c34530 & 8;
          }
          if (bVar2 == 0) {
            return;
          }
          local_40 = 0xf;
          local_48 = 0;
          local_58 = local_58 & 0xffffffffffffff00;
          lVar8 = FUN_140cda750(param_1);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
            FUN_14061fbe0(lVar8,&local_58);
          }
          FUN_14000c9f0(&local_58," has become a ",0xe);
          local_60 = 0xf;
          local_68 = 0;
          local_78[0]._0_1_ = 0;
          FUN_140c2fd00(param_1,local_78,0);
          FUN_14000cb40(&local_58,local_78,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_58,&DAT_140e597bc,1);
          local_bc = 0;
          local_b8 = 0x8ad08ad0;
          local_b4 = 0x8ad0;
          local_b0 = 0;
          local_a0 = 0;
          local_98 = 0xffffffffffffffff;
          local_90 = 0xffffffff;
          local_8c = 0;
          local_c8 = 0x700ec;
          local_c4 = 1;
          local_ac = 2000;
          local_c2 = *(undefined2 *)(param_1 + 0xa8);
          local_c0 = *(undefined2 *)(param_1 + 0xaa);
          local_be = *(undefined2 *)(param_1 + 0xac);
          local_a8 = param_1;
          FUN_140074660(&DAT_141d64dc8,&local_58,&local_c8);
          if (0xf < local_60) {
            FUN_140002020(CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]),local_60 + 1,1);
          }
          goto LAB_140c3a79f;
        }
        uVar15 = (int)psVar10 + 1;
        psVar14 = psVar14 + 4;
        psVar10 = (short *)(ulonglong)uVar15;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)(*(longlong *)(lVar8 + 0x220) - lVar1 >> 3));
    }
    break;
  case 0x57:
    lVar8 = *(longlong *)(param_1 + 0xa78);
    psVar10 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar8 + 0x218);
        if (**(short **)((longlong)psVar14 + lVar1) == 0x29) {
          if (*(int *)(*(longlong *)(lVar1 + (longlong)(int)psVar10 * 8) + 4) < 0xb) {
            return;
          }
          *(undefined2 *)(param_1 + 0xa0) = 0x58;
          if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
            return;
          }
          cVar4 = FUN_140c88550(param_1);
          if (cVar4 == '\0') {
            return;
          }
          if (DAT_1410b67dc == 0) {
            bVar2 = DAT_141c34530 & 0x70;
          }
          else {
            bVar2 = DAT_141c34530 & 8;
          }
          if (bVar2 == 0) {
            return;
          }
          local_40 = 0xf;
          local_48 = 0;
          local_58 = local_58 & 0xffffffffffffff00;
          lVar8 = FUN_140cda750(param_1);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
            FUN_14061fbe0(lVar8,&local_58);
          }
          FUN_14000c9f0(&local_58," has become a ",0xe);
          local_60 = 0xf;
          local_68 = 0;
          local_78[0]._0_1_ = 0;
          FUN_140c2fd00(param_1,local_78,0);
          FUN_14000cb40(&local_58,local_78,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_58,&DAT_140e597bc,1);
          local_bc = 0;
          local_b8 = 0x8ad08ad0;
          local_b4 = 0x8ad0;
          local_b0 = 0;
          local_a0 = 0;
          local_98 = 0xffffffffffffffff;
          local_90 = 0xffffffff;
          local_8c = 0;
          local_c8 = 0x700ec;
          local_c4 = 1;
          local_ac = 2000;
          local_c2 = *(undefined2 *)(param_1 + 0xa8);
          local_c0 = *(undefined2 *)(param_1 + 0xaa);
          local_be = *(undefined2 *)(param_1 + 0xac);
          local_a8 = param_1;
          FUN_140074660(&DAT_141d64dc8,&local_58,&local_c8);
          if (0xf < local_60) {
            FUN_140002020(CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]),local_60 + 1,1);
          }
          goto LAB_140c3a79f;
        }
        uVar15 = (int)psVar10 + 1;
        psVar14 = psVar14 + 4;
        psVar10 = (short *)(ulonglong)uVar15;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)(*(longlong *)(lVar8 + 0x220) - lVar1 >> 3));
    }
    break;
  case 0x59:
    lVar8 = *(longlong *)(param_1 + 0xa78);
    psVar10 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar8 + 0x218);
        if (**(short **)((longlong)psVar10 + lVar1) == 0x32) {
          if (*(int *)(*(longlong *)(lVar1 + (longlong)(int)psVar14 * 8) + 4) < 0xb) {
            return;
          }
          *(undefined2 *)(param_1 + 0xa0) = 0x5a;
          if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
            return;
          }
          cVar4 = FUN_140c88550(param_1);
          if (cVar4 == '\0') {
            return;
          }
          cVar4 = FUN_140019d50(&DAT_141c34180,0xec);
          if (cVar4 == '\0') {
            return;
          }
          FUN_14000c2b0(local_78);
          lVar8 = FUN_140cda750(param_1);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
            FUN_14061fbe0(lVar8,local_78);
          }
          FUN_14000c1f0(local_78," has become a ");
          FUN_14000c2b0(&local_58);
          FUN_140c2fd00(param_1,&local_58,0);
          FUN_140050380(local_78,&local_58);
          FUN_14000c1f0(local_78,&DAT_140e597bc);
          FUN_140019a90(&local_c8);
          local_c8 = 0x700ec;
          local_c4 = 1;
          local_ac = 2000;
          local_c2 = *(undefined2 *)(param_1 + 0xa8);
          local_c0 = *(undefined2 *)(param_1 + 0xaa);
          local_be = *(undefined2 *)(param_1 + 0xac);
          local_a8 = param_1;
          FUN_140074660(&DAT_141d64dc8,local_78,&local_c8);
          FUN_14000c260(&local_58);
          goto LAB_140c3ba55;
        }
        uVar15 = (int)psVar14 + 1;
        psVar14 = (short *)(ulonglong)uVar15;
        psVar10 = psVar10 + 4;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)(*(longlong *)(lVar8 + 0x220) - lVar1 >> 3));
    }
    break;
  case 0x5b:
    lVar8 = *(longlong *)(param_1 + 0xa78);
    psVar10 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar8 + 0x218);
        if (**(short **)((longlong)psVar14 + lVar1) == 0x34) {
          if (*(int *)(*(longlong *)(lVar1 + (longlong)(int)psVar10 * 8) + 4) < 0xb) {
            return;
          }
          *(undefined2 *)(param_1 + 0xa0) = 0x5c;
          if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
            return;
          }
          cVar4 = FUN_140c88550(param_1);
          if (cVar4 == '\0') {
            return;
          }
          if (DAT_1410b67dc == 0) {
            bVar2 = DAT_141c34530 & 0x70;
          }
          else {
            bVar2 = DAT_141c34530 & 8;
          }
          if (bVar2 == 0) {
            return;
          }
          local_40 = 0xf;
          local_48 = 0;
          local_58 = local_58 & 0xffffffffffffff00;
          lVar8 = FUN_140cda750(param_1);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
            FUN_14061fbe0(lVar8,&local_58);
          }
          FUN_14000c9f0(&local_58," has become a ",0xe);
          local_60 = 0xf;
          local_68 = 0;
          local_78[0]._0_1_ = 0;
          FUN_140c2fd00(param_1,local_78,0);
          FUN_14000cb40(&local_58,local_78,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_58,&DAT_140e597bc,1);
          local_bc = 0;
          local_b8 = 0x8ad08ad0;
          local_b4 = 0x8ad0;
          local_b0 = 0;
          local_a0 = 0;
          local_98 = 0xffffffffffffffff;
          local_90 = 0xffffffff;
          local_8c = 0;
          local_c8 = 0x700ec;
          local_c4 = 1;
          local_ac = 2000;
          local_c2 = *(undefined2 *)(param_1 + 0xa8);
          local_c0 = *(undefined2 *)(param_1 + 0xaa);
          local_be = *(undefined2 *)(param_1 + 0xac);
          local_a8 = param_1;
          FUN_140074660(&DAT_141d64dc8,&local_58,&local_c8);
          if (0xf < local_60) {
            FUN_140002020(CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]),local_60 + 1,1);
          }
          goto LAB_140c3a79f;
        }
        uVar15 = (int)psVar10 + 1;
        psVar14 = psVar14 + 4;
        psVar10 = (short *)(ulonglong)uVar15;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)(*(longlong *)(lVar8 + 0x220) - lVar1 >> 3));
    }
    break;
  case 0x5d:
    lVar8 = *(longlong *)(param_1 + 0xa78);
    psVar10 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar8 + 0x218);
        if (**(short **)((longlong)psVar14 + lVar1) == 0x35) {
          if (*(int *)(*(longlong *)(lVar1 + (longlong)(int)psVar10 * 8) + 4) < 0xb) {
            return;
          }
          *(undefined2 *)(param_1 + 0xa0) = 0x5e;
          if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
            return;
          }
          cVar4 = FUN_140c88550(param_1);
          if (cVar4 == '\0') {
            return;
          }
          if (DAT_1410b67dc == 0) {
            bVar2 = DAT_141c34530 & 0x70;
          }
          else {
            bVar2 = DAT_141c34530 & 8;
          }
          if (bVar2 == 0) {
            return;
          }
          local_40 = 0xf;
          local_48 = 0;
          local_58 = local_58 & 0xffffffffffffff00;
          lVar8 = FUN_140cda750(param_1);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
            FUN_14061fbe0(lVar8,&local_58);
          }
          FUN_14000c9f0(&local_58," has become a ",0xe);
          local_60 = 0xf;
          local_68 = 0;
          local_78[0]._0_1_ = 0;
          FUN_140c2fd00(param_1,local_78,0);
          FUN_14000cb40(&local_58,local_78,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_58,&DAT_140e597bc,1);
          local_bc = 0;
          local_b8 = 0x8ad08ad0;
          local_b4 = 0x8ad0;
          local_b0 = 0;
          local_a0 = 0;
          local_98 = 0xffffffffffffffff;
          local_90 = 0xffffffff;
          local_8c = 0;
          local_c8 = 0x700ec;
          local_c4 = 1;
          local_ac = 2000;
          local_c2 = *(undefined2 *)(param_1 + 0xa8);
          local_c0 = *(undefined2 *)(param_1 + 0xaa);
          local_be = *(undefined2 *)(param_1 + 0xac);
          local_a8 = param_1;
          FUN_140074660(&DAT_141d64dc8,&local_58,&local_c8);
          if (0xf < local_60) {
            FUN_140002020(CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]),local_60 + 1,1);
          }
          goto LAB_140c3a79f;
        }
        uVar15 = (int)psVar10 + 1;
        psVar14 = psVar14 + 4;
        psVar10 = (short *)(ulonglong)uVar15;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)(*(longlong *)(lVar8 + 0x220) - lVar1 >> 3));
    }
    break;
  case 0x5f:
    lVar8 = *(longlong *)(param_1 + 0xa78);
    psVar10 = psVar14;
    if (*(longlong *)(lVar8 + 0x220) - *(longlong *)(lVar8 + 0x218) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar8 + 0x218);
        if (**(short **)((longlong)psVar14 + lVar1) == 0x33) {
          if (*(int *)(*(longlong *)(lVar1 + (longlong)(int)psVar10 * 8) + 4) < 0xb) {
            return;
          }
          *(undefined2 *)(param_1 + 0xa0) = 0x60;
          if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
            return;
          }
          cVar4 = FUN_140c88550(param_1);
          if (cVar4 == '\0') {
            return;
          }
          if (DAT_1410b67dc == 0) {
            bVar2 = DAT_141c34530 & 0x70;
          }
          else {
            bVar2 = DAT_141c34530 & 8;
          }
          if (bVar2 == 0) {
            return;
          }
          local_40 = 0xf;
          local_48 = 0;
          local_58 = local_58 & 0xffffffffffffff00;
          lVar8 = FUN_140cda750(param_1);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) {
            FUN_14061fbe0(lVar8,&local_58);
          }
          FUN_14000c9f0(&local_58," has become a ",0xe);
          local_60 = 0xf;
          local_68 = 0;
          local_78[0]._0_1_ = 0;
          FUN_140c2fd00(param_1,local_78,0);
          FUN_14000cb40(&local_58,local_78,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_58,&DAT_140e597bc,1);
          local_bc = 0;
          local_b8 = 0x8ad08ad0;
          local_b4 = 0x8ad0;
          local_b0 = 0;
          local_a0 = 0;
          local_98 = 0xffffffffffffffff;
          local_90 = 0xffffffff;
          local_8c = 0;
          local_c8 = 0x700ec;
          local_c4 = 1;
          local_ac = 2000;
          local_c2 = *(undefined2 *)(param_1 + 0xa8);
          local_c0 = *(undefined2 *)(param_1 + 0xaa);
          local_be = *(undefined2 *)(param_1 + 0xac);
          local_a8 = param_1;
          FUN_140074660(&DAT_141d64dc8,&local_58,&local_c8);
          if (0xf < local_60) {
            FUN_140002020(CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]),local_60 + 1,1);
          }
          local_60 = 0xf;
          local_68 = 0;
          local_78[0]._0_1_ = 0;
          puVar12 = &local_58;
          goto LAB_140c3ba59;
        }
        uVar15 = (int)psVar10 + 1;
        psVar14 = psVar14 + 4;
        psVar10 = (short *)(ulonglong)uVar15;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)(*(longlong *)(lVar8 + 0x220) - lVar1 >> 3));
    }
  }
  return;
}

