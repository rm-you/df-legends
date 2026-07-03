// FUN_140099940 @ 140099940
// callees:
//   -> 14090bee0 FUN_14090bee0
//   -> 1407b2c90 FUN_1407b2c90
//   -> 140dfb5c4 operator_new
//   -> 14000d840 FUN_14000d840
//   -> 1400512a0 FUN_1400512a0
//   -> 14009a360 FUN_14009a360
//   -> 140050d90 FUN_140050d90


undefined4 * FUN_140099940(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  short sVar1;
  short sVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  
  if (param_2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_14090bee0(param_2);
  FUN_1407b2c90(*(undefined8 *)(param_2 + 4),*param_1);
  puVar4 = operator_new(0x68);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = 0;
  *puVar4 = 0xffffffff;
  *(undefined8 *)(puVar4 + 1) = 0;
  *(undefined8 *)(puVar4 + 3) = 0;
  *(undefined8 *)(puVar4 + 5) = 0;
  puVar4[7] = 0xfff0bdc0;
  puVar4[8] = 0xfff0bdc0;
  puVar4[9] = 0xfff0bdc0;
  *(undefined8 *)(puVar4 + 10) = 0;
  *(undefined8 *)(puVar4 + 0xc) = 100;
  iVar16 = 0;
  puVar4[0xe] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0xffffffff;
  puVar4[0x18] = 0x10;
  *puVar4 = *param_2;
  if ((0 < (int)param_2[0x18]) && ((**(byte **)(param_2 + 0x16) & 1) != 0)) {
    lVar10 = *(longlong *)(param_2 + 4);
    lVar5 = *(longlong *)(lVar10 + 0x130);
    lVar14 = DAT_141d6dd50;
    if (((lVar5 == 0) ||
        ((*(longlong *)(lVar5 + 0x48) == 0 ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x48) + 0x130) == 0)))) &&
       ((*(int *)(lVar10 + 0xd0) < 1 || ((**(byte **)(lVar10 + 200) & 0x80) == 0)))) {
      sVar1 = *(short *)(lVar10 + 2);
      sVar2 = *(short *)(lVar10 + 4);
      if (((sVar1 < 0) ||
          ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar1)) ||
         (sVar2 < 0)) {
LAB_140099adc:
        if (((lVar5 != 0) &&
            ((lVar10 = *(longlong *)(lVar5 + 0x48), lVar10 != 0 &&
             ((*(uint *)(lVar10 + 0x4c) & 0x40000) == 0)))) &&
           ((*(uint *)(lVar10 + 0x48) & 0x40000) != 0)) goto LAB_140099b0a;
      }
      else {
        lVar10 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
        if (((ulonglong)(*(longlong *)(lVar10 + 0x180) - *(longlong *)(lVar10 + 0x178) >> 3) <=
             (ulonglong)(longlong)sVar2) ||
           (cVar3 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar10 + 0x178) + (longlong)sVar2 * 8)
                                  + 0x6a8,0xf), cVar3 == '\0')) goto LAB_140099adc;
        if (((lVar5 == 0) || (*(longlong *)(lVar5 + 0x48) == 0)) ||
           ((*(uint *)(*(longlong *)(lVar5 + 0x48) + 0x4c) & 0x40000) == 0)) goto LAB_140099b0a;
      }
      puVar4[6] = 1;
      lVar14 = DAT_141d6dd50;
    }
LAB_140099b0a:
    lVar10 = *(longlong *)(param_2 + 4);
    lVar5 = *(longlong *)(lVar10 + 0x130);
    if ((((lVar5 == 0) || (*(longlong *)(lVar5 + 0x48) == 0)) ||
        (*(longlong *)(*(longlong *)(lVar5 + 0x48) + 0x130) == 0)) &&
       ((*(int *)(lVar10 + 0xd0) < 1 || ((**(byte **)(lVar10 + 200) & 0x80) == 0)))) {
      sVar1 = *(short *)(lVar10 + 2);
      sVar2 = *(short *)(lVar10 + 4);
      if ((sVar1 < 0) ||
         (((ulonglong)(DAT_141d6dd58 - lVar14 >> 3) <= (ulonglong)(longlong)sVar1 || (sVar2 < 0))))
      {
LAB_140099bd0:
        if ((((lVar5 != 0) && (lVar10 = *(longlong *)(lVar5 + 0x48), lVar10 != 0)) &&
            ((*(uint *)(lVar10 + 0x4c) & 0x10000) == 0)) &&
           ((*(uint *)(lVar10 + 0x48) & 0x10000) != 0)) goto LAB_140099bfb;
      }
      else {
        lVar10 = *(longlong *)(lVar14 + (longlong)sVar1 * 8);
        if (((ulonglong)(*(longlong *)(lVar10 + 0x180) - *(longlong *)(lVar10 + 0x178) >> 3) <=
             (ulonglong)(longlong)sVar2) ||
           (cVar3 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar10 + 0x178) + (longlong)sVar2 * 8)
                                  + 0x6a8,0xd), cVar3 == '\0')) goto LAB_140099bd0;
        if (((lVar5 == 0) || (*(longlong *)(lVar5 + 0x48) == 0)) ||
           ((*(uint *)(*(longlong *)(lVar5 + 0x48) + 0x4c) & 0x10000) == 0)) goto LAB_140099bfb;
      }
      puVar4[6] = puVar4[6] | 2;
      lVar14 = DAT_141d6dd50;
    }
LAB_140099bfb:
    lVar10 = *(longlong *)(param_2 + 4);
    lVar5 = *(longlong *)(lVar10 + 0x130);
    if ((((lVar5 == 0) || (*(longlong *)(lVar5 + 0x48) == 0)) ||
        (*(longlong *)(*(longlong *)(lVar5 + 0x48) + 0x130) == 0)) &&
       ((*(int *)(lVar10 + 0xd0) < 1 || ((**(byte **)(lVar10 + 200) & 0x80) == 0)))) {
      sVar1 = *(short *)(lVar10 + 2);
      sVar2 = *(short *)(lVar10 + 4);
      if ((sVar1 < 0) ||
         (((ulonglong)(DAT_141d6dd58 - lVar14 >> 3) <= (ulonglong)(longlong)sVar1 || (sVar2 < 0))))
      {
LAB_140099cc1:
        if ((((lVar5 != 0) && (lVar10 = *(longlong *)(lVar5 + 0x48), lVar10 != 0)) &&
            ((*(uint *)(lVar10 + 0x4c) & 0x20000) == 0)) &&
           ((*(uint *)(lVar10 + 0x48) & 0x20000) != 0)) goto LAB_140099cec;
      }
      else {
        lVar10 = *(longlong *)(lVar14 + (longlong)sVar1 * 8);
        if (((ulonglong)(*(longlong *)(lVar10 + 0x180) - *(longlong *)(lVar10 + 0x178) >> 3) <=
             (ulonglong)(longlong)sVar2) ||
           (cVar3 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar10 + 0x178) + (longlong)sVar2 * 8)
                                  + 0x6a8,0xe), cVar3 == '\0')) goto LAB_140099cc1;
        if (((lVar5 == 0) || (*(longlong *)(lVar5 + 0x48) == 0)) ||
           ((*(uint *)(*(longlong *)(lVar5 + 0x48) + 0x4c) & 0x20000) == 0)) goto LAB_140099cec;
      }
      puVar4[6] = puVar4[6] | 4;
      lVar14 = DAT_141d6dd50;
    }
LAB_140099cec:
    lVar10 = *(longlong *)(param_2 + 4);
    sVar1 = *(short *)(lVar10 + 2);
    lVar5 = *(longlong *)(lVar10 + 0x130);
    sVar2 = *(short *)(lVar10 + 4);
    if (((sVar1 < 0) || ((ulonglong)(DAT_141d6dd58 - lVar14 >> 3) <= (ulonglong)(longlong)sVar1)) ||
       (sVar2 < 0)) {
LAB_140099d78:
      if ((lVar5 != 0) &&
         (((lVar10 = *(longlong *)(lVar5 + 0x48), lVar10 != 0 &&
           ((*(uint *)(lVar10 + 0x4c) & 0x10000000) == 0)) &&
          ((*(uint *)(lVar10 + 0x48) & 0x10000000) != 0)))) {
LAB_140099d98:
        puVar4[6] = puVar4[6] | 0x20;
      }
    }
    else {
      lVar10 = *(longlong *)(lVar14 + (longlong)sVar1 * 8);
      if (((ulonglong)(*(longlong *)(lVar10 + 0x180) - *(longlong *)(lVar10 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar2) ||
         (cVar3 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar10 + 0x178) + (longlong)sVar2 * 8) +
                                0x6a8,0xa2), cVar3 == '\0')) goto LAB_140099d78;
      if (((lVar5 == 0) || (*(longlong *)(lVar5 + 0x48) == 0)) ||
         ((*(uint *)(*(longlong *)(lVar5 + 0x48) + 0x4c) & 0x10000000) == 0)) goto LAB_140099d98;
    }
    puVar4[6] = puVar4[6] | 0x40;
  }
  if (param_3 == 0) {
    puVar4[10] = 0x32;
    puVar4[0xb] = 0x32;
    sVar1 = *(short *)(*(longlong *)(param_2 + 4) + 2);
    sVar2 = *(short *)(*(longlong *)(param_2 + 4) + 4);
    if (((sVar1 < 0) ||
        ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar1)) ||
       (sVar2 < 0)) {
LAB_14009a250:
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
      if ((ulonglong)(*(longlong *)(lVar10 + 0x180) - *(longlong *)(lVar10 + 0x178) >> 3) <=
          (ulonglong)(longlong)sVar2) goto LAB_14009a250;
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x178) + (longlong)sVar2 * 8);
      if (lVar10 != 0) {
        puVar4[0xc] = *(undefined4 *)(lVar10 + 0x4230);
        puVar4[0xd] = *(undefined4 *)(lVar10 + 0x4258);
        puVar4[0xe] = *(undefined4 *)(lVar10 + 0x4234);
      }
    }
    if (((*(longlong *)(*(longlong *)(param_2 + 4) + 0x130) != 0) &&
        (lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 4) + 0x130) + 0x48), lVar5 != 0
        )) && (*(int *)(lVar5 + 0x114) != -1)) {
      puVar4[0xe] = 1000;
    }
    if (lVar10 != 0) {
      iVar16 = 0xb54;
      if (*(int *)(lVar10 + 0x864) != -1) {
        lVar5 = *(longlong *)
                 (*(longlong *)(lVar10 + 0x7c0) + (longlong)*(int *)(lVar10 + 0x864) * 8);
        iVar16 = 0xb54;
        if (*(int *)(lVar5 + 4) < 0xb54) {
          iVar16 = *(int *)(lVar5 + 4);
        }
      }
      if ((*(int *)(lVar10 + 0x860) != -1) &&
         (lVar5 = *(longlong *)
                   (*(longlong *)(lVar10 + 0x7a8) + (longlong)*(int *)(lVar10 + 0x860) * 8),
         *(int *)(lVar5 + 4) < iVar16)) {
        iVar16 = *(int *)(lVar5 + 4);
      }
      iVar8 = *(int *)(lVar10 + 0x86c);
      if (iVar8 != -1) {
        lVar10 = *(longlong *)(lVar10 + 0x7f0);
        goto LAB_14009a2e8;
      }
      goto LAB_14009a2f3;
    }
  }
  else {
    if ((*(uint *)(param_3 + 0x118) & 0x1000) == 0) {
      sVar1 = *(short *)(param_3 + 0xa4);
      sVar2 = *(short *)(param_3 + 300);
      if (((-1 < sVar1) &&
          ((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
         (-1 < sVar2)) {
        lVar10 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
        if (((ulonglong)(longlong)sVar2 <
             (ulonglong)(*(longlong *)(lVar10 + 0x180) - *(longlong *)(lVar10 + 0x178) >> 3)) &&
           (lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x178) + (longlong)sVar2 * 8), lVar10 != 0
           )) {
          puVar4[0xc] = *(undefined4 *)(lVar10 + 0x4230);
          puVar4[0xd] = *(undefined4 *)(lVar10 + 0x4258);
          puVar4[0xe] = *(undefined4 *)(lVar10 + 0x4234);
        }
      }
      if (*(longlong *)(param_3 + 0xd60) != 0) {
        puVar4[0xe] = 1000;
      }
    }
    else {
      puVar4[0xc] = 10000;
      *(undefined8 *)(puVar4 + 0xd) = 10000;
    }
    puVar4[1] = *(undefined4 *)(param_3 + 0x968);
    puVar4[2] = *(undefined4 *)(param_3 + 0x96c);
    puVar4[3] = *(undefined4 *)(param_3 + 0x970);
    puVar4[4] = *(undefined4 *)(param_3 + 0x980);
    lVar10 = *(longlong *)(param_2 + 4);
    sVar1 = *(short *)(lVar10 + 2);
    lVar5 = *(longlong *)(lVar10 + 0x130);
    sVar2 = *(short *)(lVar10 + 4);
    if (((sVar1 < 0) ||
        ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar1)) ||
       (sVar2 < 0)) {
LAB_14009a148:
      if (((lVar5 == 0) ||
          ((lVar10 = *(longlong *)(lVar5 + 0x48), lVar10 == 0 ||
           ((*(uint *)(lVar10 + 0x4c) & 0x10000000) != 0)))) ||
         ((*(uint *)(lVar10 + 0x48) & 0x10000000) == 0)) goto LAB_140099f36;
LAB_14009a178:
      for (puVar6 = *(undefined8 **)(param_3 + 0x988); puVar6 < *(undefined8 **)(param_3 + 0x990);
          puVar6 = puVar6 + 1) {
        if (*(short *)*puVar6 == 0x32) {
          psVar7 = (short *)*puVar6 + 2;
          if (psVar7 != (short *)0x0) {
            puVar4[5] = *(undefined4 *)psVar7;
            goto LAB_140099f39;
          }
          break;
        }
      }
      puVar4[5] = 0;
    }
    else {
      lVar10 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
      if (((ulonglong)(*(longlong *)(lVar10 + 0x180) - *(longlong *)(lVar10 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar2) ||
         (cVar3 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar10 + 0x178) + (longlong)sVar2 * 8) +
                                0x6a8,0xa2), cVar3 == '\0')) goto LAB_14009a148;
      if (((lVar5 == 0) || (*(longlong *)(lVar5 + 0x48) == 0)) ||
         ((*(uint *)(*(longlong *)(lVar5 + 0x48) + 0x4c) & 0x10000000) == 0)) goto LAB_14009a178;
LAB_140099f36:
      puVar4[5] = 0;
    }
LAB_140099f39:
    lVar10 = *(longlong *)(param_3 + 0xa78);
    iVar8 = iVar16;
    if (lVar10 != 0) {
      lVar5 = FUN_1400512a0(0x55,lVar10 + 0x218);
      if ((lVar5 != 0) && (iVar8 = (*(int *)(lVar5 + 4) - *(int *)(lVar5 + 0x10)) * 10, iVar8 < 0))
      {
        iVar8 = iVar16;
      }
      iVar11 = *(int *)(lVar10 + 0xac) - *(int *)(lVar10 + 0xbc);
      iVar9 = *(int *)(lVar10 + 0x11c) - *(int *)(lVar10 + 300);
      iVar15 = *(int *)(lVar10 + 0x18c) - *(int *)(lVar10 + 0x19c);
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      if (iVar9 < 0) {
        iVar9 = iVar16;
      }
      iVar12 = iVar15;
      if (iVar15 < 0) {
        iVar12 = 0;
      }
      iVar8 = iVar8 + iVar11 / 100 + iVar9 / 0xfa + iVar12 / 0xfa;
      lVar5 = FUN_1400512a0(0x39,lVar10 + 0x218);
      iVar9 = iVar16;
      if ((lVar5 != 0) && (iVar9 = (*(int *)(lVar5 + 4) - *(int *)(lVar5 + 0x10)) * 10, iVar9 < 0))
      {
        iVar9 = 0;
      }
      iVar12 = *(int *)(lVar10 + 0x1c4) - *(int *)(lVar10 + 0x1d4);
      iVar11 = *(int *)(lVar10 + 200) - *(int *)(lVar10 + 0xd8);
      iVar13 = *(int *)(param_3 + 0x600) - *(int *)(param_3 + 0x610);
      if (iVar15 < 0) {
        iVar15 = iVar16;
      }
      if (iVar12 < 0) {
        iVar12 = iVar16;
      }
      if (iVar11 < 0) {
        iVar11 = iVar16;
      }
      if (iVar13 < 0) {
        iVar13 = iVar16;
      }
      iVar16 = iVar9 + iVar15 / 100 + iVar13 / 100 + iVar12 / 0xfa + iVar11 / 0xfa;
    }
    puVar4[10] = iVar8;
    puVar4[0xb] = iVar16;
    lVar10 = *(longlong *)(param_3 + 0x5d8);
    iVar16 = 0xb54;
    if (*(int *)(lVar10 + 0x1a4) != -1) {
      lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0x100) + (longlong)*(int *)(lVar10 + 0x1a4) * 8);
      iVar16 = 0xb54;
      if (*(int *)(lVar5 + 4) < 0xb54) {
        iVar16 = *(int *)(lVar5 + 4);
      }
    }
    if ((*(int *)(lVar10 + 0x1a0) != -1) &&
       (lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0xe8) + (longlong)*(int *)(lVar10 + 0x1a0) * 8)
       , *(int *)(lVar5 + 4) < iVar16)) {
      iVar16 = *(int *)(lVar5 + 4);
    }
    iVar8 = *(int *)(lVar10 + 0x1ac);
    if (iVar8 != -1) {
      lVar10 = *(longlong *)(lVar10 + 0x130);
LAB_14009a2e8:
      lVar10 = *(longlong *)(lVar10 + (longlong)iVar8 * 8);
      if (*(int *)(lVar10 + 4) < iVar16) {
        iVar16 = *(int *)(lVar10 + 4);
      }
    }
LAB_14009a2f3:
    if (iVar16 < 1000) {
      iVar16 = (iVar16 << 4) / 1000;
      puVar4[0x18] = iVar16;
      if (iVar16 < 1) {
        puVar4[0x18] = 1;
      }
      goto LAB_14009a327;
    }
  }
  puVar4[0x18] = 0x10;
LAB_14009a327:
  FUN_14009a360(param_1,puVar4,param_3);
  FUN_140050d90(puVar4,param_1 + 8);
  return puVar4;
}

