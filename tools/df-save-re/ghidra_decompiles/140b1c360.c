// FUN_140b1c360 @ 140b1c360
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1402cae10 FUN_1402cae10
//   -> 140dfb5c4 operator_new
//   -> 140b0d1f0 FUN_140b0d1f0
//   -> 140b0d6c0 FUN_140b0d6c0


void FUN_140b1c360(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  short *psVar11;
  short sVar12;
  short sVar13;
  ulonglong uVar14;
  short local_res20 [4];
  longlong local_58;
  
  lVar4 = 0x11;
  lVar10 = param_1;
  do {
    lVar6 = 0x11;
    do {
      FUN_1405bba90(param_2,lVar10,1);
      lVar10 = lVar10 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar10 = param_1 + 0x122;
  lVar4 = 0x11;
  do {
    lVar6 = 0x11;
    do {
      FUN_1405bba90(param_2,lVar10,2);
      lVar10 = lVar10 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar10 = param_1 + 0x364;
  lVar4 = 0x10;
  do {
    lVar6 = 0x10;
    do {
      FUN_1405bba90(param_2,lVar10,4);
      lVar10 = lVar10 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar10 = 0;
  sVar12 = 0;
  local_58 = 0;
  do {
    lVar4 = 0;
    sVar5 = 0;
    do {
      if (sVar12 < 0x10) {
        lVar6 = param_1 + (local_58 + lVar4) * 4;
        FUN_1405bba90(param_2,lVar6 + 0x764,2);
        FUN_1405bba90(param_2,lVar6 + 0x766,2);
      }
      if (sVar5 < 0x10) {
        lVar6 = param_1 + (lVar4 + lVar10) * 4;
        FUN_1405bba90(param_2,lVar6 + 0xba4,2);
        FUN_1405bba90(param_2,lVar6 + 0xba6,2);
      }
      if ((sVar12 < 0x10) && (sVar5 < 0x10)) {
        FUN_1405bba90(param_2,local_res20,2);
        plVar1 = (longlong *)(param_1 + ((lVar4 + lVar10) * 3 + 0x45b) * 8);
        FUN_1402cae10(plVar1,(longlong)local_res20[0]);
        uVar14 = 0;
        sVar13 = 0;
        if (plVar1[1] - *plVar1 >> 3 != 0) {
          do {
            pvVar2 = operator_new(0x60);
            uVar3 = FUN_140b0d1f0(pvVar2);
            *(undefined8 *)(*plVar1 + uVar14 * 8) = uVar3;
            FUN_140b0d6c0(*(undefined8 *)(*plVar1 + uVar14 * 8),param_2);
            sVar13 = sVar13 + 1;
            uVar14 = (ulonglong)sVar13;
          } while (uVar14 < (ulonglong)(plVar1[1] - *plVar1 >> 3));
        }
      }
      sVar5 = sVar5 + 1;
      lVar4 = lVar4 + 1;
    } while (sVar5 < 0x11);
    sVar12 = sVar12 + 1;
    local_58 = local_58 + 0x11;
    lVar10 = lVar10 + 0x10;
  } while (sVar12 < 0x11);
  lVar10 = param_1 + 0xfe4;
  lVar4 = 0x10;
  do {
    lVar6 = 0x10;
    do {
      FUN_1405bba90(param_2,lVar10,1);
      lVar10 = lVar10 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar10 = param_1 + 0x10e4;
  lVar4 = 0x10;
  do {
    lVar6 = 0x10;
    do {
      FUN_1405bba90(param_2,lVar10,1);
      lVar10 = lVar10 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar10 = param_1 + 0x11e4;
  lVar4 = 0x10;
  do {
    lVar6 = 0x10;
    do {
      FUN_1405bba90(param_2,lVar10,1);
      lVar10 = lVar10 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_1405bba90(param_2,param_1 + 0x12e4,2);
  FUN_1405bba90(param_2,param_1 + 0x12e6,2);
  FUN_1405bba90(param_2,param_1 + 0x12e8,2);
  FUN_1405bba90(param_2,param_1 + 0x12ea,2);
  FUN_1405bba90(param_2,param_1 + 0x12ec,2);
  FUN_1405bba90(param_2,param_1 + 0x12ee,2);
  FUN_1405bba90(param_2,param_1 + 0x12f0,2);
  lVar10 = param_1 + 0x12f2;
  lVar4 = 0x10;
  do {
    lVar6 = 0x11;
    do {
      FUN_1405bba90(param_2,lVar10,2);
      lVar10 = lVar10 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar10 = 0;
  sVar12 = 0;
  psVar11 = (short *)(param_1 + 0x1512);
  do {
    lVar4 = 0;
    sVar5 = 0;
    do {
      FUN_1405bba90(param_2,psVar11,2);
      if ((((param_3 < 0x654) && (sVar12 < 0x10)) && (sVar5 < 0x10)) &&
         (4 < (int)*psVar11 - (int)psVar11[-0x110])) {
        pbVar8 = (byte *)(lVar4 + lVar10 + 0x21d2 + param_1);
        *pbVar8 = *pbVar8 | 4;
      }
      sVar5 = sVar5 + 1;
      lVar4 = lVar4 + 1;
      psVar11 = psVar11 + 1;
    } while (sVar5 < 0x11);
    sVar12 = sVar12 + 1;
    lVar10 = lVar10 + 0x10;
  } while (sVar12 < 0x10);
  lVar10 = param_1 + 0x1732;
  lVar4 = 0x10;
  lVar6 = 0x11;
  do {
    lVar7 = 0x11;
    do {
      FUN_1405bba90(param_2,lVar10,1);
      lVar10 = lVar10 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar10 = param_1 + 0x1842;
  lVar4 = 0x10;
  do {
    lVar7 = 0x11;
    do {
      FUN_1405bba90(param_2,lVar10,2);
      lVar10 = lVar10 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar10 = param_1 + 0x1a62;
  lVar4 = 0x11;
  do {
    lVar7 = 0x10;
    do {
      FUN_1405bba90(param_2,lVar10,2);
      lVar10 = lVar10 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  sVar5 = 0;
  psVar11 = (short *)(param_1 + 0x1c82);
  pbVar8 = (byte *)(param_1 + 0x21d2);
  sVar12 = 0;
  do {
    FUN_1405bba90(param_2,psVar11,2);
    if (((param_3 < 0x654) && (sVar5 < 0x10)) &&
       ((sVar12 < 0x10 && (4 < (int)*psVar11 - (int)psVar11[-0x110])))) {
      *pbVar8 = *pbVar8 | 4;
    }
    sVar12 = sVar12 + 1;
    psVar11 = psVar11 + 1;
    pbVar8 = pbVar8 + 1;
  } while ((sVar12 < 0x10) || (sVar5 = sVar5 + 1, sVar12 = 0, sVar5 < 0x11));
  lVar10 = param_1 + 0x1ea2;
  lVar7 = 0x11;
  lVar4 = param_1 + 0x21d2;
  do {
    lVar9 = 0x10;
    do {
      FUN_1405bba90(param_2,lVar10,1);
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar10 = param_1 + 0x1fb2;
  do {
    lVar7 = 0x10;
    do {
      FUN_1405bba90(param_2,lVar10,2);
      lVar10 = lVar10 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_1405bba90(param_2,param_1 + 0x3ad8,2);
  lVar10 = 0x10;
  do {
    lVar6 = 0x10;
    do {
      FUN_1405bba90(param_2,lVar4,1);
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  param_1 = param_1 + 0x3ada;
  lVar10 = 0x30;
  do {
    lVar4 = 0x30;
    do {
      FUN_1405bba90(param_2,param_1,1);
      param_1 = param_1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

