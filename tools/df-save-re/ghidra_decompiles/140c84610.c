// FUN_140c84610 @ 140c84610
// callees:
//   -> 140dfb5c4 operator_new
//   -> 1409079f0 FUN_1409079f0
//   -> 140162450 FUN_140162450
//   -> 140708460 FUN_140708460
//   -> 140161210 FUN_140161210
//   -> 1407b2e10 FUN_1407b2e10
//   -> 140c889d0 FUN_140c889d0
//   -> 1404ceb70 FUN_1404ceb70
//   -> 14000ef80 FUN_14000ef80
//   -> 1407c7ae0 FUN_1407c7ae0
//   -> 14073fb40 FUN_14073fb40
//   -> 1408054d0 FUN_1408054d0
//   -> 14075e900 FUN_14075e900
//   -> 14000f360 FUN_14000f360
//   -> 140c84610 FUN_140c84610
//   -> 140740090 FUN_140740090
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140764a60 FUN_140764a60
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140010740 FUN_140010740
//   -> 140050150 FUN_140050150
//   -> 140010860 FUN_140010860
//   -> 140dfb5b4 free
//   -> 1407ba900 FUN_1407ba900
//   -> 140ca65e0 FUN_140ca65e0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140c84610(longlong param_1,char param_2,char param_3)

{
  byte *pbVar1;
  short sVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *_Memory;
  char cVar5;
  short sVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  short *psVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong *puVar19;
  undefined1 *puVar20;
  ulonglong *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int *piVar25;
  int *piVar26;
  undefined4 uVar27;
  ulonglong uVar28;
  ulonglong *puVar29;
  undefined1 auStack_c8 [32];
  uint local_a8;
  ushort local_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_80;
  ushort local_78 [4];
  ulonglong *local_70;
  short local_68 [2];
  char local_64;
  longlong local_60;
  undefined2 local_58 [4];
  undefined8 *local_50;
  void *local_48;
  void *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_c8;
  local_78[0] = CONCAT11(local_78[0]._1_1_,param_2);
  local_64 = param_3;
  local_60 = param_1;
  if ((*(byte *)(param_1 + 0x114) & 0x40) != 0) {
    if (param_2 == '\0') {
      puVar9 = (undefined8 *)FUN_140ca65e0();
      return puVar9;
    }
    puVar9 = (undefined8 *)FUN_140ca65e0();
    if (puVar9 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if ((0 < *(int *)(puVar9 + 0xc)) &&
       (*(byte *)puVar9[0xb] = *(byte *)puVar9[0xb] | 0x20, 0 < *(int *)(puVar9 + 0xc))) {
      *(byte *)puVar9[0xb] = *(byte *)puVar9[0xb] | 0x40;
    }
    if (0 < *(int *)(puVar9 + 0xc)) {
      *(byte *)puVar9[0xb] = *(byte *)puVar9[0xb] | 0x80;
    }
    if (1 < *(int *)(puVar9 + 0xc)) {
      *(byte *)(puVar9[0xb] + 1) = *(byte *)(puVar9[0xb] + 1) | 1;
    }
    if (0 < *(int *)(puVar9 + 0xc)) {
      *(byte *)puVar9[0xb] = *(byte *)puVar9[0xb] | 0x10;
    }
    lVar8 = puVar9[2];
    if (lVar8 == 0) {
      return puVar9;
    }
    if (1 < *(int *)(lVar8 + 0xd0)) {
      pbVar1 = (byte *)(*(longlong *)(lVar8 + 200) + 1);
      *pbVar1 = *pbVar1 | 8;
    }
    if (1 < *(int *)(puVar9[2] + 0xd0)) {
      pbVar1 = (byte *)(*(longlong *)(puVar9[2] + 200) + 1);
      *pbVar1 = *pbVar1 | 0x20;
    }
    if (1 < *(int *)(puVar9[2] + 0xd0)) {
      pbVar1 = (byte *)(*(longlong *)(puVar9[2] + 200) + 1);
      *pbVar1 = *pbVar1 | 0x10;
    }
    if (1 < *(int *)(puVar9[2] + 0xd0)) {
      pbVar1 = (byte *)(*(longlong *)(puVar9[2] + 200) + 1);
      *pbVar1 = *pbVar1 | 0x40;
    }
    if (*(int *)(puVar9[2] + 0xd0) < 2) {
      return puVar9;
    }
    pbVar1 = (byte *)(*(longlong *)(puVar9[2] + 200) + 1);
    *pbVar1 = *pbVar1 | 0x80;
    return puVar9;
  }
  if (param_3 != '\0') {
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x80000000;
  }
  iVar18 = *(int *)(param_1 + 0x140);
  lVar8 = DAT_141c53720 - DAT_141c53718 >> 3;
  if ((lVar8 != 0) && (iVar18 != -1)) {
    iVar17 = 0;
    iVar16 = (int)lVar8 + -1;
    if (-1 < iVar16) {
      do {
        iVar15 = iVar16 + iVar17 >> 1;
        local_70 = *(ulonglong **)(DAT_141c53718 + (longlong)iVar15 * 8);
        if (*(int *)((longlong)local_70 + 4) == iVar18) goto LAB_140c846d6;
        if (iVar18 < *(int *)((longlong)local_70 + 4)) {
          iVar16 = iVar15 + -1;
        }
        else {
          iVar17 = iVar15 + 1;
        }
      } while (iVar17 <= iVar16);
    }
  }
  local_70 = (ulonglong *)0x0;
LAB_140c846d6:
  puVar21 = local_70;
  local_50 = operator_new(0x68);
  puVar9 = (undefined8 *)FUN_1409079f0(local_50,0);
  if ((char)local_78[0] != '\0') {
    if ((0 < *(int *)(puVar9 + 0xc)) &&
       (*(byte *)puVar9[0xb] = *(byte *)puVar9[0xb] | 0x20, 0 < *(int *)(puVar9 + 0xc))) {
      *(byte *)puVar9[0xb] = *(byte *)puVar9[0xb] | 0x40;
    }
    if (0 < *(int *)(puVar9 + 0xc)) {
      *(byte *)puVar9[0xb] = *(byte *)puVar9[0xb] | 0x80;
    }
    if (1 < *(int *)(puVar9 + 0xc)) {
      *(byte *)(puVar9[0xb] + 1) = *(byte *)(puVar9[0xb] + 1) | 1;
    }
    if (0 < *(int *)(puVar9 + 0xc)) {
      *(byte *)puVar9[0xb] = *(byte *)puVar9[0xb] | 0x10;
    }
  }
  puVar9[3] = param_1;
  *(undefined4 *)((longlong)puVar9 + 4) = *(undefined4 *)(param_1 + 0x130);
  local_50 = puVar9;
  FUN_140162450(param_1,3);
  *(uint *)(puVar9[3] + 0x114) = *(uint *)(puVar9[3] + 0x114) | 0x40;
  if (puVar21 == (ulonglong *)0x0) {
    *(int *)(puVar9 + 1) = DAT_141d79b80;
    *(short *)((longlong)puVar9 + 0xc) = DAT_141d79b84;
    DAT_141d79b84 = DAT_141d79b84 + 1;
    if (99 < DAT_141d79b84) {
      DAT_141d79b80 = DAT_14167ecac;
      DAT_14167ecac = DAT_14167ecac + 1;
      DAT_141d79b84 = 0;
    }
  }
  else {
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)((longlong)puVar21 + 0x10);
    *(short *)((longlong)puVar9 + 0xc) = *(short *)((longlong)puVar21 + 0x14);
    *(short *)((longlong)puVar21 + 0x14) = *(short *)((longlong)puVar21 + 0x14) + 1;
    if (99 < *(short *)((longlong)puVar21 + 0x14)) {
      *(int *)((longlong)puVar21 + 0x10) = DAT_14167ecac;
      DAT_14167ecac = DAT_14167ecac + 1;
      *(short *)((longlong)puVar21 + 0x14) = 0;
    }
  }
  iVar18 = 0;
  iVar16 = *(int *)(param_1 + 0xc10);
  if (iVar16 != -1) {
    lVar8 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if ((lVar8 != 0) && (iVar17 = (int)lVar8 + -1, -1 < iVar17)) {
      do {
        iVar15 = iVar17 + iVar18 >> 1;
        lVar8 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar15 * 8);
        if (*(int *)(lVar8 + 0xe0) == iVar16) goto LAB_140c8484e;
        if (iVar16 < *(int *)(lVar8 + 0xe0)) {
          iVar17 = iVar15 + -1;
        }
        else {
          iVar18 = iVar15 + 1;
        }
      } while (iVar18 <= iVar17);
    }
    lVar8 = 0;
LAB_140c8484e:
    puVar9[2] = lVar8;
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + 0xdc) = *(undefined4 *)puVar9;
      lVar8 = puVar9[2];
      if ((char)local_78[0] == '\0') {
        if (((1 < *(int *)(lVar8 + 0xd0)) && ((*(byte *)(*(longlong *)(lVar8 + 200) + 1) & 8) != 0))
           && (0 < *(int *)(puVar9 + 0xc))) {
          *(byte *)puVar9[0xb] = *(byte *)puVar9[0xb] | 0x10;
        }
        if (((1 < *(int *)(puVar9[2] + 0xd0)) &&
            ((*(byte *)(*(longlong *)(puVar9[2] + 200) + 1) & 0x10) != 0)) &&
           (0 < *(int *)(puVar9 + 0xc))) {
          *(byte *)puVar9[0xb] = *(byte *)puVar9[0xb] | 0x20;
        }
        if (((1 < *(int *)(puVar9[2] + 0xd0)) &&
            ((*(byte *)(*(longlong *)(puVar9[2] + 200) + 1) & 0x20) != 0)) &&
           (0 < *(int *)(puVar9 + 0xc))) {
          *(byte *)puVar9[0xb] = *(byte *)puVar9[0xb] | 0x40;
        }
        if (((1 < *(int *)(puVar9[2] + 0xd0)) &&
            ((*(byte *)(*(longlong *)(puVar9[2] + 200) + 1) & 0x40) != 0)) &&
           (0 < *(int *)(puVar9 + 0xc))) {
          *(byte *)puVar9[0xb] = *(byte *)puVar9[0xb] | 0x80;
        }
        if (((1 < *(int *)(puVar9[2] + 0xd0)) &&
            ((*(byte *)(*(longlong *)(puVar9[2] + 200) + 1) & 0x80) != 0)) &&
           (1 < *(int *)(puVar9 + 0xc))) {
          *(byte *)(puVar9[0xb] + 1) = *(byte *)(puVar9[0xb] + 1) | 1;
        }
      }
      else {
        if (1 < *(int *)(lVar8 + 0xd0)) {
          pbVar1 = (byte *)(*(longlong *)(lVar8 + 200) + 1);
          *pbVar1 = *pbVar1 | 8;
        }
        if (1 < *(int *)(puVar9[2] + 0xd0)) {
          pbVar1 = (byte *)(*(longlong *)(puVar9[2] + 200) + 1);
          *pbVar1 = *pbVar1 | 0x20;
        }
        if (1 < *(int *)(puVar9[2] + 0xd0)) {
          pbVar1 = (byte *)(*(longlong *)(puVar9[2] + 200) + 1);
          *pbVar1 = *pbVar1 | 0x10;
        }
        if (1 < *(int *)(puVar9[2] + 0xd0)) {
          pbVar1 = (byte *)(*(longlong *)(puVar9[2] + 200) + 1);
          *pbVar1 = *pbVar1 | 0x40;
        }
        if (1 < *(int *)(puVar9[2] + 0xd0)) {
          pbVar1 = (byte *)(*(longlong *)(puVar9[2] + 200) + 1);
          *pbVar1 = *pbVar1 | 0x80;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xc10) == -1) {
    local_40 = operator_new(0x178);
    puVar10 = (undefined2 *)FUN_140708460(local_40,0);
    *puVar10 = *(undefined2 *)(param_1 + 0xa0);
    puVar10[1] = *(undefined2 *)(param_1 + 0xa4);
    puVar10[2] = *(undefined2 *)(param_1 + 300);
    *(undefined1 *)(puVar10 + 3) = *(undefined1 *)(param_1 + 0x12e);
    if (*(longlong *)(param_1 + 0xa78) == 0) {
      *(undefined4 *)(puVar10 + 4) = 0;
    }
    else {
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(*(longlong *)(param_1 + 0xa78) + 0x88);
    }
    *(undefined4 *)(puVar10 + 6) = DAT_1416b1980;
    *(undefined4 *)(puVar10 + 0x6c) = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(param_1 + 0x374);
    *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(param_1 + 0x378);
    *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(param_1 + 0x37c);
    *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)(param_1 + 0x380);
    *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(param_1 + 900);
    *(undefined4 *)(puVar10 + 0x12) = *(undefined4 *)(param_1 + 0x388);
    *(undefined4 *)(puVar10 + 0x14) = *(undefined4 *)(param_1 + 0x38c);
    *(undefined4 *)(puVar10 + 0x16) = *(undefined4 *)(param_1 + 0x390);
    FUN_140161210(puVar10 + 0x1c,param_1 + 8);
    *(undefined4 *)(puVar10 + 0x58) = *(undefined4 *)(param_1 + 0x140);
    *(undefined4 *)(puVar10 + 0x5a) = *(undefined4 *)(param_1 + 0x144);
    *(undefined4 *)(puVar10 + 0x5c) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)(puVar10 + 0x5e) = *(undefined4 *)(param_1 + 0x14c);
    *(undefined4 *)(puVar10 + 0x60) = *(undefined4 *)(puVar10 + 0x70);
    if (((*(uint *)(param_1 + 0x118) & 0x1000) != 0) && (0 < *(int *)(puVar10 + 0x68))) {
      **(byte **)(puVar10 + 100) = **(byte **)(puVar10 + 100) | 0x80;
    }
    *(undefined4 *)(param_1 + 0xc10) = *(undefined4 *)(puVar10 + 0x70);
    if (*(int *)(param_1 + 0xc14) == -1) {
      *(undefined4 *)(param_1 + 0xc14) = *(undefined4 *)(puVar10 + 0x70);
    }
    puVar9[2] = puVar10;
    *(undefined4 *)(puVar10 + 0x6e) = *(undefined4 *)puVar9;
    if (((*(uint *)(param_1 + 0x110) & 0x502) != 2) &&
       (iVar18 = *(int *)(param_1 + 0x144), iVar18 != -1)) {
      iVar17 = 0;
      iVar16 = (int)(DAT_141d7a6b8 - DAT_141d7a6b0 >> 3) + -1;
      if (-1 < iVar16) {
        do {
          iVar15 = iVar16 + iVar17 >> 1;
          lVar8 = *(longlong *)(DAT_141d7a6b0 + (longlong)iVar15 * 8);
          if (*(int *)(lVar8 + 0xe0) == iVar18) {
            if (lVar8 != 0) {
              psVar11 = *(short **)(lVar8 + 0x78);
              goto joined_r0x000140c84b9c;
            }
            break;
          }
          if (iVar18 < *(int *)(lVar8 + 0xe0)) {
            iVar16 = iVar15 + -1;
          }
          else {
            iVar17 = iVar15 + 1;
          }
        } while (iVar17 <= iVar16);
      }
    }
LAB_140c84bd4:
    puVar21 = local_70;
    if (0 < *(int *)(param_1 + 0x34c)) {
      FUN_1407b2e10(puVar10);
      puVar21 = local_70;
    }
  }
  iVar16 = 0;
  iVar18 = (int)(DAT_141d7a6b8 - DAT_141d7a6b0 >> 3) + -1;
  if (-1 < iVar18) {
    do {
      iVar17 = iVar18 + iVar16 >> 1;
      lVar8 = *(longlong *)(DAT_141d7a6b0 + (longlong)iVar17 * 8);
      if (*(int *)(lVar8 + 0xe0) == *(int *)(param_1 + 0x144)) {
        if (lVar8 != 0) {
          psVar11 = *(short **)(lVar8 + 0x78);
          goto joined_r0x000140c84c5b;
        }
        break;
      }
      if (*(int *)(param_1 + 0x144) < *(int *)(lVar8 + 0xe0)) {
        iVar18 = iVar17 + -1;
      }
      else {
        iVar16 = iVar17 + 1;
      }
    } while (iVar16 <= iVar18);
  }
LAB_140c84c94:
  if (puVar9[2] == 0) {
    return puVar9;
  }
  if (*(int *)(param_1 + 0x140) == -1) {
LAB_140c84cda:
    if ((puVar21 != (ulonglong *)0x0) && (cVar5 = FUN_14000ef80(param_1), cVar5 != '\0')) {
      FUN_1407c7ae0(puVar9[2]);
    }
  }
  else {
    FUN_140c889d0(puVar9[3]);
    if (puVar21 != (ulonglong *)0x0) {
      if ((*(short *)puVar21 == 1) && (lVar8 = FUN_1404ceb70(puVar21), lVar8 != 0)) {
        FUN_140c889d0(puVar9[3]);
      }
      goto LAB_140c84cda;
    }
  }
  local_78[0] = local_78[0] & 0xff00;
  iVar18 = (int)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3) + -1;
  local_70 = (ulonglong *)(longlong)iVar18;
  if (iVar18 < 0) {
LAB_140c84dc8:
    piVar25 = *(int **)(param_1 + 0x11c8);
    if (((piVar25 != (int *)0x0) && (*piVar25 != -1)) && ((piVar25[1] != -1 || (piVar25[2] != -1))))
    {
      local_a0 = local_a0 & 0xff00;
      local_a8 = 0xffffffff;
      FUN_14073fb40(puVar9[2]);
    }
  }
  else {
    do {
      plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x1c0) + (longlong)local_70 * 8);
      iVar18 = (**(code **)(*plVar12 + 0x10))(plVar12);
      if (((((iVar18 == 0x1f) &&
            (plVar12 = (longlong *)(**(code **)(*plVar12 + 0x30))(plVar12),
            plVar12 != (longlong *)0x0)) &&
           (iVar18 = (**(code **)(*plVar12 + 0xd8))(plVar12), iVar18 == 0x1e)) &&
          (*(int *)((longlong)plVar12 + 0x144) != -1)) &&
         (((int)plVar12[0x31] != -1 || (*(int *)((longlong)plVar12 + 0x18c) != -1)))) {
        local_a0 = local_a0 & 0xff00;
        local_a8 = 0xffffffff;
        FUN_14073fb40(puVar9[2]);
        local_78[0] = CONCAT11(local_78[0]._1_1_,1);
        cVar5 = '\x01';
      }
      else {
        cVar5 = (char)local_78[0];
      }
      local_70 = (ulonglong *)((longlong)local_70 - 1);
    } while (-1 < (longlong)local_70);
    if (cVar5 == '\0') goto LAB_140c84dc8;
  }
  if ((*(longlong *)(puVar9[2] + 0x130) == 0) ||
     (*(longlong *)(*(longlong *)(puVar9[2] + 0x130) + 0x28) == 0)) {
    local_78[0] = 0x8ad0;
    if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
      local_78[0] = *(ushort *)(param_1 + 0xa8);
      local_68[0] = *(short *)(param_1 + 0xaa);
      local_58[0] = *(undefined2 *)(param_1 + 0xac);
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 0x1c8);
      for (puVar22 = *(undefined8 **)(param_1 + 0x1c0); param_1 = local_60, puVar22 < puVar3;
          puVar22 = puVar22 + 1) {
        iVar18 = (**(code **)(*(longlong *)*puVar22 + 0x10))();
        if ((iVar18 == 0xb) && (lVar8 = (**(code **)(*(longlong *)*puVar22 + 0x18))(), lVar8 != 0))
        {
          FUN_1408054d0(lVar8,local_78,local_68,local_58);
          param_1 = local_60;
          break;
        }
      }
    }
    if (*(longlong *)(param_1 + 0x11e8) == 0) {
      plVar4 = *(longlong **)(puVar9[2] + 0x108);
      for (plVar12 = *(longlong **)(puVar9[2] + 0x100); plVar12 < plVar4; plVar12 = plVar12 + 1) {
        sVar6 = (*(code *)**(undefined8 **)*plVar12)();
        if ((int)sVar6 - 3U < 5) {
          uVar14 = 1;
          uVar27 = *(undefined4 *)(*plVar12 + 8);
          goto LAB_140c84f8b;
        }
      }
      uVar14 = 0;
      uVar27 = 0xffffffff;
LAB_140c84f8b:
      local_80 = 0xffffffff;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0xffff;
      local_a0 = 0xffff;
      local_a8 = 0xffffffff;
      FUN_14075e900(puVar9[2],uVar14,uVar27,0xffffffff);
      param_1 = local_60;
    }
    else {
      local_80 = 0xffffffff;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0xffff;
      local_a0 = 0xffff;
      local_a8 = 0xffffffff;
      FUN_14075e900(puVar9[2],3,0xffffffff,0xffffffff);
    }
    if (local_78[0] != 0x8ad0) {
      *(int *)(*(longlong *)(*(longlong *)(puVar9[2] + 0x130) + 0x28) + 0x1c) =
           ((int)((int)(short)local_78[0] + ((int)(short)local_78[0] >> 0x1f & 0xfU)) >> 4) +
           DAT_141d69560 * 3;
      *(int *)(*(longlong *)(*(longlong *)(puVar9[2] + 0x130) + 0x28) + 0x20) =
           ((int)((int)local_68[0] + ((int)local_68[0] >> 0x1f & 0xfU)) >> 4) + DAT_141d69564 * 3;
    }
  }
  if ((*(int *)(param_1 + 0x3ac) != -1) && (lVar8 = FUN_14000f360(&DAT_141c66fd0), lVar8 != 0)) {
    iVar18 = (int)(DAT_141c66ff0 - DAT_141c66fe8 >> 3) + -1;
    if (-1 < iVar18) {
      lVar13 = (longlong)iVar18;
      do {
        if (*(longlong *)(DAT_141c66fe8 + lVar13 * 8) == lVar8) {
          uVar14 = 1;
          goto LAB_140c85056;
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
    uVar14 = 0;
LAB_140c85056:
    FUN_140c84610(lVar8,0,uVar14);
    local_a8 = local_a8 & 0xffffff00;
    FUN_140740090(puVar9[2],0,*(undefined4 *)(lVar8 + 0xc10),100);
    iVar18 = *(int *)(lVar8 + 0xc10);
    lVar8 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if ((lVar8 != 0) && (iVar18 != -1)) {
      uVar23 = 0;
      iVar16 = (int)lVar8 + -1;
      uVar24 = uVar23;
      uVar28 = uVar23;
      if (-1 < iVar16) {
        do {
          iVar15 = iVar16 + (int)uVar28 >> 1;
          uVar24 = *(ulonglong *)(DAT_141d7a0a8 + (longlong)iVar15 * 8);
          iVar17 = *(int *)(uVar24 + 0xe0);
          if (iVar17 == iVar18) break;
          if (iVar18 < iVar17) {
            iVar16 = iVar15 + -1;
          }
          else {
            uVar28 = (ulonglong)(iVar15 + 1);
          }
          uVar24 = uVar23;
        } while ((int)uVar28 <= iVar16);
      }
      if (uVar24 != 0) {
        lVar8 = puVar9[2];
        if (*(int *)(lVar8 + 0xc0) == -1) {
          *(undefined4 *)(lVar8 + 0xc0) = *(undefined4 *)(uVar24 + 0xc0);
        }
        else if (*(int *)(uVar24 + 0xc0) == -1) {
          *(int *)(uVar24 + 0xc0) = *(int *)(lVar8 + 0xc0);
        }
        else {
          *(int *)(lVar8 + 0xc0) = *(int *)(uVar24 + 0xc0);
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x3b0) != -1) && (lVar8 = FUN_14000f360(&DAT_141c66fd0), lVar8 != 0)) {
    iVar18 = (int)(DAT_141c66ff0 - DAT_141c66fe8 >> 3) + -1;
    if (-1 < iVar18) {
      lVar13 = (longlong)iVar18;
      do {
        if (*(longlong *)(DAT_141c66fe8 + lVar13 * 8) == lVar8) {
          uVar14 = 1;
          goto LAB_140c85176;
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
    uVar14 = 0;
LAB_140c85176:
    FUN_140c84610(lVar8,0,uVar14);
    local_a8 = local_a8 & 0xffffff00;
    FUN_140740090(puVar9[2],1,*(undefined4 *)(lVar8 + 0xc10),100);
    iVar18 = *(int *)(lVar8 + 0xc10);
    lVar8 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if ((lVar8 != 0) && (iVar18 != -1)) {
      uVar23 = 0;
      iVar16 = (int)lVar8 + -1;
      uVar24 = uVar23;
      uVar28 = uVar23;
      if (-1 < iVar16) {
        do {
          iVar15 = iVar16 + (int)uVar28 >> 1;
          uVar24 = *(ulonglong *)(DAT_141d7a0a8 + (longlong)iVar15 * 8);
          iVar17 = *(int *)(uVar24 + 0xe0);
          if (iVar17 == iVar18) break;
          if (iVar18 < iVar17) {
            iVar16 = iVar15 + -1;
          }
          else {
            uVar28 = (ulonglong)(iVar15 + 1);
          }
          uVar24 = uVar23;
        } while ((int)uVar28 <= iVar16);
      }
      if (uVar24 != 0) {
        lVar8 = puVar9[2];
        if (*(int *)(lVar8 + 0xc0) == -1) {
          *(undefined4 *)(lVar8 + 0xc0) = *(undefined4 *)(uVar24 + 0xc0);
        }
        else if (*(int *)(uVar24 + 0xc0) == -1) {
          *(int *)(uVar24 + 0xc0) = *(int *)(lVar8 + 0xc0);
        }
        else {
          *(int *)(lVar8 + 0xc0) = *(int *)(uVar24 + 0xc0);
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x3a8) != -1) && (lVar8 = FUN_14000f360(&DAT_141c66fd0), lVar8 != 0)) {
    iVar18 = (int)(DAT_141c66ff0 - DAT_141c66fe8 >> 3) + -1;
    if (-1 < iVar18) {
      lVar13 = (longlong)iVar18;
      do {
        if (*(longlong *)(DAT_141c66fe8 + lVar13 * 8) == lVar8) {
          uVar14 = 1;
          goto LAB_140c85296;
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
    uVar14 = 0;
LAB_140c85296:
    FUN_140c84610(lVar8,0,uVar14);
    local_a8 = local_a8 & 0xffffff00;
    FUN_140740090(puVar9[2],2,*(undefined4 *)(lVar8 + 0xc10),100);
    iVar18 = *(int *)(lVar8 + 0xc10);
    lVar8 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if ((lVar8 != 0) && (iVar18 != -1)) {
      uVar23 = 0;
      iVar16 = (int)lVar8 + -1;
      uVar24 = uVar23;
      uVar28 = uVar23;
      if (-1 < iVar16) {
        do {
          iVar15 = iVar16 + (int)uVar28 >> 1;
          uVar24 = *(ulonglong *)(DAT_141d7a0a8 + (longlong)iVar15 * 8);
          iVar17 = *(int *)(uVar24 + 0xe0);
          if (iVar17 == iVar18) break;
          if (iVar18 < iVar17) {
            iVar16 = iVar15 + -1;
          }
          else {
            uVar28 = (ulonglong)(iVar15 + 1);
          }
          uVar24 = uVar23;
        } while ((int)uVar28 <= iVar16);
      }
      if (uVar24 != 0) {
        iVar18 = *(int *)(puVar9[2] + 0xc0);
        if (iVar18 == -1) {
          *(undefined4 *)(puVar9[2] + 0xc0) = *(undefined4 *)(uVar24 + 0xc0);
        }
        else if (*(int *)(uVar24 + 0xc0) == -1) {
          *(int *)(uVar24 + 0xc0) = iVar18;
        }
        else {
          uVar7 = FUN_1409fc0c0();
          if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e
              == 0) {
            *(undefined4 *)(uVar24 + 0xc0) = *(undefined4 *)(puVar9[2] + 0xc0);
          }
          else {
            *(undefined4 *)(puVar9[2] + 0xc0) = *(undefined4 *)(uVar24 + 0xc0);
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xd60) == 0) goto LAB_140c855a4;
  FUN_140764a60(puVar9[2]);
  puVar21 = *(ulonglong **)(*(longlong *)(puVar9[2] + 0x130) + 0x48);
  iVar18 = -1;
  if (*(int *)(param_1 + 0xc14) != *(int *)(puVar9[2] + 0xe0)) {
    iVar18 = *(int *)(param_1 + 0xc14);
  }
  *(int *)(puVar21 + 0x22) = iVar18;
  *(undefined4 *)((longlong)puVar21 + 0x114) = *(undefined4 *)(param_1 + 0xa4);
  *(int *)(puVar21 + 0x23) = (int)*(short *)(param_1 + 300);
  *(int *)((longlong)puVar21 + 0x11c) = (int)*(short *)(*(longlong *)(param_1 + 0xd60) + 0x18);
  puVar19 = (ulonglong *)(*(longlong *)(param_1 + 0xd60) + 0x20);
  local_70 = puVar21;
  if (puVar21 + 0x24 != puVar19) {
    FUN_14000c8b0(puVar21 + 0x24,puVar19,0,0xffffffffffffffff);
  }
  if (puVar21[0x26] == 0) {
    local_18 = 0xf;
    sVar6 = *(short *)(param_1 + 300);
    sVar2 = *(short *)(param_1 + 0xa4);
    local_20 = 0;
    local_30 = 0;
    if (sVar6 == -1) {
LAB_140c8550d:
      if ((-1 < sVar2) &&
         (((ulonglong)(longlong)sVar2 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) &&
          (puVar20 = (undefined1 *)(*(longlong *)(DAT_141d6dd50 + (longlong)sVar2 * 8) + 0x20),
          &local_30 != puVar20)))) {
        FUN_14000c8b0(&local_30,puVar20,0,0xffffffffffffffff);
      }
    }
    else if (-1 < sVar2) {
      if (((ulonglong)(longlong)sVar2 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
         (-1 < sVar6)) {
        lVar8 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar2 * 8);
        if (((ulonglong)(longlong)sVar6 <
             (ulonglong)(*(longlong *)(lVar8 + 0x180) - *(longlong *)(lVar8 + 0x178) >> 3)) &&
           ((puVar20 = (undefined1 *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x178) + (longlong)sVar6 * 8) + 0x20),
            &local_30 != puVar20 &&
            (FUN_14000c8b0(&local_30,puVar20,0,0xffffffffffffffff), local_20 != 0))))
        goto LAB_140c85543;
      }
      goto LAB_140c8550d;
    }
LAB_140c85543:
    puVar21 = local_70;
    FUN_14000c780(local_70 + 0x24,"zombie ",7);
    FUN_14000cb40(puVar21 + 0x24,&local_30,0,0xffffffffffffffff);
    if (0xf < local_18) {
      FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
    }
  }
  *(undefined4 *)(local_70 + 0x28) = *(undefined4 *)(param_1 + 0x370);
LAB_140c855a4:
  if (*(longlong *)(param_1 + 0xc58) - *(longlong *)(param_1 + 0xc50) >> 2 != 0) {
    FUN_140764a60(puVar9[2]);
    puVar21 = *(ulonglong **)(*(longlong *)(puVar9[2] + 0x130) + 0x48);
    piVar25 = *(int **)(param_1 + 0xc50);
    piVar26 = *(int **)(param_1 + 0xc68);
    local_48 = (void *)0x0;
    local_40 = (void *)((ulonglong)((longlong)*(int **)(param_1 + 0xc58) + (3 - (longlong)piVar25))
                       >> 2);
    if (*(int **)(param_1 + 0xc58) < piVar25) {
      local_40 = (void *)0x0;
    }
    param_1 = local_60;
    local_70 = puVar21;
    if (local_40 != (void *)0x0) {
      do {
        local_70 = (ulonglong *)(DAT_141d779c0 + (longlong)*piVar25 * 8);
        puVar9 = (undefined8 *)puVar21[1];
        if ((local_70 < puVar9) && ((undefined8 *)*puVar21 <= local_70)) {
          local_70 = (ulonglong *)((longlong)local_70 - (longlong)*puVar21 >> 3);
          if (puVar9 == (undefined8 *)puVar21[2]) {
            FUN_14000c2d0(puVar21,1);
          }
          if ((undefined8 *)puVar21[1] != (undefined8 *)0x0) {
            *(undefined8 *)puVar21[1] = *(undefined8 *)(*puVar21 + (longlong)local_70 * 8);
          }
        }
        else {
          if (puVar9 == (undefined8 *)puVar21[2]) {
            FUN_14000c2d0(puVar21,1);
          }
          if ((undefined8 *)puVar21[1] != (undefined8 *)0x0) {
            *(undefined8 *)puVar21[1] = *local_70;
          }
        }
        puVar29 = puVar21 + 3;
        puVar21[1] = puVar21[1] + 8;
        local_70 = (ulonglong *)
                   (*(longlong *)(*(longlong *)(DAT_141d779c0 + (longlong)*piVar25 * 8) + 0x80) +
                   (longlong)*piVar26 * 8);
        puVar19 = (ulonglong *)puVar21[4];
        if ((local_70 < puVar19) && ((ulonglong *)*puVar29 <= local_70)) {
          local_70 = (ulonglong *)((longlong)local_70 - (longlong)*puVar29 >> 3);
          if (puVar19 == (ulonglong *)puVar21[5]) {
            FUN_14000c2d0(puVar29,1);
          }
          if ((undefined8 *)puVar21[4] != (undefined8 *)0x0) {
            *(undefined8 *)puVar21[4] = *(undefined8 *)(puVar21[3] + (longlong)local_70 * 8);
          }
        }
        else {
          if (puVar19 == (ulonglong *)puVar21[5]) {
            FUN_14000c2d0(puVar29,1);
          }
          if ((ulonglong *)puVar21[4] != (ulonglong *)0x0) {
            *(ulonglong *)puVar21[4] = *local_70;
          }
        }
        puVar21[4] = puVar21[4] + 8;
        piVar26 = piVar26 + 1;
        piVar25 = piVar25 + 1;
        local_48 = (void *)((longlong)local_48 + 1);
        puVar9 = local_50;
        param_1 = local_60;
      } while (local_48 < local_40);
    }
  }
  if (*(longlong *)(param_1 + 0x1240) != 0) {
    if (*(longlong *)(puVar9[2] + 0x130) == 0) {
      local_50 = operator_new(0x68);
      *local_50 = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[3] = 0;
      local_50[4] = 0;
      local_50[5] = 0;
      local_50[6] = 0;
      local_50[7] = 0;
      local_50[8] = 0;
      local_50[9] = 0;
      local_50[10] = 0;
      local_50[0xb] = 0;
      local_50[0xc] = 0;
      *(undefined8 **)(puVar9[2] + 0x130) = local_50;
    }
    if (*(longlong *)(*(longlong *)(puVar9[2] + 0x130) + 0x40) == 0) {
      local_50 = operator_new(0x170);
      uVar14 = FUN_140010740(local_50);
      *(undefined8 *)(*(longlong *)(puVar9[2] + 0x130) + 0x40) = uVar14;
    }
    lVar8 = *(longlong *)(param_1 + 0x1240);
    lVar13 = *(longlong *)(*(longlong *)(puVar9[2] + 0x130) + 0x40);
    FUN_140050150(lVar13 + 0xb0,lVar8);
    FUN_140050150(lVar13 + 200,lVar8 + 0x18);
    param_1 = local_60;
    _Memory = *(void **)(local_60 + 0x1240);
    if (_Memory != (void *)0x0) {
      FUN_140010860(_Memory);
      free(_Memory);
    }
    *(undefined8 *)(param_1 + 0x1240) = 0;
  }
  if ((local_64 != '\0') && (*(longlong *)(param_1 + 0xa78) != 0)) {
    FUN_1407ba900(puVar9[2],*(longlong *)(param_1 + 0xa78) + 0x248);
  }
  return puVar9;
joined_r0x000140c84b9c:
  if (*(short **)(lVar8 + 0x80) <= psVar11) goto LAB_140c84bd4;
  if (*psVar11 == *(short *)(param_1 + 0xa4)) {
    iVar18 = (int)((longlong)psVar11 - (longlong)*(short **)(lVar8 + 0x78) >> 1);
    if (iVar18 != -1) {
      piVar25 = (int *)(*(longlong *)(lVar8 + 0x90) + (longlong)iVar18 * 4);
      iVar18 = *piVar25;
      if (0 < iVar18) {
        *piVar25 = iVar18 + -1;
      }
    }
    goto LAB_140c84bd4;
  }
  psVar11 = psVar11 + 1;
  goto joined_r0x000140c84b9c;
joined_r0x000140c84c5b:
  if (*(short **)(lVar8 + 0x80) <= psVar11) goto LAB_140c84c94;
  if (*psVar11 == *(short *)(param_1 + 0xa4)) {
    iVar18 = (int)((longlong)psVar11 - (longlong)*(short **)(lVar8 + 0x78) >> 1);
    if (iVar18 != -1) {
      piVar25 = (int *)(*(longlong *)(lVar8 + 0x90) + (longlong)iVar18 * 4);
      iVar18 = *piVar25;
      if (0 < iVar18) {
        *piVar25 = iVar18 + -1;
      }
    }
    goto LAB_140c84c94;
  }
  psVar11 = psVar11 + 1;
  goto joined_r0x000140c84c5b;
}

