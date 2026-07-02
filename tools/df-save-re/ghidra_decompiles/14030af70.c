// FUN_14030af70 @ 14030af70
// callees:
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void FUN_14030af70(ulonglong *param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  iVar4 = (int)((longlong)(param_1[4] - param_1[3]) >> 3) + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      plVar2 = *(longlong **)(param_1[3] + lVar7 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_140051e20(plVar2);
        lVar3 = *plVar2;
        if (lVar3 != 0) {
          FUN_140002020(lVar3,plVar2[2] - lVar3 >> 3,8);
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
        }
        free(plVar2);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  param_1[4] = param_1[3];
  iVar4 = (int)((longlong)(param_1[7] - param_1[6]) >> 3) + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      plVar2 = *(longlong **)(param_1[6] + lVar7 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_140051e20(plVar2);
        lVar3 = *plVar2;
        if (lVar3 != 0) {
          FUN_140002020(lVar3,plVar2[2] - lVar3 >> 3,8);
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
        }
        free(plVar2);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  param_1[7] = param_1[6];
  iVar4 = (int)((longlong)(param_1[10] - param_1[9]) >> 3) + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      plVar2 = *(longlong **)(param_1[9] + lVar7 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_140051e20(plVar2);
        lVar3 = *plVar2;
        if (lVar3 != 0) {
          FUN_140002020(lVar3,plVar2[2] - lVar3 >> 3,8);
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
        }
        free(plVar2);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  param_1[10] = param_1[9];
  iVar4 = (int)((longlong)(param_1[0xd] - param_1[0xc]) >> 3) + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      plVar2 = *(longlong **)(param_1[0xc] + lVar7 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_140051e20(plVar2);
        lVar3 = *plVar2;
        if (lVar3 != 0) {
          FUN_140002020(lVar3,plVar2[2] - lVar3 >> 3,8);
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
        }
        free(plVar2);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  param_1[0xd] = param_1[0xc];
  iVar4 = (int)((longlong)(param_1[0x10] - param_1[0xf]) >> 3) + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      plVar2 = *(longlong **)(param_1[0xf] + lVar7 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_140051e20(plVar2);
        lVar3 = *plVar2;
        if (lVar3 != 0) {
          FUN_140002020(lVar3,plVar2[2] - lVar3 >> 3,8);
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
        }
        free(plVar2);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  param_1[0x10] = param_1[0xf];
  iVar4 = (int)((longlong)(param_1[0x13] - param_1[0x12]) >> 3) + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      plVar2 = *(longlong **)(param_1[0x12] + lVar7 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_140051e20(plVar2);
        lVar3 = *plVar2;
        if (lVar3 != 0) {
          FUN_140002020(lVar3,plVar2[2] - lVar3 >> 3,8);
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
        }
        free(plVar2);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  param_1[0x13] = param_1[0x12];
  iVar4 = (int)((longlong)(param_1[0x16] - param_1[0x15]) >> 3) + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      plVar2 = *(longlong **)(param_1[0x15] + lVar7 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_140051e20(plVar2);
        lVar3 = *plVar2;
        if (lVar3 != 0) {
          FUN_140002020(lVar3,plVar2[2] - lVar3 >> 3,8);
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
        }
        free(plVar2);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  param_1[0x16] = param_1[0x15];
  iVar4 = (int)((longlong)(param_1[0x19] - param_1[0x18]) >> 3) + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      plVar2 = *(longlong **)(param_1[0x18] + lVar7 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_140051e20(plVar2);
        lVar3 = *plVar2;
        if (lVar3 != 0) {
          FUN_140002020(lVar3,plVar2[2] - lVar3 >> 3,8);
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
        }
        free(plVar2);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  param_1[0x19] = param_1[0x18];
  puVar5 = (undefined8 *)*param_1;
  uVar6 = (param_1[1] - (longlong)puVar5) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar5) {
    uVar6 = uVar8;
  }
  if (uVar6 != 0) {
    do {
      free((void *)*puVar5);
      uVar8 = uVar8 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar8 < uVar6);
  }
  puVar1 = param_1 + 0x54;
  param_1[1] = *param_1;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x56] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
  }
  puVar1 = param_1 + 0x51;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x53] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
  }
  puVar1 = param_1 + 0x4e;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x50] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
  }
  puVar1 = param_1 + 0x4b;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x4d] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
  }
  puVar1 = param_1 + 0x48;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x4a] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
  }
  puVar1 = param_1 + 0x45;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x47] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
  }
  puVar1 = param_1 + 0x42;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x44] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
  }
  puVar1 = param_1 + 0x3f;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x41] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
  }
  puVar1 = param_1 + 0x3c;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x3e] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
  }
  puVar1 = param_1 + 0x39;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x3b] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
  }
  puVar1 = param_1 + 0x36;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x38] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
  }
  puVar1 = param_1 + 0x33;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x35] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
  }
  puVar1 = param_1 + 0x30;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x32] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
  }
  puVar1 = param_1 + 0x2d;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x2f] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
  }
  puVar1 = param_1 + 0x2a;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x2c] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  puVar1 = param_1 + 0x27;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x29] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
  }
  puVar1 = param_1 + 0x24;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x26] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
  }
  puVar1 = param_1 + 0x21;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x23] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  puVar1 = param_1 + 0x1e;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x20] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  puVar1 = param_1 + 0x1b;
  FUN_140051e20(puVar1);
  uVar8 = *puVar1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x1d] - uVar8) >> 3,8);
    *puVar1 = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  uVar8 = param_1[0x18];
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x1a] - uVar8) >> 3,8);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  uVar8 = param_1[0x15];
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x17] - uVar8) >> 3,8);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  uVar8 = param_1[0x12];
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x14] - uVar8) >> 3,8);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  uVar8 = param_1[0xf];
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0x11] - uVar8) >> 3,8);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  uVar8 = param_1[0xc];
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0xe] - uVar8) >> 3,8);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  uVar8 = param_1[9];
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[0xb] - uVar8) >> 3,8);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  uVar8 = param_1[6];
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[8] - uVar8) >> 3,8);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  uVar8 = param_1[3];
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[5] - uVar8) >> 3,8);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  uVar8 = *param_1;
  if (uVar8 != 0) {
    FUN_140002020(uVar8,(longlong)(param_1[2] - uVar8) >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

