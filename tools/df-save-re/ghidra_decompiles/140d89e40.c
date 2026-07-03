// FUN_140d89e40 @ 140d89e40
// callees:
//   -> 1401aa8a0 FUN_1401aa8a0
//   -> 1401aa7c0 FUN_1401aa7c0
//   -> 14018f680 FUN_14018f680
//   -> 1401aa6e0 FUN_1401aa6e0
//   -> 1401aa830 FUN_1401aa830
//   -> 1401aa750 FUN_1401aa750
//   -> 14014e4b0 FUN_14014e4b0
//   -> 140169230 FUN_140169230
//   -> 140d2cb70 FUN_140d2cb70
//   -> 140d9e3b0 FUN_140d9e3b0
//   -> 14013bfd0 FUN_14013bfd0
//   -> 140087ed0 FUN_140087ed0
//   -> 140168ac0 FUN_140168ac0


undefined8
FUN_140d89e40(longlong param_1,short param_2,short param_3,ushort param_4,char param_5,uint param_6)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined2 uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  byte bVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  uint local_res10 [2];
  ulonglong in_stack_ffffffffffffff88;
  char *pcVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  char local_48 [2];
  short local_46;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined1 local_38 [16];
  
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x1160e4) <= (int)param_2)) || (param_3 < 0)) ||
     (((*(int *)(param_1 + 0x1160e8) <= (int)param_3 || ((short)param_4 < 0)) ||
      ((*(int *)(param_1 + 0x1160ec) <= (int)(short)param_4 ||
       ((*(longlong *)(param_1 + 0x1160b0) == 0 ||
        (lVar1 = *(longlong *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8)
                    + ((longlong)param_3 >> 4) * 8) + (longlong)(short)param_4 * 8), lVar1 == 0)))))
      ))) {
    return 0;
  }
  if ((param_6 >> 0x18 & 1) != 0) {
    return 1;
  }
  uVar18 = (int)param_2 & 0x8000000f;
  if ((int)uVar18 < 0) {
    uVar18 = (uVar18 - 1 | 0xfffffff0) + 1;
  }
  uVar17 = (int)param_3 & 0x8000000f;
  if ((int)uVar17 < 0) {
    uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
  }
  lVar12 = (longlong)(short)uVar18 * 0x10 + (longlong)(short)uVar17;
  local_46 = *(short *)(lVar1 + 0x92 + lVar12 * 2);
  local_40 = *(uint *)(lVar1 + 0x294 + lVar12 * 4);
  local_44 = *(uint *)(lVar1 + 0x694 + lVar12 * 4) & 7;
  if ((((param_5 != '\0') && ((local_40 >> 9 & 1) != 0)) && (DAT_1410b67dc != 1)) &&
     ((param_6 & 0x20) == 0)) {
    return 0;
  }
  if (local_44 != 7) {
    if (((local_44 - 3 & 0xfffffffc) == 0) && (local_44 != 5)) {
      if (param_5 == '\0') {
        return 0;
      }
      if ((param_6 & 0x10) == 0) {
        if ((param_6 & 8) == 0) {
          if ((param_6 & 4) == 0) {
            return 0;
          }
          plVar15 = *(longlong **)(param_1 + 0x1cab0);
          plVar16 = *(longlong **)(param_1 + 0x1cab8);
          do {
            if (plVar16 <= plVar15) {
              return 0;
            }
            plVar2 = (longlong *)*plVar15;
            iVar11 = (**(code **)(*plVar2 + 0x128))(plVar2);
            if ((short)plVar2[0x2a] == iVar11) {
              in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
              cVar7 = FUN_14018f680(plVar2,param_2,param_3,param_4,in_stack_ffffffffffffff88);
              if (cVar7 != '\0') goto LAB_140d8a106;
            }
            plVar15 = plVar15 + 1;
          } while( true );
        }
        plVar15 = *(longlong **)(param_1 + 0x1cab0);
        plVar16 = *(longlong **)(param_1 + 0x1cab8);
        do {
          if (plVar16 <= plVar15) {
            return 0;
          }
          plVar2 = (longlong *)*plVar15;
          iVar11 = (**(code **)(*plVar2 + 0x128))(plVar2);
          if (((short)plVar2[0x2a] == iVar11) && ((*(byte *)(plVar2 + 0x2f) & 0x20) == 0)) {
            in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
            cVar7 = FUN_14018f680(plVar2,param_2,param_3,param_4,in_stack_ffffffffffffff88);
            if (cVar7 != '\0') goto LAB_140d8a106;
          }
          plVar15 = plVar15 + 1;
        } while( true );
      }
    }
    goto LAB_140d8a11b;
  }
  cVar7 = FUN_1401aa8a0(param_1 + 0x1c928,param_2,param_3,param_4);
  if (cVar7 != '\0') {
    return 0;
  }
  cVar7 = FUN_1401aa7c0(param_1 + 0x1c928,param_2,param_3);
  if (cVar7 != '\0') {
    return 0;
  }
LAB_140d8a123:
  if (param_5 != '\0') {
    if ((param_6 & 0x40) != 0) {
      plVar16 = *(longlong **)(param_1 + 0x1cab0);
      plVar15 = *(longlong **)(param_1 + 0x1cab8);
      if (plVar16 < plVar15) {
        local_res10[0] = param_6 & 4;
        do {
          plVar2 = (longlong *)*plVar16;
          if ((((local_res10[0] == 0) || (199 < (ushort)((short)plVar2[5] - 0x1a3U))) &&
              ((param_6 & 0x18) == 0)) &&
             ((iVar11 = (**(code **)(*plVar2 + 0x128))(plVar2), iVar11 <= (short)plVar2[0x2a] &&
              ((*(byte *)(plVar2 + 0x2f) & 0x50) == 0x10)))) {
            in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
            cVar7 = FUN_14018f680(plVar2,param_2,param_3,param_4,in_stack_ffffffffffffff88);
            if (cVar7 != '\0') {
              return 0;
            }
          }
          plVar16 = plVar16 + 1;
        } while (plVar16 < plVar15);
      }
    }
    if ((char)param_6 < '\0') {
      plVar15 = *(longlong **)(param_1 + 0x1cab8);
      for (plVar16 = *(longlong **)(param_1 + 0x1cab0); plVar16 < plVar15; plVar16 = plVar16 + 1) {
        plVar2 = (longlong *)*plVar16;
        iVar11 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (iVar11 <= (short)plVar2[0x2a]) {
          in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
          cVar7 = FUN_14018f680(plVar2,param_2,param_3,param_4,in_stack_ffffffffffffff88);
          if (cVar7 != '\0') {
            return 0;
          }
        }
      }
    }
  }
LAB_140d8a245:
  if (local_44 == 5) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
    if (local_44 == 7) {
      cVar7 = FUN_1401aa6e0(param_1 + 0x1c928,param_2,param_3,param_4);
      cVar9 = FUN_1401aa830(param_1 + 0x1c928,param_2,param_3);
      cVar8 = FUN_1401aa750(param_1 + 0x1c928,param_2,param_3);
      bVar13 = cVar9 != '\0' || cVar7 != '\0';
      if (cVar8 != '\0') {
        bVar13 = true;
      }
    }
  }
  cVar7 = FUN_14014e4b0();
  local_3c = (uint)bVar13;
  if (cVar7 != '\0') {
    local_3c = 1;
  }
  bVar14 = 0;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar13 = false;
  cVar7 = (local_40 & 1) != 0;
  if ((local_40 & 2) != 0) {
    cVar7 = cVar7 + '\x02';
  }
  if ((local_40 & 4) != 0) {
    cVar7 = cVar7 + '\x04';
  }
  if (cVar7 == '\0') goto LAB_140d8a4a5;
  local_40 = local_40 & 0x200000;
  FUN_140169230(param_1,param_2,param_3,param_4 - 1,local_res10,&local_44);
  puVar22 = local_38;
  local_44 = CONCAT22(local_44._2_2_,param_4 + 1);
  pcVar20 = local_48;
  FUN_140169230(param_1,param_2,param_3,param_4 + 1,pcVar20,puVar22);
  if (local_40 == 0) {
    bVar3 = false;
    bVar13 = true;
  }
  else if (local_40 == 0x200000) {
    bVar3 = true;
    bVar13 = false;
  }
  bVar14 = 0;
  uVar23 = (ulonglong)puVar22 & 0xffffffffffffff00;
  uVar21 = (ulonglong)pcVar20 & 0xffffffffffffff00;
  uVar19 = (ushort)cVar7;
  cVar9 = FUN_140d2cb70(param_1,param_2,param_3,param_4,uVar21,uVar23,0,0,0);
  uVar18 = local_40;
  if ((cVar9 != '\0') && ((char)local_res10[0] == '\a')) {
    uVar19 = (short)cVar7 + 7;
  }
  if (6 < uVar19) {
    if (local_40 == 0) {
      bVar14 = 4;
    }
    else if (local_40 == 0x200000) {
      bVar14 = 0x20;
    }
  }
  bVar5 = false;
  bVar4 = false;
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar7 != '\a');
  cVar9 = cVar7 != '\a';
  if (cVar7 == '\a') {
    uVar6 = (undefined2)local_44;
    uVar23 = uVar23 & 0xffffffffffffff00;
    uVar21 = uVar21 & 0xffffffffffffff00;
    cVar7 = FUN_140d2cb70(param_1,param_2,param_3,(undefined2)local_44,uVar21,uVar23,0,0,0);
    if ((((cVar7 == '\0') ||
         (cVar7 = FUN_140d9e3b0(param_1,param_2,param_3,uVar6,uVar21 & 0xffffffffffffff00,
                                uVar23 & 0xffffffffffffff00), cVar7 == '\0')) &&
        (cVar7 = FUN_14013bfd0(param_1,param_2,param_3,uVar6), cVar7 != '\0')) ||
       ('\x03' < local_48[0])) {
      cVar9 = (char)local_res10[0];
      goto LAB_140d8a481;
    }
  }
  else {
LAB_140d8a481:
    if (cVar9 == '\0') {
      if (uVar18 != 0) {
        if (uVar18 == 0x200000) {
          bVar5 = true;
          bVar4 = false;
        }
        goto LAB_140d8a4a5;
      }
      bVar4 = true;
    }
  }
  bVar5 = false;
LAB_140d8a4a5:
  cVar7 = (char)local_3c;
  if (param_5 == '\0') {
    if (bVar3) {
      return 0;
    }
    if ((bVar14 & 4) != 0) {
      return 0;
    }
  }
  else {
    if (((cVar7 == '\0') || ((param_6 >> 0x16 & 1) == 0)) &&
       (((param_6 >> 0x17 & 1) == 0 &&
        (sVar10 = FUN_140087ed0(param_1,param_2,param_3,param_4), sVar10 == 0)))) {
      return 0;
    }
    if ((param_6 & 2) == 0) {
      if ((((param_6 >> 0x15 & 1) == 0) && (bVar14 == 0)) && ((param_6 >> 0x14 & 1) == 0)) {
        return 0;
      }
      if ((bVar13) && ((param_6 >> 0xc & 1) == 0)) {
        return 0;
      }
      if ((bVar3) && ((param_6 >> 0xf & 1) == 0)) {
        return 0;
      }
      if ((cVar7 == '\0') || ((param_6 >> 0x12 & 1) == 0)) {
        if (((bVar14 & 4) != 0) && ((param_6 >> 0xd & 1) == 0)) {
          return 0;
        }
        if ((bVar4) && ((param_6 >> 0xe & 1) == 0)) {
          return 0;
        }
      }
      if ((cVar7 == '\0') || ((param_6 >> 0x13 & 1) == 0)) {
        if (((bVar14 & 0x20) != 0) && ((param_6 >> 0x10 & 1) == 0)) {
          return 0;
        }
        if ((bVar5) && ((param_6 >> 0x11 & 1) == 0)) {
          return 0;
        }
      }
      if (((param_6 >> 0xf & 1) == 0) &&
         (uVar19 = FUN_140168ac0(&DAT_141c53470,param_2,param_3,param_4), 0x27d7 < uVar19)) {
        return 0;
      }
    }
  }
  if ((cVar7 == '\0') &&
     ((param_5 == '\0' ||
      (((((param_6 >> 0xd & 1) == 0 || ((bVar14 & 4) == 0)) &&
        (((param_6 >> 0x10 & 1) == 0 || ((bVar14 & 0x20) == 0)))) &&
       (((param_6 & 0xc00) == 0 ||
        ((((local_46 != 1 && (local_46 != 0x20)) && (local_46 != 0x23)) && (local_46 != 0x2a))))))))
     )) {
    return 0;
  }
  return 1;
LAB_140d8a106:
  if (plVar16 <= plVar15) {
    return 0;
  }
LAB_140d8a11b:
  if (local_44 != 0) goto LAB_140d8a123;
  goto LAB_140d8a245;
}

