// FUN_140c60140 @ 140c60140
// callees:
//   -> 140050b50 FUN_140050b50
//   -> 140c26b40 FUN_140c26b40
//   -> 140c2efa0 FUN_140c2efa0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140074660 FUN_140074660
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140c60140(longlong param_1,short param_2,int param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined2 local_de;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_90 [4];
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_90[3] = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_138;
  local_108 = 0;
  uStack_100 = 0;
  iVar12 = 0;
  local_f8 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x7b8);
  lVar3 = local_f8;
  for (puVar7 = *(undefined8 **)(param_1 + 0x7b0); local_f8 = lVar3, puVar7 < puVar1;
      puVar7 = puVar7 + 1) {
    piVar9 = (int *)*puVar7;
    iVar5 = *piVar9;
    if (iVar5 == 1) {
      iVar5 = piVar9[9];
LAB_140c601d6:
      if (iVar5 != -1) {
        FUN_140050b50(iVar5,&local_108);
      }
    }
    else {
      if ((iVar5 == 9) || (iVar5 == 10)) {
        iVar5 = piVar9[4];
        goto LAB_140c601d6;
      }
      if (iVar5 == 0xc) {
        iVar5 = piVar9[3];
        goto LAB_140c601d6;
      }
    }
    lVar3 = local_f8;
  }
  uVar10 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98 = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  FUN_140c26b40(param_1,&local_a8,local_90,&local_108);
  lVar4 = local_a8;
  lVar11 = lStack_a0 - local_a8 >> 2;
  iVar5 = (int)lVar11 + -1;
  if (-1 < iVar5) {
    piVar9 = (int *)(local_a8 + (longlong)iVar5 * 4);
    iVar12 = 0;
    do {
      if (iVar12 < *piVar9) {
        iVar12 = *piVar9;
      }
      piVar9 = piVar9 + -1;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  if ((lVar11 == 0) || (iVar12 < param_2)) goto LAB_140c6042f;
  if (DAT_1410b67dc == 0) {
    bVar2 = DAT_141c34378 & 0x70;
  }
  else {
    bVar2 = DAT_141c34378 & 8;
  }
  if (bVar2 != 0) {
    local_38 = 0xf;
    local_40 = 0;
    local_50 = 0;
    local_118 = 1;
    FUN_140c2efa0(param_1,&local_50,1,CONCAT71((int7)(lStack_a0 - local_a8 >> 10),1));
    local_58 = 0xf;
    local_60 = 0;
    local_70 = 0;
    FUN_14000c8b0(&local_70,&local_50,0,0xffffffffffffffff);
    if ((DAT_1410b67dc == 1) && (param_1 == *DAT_141c66fe8)) {
      uVar10 = 6;
      pcVar6 = " block";
    }
    else {
      uVar10 = 7;
      pcVar6 = " blocks";
    }
    FUN_14000c9f0(&local_70,pcVar6,uVar10);
    if (param_3 == 0) {
      uVar8 = 10;
      pcVar6 = " the fire.";
LAB_140c6034f:
      FUN_14000c9f0(&local_70,pcVar6,uVar8);
    }
    else {
      if (param_3 == 1) {
        uVar8 = 0x10;
        pcVar6 = " the dragonfire.";
        goto LAB_140c6034f;
      }
      if (param_3 == 2) {
        uVar8 = 0xc;
        pcVar6 = " the breath.";
        goto LAB_140c6034f;
      }
    }
    local_dc = 0;
    local_d8 = 0x8ad08ad0;
    local_d4 = 0x8ad0;
    local_d0 = 0;
    local_c0 = 0;
    local_b8 = 0xffffffffffffffff;
    local_b0 = 0xffffffff;
    local_ac = 0;
    local_e8 = 0x6007e;
    local_e4 = 1;
    local_cc = 2000;
    local_e2 = *(undefined2 *)(param_1 + 0xa8);
    local_e0 = *(undefined2 *)(param_1 + 0xaa);
    local_de = *(undefined2 *)(param_1 + 0xac);
    local_c8 = param_1;
    FUN_140074660(&DAT_141d64dc8,&local_70,&local_e8);
    if (0xf < local_58) {
      FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
    }
    local_58 = 0xf;
    local_60 = 0;
    local_70 = 0;
    if (0xf < local_38) {
      FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
    }
  }
  uVar10 = 1;
LAB_140c6042f:
  if (local_90[0] != 0) {
    FUN_140002020(local_90[0],local_90[2] - local_90[0] >> 3,8);
  }
  if (lVar4 != 0) {
    FUN_140002020(lVar4,local_98 - lVar4 >> 2,4);
  }
  if (local_108 != 0) {
    FUN_140002020(local_108,lVar3 - local_108 >> 2,4);
  }
  return uVar10;
}

