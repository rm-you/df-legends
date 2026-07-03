// FUN_140c06830 @ 140c06830
// callees:
//   -> 140dfd210 _alloca_probe
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140c077e0 FUN_140c077e0
//   -> 140bae170 FUN_140bae170
//   -> 140c0b900 FUN_140c0b900
//   -> 140c0b5d0 FUN_140c0b5d0
//   -> 140a5d500 FUN_140a5d500
//   -> 140bacac0 FUN_140bacac0
//   -> 140bad070 FUN_140bad070
//   -> 1400b4c90 FUN_1400b4c90
//   -> 140c0c080 FUN_140c0c080
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c06830(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_28bb8 [32];
  int iStack_28b98;
  char cStack_28b94;
  char acStack_28b93 [3];
  int iStack_28b90;
  void *pvStack_28b88;
  void *pvStack_28b80;
  longlong *plStack_28b78;
  ulonglong *puStack_28b70;
  longlong *plStack_28b68;
  longlong lStack_28b60;
  longlong *plStack_28b58;
  longlong *plStack_28b50;
  int aiStack_28b48 [2604];
  int aiStack_26298 [2604];
  int aiStack_239e8 [2604];
  int aiStack_21138 [2604];
  int aiStack_1e888 [2604];
  int aiStack_1bfd8 [2604];
  int aiStack_19728 [2604];
  int aiStack_16e78 [2604];
  int aiStack_145c8 [2604];
  int aiStack_11d18 [2604];
  int local_f468 [2604];
  int local_cbb8 [2604];
  int local_a308 [2604];
  int local_7a58 [2604];
  int local_51a8 [2604];
  int local_28f8 [2604];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140c06852;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_28bb8;
  iStack_28b90 = param_3;
  plStack_28b50 = param_1;
  FUN_1405bba90(param_2,&iStack_28b98,4);
  FUN_14000b9d0(param_1,(longlong)iStack_28b98);
  uVar9 = 0;
  uVar2 = uVar9;
  uVar6 = uVar9;
  if (0 < iStack_28b98) {
    do {
      pvStack_28b80 = operator_new(200);
      *(undefined8 *)((longlong)pvStack_28b80 + 0x20) = 0;
      *(undefined8 *)((longlong)pvStack_28b80 + 0x28) = 0;
      *(undefined8 *)((longlong)pvStack_28b80 + 0x30) = 0;
      *(undefined8 *)((longlong)pvStack_28b80 + 0x60) = 0;
      *(undefined8 *)((longlong)pvStack_28b80 + 0x68) = 0;
      *(undefined8 *)((longlong)pvStack_28b80 + 0x70) = 0;
      *(undefined8 *)((longlong)pvStack_28b80 + 0x80) = 0;
      *(undefined8 *)((longlong)pvStack_28b80 + 0x88) = 0;
      *(undefined8 *)((longlong)pvStack_28b80 + 0x90) = 0;
      *(undefined8 *)((longlong)pvStack_28b80 + 0xa0) = 0;
      *(undefined8 *)((longlong)pvStack_28b80 + 0xa8) = 0;
      *(undefined8 *)((longlong)pvStack_28b80 + 0xb0) = 0;
      *(undefined4 *)((longlong)pvStack_28b80 + 0xc0) = 0xffffffff;
      *(undefined4 *)((longlong)pvStack_28b80 + 0x38) = 0xffffffff;
      *(undefined4 *)((longlong)pvStack_28b80 + 0x3c) = 0xffffffff;
      *(undefined2 *)((longlong)pvStack_28b80 + 0x40) = 0xffff;
      *(undefined2 *)((longlong)pvStack_28b80 + 0x42) = 0xffff;
      *(undefined2 *)((longlong)pvStack_28b80 + 0x44) = 0xffff;
      *(undefined4 *)((longlong)pvStack_28b80 + 0x48) = 0xffffffff;
      *(undefined4 *)((longlong)pvStack_28b80 + 0x4c) = 0xffffffff;
      *(undefined4 *)((longlong)pvStack_28b80 + 0x50) = 0xffffffff;
      *(undefined8 *)((longlong)pvStack_28b80 + 0x58) = 0;
      *(undefined4 *)((longlong)pvStack_28b80 + 0x78) = 0;
      *(undefined4 *)((longlong)pvStack_28b80 + 0x18) = 0xffffffff;
      *(undefined4 *)((longlong)pvStack_28b80 + 0x98) = 0xfff0bdc0;
      *(undefined4 *)((longlong)pvStack_28b80 + 0xb8) = 0xffffffff;
      *(undefined4 *)((longlong)pvStack_28b80 + 0xbc) = 0xffffffff;
      *(void **)(uVar2 + *param_1) = pvStack_28b80;
      FUN_1405bba90(param_2,*(undefined8 *)(*param_1 + uVar2),4);
      uVar7 = (int)uVar6 + 1;
      uVar2 = uVar2 + 8;
      uVar6 = (ulonglong)uVar7;
    } while ((int)uVar7 < iStack_28b98);
  }
  plVar3 = (longlong *)*param_1;
  iStack_28b98 = (int)(param_1[1] - (longlong)plVar3 >> 3);
  uVar2 = uVar9;
  if (0 < iStack_28b98) {
    do {
      FUN_140c077e0(*(undefined8 *)(*param_1 + uVar2),param_2,param_3);
      lVar11 = *plVar3;
      switch(*(undefined4 *)(lVar11 + 4)) {
      case 2:
        if ((*(byte *)(*(longlong *)(lVar11 + 0x58) + 0x40) & 4) != 0)
        goto switchD_140c069e1_caseD_e;
        break;
      case 5:
        if ((int)param_1[0x8204] < 0x14) {
          param_1[(longlong)(int)param_1[0x8204] + 0x81f0] = lVar11;
          *(int *)(param_1 + 0x8204) = (int)param_1[0x8204] + 1;
        }
        break;
      case 0xd:
        if ((int)param_1[0x81ef] < 0x14) {
          param_1[(longlong)(int)param_1[0x81ef] + 0x81db] = lVar11;
          *(int *)(param_1 + 0x81ef) = (int)param_1[0x81ef] + 1;
        }
        break;
      case 0xe:
      case 0xf:
      case 0x13:
      case 0x1e:
switchD_140c069e1_caseD_e:
        if ((int)param_1[0x8282] < 0x14) {
          param_1[(longlong)(int)param_1[0x8282] + 0x826e] = lVar11;
          *(int *)(param_1 + 0x8282) = (int)param_1[0x8282] + 1;
        }
        break;
      case 0x11:
        if (*(int *)(*(longlong *)(lVar11 + 0x58) + 8) == 1) goto switchD_140c069e1_caseD_e;
        break;
      case 0x12:
        if (*(int *)(*(longlong *)(lVar11 + 0x58) + 8) - 1U < 2) goto switchD_140c069e1_caseD_e;
        break;
      case 0x15:
        if ((int)param_1[0x822e] < 0x14) {
          param_1[(longlong)(int)param_1[0x822e] + 0x821a] = lVar11;
          *(int *)(param_1 + 0x822e) = (int)param_1[0x822e] + 1;
        }
        break;
      case 0x16:
        if ((int)param_1[0x8219] < 0x14) {
          param_1[(longlong)(int)param_1[0x8219] + 0x8205] = lVar11;
          *(int *)(param_1 + 0x8219) = (int)param_1[0x8219] + 1;
        }
        break;
      case 0x17:
        if ((int)param_1[0x8243] < 0x14) {
          param_1[(longlong)(int)param_1[0x8243] + 0x822f] = lVar11;
          *(int *)(param_1 + 0x8243) = (int)param_1[0x8243] + 1;
        }
        break;
      case 0x18:
        if ((int)param_1[0x8258] < 0x14) {
          param_1[(longlong)(int)param_1[0x8258] + 0x8244] = lVar11;
          *(int *)(param_1 + 0x8258) = (int)param_1[0x8258] + 1;
        }
        break;
      case 0x19:
        if ((int)param_1[0x826d] < 0x14) {
          param_1[(longlong)(int)param_1[0x826d] + 0x8259] = lVar11;
          *(int *)(param_1 + 0x826d) = (int)param_1[0x826d] + 1;
        }
        break;
      case 0x1a:
        if ((int)param_1[0x82e7] < 100) {
          param_1[(longlong)(int)param_1[0x82e7] + 0x8283] = lVar11;
          *(int *)(param_1 + 0x82e7) = (int)param_1[0x82e7] + 1;
        }
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 + 8;
    } while ((int)uVar7 < iStack_28b98);
  }
  uVar2 = 0;
  FUN_1405bba90(param_2,param_1 + 3,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1c,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  plStack_28b68 = param_1 + 0x2c9c;
  pvStack_28b80 = (void *)0x11;
  puVar8 = (ulonglong *)(param_1 + 0x14f6);
  lVar11 = (longlong)param_1 + 0x266;
  plVar3 = param_1 + 0x14e7;
  lVar5 = (longlong)param_1 + 0x145;
  do {
    pvStack_28b88 = (void *)0x11;
    do {
      plStack_28b78 = (longlong *)lVar5;
      puStack_28b70 = puVar8;
      lStack_28b60 = lVar11;
      plStack_28b58 = plVar3;
      FUN_1405bba90(param_2,lVar5 + -0x121,1);
      FUN_1405bba90(param_2,lVar5,1);
      FUN_1405bba90(param_2,lVar11,2);
      FUN_140bae170(plVar3,param_2,iStack_28b90);
      FUN_140c0b900(plStack_28b68,param_2);
      puVar4 = (undefined8 *)puVar8[-1];
      uVar6 = (ulonglong)((longlong)*puVar8 + (7 - (longlong)puVar4)) >> 3;
      if ((undefined8 *)*puVar8 < puVar4) {
        uVar6 = uVar2;
      }
      uVar9 = uVar2;
      if (uVar6 != 0) {
        do {
          FUN_140c0b5d0(*puVar4,param_1 + 0x82e8);
          uVar9 = uVar9 + 1;
          puVar4 = puVar4 + 1;
          plVar3 = plStack_28b58;
        } while (uVar9 < uVar6);
      }
      plVar3 = plVar3 + 0x15;
      lVar11 = lStack_28b60 + 2;
      plStack_28b68 = plStack_28b68 + 8;
      lVar5 = (longlong)plStack_28b78 + 1;
      puVar8 = puStack_28b70 + 0x15;
      pvStack_28b88 = (void *)((longlong)pvStack_28b88 + -1);
    } while (pvStack_28b88 != (void *)0x0);
    pvStack_28b80 = (void *)((longlong)pvStack_28b80 + -1);
  } while (pvStack_28b80 != (void *)0x0);
  plVar12 = param_1 + 0xabe;
  pvStack_28b80 = (void *)0x33;
  plVar13 = param_1 + 0x3e88;
  puStack_28b70 = (ulonglong *)((longlong)param_1 + (0x1ad20 - (longlong)aiStack_28b48));
  lVar5 = (longlong)param_1 + 0x1dfee;
  pvStack_28b88 = (void *)0x0;
  uVar6 = uVar2;
  plStack_28b78 = plVar12;
  lStack_28b60 = lVar11;
  plStack_28b58 = plVar3;
  do {
    lVar11 = 0x33;
    do {
      FUN_1405bba90(param_2,&cStack_28b94,1);
      if (cStack_28b94 == '\0') {
        plVar12[-0xa29] = 0;
      }
      else {
        pvStack_28b88 = operator_new(0x430);
        lVar1 = FUN_140a5d500(pvStack_28b88);
        plVar12[-0xa29] = lVar1;
        FUN_140bacac0(lVar1,param_2,iStack_28b90);
        FUN_1405bba90(param_2,(longlong)aiStack_28b48 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)aiStack_26298 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)aiStack_239e8 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)aiStack_21138 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)aiStack_1e888 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)aiStack_1bfd8 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)aiStack_19728 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)aiStack_16e78 + uVar6,4);
      }
      FUN_1405bba90(param_2,acStack_28b93,1);
      if (acStack_28b93[0] == '\0') {
        *plVar12 = 0;
      }
      else {
        pvStack_28b88 = operator_new(0x1c0);
        uVar9 = uVar2;
        do {
          *(undefined4 *)((longlong)pvStack_28b88 + uVar9 * 4) = 0xffffffff;
          *(undefined4 *)((longlong)pvStack_28b88 + uVar9 * 4 + 0xc0) = 0xffffffff;
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < 0x30);
        *(undefined4 *)((longlong)pvStack_28b88 + 400) = 0xffffffff;
        *(undefined2 *)((longlong)pvStack_28b88 + 0x1be) = 0x8ad0;
        *(undefined4 *)((longlong)pvStack_28b88 + 0x188) = 0x30;
        *(undefined4 *)((longlong)pvStack_28b88 + 0x18c) = 0x30;
        *(undefined8 *)((longlong)pvStack_28b88 + 0x198) = 0;
        *(undefined8 *)((longlong)pvStack_28b88 + 0x1a0) = 0;
        *(undefined8 *)((longlong)pvStack_28b88 + 0x1a8) = 0;
        *(undefined8 *)((longlong)pvStack_28b88 + 0x1b0) = 0;
        *(undefined4 *)((longlong)pvStack_28b88 + 0x1b8) = 0;
        *(undefined1 *)((longlong)pvStack_28b88 + 0x1bc) = 0;
        *plVar12 = (longlong)pvStack_28b88;
        FUN_140bad070(pvStack_28b88,param_2);
        FUN_1405bba90(param_2,(longlong)aiStack_145c8 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)aiStack_11d18 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)local_f468 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)local_cbb8 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)local_a308 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)local_7a58 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)local_51a8 + uVar6,4);
        FUN_1405bba90(param_2,(longlong)local_28f8 + uVar6,4);
      }
      FUN_1405bba90(param_2,(longlong)aiStack_28b48 + (longlong)puStack_28b70 + uVar6,4);
      FUN_1405bba90(param_2,(longlong)plVar13 + -0x1e7c,1);
      FUN_1405bba90(param_2,lVar5,2);
      FUN_1405bba90(param_2,plVar13,1);
      plVar3 = plStack_28b50;
      lVar5 = lVar5 + 2;
      uVar6 = uVar6 + 4;
      plVar13 = (longlong *)((longlong)plVar13 + 1);
      plVar12 = plVar12 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    pvStack_28b80 = (void *)((longlong)pvStack_28b80 + -1);
    uVar9 = uVar2;
    plVar10 = plStack_28b78;
  } while (pvStack_28b80 != (void *)0x0);
  do {
    lVar11 = 0x33;
    do {
      lVar5 = plVar10[-0xa29];
      if (lVar5 != 0) {
        if (*(int *)((longlong)aiStack_28b48 + uVar9) != -1) {
          *(longlong *)(lVar5 + 0x338) =
               plStack_28b50
               [(longlong)*(int *)((longlong)aiStack_26298 + uVar9) +
                (longlong)*(int *)((longlong)aiStack_28b48 + uVar9) * 0x33 + 0x95];
        }
        if (*(int *)((longlong)aiStack_239e8 + uVar9) != -1) {
          *(longlong *)(lVar5 + 0x340) =
               plStack_28b50
               [(longlong)*(int *)((longlong)aiStack_21138 + uVar9) +
                (longlong)*(int *)((longlong)aiStack_239e8 + uVar9) * 0x33 + 0x95];
        }
        if (*(int *)((longlong)aiStack_1e888 + uVar9) != -1) {
          *(longlong *)(lVar5 + 0x348) =
               plStack_28b50
               [(longlong)*(int *)((longlong)aiStack_1bfd8 + uVar9) +
                (longlong)*(int *)((longlong)aiStack_1e888 + uVar9) * 0x33 + 0x95];
        }
        if (*(int *)((longlong)aiStack_19728 + uVar9) != -1) {
          *(longlong *)(lVar5 + 0x350) =
               plStack_28b50
               [(longlong)*(int *)((longlong)aiStack_16e78 + uVar9) +
                (longlong)*(int *)((longlong)aiStack_19728 + uVar9) * 0x33 + 0x95];
        }
      }
      lVar5 = *plVar10;
      if (lVar5 != 0) {
        if (*(int *)((longlong)aiStack_145c8 + uVar9) != -1) {
          *(longlong *)(lVar5 + 0x198) =
               plStack_28b50
               [(longlong)*(int *)((longlong)aiStack_11d18 + uVar9) +
                (longlong)*(int *)((longlong)aiStack_145c8 + uVar9) * 0x33 + 0xabe];
        }
        if (*(int *)((longlong)local_f468 + uVar9) != -1) {
          *(longlong *)(lVar5 + 0x1a0) =
               plStack_28b50
               [(longlong)*(int *)((longlong)local_cbb8 + uVar9) +
                (longlong)*(int *)((longlong)local_f468 + uVar9) * 0x33 + 0xabe];
        }
        if (*(int *)((longlong)local_a308 + uVar9) != -1) {
          *(longlong *)(lVar5 + 0x1a8) =
               plStack_28b50
               [(longlong)*(int *)((longlong)local_7a58 + uVar9) +
                (longlong)*(int *)((longlong)local_a308 + uVar9) * 0x33 + 0xabe];
        }
        if (*(int *)((longlong)local_51a8 + uVar9) != -1) {
          *(longlong *)(lVar5 + 0x1b0) =
               plStack_28b50
               [(longlong)*(int *)((longlong)local_28f8 + uVar9) +
                (longlong)*(int *)((longlong)local_51a8 + uVar9) * 0x33 + 0xabe];
        }
      }
      plVar10 = plVar10 + 1;
      uVar9 = uVar9 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  } while ((longlong)uVar9 < 0x28a4);
  lVar11 = (longlong)plStack_28b50 + 0x1fe6c;
  lVar5 = 0x34;
  pvStack_28b80 = (void *)0x0;
  do {
    lVar1 = 0x34;
    do {
      FUN_1405bba90(param_2,lVar11,4);
      lVar11 = lVar11 + 4;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  FUN_1405bba90(param_2,&iStack_28b98,4);
  FUN_14000b9d0(plVar3 + 0x4516,(longlong)iStack_28b98);
  uVar6 = uVar2;
  uVar9 = uVar2;
  if (0 < iStack_28b98) {
    do {
      plStack_28b50 = operator_new(0x24);
      *plStack_28b50 = -1;
      *(undefined4 *)(plStack_28b50 + 1) = 0;
      *(undefined4 *)((longlong)plStack_28b50 + 0x1c) = 0xffffffff;
      *(undefined4 *)(plStack_28b50 + 4) = 0;
      *(longlong **)(uVar6 + plVar3[0x4516]) = plStack_28b50;
      FUN_1400b4c90(*(undefined8 *)(uVar6 + plVar3[0x4516]),param_2);
      uVar7 = (int)uVar9 + 1;
      uVar6 = uVar6 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((int)uVar7 < iStack_28b98);
  }
  FUN_1405bba90(param_2,plVar3 + 0x4519,4);
  FUN_1405bba90(param_2,(longlong)plVar3 + 0x40564,4);
  uVar6 = uVar2;
  if (0 < *(int *)((longlong)plVar3 + 0x40564)) {
    do {
      FUN_140c0c080((longlong)(int)uVar6 * 0xf4 + 0x228d4 + (longlong)plVar3,param_2);
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)((longlong)plVar3 + 0x40564));
  }
  FUN_1405bba90(param_2,plVar3 + 0x80ad,4);
  FUN_1405bba90(param_2,(longlong)plVar3 + 0x4056c,4);
  if ((0x69c < iStack_28b90) && (FUN_1405bba90(param_2,plVar3 + 0x81da,4), 0 < (int)plVar3[0x81da]))
  {
    do {
      iVar14 = (int)uVar2;
      FUN_1405bba90(param_2,(longlong)plVar3 + (longlong)iVar14 * 4 + 0x40570,4);
      FUN_1405bba90(param_2,(longlong)plVar3 + (longlong)iVar14 * 4 + 0x40a20,4);
      uVar2 = (ulonglong)(iVar14 + 1U);
    } while ((int)(iVar14 + 1U) < (int)plVar3[0x81da]);
  }
  return;
}

