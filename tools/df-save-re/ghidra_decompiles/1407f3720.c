// FUN_1407f3720 @ 1407f3720
// callees:
//   -> 1407ebc00 FUN_1407ebc00
//   -> 140c5cbd0 FUN_140c5cbd0
//   -> 1406d1d50 FUN_1406d1d50
//   -> 140d89d60 FUN_140d89d60
//   -> 1404b2420 FUN_1404b2420


ulonglong FUN_1407f3720(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ushort *puVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int local_res8;
  int local_res10;
  
  local_res8 = FUN_1407ebc00();
  if ((param_3 != 0) && (*(int *)(*(longlong *)(param_3 + 8) + 0x3348) != 0x100)) {
    uVar4 = (**(code **)*param_1)(param_1);
    switch(uVar4) {
    case 0x18:
      iVar9 = FUN_140c5cbd0(param_1,*(undefined2 *)(param_3 + 0x90));
      if (iVar9 == 0) goto switchD_1407f378d_caseD_26;
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x3b:
      iVar9 = FUN_140c5cbd0(param_1,*(undefined2 *)(param_3 + 0x90));
      if ((iVar9 == 0) && (cVar3 = (**(code **)(*param_1 + 0x5b0))(param_1), '\0' < cVar3))
      goto switchD_1407f378d_caseD_26;
      break;
    case 0x26:
    case 0x3c:
    case 0x3d:
switchD_1407f378d_caseD_26:
      local_res8 = local_res8 * *(int *)(*(longlong *)(param_3 + 8) + 0x3348) >> 8;
    }
  }
  sVar5 = (**(code **)(*param_1 + 0x518))(param_1);
  if (0 < sVar5) {
    sVar5 = (**(code **)(*param_1 + 0x518))(param_1);
    local_res8 = local_res8 * (sVar5 + 1);
  }
  sVar5 = (**(code **)(*param_1 + 0x518))(param_1);
  if (sVar5 == 5) {
    local_res8 = local_res8 * 2;
  }
  iVar9 = (**(code **)(*param_1 + 0x6b8))(param_1,param_2);
  iVar10 = (**(code **)(*param_1 + 0x610))(param_1,param_2);
  iVar9 = iVar9 + iVar10;
  sVar5 = (**(code **)*param_1)(param_1);
  if (sVar5 == 0x26) {
    iVar9 = iVar9 / 0x1e;
  }
  local_res8 = local_res8 + iVar9;
  sVar5 = (**(code **)(*param_1 + 0x1d8))(param_1);
  if (sVar5 == 1) {
    local_res8 = local_res8 * 3;
  }
  else {
    if (sVar5 == 2) {
      local_res8 = local_res8 >> 1;
      goto LAB_1407f3890;
    }
    if (sVar5 != 3) goto LAB_1407f3890;
  }
  local_res8 = local_res8 >> 2;
LAB_1407f3890:
  puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x5f0))(param_1);
  uVar21 = 0;
  if (puVar12 != (undefined8 *)0x0) {
    puVar18 = (undefined8 *)*puVar12;
    uVar20 = puVar12[1] - (longlong)puVar18 >> 3;
    uVar15 = uVar21;
    if (uVar20 != 0) {
      do {
        puVar2 = (ushort *)*puVar18;
        if (((puVar2[4] & 1) == 0) && (*puVar2 < 9)) {
          local_res8 = local_res8 + (short)puVar2[1] * 0x32;
        }
        uVar19 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar19;
        puVar18 = puVar18 + 1;
      } while ((ulonglong)(longlong)(int)uVar19 < uVar20);
    }
  }
  if ((*(uint *)(param_1 + 2) & 0x8000000) != 0) {
    local_res8 = local_res8 * 10;
  }
  if (param_2 != 0) {
    lVar13 = *(longlong *)(param_2 + 0x2118);
    iVar9 = 0x80;
    if ((lVar13 != 0) &&
       (local_res10 = 0, *(longlong *)(lVar13 + 0x10) - *(longlong *)(lVar13 + 8) >> 2 != 0)) {
      do {
        sVar5 = (**(code **)(*param_1 + 0x10))(param_1);
        uVar11 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar4 = (**(code **)*param_1)(param_1);
        cVar3 = FUN_1406d1d50(uVar4);
        lVar13 = *(longlong *)**(undefined8 **)(param_2 + 0x2118);
        sVar6 = (**(code **)*param_1)(param_1);
        if (((((*(short *)(lVar13 + uVar21 * 2) == sVar6) ||
              (*(short *)(*(longlong *)**(undefined8 **)(param_2 + 0x2118) + uVar21 * 2) == -1)) &&
             ((lVar13 = *(longlong *)(**(longlong **)(param_2 + 0x2118) + 0x18),
              sVar6 = (**(code **)(*param_1 + 8))(param_1), *(short *)(lVar13 + uVar21 * 2) == sVar6
              || (*(short *)(*(longlong *)(**(longlong **)(param_2 + 0x2118) + 0x18) + uVar21 * 2)
                  == -1)))) &&
            ((lVar13 = *(longlong *)(**(longlong **)(param_2 + 0x2118) + 0x30),
             sVar6 = (**(code **)(*param_1 + 0x10))(param_1),
             *(short *)(lVar13 + uVar21 * 2) == sVar6 ||
             (*(short *)(*(longlong *)(**(longlong **)(param_2 + 0x2118) + 0x30) + uVar21 * 2) == -1
             )))) && ((lVar13 = *(longlong *)(**(longlong **)(param_2 + 0x2118) + 0x48),
                      iVar10 = (**(code **)(*param_1 + 0x18))(param_1),
                      *(short *)(lVar13 + uVar21 * 2) == iVar10 ||
                      (*(short *)(*(longlong *)(**(longlong **)(param_2 + 0x2118) + 0x48) +
                                 uVar21 * 2) == -1)))) {
          uVar19 = *(uint *)(*(longlong *)(**(longlong **)(param_2 + 0x2118) + 0x60) + uVar21 * 4);
          if (((((((((uVar19 & 1) == 0) || ((cVar3 != '\0' && ((ushort)(sVar5 - 0x1a3U) < 200)))) &&
                  ((((uVar19 & 2) == 0 ||
                    ((cVar3 != '\0' && (sVar6 = (**(code **)*param_1)(param_1), sVar6 == 5)))) &&
                   ((((uVar19 & 4) == 0 ||
                     ((((cVar3 != '\0' &&
                        (lVar13 = FUN_140d89d60(&DAT_141c53470,sVar5,uVar11), lVar13 != 0)) &&
                       (3 < *(int *)(lVar13 + 0x298))) &&
                      ((*(byte *)(*(longlong *)(lVar13 + 0x290) + 3) & 1) != 0)))) &&
                    (((uVar19 & 8) == 0 ||
                     (((cVar3 != '\0' &&
                       (lVar13 = FUN_140d89d60(&DAT_141c53470,sVar5,uVar11), lVar13 != 0)) &&
                      ((3 < *(int *)(lVar13 + 0x298) &&
                       ((*(byte *)(*(longlong *)(lVar13 + 0x290) + 3) & 0x40) != 0)))))))))))) &&
                 ((((uVar19 & 0x10) == 0 ||
                   (((cVar3 != '\0' &&
                     (lVar13 = FUN_140d89d60(&DAT_141c53470,sVar5,uVar11), lVar13 != 0)) &&
                    ((3 < *(int *)(lVar13 + 0x298) &&
                     ((*(byte *)(*(longlong *)(lVar13 + 0x290) + 3) & 0x20) != 0)))))) &&
                  ((((uVar19 & 0x20) == 0 ||
                    ((((cVar3 != '\0' &&
                       (lVar13 = FUN_140d89d60(&DAT_141c53470,sVar5,uVar11), lVar13 != 0)) &&
                      (0 < *(int *)(lVar13 + 0x298))) && ((**(byte **)(lVar13 + 0x290) & 1) != 0))))
                   && (((uVar19 & 0x40) == 0 ||
                       (((cVar3 != '\0' &&
                         (lVar13 = FUN_140d89d60(&DAT_141c53470,sVar5,uVar11), lVar13 != 0)) &&
                        ((3 < *(int *)(lVar13 + 0x298) &&
                         ((*(byte *)(*(longlong *)(lVar13 + 0x290) + 3) & 0x10) != 0)))))))))))) &&
                ((-1 < (char)uVar19 ||
                 (((cVar3 != '\0' &&
                   (lVar13 = FUN_140d89d60(&DAT_141c53470,sVar5,uVar11), lVar13 != 0)) &&
                  ((2 < *(int *)(lVar13 + 0x298) &&
                   ((*(byte *)(*(longlong *)(lVar13 + 0x290) + 2) & 0x80) != 0)))))))) &&
               ((((uVar19 >> 8 & 1) == 0 ||
                 ((((cVar3 != '\0' &&
                    (lVar13 = FUN_140d89d60(&DAT_141c53470,sVar5,uVar11), lVar13 != 0)) &&
                   (3 < *(int *)(lVar13 + 0x298))) &&
                  ((*(byte *)(*(longlong *)(lVar13 + 0x290) + 3) & 0x80) != 0)))) &&
                ((((uVar19 >> 9 & 1) == 0 ||
                  (((cVar3 != '\0' &&
                    (lVar13 = FUN_140d89d60(&DAT_141c53470,sVar5,uVar11), lVar13 != 0)) &&
                   ((3 < *(int *)(lVar13 + 0x298) &&
                    ((*(byte *)(*(longlong *)(lVar13 + 0x290) + 3) & 2) != 0)))))) &&
                 (((uVar19 >> 10 & 1) == 0 ||
                  (((cVar3 != '\0' &&
                    (lVar13 = FUN_140d89d60(&DAT_141c53470,sVar5,uVar11), lVar13 != 0)) &&
                   ((3 < *(int *)(lVar13 + 0x298) &&
                    ((*(byte *)(*(longlong *)(lVar13 + 0x290) + 3) & 4) != 0)))))))))))) &&
              ((((uVar19 >> 0xb & 1) == 0 ||
                ((((cVar3 != '\0' &&
                   (lVar13 = FUN_140d89d60(&DAT_141c53470,sVar5,uVar11), lVar13 != 0)) &&
                  (3 < *(int *)(lVar13 + 0x298))) &&
                 ((*(byte *)(*(longlong *)(lVar13 + 0x290) + 3) & 8) != 0)))) &&
               (((uVar19 >> 0xc & 1) == 0 ||
                (((cVar3 != '\0' &&
                  (lVar13 = FUN_140d89d60(&DAT_141c53470,sVar5,uVar11), lVar13 != 0)) &&
                 ((7 < *(int *)(lVar13 + 0x298) &&
                  ((*(byte *)(*(longlong *)(lVar13 + 0x290) + 7) & 0x40) != 0)))))))))) &&
             (lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x2118) + 8),
             iVar9 < *(int *)(lVar13 + uVar21 * 4))) {
            iVar9 = *(int *)(lVar13 + uVar21 * 4);
          }
        }
        uVar21 = uVar21 + 1;
        local_res10 = local_res10 + 1;
      } while ((ulonglong)(longlong)local_res10 <
               (ulonglong)
               (*(longlong *)(*(longlong *)(param_2 + 0x2118) + 0x10) -
                *(longlong *)(*(longlong *)(param_2 + 0x2118) + 8) >> 2));
    }
    iVar10 = 0;
    lVar13 = *(longlong *)(param_2 + 0x2110);
    if (lVar13 != 0) {
      iVar1 = *(int *)(param_2 + 0xc);
      lVar14 = DAT_141c53720 - DAT_141c53718 >> 3;
      if (((lVar14 != 0) && (iVar1 != -1)) && (iVar17 = (int)lVar14 + -1, -1 < iVar17)) {
        do {
          iVar16 = iVar17 + iVar10 >> 1;
          lVar14 = *(longlong *)(DAT_141c53718 + (longlong)iVar16 * 8);
          if (*(int *)(lVar14 + 4) == iVar1) {
            if (lVar14 != 0) {
              uVar11 = (**(code **)(*param_1 + 0x18))(param_1);
              uVar4 = (**(code **)(*param_1 + 0x10))(param_1);
              uVar7 = (**(code **)(*param_1 + 8))(param_1);
              uVar8 = (**(code **)*param_1)(param_1);
              iVar10 = FUN_1404b2420(lVar14,uVar8,uVar7,uVar4,uVar11,lVar13);
              if (iVar9 < iVar10) {
                iVar9 = iVar10;
              }
            }
            break;
          }
          if (iVar1 < *(int *)(lVar14 + 4)) {
            iVar17 = iVar16 + -1;
          }
          else {
            iVar10 = iVar16 + 1;
          }
        } while (iVar10 <= iVar17);
      }
    }
    if ((iVar9 != 0x80) && (local_res8 = local_res8 * iVar9 >> 7, local_res8 < 0)) {
      local_res8 = 1;
    }
  }
  sVar6 = 0;
  iVar9 = (**(code **)(*param_1 + 0x488))(param_1);
  uVar19 = local_res8 * iVar9;
  sVar5 = (**(code **)*param_1)(param_1);
  if (((sVar5 == 0x49) && (0 < (int)uVar19)) && (uVar19 = (int)(uVar19 * 10) / 500, (int)uVar19 < 1)
     ) {
    uVar19 = 1;
  }
  sVar5 = (**(code **)*param_1)(param_1);
  if (((sVar5 == 0x32) || (sVar5 = (**(code **)*param_1)(param_1), sVar5 == 0x33)) &&
     (0 < (int)uVar19)) {
    iVar9 = (**(code **)(*param_1 + 0x18))(param_1);
    if (-1 < iVar9) {
      sVar6 = (**(code **)(*param_1 + 0x18))(param_1);
    }
    sVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    if (((-1 < sVar5) &&
        ((ulonglong)(longlong)sVar5 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
       (-1 < sVar6)) {
      lVar13 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar5 * 8);
      if (((ulonglong)(longlong)sVar6 <
           (ulonglong)(*(longlong *)(lVar13 + 0x180) - *(longlong *)(lVar13 + 0x178) >> 3)) &&
         (iVar9 = *(int *)(*(longlong *)(*(longlong *)(lVar13 + 0x178) + (longlong)sVar6 * 8) +
                          0x500), 1 < iVar9)) {
        uVar21 = (longlong)(int)uVar19 / (longlong)iVar9;
        uVar15 = uVar21 & 0xffffffff;
        if ((int)uVar21 < 1) {
          uVar15 = 1;
        }
        return uVar15;
      }
    }
  }
  return (ulonglong)uVar19;
}

