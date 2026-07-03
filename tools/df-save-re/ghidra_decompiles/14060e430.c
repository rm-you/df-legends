// FUN_14060e430 @ 14060e430
// callees:
//   -> 140d89e40 FUN_140d89e40
//   -> 140d9dc80 FUN_140d9dc80
//   -> 140004830 FUN_140004830
//   -> 140168eb0 FUN_140168eb0
//   -> 140803b20 FUN_140803b20
//   -> 140168dc0 FUN_140168dc0
//   -> 14014ea90 FUN_14014ea90
//   -> 140168ac0 FUN_140168ac0
//   -> 140d2cb70 FUN_140d2cb70
//   -> 14013bfd0 FUN_14013bfd0
//   -> 140d9e2a0 FUN_140d9e2a0
//   -> 1407f0860 FUN_1407f0860
//   -> 140162570 FUN_140162570
//   -> 140cdcd70 FUN_140cdcd70
//   -> 14000dda0 FUN_14000dda0
//   -> 1405c7540 FUN_1405c7540
//   -> 1406a6120 FUN_1406a6120
//   -> 1400047c0 FUN_1400047c0
//   -> 14015b330 FUN_14015b330


undefined8 FUN_14060e430(longlong *param_1,short param_2,short param_3,ushort param_4)

{
  undefined2 *puVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint in_stack_ffffffffffffff98;
  undefined2 uVar18;
  uint uVar19;
  undefined2 uVar20;
  uint in_stack_ffffffffffffffa8;
  
  cVar3 = (**(code **)(*param_1 + 0x298))();
  if (((cVar3 == '\0') && (sVar4 = (**(code **)*param_1)(param_1), sVar4 != 0x4b)) ||
     ((sVar4 = (**(code **)*param_1)(param_1), sVar4 == 0x4b &&
      ((0 < (int)param_1[0x17] || ((int)param_1[2] != 0)))))) {
    uVar17 = 0;
    uVar19 = 0;
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffff00;
    cVar3 = FUN_140d89e40(&DAT_141c53470,param_2,param_3,param_4,in_stack_ffffffffffffff98,0);
    if (cVar3 != '\0') {
      return 0;
    }
    cVar3 = (**(code **)(*param_1 + 0x2a8))(param_1);
    if (cVar3 != '\0') {
      uVar5 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar18 = (undefined2)(in_stack_ffffffffffffff98 >> 0x10);
      uVar20 = (undefined2)(uVar19 >> 0x10);
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1);
      uVar19 = CONCAT22(uVar20,*(undefined2 *)((longlong)param_1 + 0xc));
      in_stack_ffffffffffffff98 = CONCAT22(uVar18,*(undefined2 *)((longlong)param_1 + 10));
      cVar3 = FUN_140d9dc80(&DAT_141c53470,uVar6,uVar5,(short)param_1[1],in_stack_ffffffffffffff98,
                            uVar19);
      if (cVar3 != '\0') {
        return 0;
      }
    }
    sVar4 = (**(code **)*param_1)(param_1);
    if ((sVar4 == 0x38) && ((*(uint *)(param_1 + 2) & 0x200) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    sVar4 = FUN_140004830(&DAT_141c53470,param_2,param_3,param_4);
    if ((((((sVar4 != 0x23) && (sVar4 != 0x2a)) || (bVar2)) &&
         ((sVar4 = FUN_140004830(&DAT_141c53470,param_2,param_3,param_4), sVar4 != 0x104 &&
          (sVar4 = FUN_140004830(&DAT_141c53470,param_2), sVar4 != 0x103)))) &&
        ((cVar3 = FUN_140168eb0(&DAT_141c53470,param_2), cVar3 == '\0' ||
         (cVar3 = FUN_140803b20(param_1,1), cVar3 == '\0')))) &&
       (sVar4 = FUN_140004830(&DAT_141c53470,param_2,param_3,param_4), sVar4 != 0x43)) {
      cVar3 = FUN_140168dc0(&DAT_141c53470,param_2);
      if (cVar3 != '\0') {
        cVar3 = FUN_14014ea90(param_1);
        uVar5 = (undefined2)(in_stack_ffffffffffffff98 >> 0x10);
        if (cVar3 != '\0') goto LAB_14060eb09;
        lVar16 = *param_1;
        uVar6 = FUN_140168ac0(&DAT_141c53470,param_2,param_3,param_4);
        in_stack_ffffffffffffff98 = CONCAT22(uVar5,uVar6);
        (**(code **)(lVar16 + 0x5d0))(param_1,6,0xffffffff,1,in_stack_ffffffffffffff98);
      }
      if ((((param_2 < 0) || (DAT_141d69554 <= param_2)) ||
          ((param_3 < 0 ||
           (((DAT_141d69558 <= param_3 || ((short)param_4 < 0)) || (DAT_141d6955c <= (short)param_4)
            ))))) ||
         ((DAT_141d69520 == 0 ||
          (lVar16 = *(longlong *)
                     (*(longlong *)
                       (*(longlong *)(DAT_141d69520 + ((longlong)param_2 >> 4) * 8) +
                       ((longlong)param_3 >> 4) * 8) + (longlong)(short)param_4 * 8),
          plVar15 = (longlong *)(lVar16 + 0x68), lVar16 == 0)))) {
        plVar15 = &DAT_141d86420;
      }
      iVar8 = (int)(plVar15[1] - *plVar15 >> 3) + -1;
      lVar16 = (longlong)iVar8;
      if (iVar8 < 0) {
LAB_14060e81a:
        cVar3 = FUN_140d2cb70(&DAT_141c53470,param_2,param_3,param_4,
                              in_stack_ffffffffffffff98 & 0xffffff00,uVar19 & 0xffffff00,
                              in_stack_ffffffffffffffa8 & 0xffffff00,0,0);
        if ((((cVar3 == '\0') ||
             (cVar3 = FUN_14013bfd0(&DAT_141c53470,param_2,param_3,param_4 - 1), cVar3 == '\0')) ||
            (cVar3 = FUN_140d9e2a0(&DAT_141c53470,param_2), cVar3 == '\0')) || (bVar2)) {
          uVar13 = 0;
        }
        else {
          FUN_1407f0860(param_1,2);
          *(short *)(param_1 + 1) = param_2;
          *(short *)((longlong)param_1 + 10) = param_3;
          *(ushort *)((longlong)param_1 + 0xc) = param_4;
          lVar16 = FUN_140162570();
          if ((*(byte *)((longlong)param_1 + 0x14) & 1) != 0) {
            puVar14 = (undefined8 *)param_1[7];
            uVar11 = (param_1[8] - (longlong)puVar14) + 7U >> 3;
            if ((undefined8 *)param_1[8] < puVar14) {
              uVar11 = uVar17;
            }
            if (uVar11 != 0) {
              do {
                iVar8 = (**(code **)(*(longlong *)*puVar14 + 0x10))();
                if ((iVar8 == 0x39) &&
                   (lVar12 = (**(code **)(*(longlong *)*puVar14 + 0x20))(), lVar12 != 0)) {
                  FUN_140cdcd70(lVar12,(short)param_1[1],*(undefined2 *)((longlong)param_1 + 10),
                                *(undefined2 *)((longlong)param_1 + 0xc));
                  *(short *)(lVar12 + 0xa8) = (short)param_1[1];
                  *(undefined2 *)(lVar12 + 0xaa) = *(undefined2 *)((longlong)param_1 + 10);
                  uVar5 = *(undefined2 *)((longlong)param_1 + 0xc);
                  *(uint *)(lVar12 + 0x118) = *(uint *)(lVar12 + 0x118) & 0xfff7ffff;
                  *(uint *)(lVar12 + 0x118) = *(uint *)(lVar12 + 0x118) | 0x100000;
                  *(undefined2 *)(lVar12 + 0xac) = uVar5;
                }
                puVar14 = puVar14 + 1;
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar11);
            }
          }
          *(short *)(lVar16 + 0x20) = param_2;
          *(short *)(lVar16 + 0x22) = param_3;
          *(ushort *)(lVar16 + 0x24) = param_4;
          *(short *)(lVar16 + 0x32) = param_2;
          *(short *)(lVar16 + 0x34) = param_3;
          *(ushort *)(lVar16 + 0x36) = param_4;
          *(longlong **)(lVar16 + 0x90) = param_1;
          *(short *)(lVar16 + 0x2c) = param_2;
          *(short *)(lVar16 + 0x2e) = param_3;
          *(ushort *)(lVar16 + 0x30) = param_4;
          FUN_14000dda0(param_1,0xc,*(undefined4 *)(lVar16 + 0x10));
          *(undefined8 *)(lVar16 + 0x18) = 0;
          iVar8 = (**(code **)(*param_1 + 0xa8))(param_1);
          if (iVar8 == -1) {
            *(uint *)(lVar16 + 0x48) = *(uint *)(lVar16 + 0x48) | 0x804;
          }
          *(uint *)(lVar16 + 0x48) = *(uint *)(lVar16 + 0x48) | 0x311;
          *(undefined8 *)(lVar16 + 0x6c) = 0;
          *(undefined8 *)(lVar16 + 0x74) = 0;
          *(undefined8 *)(lVar16 + 0x7c) = 0;
          *(undefined8 *)(lVar16 + 0x84) = 0;
          *(undefined4 *)(lVar16 + 0x8c) = 0;
          uVar9 = FUN_1405c7540();
          *(undefined4 *)(lVar16 + 0x50) = uVar9;
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 2;
          *(uint *)(lVar16 + 0x48) = *(uint *)(lVar16 + 0x48) | 1;
LAB_14060ea0a:
          uVar13 = 1;
        }
        return uVar13;
      }
LAB_14060e710:
      puVar1 = *(undefined2 **)(*plVar15 + lVar16 * 8);
      if ((((*(byte *)((longlong)puVar1 + 0x17) & 1) != 0) || (puVar1[5] != param_2)) ||
         ((puVar1[6] != param_3 || (puVar1[7] != param_4)))) goto switchD_14060e75e_caseD_2;
      uVar5 = (undefined2)(in_stack_ffffffffffffff98 >> 0x10);
      switch(*puVar1) {
      case 1:
        if (puVar1[1] == 1) goto switchD_14060e75e_caseD_a;
        break;
      case 4:
        goto switchD_14060e75e_caseD_4;
      case 6:
        uVar13 = 2;
        goto LAB_14060e7f3;
      case 7:
        uVar13 = 0;
        goto LAB_14060e7f3;
      case 9:
        in_stack_ffffffffffffff98 = CONCAT22(uVar5,0xea61);
        (**(code **)(*param_1 + 0x5d0))
                  (param_1,0xffffffff,0xffffffff,0xffffffff,in_stack_ffffffffffffff98);
        goto switchD_14060e75e_caseD_4;
      case 10:
switchD_14060e75e_caseD_a:
        in_stack_ffffffffffffff98 = CONCAT22(uVar5,0xea61);
        (**(code **)(*param_1 + 0x5d0))
                  (param_1,0xffffffff,0xffffffff,0xffffffff,in_stack_ffffffffffffff98);
        break;
      case 0xb:
      case 0xc:
        cVar3 = FUN_14014ea90(param_1);
        uVar5 = (undefined2)(in_stack_ffffffffffffff98 >> 0x10);
        if (cVar3 == '\0') {
          lVar12 = *param_1;
          uVar6 = FUN_140168ac0(&DAT_141c53470,param_2,param_3,param_4);
          in_stack_ffffffffffffff98 = CONCAT22(uVar5,uVar6);
          (**(code **)(lVar12 + 0x5d0))(param_1,6,0xffffffff,1,in_stack_ffffffffffffff98);
          break;
        }
        goto LAB_14060ea28;
      }
      goto switchD_14060e75e_caseD_2;
    }
  }
  else {
    uVar5 = 0;
    cVar3 = (**(code **)(*param_1 + 0x2a0))(param_1);
    if (cVar3 == '\0') {
      sVar4 = (**(code **)*param_1)(param_1);
      if (sVar4 == 0x45) {
        uVar5 = 3;
      }
    }
    else {
      uVar5 = 1;
    }
    uVar9 = (**(code **)(*param_1 + 0x40))(param_1);
    uVar7 = (**(code **)(*param_1 + 0x38))(param_1);
    uVar17 = (ulonglong)uVar7;
    if ((uVar7 != 0xffff) &&
       (lVar16 = FUN_1400047c0(&DAT_141c53470,param_2,param_3,param_4), lVar16 != 0)) {
      uVar19 = (int)param_3 & 0x8000000f;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xfffffff0) + 1;
      }
      uVar10 = (int)param_2 & 0x8000000f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
      }
      FUN_14015b330(lVar16,uVar10 & 0xffff,uVar19 & 0xffff,uVar17 & 0xffff,uVar9,uVar5,100,1);
    }
  }
LAB_14060eb09:
  FUN_1406a6120(param_1,1,0xffff8ad0,0xffff8ad0,0x8ad0,1);
  return 1;
switchD_14060e75e_caseD_4:
  uVar13 = 1;
LAB_14060e7f3:
  cVar3 = FUN_140803b20(param_1,uVar13);
  if (cVar3 != '\0') {
LAB_14060ea28:
    FUN_1406a6120(param_1,1,0xffff8ad0,0xffff8ad0,0x8ad0,1);
    goto LAB_14060ea0a;
  }
switchD_14060e75e_caseD_2:
  lVar16 = lVar16 + -1;
  if (lVar16 < 0) goto LAB_14060e81a;
  goto LAB_14060e710;
}

