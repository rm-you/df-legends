// FUN_140c29bb0 @ 140c29bb0
// callees:
//   -> 140829200 FUN_140829200
//   -> 140c80fd0 FUN_140c80fd0
//   -> 140668a10 FUN_140668a10
//   -> 14000eaf0 FUN_14000eaf0
//   -> 140ca65e0 FUN_140ca65e0
//   -> 140dfb5c4 operator_new
//   -> 140010740 FUN_140010740
//   -> 140cddf60 FUN_140cddf60
//   -> 140cec410 FUN_140cec410
//   -> 140cec360 FUN_140cec360
//   -> 14000dda0 FUN_14000dda0
//   -> 140050640 FUN_140050640
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140050d30 FUN_140050d30
//   -> 140051210 FUN_140051210
//   -> 140050b50 FUN_140050b50
//   -> 14080b2b0 FUN_14080b2b0
//   -> 140838f60 FUN_140838f60
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0


int * FUN_140c29bb0(longlong param_1,longlong *param_2,uint param_3,int param_4,int param_5,
                   char param_6)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int **ppiVar6;
  int **ppiVar7;
  bool bVar8;
  undefined8 *puVar9;
  char cVar10;
  short sVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  int *piVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  longlong lVar24;
  int *local_res8;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  ulonglong in_stack_ffffffffffffff78;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if ((DAT_1410b67dc == 0) && (param_6 != '\0')) {
    FUN_140829200(param_2);
  }
  if ((param_3 == 1) && (param_4 == -1)) {
    sVar11 = FUN_140c80fd0(param_1,1,param_2);
    local_res20 = (int)sVar11;
    local_res18 = param_3;
    if (local_res20 == -1) {
      param_3 = 0;
      local_res18 = 0;
    }
  }
  if ((*(uint *)(param_2 + 2) & 0x200) != 0) {
    (**(code **)(*param_2 + 800))(param_2);
    *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) & 0xfffffdff;
    uVar12 = (**(code **)*param_2)(param_2);
    FUN_140668a10(uVar12,0xffff,0xffff,0xffffffff,in_stack_ffffffffffffff78 & 0xffffffffffffff00);
    uVar14 = (**(code **)(*param_2 + 0x18))(param_2);
    uVar12 = (**(code **)(*param_2 + 0x10))(param_2);
    uVar13 = (**(code **)*param_2)(param_2);
    FUN_140668a10(uVar13,0xffff,uVar12,uVar14,1);
    (**(code **)(*param_2 + 0x318))(param_2,1);
  }
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) | 8;
  puVar9 = DAT_141c3ce50;
  if ((*(uint *)(param_2 + 2) & 0x40000) != 0) {
    puVar22 = DAT_141c3ce48;
    if (DAT_141c3ce48 < DAT_141c3ce50) {
LAB_140c29ce0:
      iVar16 = 0;
      piVar20 = (int *)*puVar22;
      if (((((*(byte *)(piVar20 + 8) & 0x1c) == 0) && (piVar20[6] != *(int *)(param_1 + 0x130))) &&
          (piVar20[4] != *(int *)(param_1 + 0x130))) &&
         (((*piVar20 == *(int *)((longlong)param_2 + 0x1c) && ((short)piVar20[9] != -30000)) &&
          ((iVar4 = piVar20[0x7c], iVar4 != -1 &&
           (iVar21 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1, -1 < iVar21)))))) {
        do {
          iVar15 = iVar16 + iVar21 >> 1;
          piVar5 = *(int **)(DAT_141d691a8 + (longlong)iVar15 * 8);
          if (*piVar5 == iVar4) {
            if ((piVar5 != (int *)0x0) && (cVar10 = FUN_14000eaf0(param_1,0x3a), cVar10 != '\0')) {
              puVar23 = (undefined8 *)(param_1 + 0xd98);
              lVar24 = FUN_140ca65e0(param_1);
              if ((lVar24 != 0) &&
                 ((0 < *(int *)(lVar24 + 0x60) && ((**(byte **)(lVar24 + 0x58) & 1) != 0)))) {
                if (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x130) == 0) {
                  local_res8 = operator_new(0x68);
                  local_res8[0] = 0;
                  local_res8[1] = 0;
                  local_res8[2] = 0;
                  local_res8[3] = 0;
                  local_res8[4] = 0;
                  local_res8[5] = 0;
                  local_res8[6] = 0;
                  local_res8[7] = 0;
                  local_res8[8] = 0;
                  local_res8[9] = 0;
                  local_res8[10] = 0;
                  local_res8[0xb] = 0;
                  local_res8[0xc] = 0;
                  local_res8[0xd] = 0;
                  local_res8[0xe] = 0;
                  local_res8[0xf] = 0;
                  local_res8[0x10] = 0;
                  local_res8[0x11] = 0;
                  local_res8[0x12] = 0;
                  local_res8[0x13] = 0;
                  local_res8[0x14] = 0;
                  local_res8[0x15] = 0;
                  local_res8[0x16] = 0;
                  local_res8[0x17] = 0;
                  local_res8[0x18] = 0;
                  local_res8[0x19] = 0;
                  *(int **)(*(longlong *)(lVar24 + 0x10) + 0x130) = local_res8;
                }
                if (*(longlong *)(*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x130) + 0x40) == 0)
                {
                  local_res8 = operator_new(0x170);
                  uVar18 = FUN_140010740(local_res8);
                  *(undefined8 *)(*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x130) + 0x40) =
                       uVar18;
                }
                puVar23 = (undefined8 *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x130) + 0x40)
                          + 0x50);
              }
              puVar19 = (undefined8 *)*puVar23;
              if ((undefined8 *)puVar23[1] <= puVar19) goto LAB_140c29eba;
              goto LAB_140c29e92;
            }
            break;
          }
          if (iVar4 < *piVar5) {
            iVar21 = iVar15 + -1;
          }
          else {
            iVar16 = iVar15 + 1;
          }
        } while (iVar16 <= iVar21);
      }
      goto LAB_140c29f75;
    }
LAB_140c29f96:
    FUN_140cec410(param_1,param_2);
  }
  if ((*(byte *)((longlong)param_2 + 0x14) & 0x20) != 0) {
    FUN_140cec360(param_1,param_2);
  }
  FUN_14000dda0(param_2,0x12,*(undefined4 *)(param_1 + 0x130));
  piVar20 = operator_new(0x18);
  iVar16 = local_res20;
  piVar20[3] = 0;
  lVar24 = (longlong)local_res20;
  *(short *)((longlong)piVar20 + 10) = (short)local_res20;
  piVar20[4] = -1;
  *(longlong **)piVar20 = param_2;
  *(short *)(piVar20 + 2) = (short)param_3;
  if (param_3 == 8) {
    piVar20[3] = DAT_1416992a0;
    DAT_1416992a0 = DAT_1416992a0 * 0xdd9cd + 0x5f59201 & 0x3fffffff;
    *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x100;
  }
  local_res8 = piVar20;
  if ((param_5 < 0) ||
     (plVar1 = (longlong *)(param_1 + 0x3f8),
     (ulonglong)(*(longlong *)(param_1 + 0x400) - *plVar1 >> 3) <= (ulonglong)(longlong)param_5)) {
    puVar2 = (ulonglong *)(param_1 + 0x3f8);
    ppiVar6 = *(int ***)(param_1 + 0x400);
    if ((&local_res8 < ppiVar6) && (ppiVar7 = (int **)*puVar2, ppiVar7 <= &local_res8)) {
      if (ppiVar6 == *(int ***)(param_1 + 0x408)) {
        FUN_14000c2d0(puVar2,1);
      }
      param_3 = local_res18;
      if (*(undefined8 **)(param_1 + 0x400) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x400) =
             *(undefined8 *)
              (*puVar2 + ((longlong)(local_res10 + (-8 - (longlong)ppiVar7)) >> 3) * 8);
      }
    }
    else {
      if (ppiVar6 == *(int ***)(param_1 + 0x408)) {
        FUN_14000c2d0(puVar2,1);
      }
      if (*(undefined8 **)(param_1 + 0x400) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x400) = piVar20;
      }
    }
    *(longlong *)(param_1 + 0x400) = *(longlong *)(param_1 + 0x400) + 8;
  }
  else {
    FUN_140050640(plVar1,local_res10,*plVar1 + (longlong)param_5 * 8);
    piVar20 = local_res8;
  }
  bVar8 = false;
  sVar11 = (**(code **)*param_2)(param_2);
  if (((sVar11 == 0x51) && (param_3 == 2)) && (iVar16 != -1)) {
    bVar8 = true;
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar24 * 4);
    *puVar3 = *puVar3 | 0x1000;
  }
  sVar11 = (**(code **)*param_2)(param_2);
  if (((sVar11 == 0x39) && (param_3 == 5)) && (iVar16 != -1)) {
    bVar8 = true;
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar24 * 4);
    *puVar3 = *puVar3 | 0x2000;
  }
  sVar11 = (**(code **)*param_2)(param_2);
  if ((sVar11 == 0x52) && (param_3 == 1)) {
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x48;
    bVar8 = true;
  }
  sVar11 = (**(code **)*param_2)(param_2);
  if (((sVar11 == 0x54) && (param_3 == 5)) && (iVar16 != -1)) {
    bVar8 = true;
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar24 * 4);
    *puVar3 = *puVar3 | 0x4000;
  }
  sVar11 = (**(code **)*param_2)(param_2);
  if ((sVar11 == 0xc) && (param_3 == 1)) {
    *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 1;
  }
  else if (((9 < param_3) || ((0x241U >> (param_3 & 0x1f) & 1) == 0)) && (!bVar8)) {
    uVar14 = *(undefined4 *)((longlong)param_2 + 0x1c);
    iVar16 = FUN_140050d30(uVar14,param_1 + 0x270);
    if (iVar16 != -1) {
      FUN_140051210(uVar14,param_1 + 0x270);
    }
    uVar14 = *(undefined4 *)((longlong)param_2 + 0x1c);
    iVar16 = FUN_140050d30(uVar14,((longlong)*(short *)(param_1 + 0x1e8) * 3 + 0x41) * 8 + param_1);
    param_3 = local_res18;
    if (iVar16 == -1) {
      FUN_140050b50(uVar14,param_1 + 0x288);
      param_3 = local_res18;
    }
  }
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_14080b2b0(param_2,1);
  }
  if ((int)param_2[10] != -1) {
    FUN_140838f60(param_2);
  }
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) & 0x7fffffff;
  if ((param_3 == 2) || (param_3 == 5)) {
    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xfedfffff;
  }
  if (param_3 == 6) {
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffb;
  }
  uVar17 = *(uint *)(param_1 + 0x118) & 0xffffff7f;
  *(uint *)(param_1 + 0x118) = uVar17;
  if (DAT_1410b67dc == 1) {
    *(uint *)(param_1 + 0x118) = uVar17 | 0x4000000;
  }
  sVar11 = (**(code **)(*param_2 + 0x518))(param_2);
  local_70 = (int)sVar11;
  if ((((param_6 != '\0') && (0 < local_70)) && ((param_3 - 2 & 0xfffffffc) == 0)) && (param_3 != 4)
     ) {
    lVar24 = *(longlong *)(param_1 + 0xa78);
    local_68 = 0;
    local_50 = 0;
    local_6c = local_70 * 0x14;
    local_74 = 0xffffffff;
    local_78 = 0xd8;
    local_60 = 0;
    uStack_58 = 0;
    if (((lVar24 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
       ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
      cVar10 = FUN_140106f30(param_1);
      FUN_1409165e0(lVar24 + 0x248,&local_78,cVar10 != '\0');
    }
  }
  return piVar20;
  while (puVar19 = puVar19 + 1, puVar19 < (undefined8 *)puVar23[1]) {
LAB_140c29e92:
    if ((*(int *)*puVar19 == piVar20[0x7c]) &&
       ((iVar16 = ((int *)*puVar19)[2], iVar16 == 3 || (iVar16 == 0)))) goto LAB_140c29f75;
  }
LAB_140c29eba:
  local_res8 = operator_new(0x40);
  local_res8[3] = 0;
  local_res8[4] = 0;
  *local_res8 = -1;
  local_res8[1] = -1;
  local_res8[2] = -1;
  local_res8[0xe] = -0x752f7530;
  local_res8[6] = -1;
  local_res8[7] = -1;
  local_res8[8] = -1;
  local_res8[9] = -1;
  local_res8[10] = -1;
  local_res8[0xb] = -1;
  local_res8[0xc] = -1;
  local_res8[0xd] = -1;
  *(undefined2 *)(local_res8 + 0xf) = 0x8ad0;
  local_res8[5] = 0;
  *local_res8 = piVar20[0x7c];
  local_res8[1] = piVar20[0x7d];
  local_res8[2] = 3;
  *(undefined2 *)(local_res8 + 0xe) = *(undefined2 *)(param_1 + 0xa8);
  *(undefined2 *)((longlong)local_res8 + 0x3a) = *(undefined2 *)(param_1 + 0xaa);
  *(undefined2 *)(local_res8 + 0xf) = *(undefined2 *)(param_1 + 0xac);
  local_res8[3] = DAT_1416b1980;
  local_res8[4] = DAT_1416b1974;
  piVar5[8] = local_res8[3];
  piVar5[9] = local_res8[4];
  FUN_140cddf60(param_1,local_res8,piVar5);
LAB_140c29f75:
  puVar22 = puVar22 + 1;
  param_3 = local_res18;
  if (puVar9 <= puVar22) goto LAB_140c29f96;
  goto LAB_140c29ce0;
}

