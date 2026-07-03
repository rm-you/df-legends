// FUN_140769060 @ 140769060
// callees:
//   -> 14029aae0 FUN_14029aae0
//   -> 14053c490 FUN_14053c490


int FUN_140769060(short *param_1,longlong param_2,short param_3,undefined2 param_4,short param_5)

{
  short sVar1;
  undefined8 *puVar2;
  short *psVar3;
  longlong lVar4;
  bool bVar5;
  undefined2 uVar6;
  short *psVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int local_res8;
  
  iVar11 = -1;
  if (*(int *)(param_1 + 8) == -1) {
    iVar10 = -1;
  }
  else {
    iVar10 = (DAT_1416b1980 - *(int *)(param_1 + 8)) * 0x150;
  }
  sVar1 = param_1[1];
  uVar12 = 0;
  local_res8 = 0;
  if (((-1 < sVar1) &&
      ((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
     (-1 < param_1[2])) {
    lVar14 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
    uVar13 = (ulonglong)param_1[2];
    if (uVar13 < (ulonglong)(*(longlong *)(lVar14 + 0x180) - *(longlong *)(lVar14 + 0x178) >> 3)) {
      if (((param_2 == 0) && (param_3 == -1)) && (param_5 == 0)) {
        local_res8 = *(int *)(*(longlong *)(*(longlong *)(lVar14 + 0x178) + uVar13 * 8) + 0x4d0);
      }
      else {
        local_res8 = FUN_14029aae0(*(undefined8 *)(*(longlong *)(lVar14 + 0x178) + uVar13 * 8),
                                   iVar10,uVar13,param_3,param_4,param_5);
      }
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x98);
  bVar5 = false;
  if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0x50) != 0)) {
    bVar5 = true;
  }
  if (((*(int *)(param_1 + 0xba) == -1) &&
      (param_1[0xb8] = 0, param_1[0xb9] = 0, param_1[0xba] = 0, param_1[0xbb] = 0, lVar14 != 0)) &&
     (puVar2 = *(undefined8 **)(lVar14 + 8), puVar2 != (undefined8 *)0x0)) {
    psVar3 = (short *)puVar2[1];
    piVar9 = (int *)puVar2[3];
    for (psVar7 = (short *)*puVar2; psVar7 < psVar3; psVar7 = psVar7 + 1) {
      switch(*psVar7 + -0x26) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        if (((*(longlong *)(param_1 + 0x98) == 0) ||
            (lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x50), lVar14 == 0)) ||
           ((*(byte *)(lVar14 + 0x88) & 1) == 0)) {
          bVar5 = true;
          *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *piVar9;
        }
        else {
          uVar13 = uVar12;
          switch(*psVar7 + -0x26) {
          case 1:
            bVar5 = true;
            *(int *)(lVar14 + 0x24) = *piVar9;
            break;
          case 2:
            *(int *)(lVar14 + 0x28) = *piVar9;
            bVar5 = true;
            break;
          case 3:
            *(int *)(lVar14 + 0x2c) = *piVar9;
            bVar5 = true;
            break;
          case 4:
            *(int *)(lVar14 + 0x30) = *piVar9;
            bVar5 = true;
            break;
          case 5:
            *(int *)(lVar14 + 0x34) = *piVar9;
            bVar5 = true;
            break;
          case 6:
            *(int *)(lVar14 + 0x38) = *piVar9;
            bVar5 = true;
            break;
          case 7:
            *(int *)(lVar14 + 0x4c) = *piVar9;
            bVar5 = true;
            break;
          case 8:
            uVar13 = 0xc;
          default:
            *(int *)(lVar14 + 0x20 + uVar13 * 4) = *piVar9;
            bVar5 = true;
            break;
          case 0xc:
            *(int *)(lVar14 + 0x3c) = *piVar9;
            bVar5 = true;
            break;
          case 0xd:
            *(int *)(lVar14 + 0x40) = *piVar9;
            bVar5 = true;
            break;
          case 0xe:
            *(int *)(lVar14 + 0x44) = *piVar9;
            bVar5 = true;
            break;
          case 0xf:
            bVar5 = true;
            *(int *)(lVar14 + 0x48) = *piVar9;
          }
        }
        break;
      case 0x32:
      case 0x33:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
        *(int *)(param_1 + 0xba) = *(int *)(param_1 + 0xba) + *piVar9;
      }
      piVar9 = piVar9 + 1;
    }
  }
  if (!bVar5) goto LAB_140769651;
  if ((*(longlong *)(param_1 + 0x98) == 0) ||
     (lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x50), lVar14 == 0)) {
    if ((*(longlong *)(param_1 + 0xa0) == 0) || (lVar14 = FUN_14053c490(), lVar14 == 0))
    goto LAB_140769651;
    iVar11 = *(int *)(param_1 + 0xb8) / 500 + 0x28;
    if (0x50 < iVar11) {
      iVar11 = 0x50;
    }
    iVar11 = iVar11 * *(int *)(lVar14 + 0x1c08);
  }
  else {
    if ((*(uint *)(lVar14 + 0x88) & 1) != 0) {
      *(undefined2 *)(lVar14 + 0x8c) = 0x65;
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x50);
      if (0 < *(int *)(lVar14 + 0x84)) {
        iVar10 = *(int *)(lVar14 + 0x50) / 500 + 0x28;
        if (0x50 < iVar10) {
          iVar10 = 0x50;
        }
        local_res8 = local_res8 + (iVar10 * *(int *)(lVar14 + 0x84)) / 0x28;
      }
      if (0 < *(int *)(lVar14 + 0x80)) {
        iVar10 = *(int *)(lVar14 + 0x4c) / 500 + 0x28;
        if (0x50 < iVar10) {
          iVar10 = 0x50;
        }
        local_res8 = local_res8 + (iVar10 * *(int *)(lVar14 + 0x80)) / 0x28;
      }
      lVar14 = 0x54;
      do {
        iVar10 = (int)uVar12;
        if (iVar10 - 0xbU < 2) goto switchD_1407694de_default;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x50);
        if (*(int *)(lVar4 + lVar14) < 1) goto switchD_1407694de_default;
        iVar8 = *(int *)(lVar4 + -0x34 + lVar14) / 500 + 0x28;
        if (0x50 < iVar8) {
          iVar8 = 0x50;
        }
        iVar8 = (iVar8 * *(int *)(lVar4 + lVar14)) / 0x28;
        if ((iVar11 != -1) && (iVar8 <= iVar11)) goto switchD_1407694de_default;
        iVar11 = iVar8;
        switch(iVar10) {
        case 0:
          *(undefined2 *)(lVar4 + 0x8c) = 0x26;
          goto switchD_1407694de_default;
        case 1:
          *(undefined2 *)(lVar4 + 0x8c) = 0x27;
          goto switchD_1407694de_default;
        case 2:
          *(undefined2 *)(lVar4 + 0x8c) = 0x28;
          goto switchD_1407694de_default;
        case 3:
          *(undefined2 *)(lVar4 + 0x8c) = 0x29;
          goto switchD_1407694de_default;
        case 4:
          uVar6 = 0x2a;
          break;
        case 5:
          uVar6 = 0x2b;
          break;
        case 6:
          uVar6 = 0x2c;
          break;
        case 7:
          uVar6 = 0x32;
          break;
        case 8:
          uVar6 = 0x33;
          break;
        case 9:
          uVar6 = 0x34;
          break;
        case 10:
          uVar6 = 0x35;
          break;
        default:
          goto switchD_1407694de_default;
        }
        *(undefined2 *)(lVar4 + 0x8c) = uVar6;
switchD_1407694de_default:
        uVar12 = (ulonglong)(iVar10 + 1U);
        lVar14 = lVar14 + 4;
      } while ((int)(iVar10 + 1U) < 0xd);
      if (iVar11 != -1) {
        local_res8 = local_res8 + iVar11;
      }
      goto LAB_140769651;
    }
    iVar10 = *(int *)(lVar14 + 0x18);
    if (((*(uint *)(lVar14 + 0x88) & 2) != 0) && (iVar11 = *(int *)(lVar14 + 0x1c), 0 < iVar11)) {
      if (iVar10 < 10) {
        iVar10 = 10;
      }
      if (iVar11 == 1) {
        iVar10 = iVar10 * 6;
      }
      else if (iVar11 == 2) {
        iVar10 = iVar10 * 7;
      }
      else if (iVar11 == 3) {
        iVar10 = iVar10 * 8;
      }
      else {
        if (iVar11 != 4) {
          if (iVar11 == 5) {
            iVar10 = iVar10 * 2;
          }
          goto LAB_1407695c8;
        }
        iVar10 = iVar10 * 9;
      }
      iVar10 = iVar10 / 5;
    }
LAB_1407695c8:
    iVar11 = *(int *)(param_1 + 0xb8) / 500 + 0x28;
    if (0x50 < iVar11) {
      iVar11 = 0x50;
    }
    iVar11 = iVar11 * iVar10;
  }
  local_res8 = local_res8 + iVar11 / 0x28;
LAB_140769651:
  iVar11 = *(int *)(param_1 + 0xba) / 500 + 0x28;
  if (0x50 < iVar11) {
    iVar11 = 0x50;
  }
  iVar11 = (iVar11 * local_res8) / 0x28;
  if (*param_1 == 0x67) {
    iVar11 = iVar11 / 10;
  }
  if (*param_1 == 0x68) {
    iVar11 = iVar11 / 100;
  }
  return iVar11;
}

