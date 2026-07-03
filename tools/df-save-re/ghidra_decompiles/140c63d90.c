// FUN_140c63d90 @ 140c63d90
// callees:
//   -> 140c3c220 FUN_140c3c220
//   -> 1400511c0 FUN_1400511c0
//   -> 1402f5c50 FUN_1402f5c50
//   -> 140c39a50 FUN_140c39a50
//   -> 140c139c0 FUN_140c139c0
//   -> 140c21270 FUN_140c21270
//   -> 140c62f80 FUN_140c62f80
//   -> 140cc6190 FUN_140cc6190
//   -> 140c333e0 FUN_140c333e0
//   -> 14000d7e0 FUN_14000d7e0
//   -> 140cbfd10 FUN_140cbfd10
//   -> 140cbfcb0 FUN_140cbfcb0
//   -> 140cbfe30 FUN_140cbfe30
//   -> 14092ee70 FUN_14092ee70
//   -> 140910c00 FUN_140910c00
//   -> 140c63d90 FUN_140c63d90
//   -> 140c7de50 FUN_140c7de50
//   -> 140c5dbd0 FUN_140c5dbd0
//   -> 140c80fd0 FUN_140c80fd0


int FUN_140c63d90(longlong param_1,ushort param_2,int param_3,undefined8 param_4,int param_5,
                 int param_6,longlong *param_7,longlong *param_8,uint param_9,short param_10,
                 int param_11)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 in_stack_ffffffffffffff78;
  int *piVar14;
  undefined4 uVar15;
  undefined8 in_stack_ffffffffffffff80;
  int *piVar16;
  undefined4 uVar17;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30 [2];
  ulonglong local_28;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  iVar6 = 0;
  local_3c = -1;
  local_38 = -1;
  local_34 = -1;
  local_48 = -1;
  local_44 = -1;
  local_30[0] = -1;
  local_40 = 0;
  if (0x34 < param_2) goto LAB_140c654df;
  uVar5 = param_6 >> 0x1f;
  switch(param_2) {
  default:
    iVar6 = FUN_140c3c220(param_1,0x69);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x69,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x69);
    }
    break;
  case 2:
    iVar6 = FUN_140c3c220(param_1,0x2e);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x2e,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x2e);
    }
    break;
  case 3:
  case 4:
    uVar12 = 0x65;
    goto LAB_140c64d63;
  case 6:
  case 0x12:
  case 0x13:
  case 0x14:
    if (param_2 == 6) {
      uVar5 = 0x65;
    }
    else if (param_2 == 0x12) {
      uVar5 = 0x66;
    }
    else if (param_2 == 0x13) {
      uVar5 = 0x67;
    }
    else if (param_2 == 0x14) {
      uVar5 = 0x68;
    }
    else {
      uVar5 = (uint)param_2;
    }
    local_28 = CONCAT44(local_28._4_4_,uVar5);
    iVar6 = FUN_140c3c220(param_1,(short)uVar5);
    iVar7 = FUN_140c3c220(param_1,99);
    uVar13 = local_28 & 0xffffffff;
    if (iVar6 < iVar7 >> 2) {
      iVar6 = iVar7 >> 2;
    }
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(local_28 & 0xffff,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,uVar13 & 0xffff,param_6);
      FUN_140c39a50(param_1,99,param_6);
    }
    break;
  case 7:
    iVar6 = FUN_140c3c220(param_1,0x2d);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x2d,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x2d);
    }
    break;
  case 8:
    iVar6 = 0;
    if (param_7 != (longlong *)0x0) {
      uVar3 = (**(code **)(*param_7 + 0x500))();
      iVar6 = FUN_140c3c220(param_1,uVar3);
      iVar7 = FUN_140c3c220(param_1,99);
      if (iVar6 < iVar7 >> 2) {
        iVar6 = iVar7 >> 2;
      }
      local_40 = iVar6;
      sVar4 = (**(code **)(*param_7 + 0x500))();
      if (sVar4 == -1) {
        sVar4 = 99;
      }
      piVar16 = &local_44;
      piVar14 = &local_48;
      FUN_1402f5c50(sVar4,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
      uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
      uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
      if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
        if ((sVar4 != -1) && (sVar4 != 99)) {
          FUN_140c39a50(param_1,sVar4,param_6);
        }
        FUN_140c39a50(param_1,99,param_6);
      }
    }
    break;
  case 9:
    if (param_8 != (longlong *)0x0) {
      uVar3 = (**(code **)(*param_8 + 0x508))(param_8);
      iVar6 = FUN_140c3c220(param_1,uVar3);
      iVar7 = FUN_140c3c220(param_1,100);
      if (iVar6 < iVar7 >> 2) {
        iVar6 = iVar7 >> 2;
      }
      local_40 = iVar6;
      sVar4 = (**(code **)(*param_8 + 0x508))(param_8);
      if (sVar4 == -1) {
        sVar4 = 99;
      }
      piVar16 = &local_44;
      piVar14 = &local_48;
      FUN_1402f5c50(sVar4,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
      uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
      uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
      if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
        if ((sVar4 != -1) && (sVar4 != 100)) {
          FUN_140c39a50(param_1,sVar4,param_6);
        }
        FUN_140c39a50(param_1,100,param_6);
      }
    }
    break;
  case 10:
    iVar6 = FUN_140c3c220(param_1,0x36);
    iVar7 = FUN_140c3c220(param_1,100);
    if (iVar6 < iVar7 >> 2) {
      iVar6 = iVar7 >> 2;
    }
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x36,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x36);
    }
    break;
  case 0xb:
  case 0xe:
  case 0x1d:
    iVar6 = FUN_140c3c220(param_1,0x59);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x59,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x59);
    }
    break;
  case 0xc:
    uVar12 = 99;
LAB_140c64d63:
    iVar6 = FUN_140c3c220(param_1,uVar12);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(uVar12,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
LAB_140c64dbb:
      FUN_140c39a50(param_1,uVar12);
    }
    break;
  case 0xd:
    iVar6 = FUN_140c3c220(param_1,0x39);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x39,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x39);
    }
    break;
  case 0xf:
    iVar6 = FUN_140c3c220(param_1,0x62);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x62,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x62);
    }
    break;
  case 0x10:
    iVar6 = FUN_140c3c220(param_1,0x56);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x56,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x56);
    }
    break;
  case 0x11:
    iVar6 = FUN_140c3c220(param_1,0x57);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x57,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x57);
    }
    break;
  case 0x15:
    iVar6 = FUN_140c3c220(param_1,0x3d);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x3d,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x3d);
    }
    break;
  case 0x16:
    iVar6 = FUN_140c3c220(param_1,0x3c);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x3c,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x3c);
    }
    break;
  case 0x17:
    iVar6 = FUN_140c3c220(param_1,0x61);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x61,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x61);
    }
    break;
  case 0x18:
    iVar6 = FUN_140c3c220(param_1,0x4c);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x4c,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x4c);
    }
    break;
  case 0x19:
    if (param_10 == -1) {
      local_40 = 0;
    }
    else {
      iVar6 = FUN_140c3c220(param_1,param_10);
      piVar16 = &local_44;
      piVar14 = &local_48;
      local_40 = iVar6;
      FUN_1402f5c50(param_10,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
      uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
      uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    }
    if (((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) && (param_10 != -1)) {
      FUN_140c39a50(param_1,param_10);
    }
    break;
  case 0x1a:
  case 0x1b:
    uVar12 = 99;
    iVar6 = FUN_140c3c220(param_1,99);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(99,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 == 0) || (0 < *(short *)(param_1 + 0x7e4))) break;
    goto LAB_140c64dbb;
  case 0x1e:
    iVar6 = FUN_140c3c220(param_1,0x55);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x55,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x55);
    }
    break;
  case 0x1f:
    iVar6 = FUN_140c3c220(param_1,0x74);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x74,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x74);
    }
    break;
  case 0x20:
    iVar6 = FUN_140c3c220(param_1,0x58);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x58,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x58);
    }
    break;
  case 0x21:
    iVar6 = FUN_140c3c220(param_1,0x78);
    iVar7 = FUN_140c3c220(param_1,0x77);
    if (iVar6 < iVar7 >> 2) {
      iVar6 = iVar7 >> 2;
    }
    if (*(longlong *)(param_1 + 0xa78) == 0) {
      iVar7 = 0;
    }
    else if (*(short *)(param_1 + 0x348) == 8) {
      iVar7 = 0;
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x3d0);
      if (lVar10 == 0) {
        iVar7 = 0;
      }
      else {
        lVar10 = FUN_1400511c0(param_11,lVar10 + 0x30);
        iVar7 = 0;
        if (lVar10 != 0) {
          iVar7 = *(int *)(lVar10 + 4);
        }
      }
    }
    iVar6 = (iVar7 + iVar6 + 1) / 2;
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x78,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x78,param_6);
LAB_140c63ece:
      FUN_140c39a50(param_1,0x77,param_6);
LAB_140c63ede:
      if ((*(longlong *)(param_1 + 0xa78) != 0) && (*(short *)(param_1 + 0x348) != 8)) {
        FUN_140c139c0(*(longlong *)(param_1 + 0xa78),2,param_11,param_6);
      }
    }
    break;
  case 0x22:
    if ((param_7 == (longlong *)0x0) || (sVar4 = (**(code **)*param_7)(param_7), sVar4 != 0xd)) {
      return 0;
    }
    local_28 = param_7[0x1c];
    if (*(longlong *)(param_1 + 0xa78) == 0) {
      iVar6 = 0;
    }
    else if (*(short *)(param_1 + 0x348) == 8) {
      iVar6 = 0;
    }
    else if (*(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x3d0) == 0) {
      iVar6 = 0;
    }
    else {
      lVar10 = FUN_1400511c0((int)*(short *)(local_28 + 0x28));
      if (lVar10 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(lVar10 + 4);
      }
    }
    iVar7 = FUN_140c3c220(param_1,*(undefined2 *)(local_28 + 0xb0));
    iVar8 = FUN_140c3c220(param_1,0x77);
    if (iVar6 < iVar7 >> 1) {
      iVar6 = iVar7 >> 1;
    }
    if (iVar6 < iVar8 >> 2) {
      iVar6 = iVar8 >> 2;
    }
    if (*(longlong *)(param_1 + 0xa78) == 0) {
      iVar7 = 0;
    }
    else if (*(short *)(param_1 + 0x348) == 8) {
      iVar7 = 0;
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x3d0);
      if (lVar10 == 0) {
        iVar7 = 0;
      }
      else {
        lVar10 = FUN_1400511c0(param_11,lVar10 + 0x30);
        iVar7 = 0;
        if (lVar10 != 0) {
          iVar7 = *(int *)(lVar10 + 4);
        }
      }
    }
    iVar6 = (iVar7 + iVar6 + 1) / 2;
    uVar13 = (ulonglong)*(ushort *)(local_28 + 0xb0);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(uVar13,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,uVar13 & 0xffff,param_6);
      FUN_140c39a50(param_1,0x77,param_6);
      if ((*(longlong *)(param_1 + 0xa78) != 0) && (*(short *)(param_1 + 0x348) != 8)) {
        FUN_140c139c0(*(longlong *)(param_1 + 0xa78),0,(int)*(short *)(local_28 + 0x28),param_6);
      }
      goto LAB_140c63ede;
    }
    break;
  case 0x23:
  case 0x29:
    iVar6 = FUN_140c3c220(param_1,0x76);
    if (*(longlong *)(param_1 + 0xa78) == 0) {
      iVar7 = 0;
    }
    else if (*(short *)(param_1 + 0x348) == 8) {
      iVar7 = 0;
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x3d0);
      if (lVar10 == 0) {
        iVar7 = 0;
      }
      else {
        lVar10 = FUN_1400511c0(param_11,lVar10 + 0x48);
        if (lVar10 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(lVar10 + 4);
        }
      }
    }
    iVar6 = (iVar6 + 1 + iVar7) / 2;
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x76,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x76,param_6);
      if ((*(longlong *)(param_1 + 0xa78) != 0) && (*(short *)(param_1 + 0x348) != 8)) {
        FUN_140c139c0(*(longlong *)(param_1 + 0xa78),3,param_11,param_6);
      }
    }
    break;
  case 0x24:
    iVar6 = FUN_140c3c220(param_1,0x5e);
    iVar7 = FUN_140c3c220(param_1,0x5c);
    if (iVar6 < iVar7 >> 2) {
      iVar6 = iVar7 >> 2;
    }
    if (param_11 != -1) {
      if (*(longlong *)(param_1 + 0xa78) == 0) {
        iVar7 = 0;
      }
      else if (*(short *)(param_1 + 0x348) == 8) {
        iVar7 = 0;
      }
      else {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x3d0);
        if (lVar10 == 0) {
          iVar7 = 0;
        }
        else {
          local_40 = iVar6;
          lVar10 = FUN_1400511c0(param_11,lVar10 + 0x18);
          iVar7 = 0;
          if (lVar10 != 0) {
            iVar7 = *(int *)(lVar10 + 4);
          }
        }
      }
      iVar6 = (iVar7 + iVar6 + 1) / 2;
    }
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x5e,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x5e,param_6);
      FUN_140c39a50(param_1,0x5c,(int)((uVar5 & 3) + param_6) >> 2);
      if ((param_11 != -1) &&
         ((*(longlong *)(param_1 + 0xa78) != 0 && (*(short *)(param_1 + 0x348) != 8)))) {
        FUN_140c139c0(*(longlong *)(param_1 + 0xa78),1,param_11,param_6);
      }
    }
    break;
  case 0x25:
  case 0x34:
    iVar6 = FUN_140c3c220(param_1,0x5e);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x5e,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x5e);
    }
    break;
  case 0x26:
    iVar6 = FUN_140c3c220(param_1,0x5b);
    iVar7 = FUN_140c3c220(param_1,0x5a);
    if (iVar6 < iVar7 >> 2) {
      iVar6 = iVar7 >> 2;
    }
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x5b,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x5b,param_6);
      FUN_140c39a50(param_1,0x5a,(int)((uVar5 & 3) + param_6) >> 2);
    }
    break;
  case 0x27:
    iVar6 = FUN_140c3c220(param_1,0x5c);
    iVar7 = FUN_140c3c220(param_1,0x5a);
    if (iVar6 < iVar7 >> 2) {
      iVar6 = iVar7 >> 2;
    }
    if (*(longlong *)(param_1 + 0xa78) == 0) {
      iVar7 = 0;
    }
    else if (*(short *)(param_1 + 0x348) == 8) {
      iVar7 = 0;
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x3d0);
      if (lVar10 == 0) {
        iVar7 = 0;
      }
      else {
        lVar10 = FUN_1400511c0(param_11,lVar10 + 0x18);
        iVar7 = 0;
        if (lVar10 != 0) {
          iVar7 = *(int *)(lVar10 + 4);
        }
      }
    }
    iVar6 = (iVar7 + iVar6 + 1) / 2;
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x5c,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x5c,param_6);
      FUN_140c39a50(param_1,0x5a,(int)((uVar5 & 3) + param_6) >> 2);
      if ((*(longlong *)(param_1 + 0xa78) != 0) && (*(short *)(param_1 + 0x348) != 8)) {
        FUN_140c139c0(*(longlong *)(param_1 + 0xa78),1,param_11,param_6);
      }
    }
    break;
  case 0x28:
    iVar6 = FUN_140c3c220(param_1,0x77);
    if (*(longlong *)(param_1 + 0xa78) == 0) {
      iVar7 = 0;
    }
    else if (*(short *)(param_1 + 0x348) == 8) {
      iVar7 = 0;
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x3d0);
      if (lVar10 == 0) {
        iVar7 = 0;
      }
      else {
        lVar10 = FUN_1400511c0(param_11,lVar10 + 0x30);
        if (lVar10 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(lVar10 + 4);
        }
      }
    }
    iVar6 = (iVar6 + 1 + iVar7) / 2;
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x77,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) goto LAB_140c63ece;
    break;
  case 0x2a:
    iVar6 = FUN_140c3c220(param_1,0x48);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x48,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x48);
    }
    break;
  case 0x2b:
    iVar6 = FUN_140c3c220(param_1,0x4f);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x4f,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x4f);
    }
    break;
  case 0x2c:
    iVar6 = FUN_140c3c220(param_1,0x4a);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x4a,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x4a);
    }
    break;
  case 0x2d:
    iVar6 = FUN_140c3c220(param_1,0x52);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x52,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x52);
    }
    break;
  case 0x2e:
    iVar6 = FUN_140c3c220(param_1,0x50);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x50,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x50);
    }
    break;
  case 0x2f:
    iVar6 = FUN_140c3c220(param_1,0x51);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x51,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x51);
    }
    break;
  case 0x30:
    iVar6 = FUN_140c3c220(param_1,0x53);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x53,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x53);
    }
    break;
  case 0x31:
    iVar6 = FUN_140c3c220(param_1,0x54);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x54,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x54);
    }
    break;
  case 0x32:
    iVar6 = FUN_140c3c220(param_1,0x4e);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x4e,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x4e);
    }
    break;
  case 0x33:
    iVar6 = FUN_140c3c220(param_1,0x87);
    piVar16 = &local_44;
    piVar14 = &local_48;
    local_40 = iVar6;
    FUN_1402f5c50(0x87,&local_3c,&local_38,&local_34,piVar14,piVar16,local_30);
    uVar15 = (undefined4)((ulonglong)piVar14 >> 0x20);
    uVar17 = (undefined4)((ulonglong)piVar16 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x7e4) < 1)) {
      FUN_140c39a50(param_1,0x87);
    }
  }
LAB_140c654df:
  if ((*(short *)(param_1 + 0x7f8) == 0) && ((param_9 & 1) != 0)) {
    local_40 = (iVar6 + 1) * 5;
    iVar6 = local_40;
  }
  if (param_2 == 4) {
    local_40 = iVar6 / 2;
    param_3 = param_3 / 2 + 1;
    iVar6 = local_40;
  }
  iVar6 = FUN_140c21270(param_3,iVar6);
  if ((param_7 != (longlong *)0x0) || (param_8 != (longlong *)0x0)) {
    FUN_140c62f80(&local_40,param_7);
    iVar7 = FUN_140cc6190(param_1,param_7);
    iVar8 = FUN_140cc6190(param_1,param_8);
    iVar6 = ((iVar8 + 100 + iVar7) * iVar6) / 100;
  }
  switch(param_2) {
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
  case 0xd:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x23:
    iVar7 = FUN_140c333e0(param_1);
    iVar7 = FUN_14000d7e0(iVar7 + 1);
    iVar6 = iVar6 - iVar7;
  }
  lVar10 = (longlong)local_3c;
  if (local_3c != -1) {
    lVar1 = *(longlong *)(param_1 + 0x8c8);
    if ((param_9 & 0x100) == 0) {
      lVar10 = (longlong)local_3c;
      iVar7 = *(int *)(lVar10 * 0x1c + 0x5e4 + param_1) - *(int *)(lVar10 * 0x1c + 0x5f4 + param_1);
      if (lVar1 != 0) {
        iVar7 = (*(int *)(lVar1 + lVar10 * 4) * iVar7) / 100 + *(int *)(lVar1 + 0x18 + lVar10 * 4);
      }
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      iVar7 = FUN_14000d7e0(iVar7 + 1);
      iVar7 = (int)((ulonglong)((longlong)iVar7 * 0x51eb851f) >> 0x20);
    }
    else {
      iVar7 = *(int *)(lVar10 * 0x1c + 0x5e4 + param_1) - *(int *)(lVar10 * 0x1c + 0x5f4 + param_1);
      if (lVar1 != 0) {
        iVar7 = (*(int *)(lVar1 + lVar10 * 4) * iVar7) / 100 + *(int *)(lVar1 + 0x18 + lVar10 * 4);
      }
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      iVar7 = (int)((ulonglong)((longlong)iVar7 * 0x51eb851f) >> 0x20);
    }
    iVar6 = iVar6 + ((iVar7 >> 5) - (iVar7 >> 0x1f));
    if (0 < param_5) {
      FUN_140cbfd10(param_1,local_3c);
    }
  }
  lVar10 = (longlong)local_38;
  if (local_38 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x8c8);
    if ((param_9 & 0x100) == 0) {
      lVar10 = (longlong)local_38;
      iVar7 = *(int *)(lVar10 * 0x1c + 0x5e4 + param_1) - *(int *)(lVar10 * 0x1c + 0x5f4 + param_1);
      if (lVar1 != 0) {
        iVar7 = (*(int *)(lVar1 + lVar10 * 4) * iVar7) / 100 + *(int *)(lVar1 + 0x18 + lVar10 * 4);
      }
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      iVar7 = FUN_14000d7e0(iVar7 + 1);
      iVar7 = (int)((ulonglong)((longlong)iVar7 * 0x10624dd3) >> 0x20);
    }
    else {
      iVar7 = *(int *)(lVar10 * 0x1c + 0x5e4 + param_1) - *(int *)(lVar10 * 0x1c + 0x5f4 + param_1);
      if (lVar1 != 0) {
        iVar7 = (*(int *)(lVar1 + lVar10 * 4) * iVar7) / 100 + *(int *)(lVar1 + 0x18 + lVar10 * 4);
      }
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      iVar7 = (int)((ulonglong)((longlong)iVar7 * 0x10624dd3) >> 0x20);
    }
    iVar6 = iVar6 + ((iVar7 >> 4) - (iVar7 >> 0x1f));
    if (0 < param_5) {
      FUN_140cbfd10(param_1,local_38);
    }
  }
  lVar10 = (longlong)local_34;
  if (local_34 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x8c8);
    if ((param_9 & 0x100) == 0) {
      lVar10 = (longlong)local_34;
      iVar7 = *(int *)(lVar10 * 0x1c + 0x5e4 + param_1) - *(int *)(lVar10 * 0x1c + 0x5f4 + param_1);
      if (lVar1 != 0) {
        iVar7 = (*(int *)(lVar1 + lVar10 * 4) * iVar7) / 100 + *(int *)(lVar1 + 0x18 + lVar10 * 4);
      }
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      iVar7 = FUN_14000d7e0(iVar7 + 1);
      iVar7 = (int)((ulonglong)((longlong)iVar7 * 0x10624dd3) >> 0x20);
    }
    else {
      iVar7 = *(int *)(lVar10 * 0x1c + 0x5e4 + param_1) - *(int *)(lVar10 * 0x1c + 0x5f4 + param_1);
      if (lVar1 != 0) {
        iVar7 = (*(int *)(lVar1 + lVar10 * 4) * iVar7) / 100 + *(int *)(lVar1 + 0x18 + lVar10 * 4);
      }
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      iVar7 = (int)((ulonglong)((longlong)iVar7 * 0x10624dd3) >> 0x20);
    }
    iVar6 = iVar6 + ((iVar7 >> 4) - (iVar7 >> 0x1f));
    if (0 < param_5) {
      FUN_140cbfd10(param_1,local_34);
    }
  }
  lVar10 = 0;
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    if (local_30[0] == -1) {
      if (local_44 == -1) {
        if (local_48 != -1) {
          if ((param_9 & 0x100) == 0) {
            iVar7 = FUN_140cbfcb0(param_1,local_48);
            iVar7 = FUN_14000d7e0(iVar7 + 1);
            iVar7 = (int)((ulonglong)((longlong)iVar7 * 0x51eb851f) >> 0x20);
          }
          else {
            iVar7 = FUN_140cbfcb0(param_1);
            iVar7 = (int)((ulonglong)((longlong)iVar7 * 0x51eb851f) >> 0x20);
          }
          iVar6 = iVar6 + ((iVar7 >> 5) - (iVar7 >> 0x1f));
          iVar7 = local_48;
          if (0 < param_5) goto LAB_140c65a85;
        }
      }
      else {
        if ((param_9 & 0x100) == 0) {
          iVar7 = FUN_140cbfcb0(param_1,local_48);
          iVar7 = FUN_14000d7e0(iVar7 + 1);
          iVar8 = FUN_140cbfcb0(param_1,local_44);
          iVar8 = FUN_14000d7e0(iVar8 + 1);
          iVar6 = iVar6 + iVar7 / 100 + iVar8 / 0xfa;
        }
        else {
          iVar7 = FUN_140cbfcb0(param_1);
          iVar7 = iVar7 / 0xfa;
          iVar8 = FUN_140cbfcb0(param_1,local_48);
          iVar6 = iVar6 + iVar8 / 100 + iVar7;
        }
        if (0 < param_5) {
          FUN_140cbfe30(param_1,local_48,param_5);
          iVar7 = local_44;
          goto LAB_140c65a85;
        }
      }
    }
    else {
      if ((param_9 & 0x100) == 0) {
        iVar7 = FUN_140cbfcb0(param_1,local_48);
        iVar7 = FUN_14000d7e0(iVar7 + 1);
        iVar8 = FUN_140cbfcb0(param_1,local_44);
        iVar8 = FUN_14000d7e0(iVar8 + 1);
        iVar9 = FUN_140cbfcb0(param_1,local_30[0]);
        iVar9 = FUN_14000d7e0(iVar9 + 1);
        iVar6 = iVar6 + iVar7 / 100 + iVar8 / 0xfa + iVar9 / 0xfa;
      }
      else {
        iVar7 = FUN_140cbfcb0(param_1);
        iVar7 = iVar7 / 0xfa;
        iVar8 = FUN_140cbfcb0(param_1,local_44);
        iVar9 = FUN_140cbfcb0(param_1,local_48);
        iVar6 = iVar6 + iVar9 / 100 + iVar8 / 0xfa + iVar7;
      }
      if (0 < param_5) {
        FUN_140cbfe30(param_1,local_48,param_5);
        FUN_140cbfe30(param_1,local_44,param_5);
        iVar7 = local_30[0];
LAB_140c65a85:
        FUN_140cbfe30(param_1,iVar7);
      }
    }
    FUN_14092ee70(*(longlong *)(param_1 + 0xa78) + 0x248);
    lVar10 = *(longlong *)(param_1 + 0xa78);
    if ((*(int *)(lVar10 + 0x3c8) != 1) || (*(int *)(lVar10 + 0x3cc) != 1)) {
      iVar6 = (*(int *)(lVar10 + 0x3c8) * iVar6) / *(int *)(lVar10 + 0x3cc);
    }
  }
  if (((param_2 == 0x11) && (lVar10 != 0)) &&
     (cVar2 = FUN_140910c00(lVar10 + 0x248,0x1c), cVar2 == '\0')) {
    iVar6 = iVar6 >> 1;
  }
  if ((((param_9 & 0x40) != 0) && (*(longlong *)(param_1 + 0xa78) != 0)) &&
     (cVar2 = FUN_140910c00(*(longlong *)(param_1 + 0xa78) + 0x248,0x2b), cVar2 == '\0')) {
    iVar6 = iVar6 >> 1;
  }
  if (((param_2 == 0x17) && (*(longlong *)(param_1 + 0xa78) != 0)) &&
     (cVar2 = FUN_140910c00(*(longlong *)(param_1 + 0xa78) + 0x248,0x2c), cVar2 == '\0')) {
    iVar6 = iVar6 >> 1;
  }
  if (((param_9 & 0x10) != 0) &&
     (iVar7 = FUN_140c63d90(param_1,0x11,0xb,5,CONCAT44(uVar15,10),CONCAT44(uVar17,10),0,0,
                            param_9 & 0x20,0xffff,0xffffffff), iVar7 < iVar6)) {
    iVar6 = iVar7;
  }
  if ((0 < *(int *)(param_1 + 0x800)) && (*(short *)(param_1 + 0x7f8) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  if ((0 < *(short *)(param_1 + 0x7e0)) && (*(short *)(param_1 + 0x7f8) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  if ((0 < *(short *)(param_1 + 0x7e2)) && (*(short *)(param_1 + 0x7f8) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  if ((0 < *(int *)(param_1 + 0x804)) && (*(short *)(param_1 + 0x7f8) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  if ((0 < *(int *)(param_1 + 0x960)) && (*(short *)(param_1 + 0x7f8) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  iVar7 = FUN_140c7de50(param_1);
  if (iVar7 == 0) {
    iVar6 = iVar6 >> 2;
  }
  if (((99 < *(int *)(param_1 + 0x7fc)) && (*(short *)(param_1 + 0x7f8) != 0)) &&
     (*(short *)(param_1 + 0x348) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  iVar7 = *(int *)(param_1 + 0x964);
  if ((1999 < iVar7) && (*(short *)(param_1 + 0x7f8) != 0)) {
    iVar6 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
  }
  if ((3999 < iVar7) && (*(short *)(param_1 + 0x7f8) != 0)) {
    iVar6 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
  }
  if ((5999 < iVar7) && (*(short *)(param_1 + 0x7f8) != 0)) {
    iVar6 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
  }
  cVar2 = FUN_140c5dbd0(param_1);
  iVar7 = iVar6;
  if (cVar2 == '\0') {
LAB_140c65d3d:
    if (DAT_1410b67dc != 0) goto LAB_140c65ce3;
    if (49999 < *(int *)(param_1 + 0x96c)) {
      iVar7 = iVar7 >> 1;
    }
    if (74999 < *(int *)(param_1 + 0x968)) {
      iVar7 = iVar7 >> 1;
    }
    if (149999 < *(int *)(param_1 + 0x970)) {
      iVar7 = iVar7 >> 1;
    }
  }
  else {
    for (puVar11 = *(undefined8 **)(param_1 + 0x988); puVar11 < *(undefined8 **)(param_1 + 0x990);
        puVar11 = puVar11 + 1) {
      if (*(short *)*puVar11 == 0x32) {
        piVar16 = (int *)((short *)*puVar11 + 2);
        if (piVar16 != (int *)0x0) {
          iVar8 = *piVar16;
          goto LAB_140c65cd4;
        }
        break;
      }
    }
    iVar8 = 0;
LAB_140c65cd4:
    iVar7 = iVar6 >> 1;
    if (DAT_1410b67dc != 1) {
      if ((iVar8 < 0x62700) && (iVar7 = iVar6, 0x49d3f < iVar8)) {
        iVar7 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
      }
      goto LAB_140c65d3d;
    }
    if ((iVar8 < 0x24ea00) && (iVar7 = iVar6, 0x1274ff < iVar8)) {
      iVar7 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
    }
LAB_140c65ce3:
    iVar6 = *(int *)(param_1 + 0x96c);
    if (iVar6 < 0x54600) {
      if (iVar6 < 0x2a300) {
        if (0x1c1ff < iVar6) {
          iVar7 = (iVar7 * 9) / 10;
        }
      }
      else {
        iVar7 = (int)((iVar7 * 3 >> 0x1f & 3U) + iVar7 * 3) >> 2;
      }
    }
    else {
      iVar7 = iVar7 >> 1;
    }
    iVar6 = *(int *)(param_1 + 0x968);
    if (iVar6 < 0x278d00) {
      if (iVar6 < 0x127500) {
        if (0x2a2ff < iVar6) {
          iVar7 = (iVar7 * 9) / 10;
        }
      }
      else {
        iVar7 = (int)((iVar7 * 3 >> 0x1f & 3U) + iVar7 * 3) >> 2;
      }
    }
    else {
      iVar7 = iVar7 >> 1;
    }
    iVar6 = *(int *)(param_1 + 0x970);
    if (iVar6 < 0xd2f00) {
      if (iVar6 < 0x54600) {
        if (iVar6 < 0x3f480) {
          if (0x2a2ff < iVar6) {
            iVar7 = (iVar7 * 9) / 10;
          }
        }
        else {
          iVar7 = (int)((iVar7 * 3 >> 0x1f & 3U) + iVar7 * 3) >> 2;
        }
      }
      else {
        iVar7 = iVar7 >> 1;
      }
    }
    else {
      iVar7 = iVar7 >> 2;
    }
  }
  if ((param_9 & 8) != 0) {
    iVar7 = iVar7 + *(int *)(param_1 + 0x68c) / 0x14;
  }
  if (0 < *(short *)(param_1 + 0x7e8)) {
    iVar7 = iVar7 >> 1;
  }
  iVar6 = *(int *)(param_1 + 0x958);
  if (iVar6 < 0x32) {
    if (0 < iVar6) {
      iVar7 = iVar7 >> 1;
    }
  }
  else {
    iVar7 = iVar7 >> 2;
  }
  if (((0 < *(short *)(param_1 + 0x7e4)) || (9 < *(short *)(param_1 + 0x7e8))) || (99 < iVar6)) {
    iVar7 = 0;
  }
  if (param_2 == 8) {
    if (((param_7 != (longlong *)0x0) &&
        (cVar2 = (**(code **)(*param_7 + 0x398))(param_7,*(undefined4 *)(param_1 + 0x690)),
        cVar2 != '\0')) && (sVar4 = FUN_140c80fd0(param_1,0,0), sVar4 == -1)) {
      iVar7 = iVar7 >> 1;
    }
  }
  else {
    if (param_2 == 9) {
      if (((param_8 != (longlong *)0x0) &&
          (cVar2 = (**(code **)(*param_8 + 0x398))(param_8,*(undefined4 *)(param_1 + 0x690)),
          cVar2 != '\0')) && (sVar4 = FUN_140c80fd0(param_1,0,0), sVar4 == -1)) {
        iVar7 = iVar7 >> 1;
      }
    }
    else if (param_2 != 10) goto LAB_140c65f82;
    if (*(int *)(param_1 + 0x3c4) != -1) {
      iVar6 = FUN_140c3c220(param_1,0x88);
      if (iVar6 < 1) {
        iVar7 = (int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2;
      }
      else if (iVar6 == 1) {
        iVar7 = iVar7 / 3;
      }
      else {
        if (0xf < iVar6) {
          iVar6 = 0xf;
        }
        iVar7 = ((iVar6 + 0xf) * iVar7) / 0x1e;
      }
    }
  }
LAB_140c65f82:
  if (((param_9 & 2) != 0) &&
     (((ushort)(*(short *)(param_1 + 0x7f8) - 1U) < 2 || (*(short *)(param_1 + 0x348) == 7)))) {
    iVar7 = iVar7 >> 1;
  }
  if ((char)param_9 < '\0') {
    iVar6 = *(int *)(param_1 + 0x4a4);
    if (9 < iVar6) {
      iVar7 = 0;
      goto LAB_140c65fea;
    }
    if (0 < iVar6) {
      iVar7 = ((10 - iVar6) * iVar7) / 10;
    }
  }
  if (iVar7 < 0) {
    iVar7 = 0;
  }
LAB_140c65fea:
  if (*(int *)(param_1 + 0x8d0) != 100) {
    iVar7 = (iVar7 * *(int *)(param_1 + 0x8d0)) / 100;
  }
  if ((*(byte *)(param_1 + 0x110) & 2) != 0) {
    iVar7 = 0;
  }
  if ((param_9 & 4) != 0) {
    iVar7 = iVar7 + *(int *)(param_1 + 0x68c) / 0x14;
  }
  return iVar7;
}

