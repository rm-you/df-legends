// FUN_140c2efa0 @ 140c2efa0
// callees:
//   -> 14000c780 FUN_14000c780
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140ca8390 FUN_140ca8390
//   -> 1407ad250 FUN_1407ad250
//   -> 1407d4c00 FUN_1407d4c00
//   -> 1407b52b0 FUN_1407b52b0
//   -> 140050d30 FUN_140050d30
//   -> 140cc1de0 FUN_140cc1de0
//   -> 140c2ed10 FUN_140c2ed10
//   -> 14078e060 FUN_14078e060
//   -> 140527030 FUN_140527030
//   -> 140541a20 FUN_140541a20
//   -> 14073eb00 FUN_14073eb00
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140740270 FUN_140740270
//   -> 14061fbe0 FUN_14061fbe0
//   -> 140002020 FUN_140002020
//   -> 14014b6b0 FUN_14014b6b0
//   -> 14000cb40 FUN_14000cb40
//   -> 140004650 FUN_140004650
//   -> 14000c1b0 FUN_14000c1b0
//   -> 140c713b0 FUN_140c713b0
//   -> 1402c8f70 FUN_1402c8f70
//   -> 14000c110 FUN_14000c110
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c2efa0(longlong param_1,undefined1 *param_2,int param_3,char param_4,char param_5)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  undefined *puVar13;
  char *pcVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_108 [32];
  undefined1 **local_e8;
  undefined2 local_e0;
  char local_d8;
  undefined1 local_d7 [3];
  int local_d4;
  undefined4 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  longlong local_b8 [2];
  undefined1 local_a8;
  undefined7 uStack_a7;
  longlong local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  longlong local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  plVar1 = DAT_141c66fe8;
  iVar6 = DAT_1410b67d8;
  local_b8[1] = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_108;
  local_d8 = param_4;
  local_d4 = param_3;
  local_c8 = param_2;
  if (((DAT_1410b67dc == 1) && (DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3 != 0)) &&
     (param_1 == *DAT_141c66fe8)) {
    if (param_4 != '\0') {
      FUN_14000c780(param_2,&DAT_140e59dc8,3);
      return;
    }
    FUN_14000c780(param_2,&DAT_140e5ca10,3);
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0xd60);
  if ((lVar9 == 0) || (*(longlong *)(lVar9 + 0x30) == 0)) {
    if (1 < DAT_1410b67d8 - 4U) {
      if ((DAT_1410b67dc == 1) && (DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3 != 0)) {
        puVar8 = (undefined1 *)(param_1 + 8);
        local_c0 = puVar8;
        local_b8[0] = FUN_140ca8390(param_1);
        if (local_b8[0] == 0) {
          local_d0 = (undefined4 *)0x0;
        }
        else {
          local_d0 = (undefined4 *)FUN_1407ad250(local_b8[0]);
          if (local_d0 != (undefined4 *)0x0) {
            puVar8 = (undefined1 *)FUN_1407d4c00(local_d0);
            local_c0 = puVar8;
          }
        }
        if (puVar8[0x72] != '\0') {
          if (iVar6 == 1) {
            bVar21 = false;
            lVar9 = FUN_140ca8390(*plVar1);
            if (lVar9 == 0) goto LAB_140c2f685;
            if ((*(int *)(param_1 + 0xc10) == -1) || (lVar10 = FUN_1407b52b0(lVar9), lVar10 == 0)) {
LAB_140c2f174:
              if ((((*(int *)(param_1 + 0x14c) == -1) || (*(longlong *)(lVar9 + 0x130) == 0)) ||
                  (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x130) + 0x60), lVar9 == 0)) ||
                 (iVar6 = FUN_140050d30(*(int *)(param_1 + 0x14c),lVar9 + 0x48), iVar6 == -1)) {
                if (!bVar21) goto LAB_140c2f685;
                goto LAB_140c2f1b5;
              }
            }
            else if ((*(byte *)(lVar10 + 4) & 1) == 0) {
              if (local_d0 != (undefined4 *)0x0) {
                iVar6 = FUN_140050d30(*local_d0,lVar10 + 8);
                bVar21 = false;
                if (iVar6 != -1) {
                  bVar21 = true;
                }
              }
              goto LAB_140c2f174;
            }
            local_c0 = (undefined1 *)(param_1 + 8);
          }
LAB_140c2f1b5:
          plVar1 = DAT_141c66fe8;
          bVar21 = false;
          if (*(int *)(param_1 + 0x3b8) == *(int *)(*DAT_141c66fe8 + 0x130)) {
LAB_140c2f647:
            if (*(longlong *)(local_c0 + 0x10) == 0) {
              FUN_14061fbe0(local_c0,param_2);
            }
            else if (param_2 != local_c0) {
              FUN_14000c8b0(param_2,local_c0,0,0xffffffffffffffff);
            }
            goto LAB_140c2fcca;
          }
          piVar11 = DAT_141ec92b0;
          if (DAT_141ec92b0 < DAT_141ec92b8) {
LAB_140c2f1f5:
            if (*piVar11 != *(int *)(param_1 + 0xc10)) goto code_r0x000140c2f1fa;
            if ((int)((longlong)piVar11 - (longlong)DAT_141ec92b0 >> 2) != -1) {
              uVar20 = 0;
              uVar19 = (ulonglong)((longlong)DAT_141ec92a0 + (3 - (longlong)DAT_141ec9298)) >> 2;
              if (DAT_141ec92a0 < DAT_141ec9298) {
                uVar19 = uVar20;
              }
              param_3 = local_d4;
              if (uVar19 != 0) {
                puVar16 = DAT_141ec9298;
                do {
                  lVar9 = FUN_140cc1de0(&DAT_141c66fd0,*puVar16);
                  if (((lVar9 != 0) && (*(int *)(lVar9 + 0x3b8) == *(int *)(*plVar1 + 0x130))) &&
                     (*(int *)(param_1 + 0x3b8) == *(int *)(lVar9 + 0x130))) {
                    bVar21 = true;
                  }
                  puVar16 = puVar16 + 1;
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar19);
                param_2 = local_c8;
                param_3 = local_d4;
                if (!bVar21) goto LAB_140c2f2ad;
                goto LAB_140c2f647;
              }
            }
          }
LAB_140c2f2ad:
          local_90 = 0xf;
          local_98 = 0;
          local_a8 = 0;
          if ((*(longlong *)(param_1 + 0xd60) == 0) && (*(char *)(param_1 + 0x81c) == '\0')) {
            local_e0 = 0xfffe;
          }
          else {
            local_e0 = 0xffff;
          }
          local_e8 = (undefined1 **)((ulonglong)local_e8 & 0xffffffffffffff00);
          FUN_140c2ed10(&local_a8,*(undefined2 *)(param_1 + 0xa0),*(undefined2 *)(param_1 + 0xa4),
                        *(undefined2 *)(param_1 + 300));
          if ((local_d0 == (undefined4 *)0x0) || (*(short *)(local_d0 + 0x2b) == -1)) {
            lVar9 = FUN_140ca8390(param_1);
            if (lVar9 != 0) {
              local_e8 = &local_c8;
              lVar9 = FUN_14078e060(lVar9,0xffffffff,local_d7,&local_d0);
              if ((lVar9 != 0) && (local_b8[0] != 0)) {
                puVar8 = (undefined1 *)FUN_140527030(lVar9,*(undefined1 *)(local_b8[0] + 6));
                if (&local_a8 != puVar8) {
                  FUN_14000c8b0(&local_a8,puVar8,0,0xffffffffffffffff);
                }
                if (0 < *(short *)(lVar9 + 0x2c8)) {
                  FUN_140541a20(local_d0,local_c8,&local_a8);
                }
              }
            }
            lVar9 = FUN_140ca8390(param_1);
            if ((lVar9 != 0) && (sVar4 = FUN_14073eb00(lVar9,4,0xffffffff), 0 < sVar4)) {
              if (((ushort)(*(short *)(param_1 + 0xa0) - 0x67U) < 2) && (local_98 != 0)) {
                FUN_14000c9f0(&local_a8," slave",6);
              }
              else {
                FUN_14000c780(&local_a8,"slave",5);
              }
            }
            lVar9 = FUN_140ca8390(param_1);
            if (((lVar9 != 0) && (sVar4 = FUN_14073eb00(lVar9,6,0xffffffff), 0 < sVar4)) ||
               ((lVar9 = FUN_140ca8390(param_1), lVar9 != 0 &&
                (sVar4 = FUN_140740270(lVar9,7,0xffffffff), 0 < sVar4)))) {
              if (((ushort)(*(short *)(param_1 + 0xa0) - 0x67U) < 2) && (local_98 != 0)) {
                FUN_14000c9f0(&local_a8," prisoner",9);
              }
              else {
                FUN_14000c780(&local_a8,"prisoner",8);
              }
            }
          }
          if (((*(longlong *)(param_1 + 0x90) != 0) && (param_5 != '\0')) &&
             (&local_a8 != (undefined1 *)(param_1 + 0x80))) {
            FUN_14000c8b0(&local_a8,(undefined1 *)(param_1 + 0x80),0,0xffffffffffffffff);
          }
          local_70 = 0xf;
          local_78 = 0;
          local_88 = 0;
          FUN_14061fbe0(local_c0,&local_88);
          if ((local_78 != 0) || (local_98 != 0)) {
            if (local_98 == 0) {
              if (param_2 != &local_88) {
                FUN_14000c8b0(param_2,&local_88,0,0xffffffffffffffff);
              }
              FUN_14014b6b0(param_2);
            }
            else {
              puVar13 = &DAT_140e5de34;
              if (local_d8 == '\0') {
                puVar13 = &DAT_140e59f70;
              }
              FUN_14000c780(param_2,puVar13,4);
              FUN_14000cb40(param_2,&local_a8,0,0xffffffffffffffff);
              if (local_78 != 0) {
                FUN_14000c9f0(param_2,&DAT_140e59864,1);
                FUN_14000cb40(param_2,&local_88,0,0xffffffffffffffff);
              }
            }
            if (0xf < local_70) {
              FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
            }
            local_70 = 0xf;
            local_78 = 0;
            local_88 = 0;
            if (local_90 < 0x10) {
              return;
            }
            FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
            return;
          }
          if (0xf < local_70) {
            FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
          }
          local_70 = 0xf;
          local_78 = 0;
          local_88 = 0;
          if (0xf < local_90) {
            FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
          }
        }
      }
LAB_140c2f685:
      lVar10 = 0;
      sVar4 = *(short *)(param_1 + 0xa0);
      lVar9 = FUN_140ca8390(param_1);
      if ((lVar9 != 0) && (lVar10 = FUN_1407ad250(lVar9), lVar10 != 0)) {
        if ((*(int *)(lVar10 + 0x88) != -1) &&
           ((lVar12 = FUN_140004650(&DAT_141d7a048), lVar12 != 0 && (0 < *(int *)(lVar12 + 0xd0)))))
        {
          if ((**(byte **)(lVar12 + 200) & 4) == 0) {
            if ((*(int *)(lVar12 + 0xd0) < 1) || ((**(byte **)(lVar12 + 200) & 8) == 0))
            goto LAB_140c2f79e;
            if (param_3 == 1) {
              uVar17 = 4;
              puVar13 = &DAT_140e59f70;
LAB_140c2f777:
              FUN_14000c9f0(param_2,puVar13,uVar17);
            }
            else if (param_3 == 0) {
              uVar17 = 2;
              puVar13 = &DAT_140e5daa0;
              goto LAB_140c2f777;
            }
            FUN_14000c9f0(param_2,"force",5);
            bVar21 = local_d8 == '\0';
            goto LAB_140c2fcc8;
          }
          if (param_3 == 1) {
            uVar17 = 4;
            puVar13 = &DAT_140e59f70;
LAB_140c2f716:
            FUN_14000c9f0(param_2,puVar13,uVar17);
          }
          else if (param_3 == 0) {
            uVar17 = 2;
            puVar13 = &DAT_140e5daa0;
            goto LAB_140c2f716;
          }
          FUN_14000c9f0(param_2,"deity",5);
          bVar21 = local_d8 == '\0';
          goto LAB_140c2fcc8;
        }
LAB_140c2f79e:
        if (*(short *)(lVar10 + 0xac) != -1) {
          sVar4 = *(short *)(lVar10 + 0xac);
        }
      }
      local_50 = 0xf;
      local_58 = 0;
      local_68 = 0;
      if ((*(longlong *)(param_1 + 0xd60) == 0) && (*(char *)(param_1 + 0x81c) == '\0')) {
        local_e0 = 0xfffe;
      }
      else {
        local_e0 = 0xffff;
      }
      local_e8 = (undefined1 **)((ulonglong)local_e8 & 0xffffffffffffff00);
      cVar2 = FUN_140c2ed10(&local_68,sVar4,*(undefined2 *)(param_1 + 0xa4),
                            *(undefined2 *)(param_1 + 300));
      if ((lVar10 == 0) || (*(short *)(lVar10 + 0xac) == -1)) {
        lVar10 = FUN_140ca8390(param_1);
        if (lVar10 != 0) {
          local_e8 = (undefined1 **)local_b8;
          lVar10 = FUN_14078e060(lVar10,0xffffffff,local_d7,&local_c8);
          if ((lVar10 != 0) && (lVar9 != 0)) {
            puVar8 = (undefined1 *)FUN_140527030(lVar10,*(undefined1 *)(lVar9 + 6));
            if (&local_68 != puVar8) {
              FUN_14000c8b0(&local_68,puVar8,0,0xffffffffffffffff);
            }
            if (0 < *(short *)(lVar10 + 0x2c8)) {
              FUN_140541a20(local_c8,local_b8[0],&local_68);
            }
            cVar2 = '\0';
          }
        }
        lVar9 = FUN_140ca8390(param_1);
        if ((lVar9 != 0) && (sVar5 = FUN_14073eb00(lVar9,4,0xffffffff), 0 < sVar5)) {
          if (((ushort)(sVar4 - 0x67U) < 2) && (local_58 != 0)) {
            FUN_14000c9f0(&local_68," slave",6);
          }
          else {
            FUN_14000c780(&local_68,"slave",5);
          }
          cVar2 = '\0';
        }
        lVar9 = FUN_140ca8390(param_1);
        if (((lVar9 != 0) && (sVar5 = FUN_14073eb00(lVar9,6,0xffffffff), 0 < sVar5)) ||
           ((lVar9 = FUN_140ca8390(param_1), lVar9 != 0 &&
            (sVar5 = FUN_140740270(lVar9,7,0xffffffff), 0 < sVar5)))) {
          if (((ushort)(sVar4 - 0x67U) < 2) && (local_58 != 0)) {
            FUN_14000c9f0(&local_68," prisoner",9);
          }
          else {
            FUN_14000c780(&local_68,"prisoner",8);
          }
          cVar2 = '\0';
        }
      }
      if ((*(longlong *)(param_1 + 0x90) != 0) && (param_5 != '\0')) {
        if (&local_68 != (undefined1 *)(param_1 + 0x80)) {
          FUN_14000c8b0(&local_68,(undefined1 *)(param_1 + 0x80),0,0xffffffffffffffff);
        }
        cVar2 = '\0';
      }
      FUN_14000c1b0(param_2,0);
      cVar3 = FUN_140c713b0(*(undefined2 *)(param_1 + 0xa4),*(undefined2 *)(param_1 + 300));
      iVar6 = local_d4;
      if (((cVar3 != '\0') && (*(int *)(param_1 + 0x3a4) == -1)) &&
         ((*(uint *)(param_1 + 0x110) & 0x4000000) != 0)) {
        if (*(longlong *)(param_2 + 0x10) == 0) {
          if (local_d4 == 1) {
            uVar17 = 4;
            puVar13 = &DAT_140e59f70;
          }
          else {
            if (local_d4 != 0) goto LAB_140c2fa40;
            uVar17 = 2;
            puVar13 = &DAT_140e5daa0;
          }
          FUN_14000c9f0(param_2,puVar13,uVar17);
        }
LAB_140c2fa40:
        FUN_14000c9f0(param_2,"stray ",6);
      }
      if ((*(uint *)(param_1 + 0x118) & 0x1000) == 0) {
LAB_140c2fb00:
        iVar6 = local_d4;
        if (*(longlong *)(param_2 + 0x10) == 0) {
          if (local_d4 == 1) {
            uVar17 = 4;
            puVar13 = &DAT_140e59f70;
          }
          else {
            if (local_d4 != 0) goto LAB_140c2fb3b;
            uVar17 = 2;
            puVar13 = &DAT_140e5daa0;
          }
          FUN_14000c9f0(param_2,puVar13,uVar17);
        }
LAB_140c2fb3b:
        if (DAT_1410b67dc == 1) {
          if (*(longlong *)(param_1 + 0x13c0) == 0) {
            FUN_1402c8f70(param_1);
          }
          iVar7 = FUN_14000c110(param_1 + 0x13b0,"average");
          if (iVar7 != 0) {
            FUN_14000cb40(param_2,param_1 + 0x13b0,0,0xffffffffffffffff);
            FUN_14000c9f0(param_2,&DAT_140e59864,1);
          }
        }
        FUN_14000cb40(param_2,&local_68,0,0xffffffffffffffff);
        if (*(char *)(param_1 + 0x81c) != '\0') {
          if (*(longlong *)(param_2 + 0x10) == 0) {
            if (iVar6 == 1) {
              uVar17 = 4;
              puVar15 = (undefined2 *)&DAT_140e59f70;
              goto LAB_140c2fbfb;
            }
            if (iVar6 == 0) {
              uVar17 = 2;
              puVar15 = (undefined2 *)&DAT_140e5daa0;
              goto LAB_140c2fbfb;
            }
          }
          else {
            uVar17 = 1;
            puVar15 = &DAT_140e59864;
LAB_140c2fbfb:
            FUN_14000c9f0(param_2,puVar15,uVar17);
          }
          FUN_14000cb40(param_2,param_1 + 0x820,0,0xffffffffffffffff);
        }
        if (*(longlong *)(param_1 + 0xd60) == 0) goto LAB_140c2fc7d;
        if (*(longlong *)(param_2 + 0x10) != 0) {
          uVar18 = 7;
          pcVar14 = " corpse";
          goto LAB_140c2fc75;
        }
        if (iVar6 == 1) {
          uVar17 = 4;
          puVar13 = &DAT_140e59f70;
LAB_140c2fc51:
          FUN_14000c9f0(param_2,puVar13,uVar17);
        }
        else if (iVar6 == 0) {
          uVar17 = 2;
          puVar13 = &DAT_140e5daa0;
          goto LAB_140c2fc51;
        }
        uVar18 = 6;
        pcVar14 = "corpse";
      }
      else {
        if ((cVar2 == '\0') || (*(longlong *)(param_2 + 0x10) != 0)) {
          if (*(longlong *)(param_2 + 0x10) == 0) {
            if (iVar6 == 1) {
              uVar17 = 4;
              puVar13 = &DAT_140e59f70;
            }
            else {
              if (iVar6 != 0) goto LAB_140c2faeb;
              uVar17 = 2;
              puVar13 = &DAT_140e5daa0;
            }
            FUN_14000c9f0(param_2,puVar13,uVar17);
          }
LAB_140c2faeb:
          FUN_14000c9f0(param_2,"ghostly ",8);
          goto LAB_140c2fb00;
        }
        if (iVar6 == 1) {
          uVar17 = 4;
          puVar13 = &DAT_140e59f70;
LAB_140c2fa9c:
          FUN_14000c9f0(param_2,puVar13,uVar17);
        }
        else if (iVar6 == 0) {
          uVar17 = 2;
          puVar13 = &DAT_140e5daa0;
          goto LAB_140c2fa9c;
        }
        uVar18 = 5;
        pcVar14 = "ghost";
      }
LAB_140c2fc75:
      FUN_14000c9f0(param_2,pcVar14,uVar18);
LAB_140c2fc7d:
      if (local_d8 != '\0') {
        FUN_14014b6b0(param_2);
      }
      if (local_50 < 0x10) {
        return;
      }
      FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
      return;
    }
    if (param_2 != (undefined1 *)(param_1 + 8)) {
      FUN_14000c8b0(param_2,(undefined1 *)(param_1 + 8),0,0xffffffffffffffff);
    }
    bVar21 = local_d8 == '\0';
  }
  else {
    if (param_2 != (undefined1 *)(lVar9 + 0x20)) {
      FUN_14000c8b0(param_2,(undefined1 *)(lVar9 + 0x20),0,0xffffffffffffffff);
    }
    bVar21 = param_4 == '\0';
  }
LAB_140c2fcc8:
  if (bVar21) {
    return;
  }
LAB_140c2fcca:
  FUN_14014b6b0(param_2);
  return;
code_r0x000140c2f1fa:
  piVar11 = piVar11 + 1;
  if (DAT_141ec92b8 <= piVar11) goto LAB_140c2f2ad;
  goto LAB_140c2f1f5;
}

