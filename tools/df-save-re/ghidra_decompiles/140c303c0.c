// FUN_140c303c0 @ 140c303c0
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 1407ad250 FUN_1407ad250
//   -> 1407d4c00 FUN_1407d4c00
//   -> 1407b52b0 FUN_1407b52b0
//   -> 140050d30 FUN_140050d30
//   -> 14061fbe0 FUN_14061fbe0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1400511c0 FUN_1400511c0
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 140c2fd00 FUN_140c2fd00
//   -> 14000d840 FUN_14000d840
//   -> 140c800d0 FUN_140c800d0
//   -> 140050540 FUN_140050540
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c303c0(longlong param_1,undefined8 *param_2,char param_3)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  char local_98 [8];
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_90 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_b8;
  local_98[0] = param_3;
  if (DAT_1410b67d8 - 4U < 2) {
    lVar7 = *(longlong *)(param_1 + 0xd60);
    if ((lVar7 == 0) || (puVar8 = (undefined8 *)(lVar7 + 0x20), *(longlong *)(lVar7 + 0x30) == 0)) {
      puVar8 = (undefined8 *)(param_1 + 8);
    }
    if (param_2 == puVar8) {
      return;
    }
    FUN_14000c8b0(param_2,puVar8,0,0xffffffffffffffff);
    return;
  }
  lVar7 = param_1 + 8;
  lVar5 = FUN_140ca8390();
  lVar11 = 0;
  if (lVar5 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)FUN_1407ad250(lVar5);
    if (puVar6 != (undefined4 *)0x0) {
      lVar7 = FUN_1407d4c00(puVar6);
    }
  }
  param_2[2] = 0;
  puVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar8 = 0;
  if (*(char *)(lVar7 + 0x72) != '\0') {
    if (DAT_1410b67d8 == 1) {
      if (DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3 != 0) {
        bVar2 = false;
        lVar5 = FUN_140ca8390(*DAT_141c66fe8);
        if (lVar5 != 0) {
          if ((*(int *)(param_1 + 0xc10) == -1) || (lVar9 = FUN_1407b52b0(lVar5), lVar9 == 0)) {
LAB_140c304e6:
            if ((((*(int *)(param_1 + 0x14c) != -1) && (*(longlong *)(lVar5 + 0x130) != 0)) &&
                (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x130) + 0x60), lVar5 != 0)) &&
               (iVar4 = FUN_140050d30(*(int *)(param_1 + 0x14c),lVar5 + 0x48), iVar4 != -1))
            goto LAB_140c30514;
            if (!bVar2) goto LAB_140c30613;
          }
          else {
            if ((*(byte *)(lVar9 + 4) & 1) == 0) {
              if (puVar6 != (undefined4 *)0x0) {
                iVar4 = FUN_140050d30(*puVar6,lVar9 + 8);
                bVar2 = false;
                if (iVar4 != -1) {
                  bVar2 = true;
                }
              }
              goto LAB_140c304e6;
            }
LAB_140c30514:
            lVar7 = param_1 + 8;
          }
          FUN_14061fbe0(lVar7,param_2);
          FUN_14000c9f0(param_2,&DAT_140e5a200,2);
        }
      }
    }
    else {
      bVar2 = false;
      if ((((DAT_1410b67dc == 0) && (puVar6 != (undefined4 *)0x0)) &&
          (*(longlong *)(DAT_141c3d250 + 0x1348) != 0)) &&
         ((lVar5 = FUN_1400511c0(*(undefined4 *)(param_1 + 0xc10)), lVar5 != 0 &&
          ((*(byte *)(lVar5 + 4) & 8) != 0)))) {
        bVar2 = true;
        FUN_14000c9f0(param_2,&DAT_140e5a840,1);
      }
      local_70 = 0xf;
      local_78 = 0;
      local_88 = 0;
      FUN_14061fbe0(lVar7,&local_88);
      FUN_14000cb40(param_2,&local_88,0,0xffffffffffffffff);
      if (bVar2) {
        FUN_14000c9f0(param_2,&DAT_140e5a840,1);
      }
      FUN_14000c9f0(param_2,&DAT_140e5a200,2);
      if (0xf < local_70) {
        FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
      }
    }
  }
LAB_140c30613:
  local_50 = 0xf;
  local_58 = 0;
  local_68 = 0;
  FUN_140c2fd00(param_1,&local_68,1);
  FUN_14000cb40(param_2,&local_68,0,0xffffffffffffffff);
  if (((local_98[0] != '\0') && (sVar1 = *(short *)(param_1 + 0xa4), -1 < sVar1)) &&
     (((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) &&
      (cVar3 = FUN_14000d840(*(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8) + 0x1a8,0x42),
      cVar3 != '\0')))) {
    if (*(char *)(param_1 + 0x12e) == '\0') {
      FUN_140c800d0(param_1);
      FUN_14000c9f0(param_2,&DAT_140e5a200,2);
      if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
        FUN_140050540(param_2,1,0x78);
      }
      FUN_140050540(param_2,1,0xc);
      if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
        FUN_140050540(param_2,1,0x78);
      }
    }
    if (*(char *)(param_1 + 0x12e) == '\x01') {
      FUN_140c800d0(param_1);
      FUN_14000c9f0(param_2,&DAT_140e5a200,2);
      if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
        FUN_140050540(param_2,1,0x78);
      }
      FUN_140050540(param_2,1,0xb);
      if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
        FUN_140050540(param_2,1,0x78);
      }
    }
  }
  if ((*(uint *)(param_1 + 0x110) & 0x4000000) == 0) goto LAB_140c308e9;
  FUN_14000c9f0(param_2,&DAT_140e6f264);
  local_98[1] = 0;
  switch(*(undefined4 *)(param_1 + 0x138)) {
  case 1:
    lVar11 = 7;
    pcVar10 = "Trained";
    break;
  case 2:
    pcVar10 = "-Trained-";
    goto LAB_140c308c8;
  case 3:
    pcVar10 = "+Trained+";
    goto LAB_140c308c8;
  case 4:
    pcVar10 = "*Trained*";
    goto LAB_140c308c8;
  case 5:
    local_98[0] = -0x10;
    lVar7 = -1;
    do {
      lVar5 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (local_98[lVar5] != '\0');
    FUN_14000c9f0(param_2,local_98);
    FUN_14000c9f0(param_2,"Trained",7);
    if (local_98[0] != '\0') {
      lVar7 = -1;
      do {
        lVar11 = lVar7 + 1;
        lVar5 = lVar7 + 1;
        lVar7 = lVar11;
      } while (local_98[lVar5] != '\0');
    }
LAB_140c30849:
    pcVar10 = local_98;
    break;
  case 6:
    local_98[0] = '\x0f';
    lVar7 = -1;
    do {
      lVar5 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (local_98[lVar5] != '\0');
    FUN_14000c9f0(param_2,local_98);
    FUN_14000c9f0(param_2,"Trained",7);
    if (local_98[0] == '\0') goto LAB_140c30849;
    lVar7 = -1;
    do {
      lVar11 = lVar7 + 1;
      lVar5 = lVar7 + 1;
      lVar7 = lVar11;
    } while (local_98[lVar5] != '\0');
    pcVar10 = local_98;
    break;
  case 7:
    lVar11 = 4;
    pcVar10 = "Tame";
    break;
  default:
    pcVar10 = "Semi-Wild";
LAB_140c308c8:
    lVar11 = 9;
  }
  FUN_14000c9f0(param_2,pcVar10,lVar11);
  FUN_14000c9f0(param_2,&DAT_140e6f268,1);
LAB_140c308e9:
  if (0xf < local_50) {
    FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
  }
  return;
}

