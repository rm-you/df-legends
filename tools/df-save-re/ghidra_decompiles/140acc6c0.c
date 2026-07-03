// FUN_140acc6c0 @ 140acc6c0
// callees:
//   -> 140ad4400 FUN_140ad4400
//   -> 1403f7650 FUN_1403f7650


uint FUN_140acc6c0(longlong param_1,short param_2,short param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar7;
  short sVar8;
  longlong lVar9;
  uint uVar6;
  
  uVar4 = 0;
  sVar2 = *(short *)(param_1 + 0xb0);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + (longlong)param_2 * 8) +
          (longlong)param_3 * 0x70;
  uVar5 = (*(short *)(lVar9 + 0x40) + -3) * 4 + *(short *)(lVar9 + 0x36);
  uVar6 = (uint)uVar5;
  if (-1 < sVar2) {
    if (sVar2 < 2) {
      iVar7 = *(int *)(param_1 + 0xa4);
      iVar1 = (int)param_3;
    }
    else {
      if (sVar2 != 2) goto LAB_140acc80c;
      iVar7 = *(int *)(param_1 + 0xa4);
      if ((int)param_3 < iVar7 / 2) {
        sVar2 = param_3 * 2;
      }
      else {
        sVar2 = ((short)(iVar7 / 2) - param_3) * 2 + (short)iVar7 + -1;
        if (sVar2 < 0) {
          sVar2 = 0;
        }
        if (iVar7 <= sVar2) {
          iVar1 = (int)(short)((short)iVar7 + -1);
          goto LAB_140acc77a;
        }
      }
      iVar1 = (int)sVar2;
    }
LAB_140acc77a:
    iVar7 = iVar7 >> 1;
    uVar3 = iVar1 - iVar7 >> 0x1f;
    iVar7 = (int)((iVar7 - ((iVar1 - iVar7 ^ uVar3) - uVar3)) * 0x41) / (iVar7 + 1);
    if (0 < iVar7) {
      iVar1 = (DAT_1416992a4 + 0x13b0 + DAT_1416992b2 * 0x2760) % 0x9d80;
      if (0x4ec0 < iVar1) {
        iVar1 = 0x9d80 - iVar1;
      }
      iVar7 = (iVar1 + -0x4ec0) * iVar7;
      uVar6 = (uint)(ushort)(uVar5 + ((short)(iVar7 / 0x4ec0) - (short)(iVar7 / -0x62800000)));
    }
  }
LAB_140acc80c:
  if ((DAT_1410b67d8 - 4U < 2) &&
     (uVar6 = (int)((uint)DAT_141ebfa70 * 4 + -40000) / 3, 30000 < (int)uVar6)) {
    uVar6 = 30000;
  }
  if (DAT_1410b67dc == 0) {
    return uVar6 & 0xffff;
  }
  sVar2 = FUN_140ad4400(param_1,param_2,param_3);
  sVar8 = 0x3c - sVar2 / 2;
  sVar2 = FUN_1403f7650();
  if ((ushort)(sVar2 - 0x4b0U) < 500) goto LAB_140accb31;
  if ((ushort)(sVar2 - 0x44cU) < 0x26c) {
    iVar7 = (int)((ulonglong)((longlong)(int)sVar8 * -0x66666667) >> 0x20);
    uVar4 = (iVar7 >> 3) - (iVar7 >> 0x1f);
    goto LAB_140accb31;
  }
  if ((ushort)(sVar2 - 0x41aU) < 0x2b2) {
    iVar7 = sVar8 * -2;
  }
  else if ((ushort)(sVar2 - 1000U) < 0x2f8) {
    iVar7 = sVar8 * -3;
  }
  else if ((ushort)(sVar2 - 0x3b6U) < 0x33e) {
    iVar7 = sVar8 * -4;
  }
  else if ((ushort)(sVar2 - 900U) < 900) {
    iVar7 = sVar8 * -5;
  }
  else if ((ushort)(sVar2 - 0x352U) < 0x3ca) {
    iVar7 = sVar8 * -6;
  }
  else if ((ushort)(sVar2 - 800U) < 0x410) {
    iVar7 = sVar8 * -7;
  }
  else if ((ushort)(sVar2 - 0x2eeU) < 0x456) {
    iVar7 = sVar8 * -8;
  }
  else if ((ushort)(sVar2 - 700U) < 0x49c) {
    iVar7 = sVar8 * -9;
  }
  else if ((ushort)(sVar2 - 0x2a8U) < 0x4c4) {
    iVar7 = sVar8 * -10;
  }
  else if (sVar2 < 0x294) {
LAB_140acca38:
    if ((ushort)(sVar2 - 0x280U) < 0x528) {
      iVar7 = sVar8 * -0xd;
    }
    else if ((ushort)(sVar2 - 600U) < 0x564) {
      iVar7 = sVar8 * -0xe;
    }
    else if ((ushort)(sVar2 - 0x244U) < 0x58c) {
      iVar7 = sVar8 * -0xf;
    }
    else if ((ushort)(sVar2 - 0x230U) < 0x5b4) {
      iVar7 = sVar8 * -0x10;
    }
    else if ((ushort)(sVar2 - 0x21cU) < 0x5dc) {
      iVar7 = sVar8 * -0x11;
    }
    else if ((ushort)(sVar2 - 0x208U) < 0x604) {
      iVar7 = sVar8 * -0x12;
    }
    else {
      if (0x62b < (ushort)(sVar2 - 500U)) {
        uVar4 = (uint)(ushort)-sVar8;
        goto LAB_140accb31;
      }
      iVar7 = sVar8 * -0x13;
    }
  }
  else if (sVar2 < 0x780) {
    iVar7 = sVar8 * -0xb;
  }
  else {
    if (0x793 < sVar2) goto LAB_140acca38;
    iVar7 = sVar8 * -0xc;
  }
  uVar4 = iVar7 / 0x14;
LAB_140accb31:
  if (((((byte)*(ushort *)(lVar9 + 0x46) & 0xc) == 0xc) || ((*(ushort *)(lVar9 + 0x46) & 0x60) != 0)
      ) && (3 < (short)uVar4)) {
    uVar4 = 4;
  }
  return uVar6 + uVar4;
}

