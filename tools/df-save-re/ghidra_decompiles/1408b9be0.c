// FUN_1408b9be0 @ 1408b9be0
// callees:
//   -> 1402bb330 FUN_1402bb330
//   -> 14000c460 FUN_14000c460
//   -> 14000c390 FUN_14000c390
//   -> 14000c110 FUN_14000c110


void FUN_1408b9be0(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  undefined8 local_res8;
  undefined2 local_res10 [4];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res18[0] = (undefined4)param_3;
  local_res10[0] = (undefined2)param_2;
  local_res8 = param_1;
  FUN_1402bb330(param_1 + 0x4d0,param_2,param_3,0xffffffff);
  lVar17 = 2;
  puVar15 = (undefined8 *)(param_1 + 0x528);
  do {
    puVar12 = puVar15;
    *puVar12 = 0xffffffffffffffff;
    puVar12[1] = 0xffffffffffffffff;
    puVar12[2] = 0xffffffffffffffff;
    puVar12[3] = 0xffffffffffffffff;
    puVar12[4] = 0xffffffffffffffff;
    puVar12[5] = 0xffffffffffffffff;
    puVar12[6] = 0xffffffffffffffff;
    puVar12[7] = 0xffffffffffffffff;
    lVar17 = lVar17 + -1;
    puVar15 = puVar12 + 8;
  } while (lVar17 != 0);
  puVar12[8] = 0xffffffffffffffff;
  puVar12[9] = 0xffffffffffffffff;
  puVar12[10] = 0xffffffffffffffff;
  *(undefined4 *)(puVar12 + 0xb) = 0xffffffff;
  iVar22 = 0;
  uVar16 = param_1;
  uVar20 = local_res8 & 0xffff;
  iVar10 = (int)local_res8;
  do {
    uVar21 = 4;
    iVar9 = 0xd;
    iVar18 = 4;
    iVar19 = -1;
    switch(iVar22) {
    case 0:
      uVar21 = 5;
      break;
    case 1:
      iVar9 = 0xe;
      uVar21 = 6;
      break;
    case 2:
      iVar9 = 0xf;
      uVar21 = 7;
      break;
    case 3:
      iVar9 = 0x10;
      uVar21 = 8;
      break;
    case 4:
      iVar9 = 0x11;
      uVar21 = 0xb;
      break;
    case 5:
      iVar9 = 0x12;
      uVar21 = 0xc;
      break;
    case 6:
      iVar9 = 0x13;
      uVar21 = 0xd;
      break;
    case 7:
      iVar9 = 0x14;
      uVar21 = 0xe;
      break;
    case 8:
      iVar9 = 0x15;
      uVar21 = 0xf;
      break;
    case 9:
      iVar9 = 0x16;
      uVar21 = 0x10;
      break;
    case 10:
      iVar9 = 0x1d;
      uVar21 = 0x11;
      break;
    case 0xb:
      iVar9 = 0x1e;
      uVar21 = 0x12;
      break;
    case 0xc:
      iVar9 = 0x18;
      uVar21 = 0x13;
      break;
    case 0xd:
      iVar9 = 0;
      uVar21 = 0x14;
      break;
    case 0xe:
      iVar9 = 0x1c;
      uVar21 = 0x15;
      break;
    case 0xf:
      iVar9 = 0x17;
      uVar21 = 0x16;
      break;
    case 0x10:
      iVar9 = 0x1a;
      uVar21 = 0x17;
      break;
    case 0x11:
      iVar9 = 0x1b;
      uVar21 = 0x18;
      break;
    case 0x12:
      iVar9 = 0x26;
      uVar21 = 10;
      break;
    case 0x13:
      iVar9 = 0x19;
      uVar21 = 0x19;
      break;
    case 0x14:
      iVar9 = 0x27;
      iVar19 = 3;
      uVar21 = 0x1a;
      break;
    case 0x15:
      iVar9 = 5;
      uVar21 = 0x1b;
      break;
    case 0x16:
      iVar19 = 3;
      iVar9 = 0x24;
      uVar21 = 0x1c;
      break;
    case 0x17:
      iVar9 = 0x23;
      uVar21 = 0x1d;
      iVar19 = iVar18;
      break;
    case 0x18:
      iVar9 = 0x22;
      uVar21 = 0x1e;
      iVar19 = iVar18;
      break;
    case 0x19:
      iVar9 = 0x25;
      uVar21 = 0x1f;
      iVar19 = iVar18;
      break;
    case 0x1a:
      iVar9 = 0x26;
      uVar21 = 0x20;
      iVar19 = iVar18;
      break;
    case 0x1b:
      uVar21 = 0;
      iVar9 = 1;
      break;
    case 0x1c:
      iVar9 = 0x49;
      break;
    case 0x1d:
      uVar21 = 9;
      iVar9 = 0x25;
      break;
    case 0x1e:
      uVar21 = 0x21;
      iVar9 = 0x3f;
      break;
    case 0x1f:
      uVar21 = 0x22;
      iVar9 = 0x40;
      break;
    case 0x20:
      uVar21 = 0x23;
      iVar9 = 0x3e;
      break;
    case 0x21:
      iVar10 = 0x44;
      uVar20 = 0x24;
    default:
      uVar21 = uVar20;
      iVar9 = iVar10;
      iVar19 = -1;
      if (-1 < iVar10) break;
      goto LAB_1408ba1a6;
    }
    iVar18 = iVar9 >> 3;
    iVar10 = iVar9;
    if ((((-1 < iVar18) && (iVar18 < *(int *)(param_1 + 0x298))) &&
        ((*(byte *)((longlong)iVar18 + *(longlong *)(param_1 + 0x290)) &
         (byte)(1 << ((byte)iVar9 & 7))) != 0)) &&
       ((iVar19 == -1 ||
        (((-1 < iVar19 && (iVar9 = iVar19 >> 3, -1 < iVar9)) &&
         ((iVar9 < *(int *)(param_1 + 0x298) &&
          ((*(byte *)((longlong)iVar9 + *(longlong *)(param_1 + 0x290)) &
           (byte)(1 << ((byte)iVar19 & 7))) != 0)))))))) {
      lVar13 = (longlong)(short)uVar21;
      lVar17 = lVar13 * 0x18;
      puVar14 = &DAT_141d779d8 + lVar13 * 3;
      *(int *)(uVar16 + 0x528 + lVar13 * 4) =
           (int)((longlong)((&DAT_141d779e0)[lVar13 * 3] - *puVar14) >> 1);
      puVar1 = (undefined2 *)(&DAT_141d779e0)[lVar13 * 3];
      if ((local_res10 < puVar1) && (puVar2 = (undefined2 *)*puVar14, puVar2 <= local_res10)) {
        if (puVar1 == *(undefined2 **)(lVar17 + 0x141d779e8)) {
          FUN_14000c460(puVar14,1);
        }
        if ((undefined2 *)(&DAT_141d779e0)[lVar13 * 3] != (undefined2 *)0x0) {
          *(undefined2 *)(&DAT_141d779e0)[lVar13 * 3] =
               *(undefined2 *)(*puVar14 + ((longlong)local_res10 - (longlong)puVar2 >> 1) * 2);
        }
      }
      else {
        if (puVar1 == *(undefined2 **)(lVar17 + 0x141d779e8)) {
          FUN_14000c460(puVar14,1);
        }
        if ((undefined2 *)(&DAT_141d779e0)[lVar13 * 3] != (undefined2 *)0x0) {
          *(undefined2 *)(&DAT_141d779e0)[lVar13 * 3] = local_res10[0];
        }
      }
      (&DAT_141d779e0)[lVar13 * 3] = (&DAT_141d779e0)[lVar13 * 3] + 2;
      puVar14 = &DAT_141d77d80 + lVar13 * 3;
      puVar3 = *(undefined4 **)(lVar17 + 0x141d77d88);
      if ((local_res18 < puVar3) && (puVar4 = (undefined4 *)*puVar14, puVar4 <= local_res18)) {
        if (puVar3 == *(undefined4 **)(lVar17 + 0x141d77d90)) {
          FUN_14000c390(puVar14,1);
        }
        if (*(undefined4 **)(lVar17 + 0x141d77d88) != (undefined4 *)0x0) {
          **(undefined4 **)(lVar17 + 0x141d77d88) =
               *(undefined4 *)(*puVar14 + ((longlong)local_res18 - (longlong)puVar4 >> 2) * 4);
        }
      }
      else {
        if (puVar3 == *(undefined4 **)(lVar17 + 0x141d77d90)) {
          FUN_14000c390(puVar14,1);
        }
        if (*(undefined4 **)(lVar17 + 0x141d77d88) != (undefined4 *)0x0) {
          **(undefined4 **)(lVar17 + 0x141d77d88) = local_res18[0];
        }
      }
      *(longlong *)(lVar17 + 0x141d77d88) = *(longlong *)(lVar17 + 0x141d77d88) + 4;
      puVar14 = (ulonglong *)(&DAT_141d78128 + lVar17);
      local_res20[0] = 0;
      puVar3 = *(undefined4 **)(lVar17 + 0x141d78130);
      if ((local_res20 < puVar3) && (puVar4 = (undefined4 *)*puVar14, puVar4 <= local_res20)) {
        if (puVar3 == *(undefined4 **)(lVar17 + 0x141d78138)) {
          FUN_14000c390(puVar14,1);
        }
        if (*(undefined4 **)(lVar17 + 0x141d78130) != (undefined4 *)0x0) {
          **(undefined4 **)(lVar17 + 0x141d78130) =
               *(undefined4 *)(*puVar14 + ((longlong)local_res20 - (longlong)puVar4 >> 2) * 4);
        }
      }
      else {
        if (puVar3 == *(undefined4 **)(lVar17 + 0x141d78138)) {
          FUN_14000c390(puVar14,1);
        }
        if (*(undefined4 **)(lVar17 + 0x141d78130) != (undefined4 *)0x0) {
          **(undefined4 **)(lVar17 + 0x141d78130) = 0;
        }
      }
      *(longlong *)(lVar17 + 0x141d78130) = *(longlong *)(lVar17 + 0x141d78130) + 4;
      uVar16 = local_res8;
    }
LAB_1408ba1a6:
    uVar23 = 0;
    iVar22 = iVar22 + 1;
    uVar20 = uVar21;
  } while (iVar22 < 0x22);
  bVar6 = false;
  bVar7 = false;
  puVar15 = *(undefined8 **)(local_res8 + 0x4a0);
  uVar16 = (ulonglong)((longlong)*(undefined8 **)(local_res8 + 0x4a8) + (7 - (longlong)puVar15)) >>
           3;
  if (*(undefined8 **)(local_res8 + 0x4a8) < puVar15) {
    uVar16 = uVar23;
  }
  if (uVar16 == 0) {
    return;
  }
  do {
    uVar5 = *puVar15;
    iVar10 = FUN_14000c110(uVar5,"PAPER_SLURRY");
    if ((iVar10 == 0) || (iVar10 = FUN_14000c110(uVar5,"PAPER_PLANT"), iVar10 == 0)) {
      bVar6 = true;
    }
    iVar10 = FUN_14000c110(uVar5,"PARCHMENT");
    uVar20 = local_res8;
    if (iVar10 == 0) {
      bVar7 = true;
    }
    puVar15 = puVar15 + 1;
    uVar23 = uVar23 + 1;
  } while (uVar23 < uVar16);
  if (bVar6) {
    *(int *)(local_res8 + 0x5bc) = (int)((longlong)DAT_141d77d58 - (longlong)DAT_141d77d50 >> 1);
    if ((local_res10 < DAT_141d77d58) && (DAT_141d77d50 <= local_res10)) {
      lVar17 = (longlong)local_res10 - (longlong)DAT_141d77d50;
      if (DAT_141d77d58 == DAT_141d77d60) {
        FUN_14000c460(&DAT_141d77d50,1);
      }
      if (DAT_141d77d58 != (undefined2 *)0x0) {
        uVar8 = DAT_141d77d50[lVar17 >> 1];
LAB_1408ba302:
        *DAT_141d77d58 = uVar8;
      }
    }
    else {
      if (DAT_141d77d58 == DAT_141d77d60) {
        FUN_14000c460(&DAT_141d77d50,1);
      }
      uVar8 = local_res10[0];
      if (DAT_141d77d58 != (undefined2 *)0x0) goto LAB_1408ba302;
    }
    DAT_141d77d58 = DAT_141d77d58 + 1;
    if ((local_res18 < DAT_141d78100) && (DAT_141d780f8 <= local_res18)) {
      lVar17 = (longlong)local_res18 - (longlong)DAT_141d780f8;
      if (DAT_141d78100 == DAT_141d78108) {
        FUN_14000c390(&DAT_141d780f8,1);
      }
      if (DAT_141d78100 != (undefined4 *)0x0) {
        uVar11 = DAT_141d780f8[lVar17 >> 2];
LAB_1408ba399:
        *DAT_141d78100 = uVar11;
      }
    }
    else {
      if (DAT_141d78100 == DAT_141d78108) {
        FUN_14000c390(&DAT_141d780f8,1);
      }
      uVar11 = local_res18[0];
      if (DAT_141d78100 != (undefined4 *)0x0) goto LAB_1408ba399;
    }
    DAT_141d78100 = DAT_141d78100 + 1;
    local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
    if ((&local_res8 < DAT_141d784a8) && (DAT_141d784a0 <= &local_res8)) {
      lVar17 = -8 - (longlong)DAT_141d784a0;
      if (DAT_141d784a8 == DAT_141d784b0) {
        FUN_14000c390(&DAT_141d784a0,1);
      }
      if (DAT_141d784a8 != (undefined8 *)0x0) {
        *(undefined4 *)DAT_141d784a8 =
             *(undefined4 *)((longlong)DAT_141d784a0 + ((longlong)local_res10 + lVar17 >> 2) * 4);
      }
    }
    else {
      if (DAT_141d784a8 == DAT_141d784b0) {
        FUN_14000c390(&DAT_141d784a0,1);
      }
      if (DAT_141d784a8 != (undefined8 *)0x0) {
        *(undefined4 *)DAT_141d784a8 = 0;
      }
    }
    DAT_141d784a8 = (undefined8 *)((longlong)DAT_141d784a8 + 4);
  }
  if (!bVar7) {
    return;
  }
  *(int *)(uVar20 + 0x5c0) = (int)((longlong)DAT_141d77d70 - (longlong)DAT_141d77d68 >> 1);
  if ((local_res10 < DAT_141d77d70) && (DAT_141d77d68 <= local_res10)) {
    lVar17 = (longlong)local_res10 - (longlong)DAT_141d77d68;
    if (DAT_141d77d70 == DAT_141d77d78) {
      FUN_14000c460(&DAT_141d77d68,1);
    }
    if (DAT_141d77d70 != (undefined2 *)0x0) {
      uVar8 = DAT_141d77d68[lVar17 >> 1];
LAB_1408ba4f8:
      *DAT_141d77d70 = uVar8;
    }
  }
  else {
    if (DAT_141d77d70 == DAT_141d77d78) {
      FUN_14000c460(&DAT_141d77d68,1);
    }
    uVar8 = local_res10[0];
    if (DAT_141d77d70 != (undefined2 *)0x0) goto LAB_1408ba4f8;
  }
  DAT_141d77d70 = DAT_141d77d70 + 1;
  if ((local_res18 < DAT_141d78118) && (DAT_141d78110 <= local_res18)) {
    lVar17 = (longlong)local_res18 - (longlong)DAT_141d78110;
    if (DAT_141d78118 == DAT_141d78120) {
      FUN_14000c390(&DAT_141d78110,1);
    }
    if (DAT_141d78118 == (undefined4 *)0x0) goto LAB_1408ba598;
    uVar11 = DAT_141d78110[lVar17 >> 2];
  }
  else {
    if (DAT_141d78118 == DAT_141d78120) {
      FUN_14000c390(&DAT_141d78110,1);
    }
    uVar11 = local_res18[0];
    if (DAT_141d78118 == (undefined4 *)0x0) goto LAB_1408ba598;
  }
  *DAT_141d78118 = uVar11;
LAB_1408ba598:
  DAT_141d78118 = DAT_141d78118 + 1;
  local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
  if ((&local_res8 < DAT_141d784c0) && (DAT_141d784b8 <= &local_res8)) {
    lVar17 = -8 - (longlong)DAT_141d784b8;
    if (DAT_141d784c0 == DAT_141d784c8) {
      FUN_14000c390(&DAT_141d784b8,1);
    }
    if (DAT_141d784c0 != (undefined8 *)0x0) {
      *(undefined4 *)DAT_141d784c0 =
           *(undefined4 *)((longlong)DAT_141d784b8 + ((longlong)local_res10 + lVar17 >> 2) * 4);
    }
  }
  else {
    if (DAT_141d784c0 == DAT_141d784c8) {
      FUN_14000c390(&DAT_141d784b8,1);
    }
    if (DAT_141d784c0 != (undefined8 *)0x0) {
      *(undefined4 *)DAT_141d784c0 = 0;
    }
  }
  DAT_141d784c0 = (undefined8 *)((longlong)DAT_141d784c0 + 4);
  return;
}

