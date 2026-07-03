// FUN_140759710 @ 140759710
// callees:
//   -> 14000bc60 FUN_14000bc60
//   -> 14000be20 FUN_14000be20
//   -> 1400b2ab0 FUN_1400b2ab0
//   -> 140740200 FUN_140740200
//   -> 14000d840 FUN_14000d840
//   -> 14000c460 FUN_14000c460
//   -> 14000c2d0 FUN_14000c2d0
//   -> 14000c390 FUN_14000c390
//   -> 1400b28a0 FUN_1400b28a0
//   -> 1400025a0 FUN_1400025a0
//   -> 1400520a0 FUN_1400520a0
//   -> 140004650 FUN_140004650
//   -> 140050070 FUN_140050070
//   -> 140051780 FUN_140051780
//   -> 1400b2940 FUN_1400b2940
//   -> 1400b2850 FUN_1400b2850
//   -> 1400030c0 FUN_1400030c0
//   -> 140050340 FUN_140050340
//   -> 1400b29f0 FUN_1400b29f0
//   -> 140360820 FUN_140360820
//   -> 1400025c0 FUN_1400025c0


void FUN_140759710(ulonglong *param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ushort *puVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  ulonglong **ppuVar15;
  undefined2 uVar16;
  int iVar17;
  ulonglong *puVar18;
  undefined4 *puVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  short sVar28;
  ulonglong *puVar29;
  longlong *plVar30;
  ulonglong uVar31;
  longlong lVar32;
  ushort uVar33;
  longlong *local_res10;
  ulonglong *local_res18;
  ulonglong *local_res20;
  ushort local_2b8;
  ushort local_2b6 [7];
  ulonglong local_2a8;
  ulonglong uStack_2a0;
  ulonglong *local_298;
  ulonglong uStack_290;
  ulonglong *local_278;
  ulonglong uStack_270;
  ulonglong *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  ulonglong *local_248;
  ulonglong *local_240;
  ulonglong *local_238;
  ulonglong uStack_230;
  ulonglong *local_218;
  ulonglong *puStack_210;
  ulonglong *local_208;
  ulonglong *local_200;
  ulonglong *puStack_1f8;
  ulonglong *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  ulonglong *local_1d0;
  ulonglong *puStack_1c8;
  ulonglong *local_1c0;
  ulonglong *local_1b8;
  longlong local_1b0;
  ulonglong *local_1a0;
  longlong local_198;
  ulonglong *local_188;
  longlong local_180;
  ulonglong *local_170;
  longlong local_168;
  ulonglong *local_158;
  longlong local_150;
  ulonglong *local_140;
  longlong local_138;
  ulonglong *local_128;
  longlong local_120;
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined8 local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  
  local_b0 = 0xfffffffffffffffe;
  plVar27 = (longlong *)param_1[0x24];
  iVar6 = -1;
  local_res20 = param_4;
  local_res18 = param_3;
  local_res10 = param_2;
  for (plVar30 = (longlong *)param_1[0x23]; iVar5 = iVar6, plVar30 < plVar27; plVar30 = plVar30 + 1)
  {
    puVar1 = (undefined8 *)*plVar30;
    sVar4 = (**(code **)*puVar1)(puVar1);
    if (sVar4 == 0) {
      iVar5 = *(int *)(puVar1 + 1);
      break;
    }
  }
  lVar8 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
  if ((lVar8 == 0) || (iVar5 == -1)) {
    local_240 = (ulonglong *)0x0;
  }
  else {
    iVar12 = 0;
    iVar17 = (int)lVar8 + -1;
    if (-1 < iVar17) {
      do {
        iVar11 = iVar17 + iVar12 >> 1;
        local_240 = *(ulonglong **)(DAT_141d7a0a8 + (longlong)iVar11 * 8);
        if ((int)local_240[0x1c] == iVar5) goto LAB_1407597fc;
        if (iVar5 < (int)local_240[0x1c]) {
          iVar17 = iVar11 + -1;
        }
        else {
          iVar12 = iVar11 + 1;
        }
      } while (iVar12 <= iVar17);
    }
    local_240 = (ulonglong *)0x0;
  }
LAB_1407597fc:
  plVar27 = (longlong *)param_1[0x24];
  for (plVar30 = (longlong *)param_1[0x23]; iVar5 = iVar6, plVar30 < plVar27; plVar30 = plVar30 + 1)
  {
    puVar1 = (undefined8 *)*plVar30;
    sVar4 = (**(code **)*puVar1)(puVar1);
    if (sVar4 == 1) {
      iVar5 = *(int *)(puVar1 + 1);
      break;
    }
  }
  puVar21 = local_240;
  plVar30 = local_res10;
  lVar8 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
  if ((lVar8 != 0) && (iVar5 != -1)) {
    iVar12 = 0;
    iVar17 = (int)lVar8 + -1;
    if (-1 < iVar17) {
      do {
        iVar11 = iVar17 + iVar12 >> 1;
        local_248 = *(ulonglong **)(DAT_141d7a0a8 + (longlong)iVar11 * 8);
        if ((int)local_248[0x1c] == iVar5) goto LAB_1407598b8;
        if (iVar5 < (int)local_248[0x1c]) {
          iVar17 = iVar11 + -1;
        }
        else {
          iVar12 = iVar11 + 1;
        }
      } while (iVar12 <= iVar17);
    }
  }
  local_248 = (ulonglong *)0x0;
LAB_1407598b8:
  puVar18 = (ulonglong *)0x0;
  local_238 = (ulonglong *)0x0;
  local_278 = (ulonglong *)0x0;
  if (local_240 != (ulonglong *)0x0) {
    FUN_14000bc60(local_res10,local_240 + 0x1c);
    if (*(char *)((longlong)puVar21 + 6) == '\0') {
      local_2b8 = 0;
    }
    else if (*(char *)((longlong)puVar21 + 6) == '\x01') {
      local_2b8 = 1;
    }
    else {
      local_2b8 = 2;
    }
    FUN_14000be20(param_3,&local_2b8);
    local_2b6[0] = CONCAT11(local_2b6[0]._1_1_,1);
    local_238 = (ulonglong *)*param_4;
    uStack_230 = 0;
    uVar26 = param_4[3];
    if (uVar26 != 0) {
      if (((longlong)uVar26 < 0) && (uVar26 != 0)) {
        lVar8 = (-uVar26 - 1 >> 5) * -4 + -4;
      }
      else {
        lVar8 = (uVar26 >> 5) * 4;
      }
      local_238 = (ulonglong *)((longlong)local_238 + lVar8);
      uStack_230 = (ulonglong)((uint)uVar26 & 0x1f);
    }
    FUN_1400b2ab0(param_4,&local_298,&local_238,1,local_2b6);
    iVar5 = FUN_140740200(puVar21,0);
    lVar8 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if ((lVar8 == 0) || (iVar5 == -1)) {
      local_238 = (ulonglong *)0x0;
    }
    else {
      iVar17 = (int)lVar8 + -1;
      puVar20 = puVar18;
      puVar21 = local_240;
      if (-1 < iVar17) {
        do {
          iVar12 = iVar17 + (int)puVar20 >> 1;
          local_238 = *(ulonglong **)(DAT_141d7a0a8 + (longlong)iVar12 * 8);
          if ((int)local_238[0x1c] == iVar5) goto LAB_140759a1b;
          if (iVar5 < (int)local_238[0x1c]) {
            iVar17 = iVar12 + -1;
          }
          else {
            puVar20 = (ulonglong *)(ulonglong)(iVar12 + 1);
          }
        } while ((int)puVar20 <= iVar17);
      }
      local_238 = (ulonglong *)0x0;
    }
LAB_140759a1b:
    iVar5 = FUN_140740200(puVar21,1);
    lVar8 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    puVar21 = puVar18;
    if (((lVar8 != 0) && (iVar5 != -1)) &&
       (iVar17 = (int)lVar8 + -1, puVar20 = puVar18, -1 < iVar17)) {
      do {
        iVar11 = iVar17 + (int)puVar20 >> 1;
        puVar21 = *(ulonglong **)(DAT_141d7a0a8 + (longlong)iVar11 * 8);
        iVar12 = (int)puVar21[0x1c];
        if (iVar12 == iVar5) break;
        if (iVar5 < iVar12) {
          iVar17 = iVar11 + -1;
        }
        else {
          puVar20 = (ulonglong *)(ulonglong)(iVar11 + 1);
        }
        puVar21 = puVar18;
      } while ((int)puVar20 <= iVar17);
    }
    sVar4 = 0;
    puVar18 = local_238;
    do {
      puVar20 = puVar21;
      if (sVar4 == 0) {
        puVar20 = puVar18;
      }
      if (puVar20 != (ulonglong *)0x0) {
        FUN_14000bc60(plVar30,puVar20 + 0x1c);
        lVar8 = DAT_141d6dd50;
        sVar28 = *(short *)((longlong)puVar20 + 2);
        if (sVar28 < 0) {
LAB_140759ca6:
          if (*(char *)((longlong)puVar20 + 6) == '\0') {
            uVar16 = 0x31;
            local_2b8 = 0x31;
            if (((ushort *)param_3[1] <= &local_2b8) ||
               (puVar9 = (ushort *)*param_3, &local_2b8 < puVar9)) {
              if (param_3[1] == param_3[2]) {
                FUN_14000c460(param_3,1);
                uVar16 = 0x31;
              }
LAB_140759d5e:
              if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
                *(undefined2 *)param_3[1] = uVar16;
              }
              goto LAB_140759d6a;
            }
          }
          else if (*(char *)((longlong)puVar20 + 6) == '\x01') {
            uVar16 = 0x32;
            local_2b8 = 0x32;
            if (((ushort *)param_3[1] <= &local_2b8) ||
               (puVar9 = (ushort *)*param_3, &local_2b8 < puVar9)) {
              if (param_3[1] == param_3[2]) {
                FUN_14000c460(param_3,1);
                uVar16 = 0x32;
              }
              goto LAB_140759d5e;
            }
          }
          else {
            local_2b8 = 0x33;
            if (((ushort *)param_3[1] <= &local_2b8) ||
               (puVar9 = (ushort *)*param_3, &local_2b8 < puVar9)) goto LAB_140759bee;
          }
LAB_140759bb0:
          if (param_3[1] == param_3[2]) {
            FUN_14000c460(param_3,1);
          }
          if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
            *(undefined2 *)param_3[1] =
                 *(undefined2 *)
                  (*param_3 + ((longlong)local_2b6 + (-2 - (longlong)puVar9) >> 1) * 2);
          }
        }
        else {
          uVar26 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
          if (((((uVar26 <= (ulonglong)(longlong)sVar28) ||
                (cVar3 = FUN_14000d840(*(longlong *)(DAT_141d6dd50 + (longlong)sVar28 * 8) + 0x1a8,
                                       0x43), cVar3 == '\0')) ||
               ((sVar28 < 0 ||
                ((uVar26 <= (ulonglong)(longlong)sVar28 ||
                 (cVar3 = FUN_14000d840(*(longlong *)(lVar8 + (longlong)sVar28 * 8) + 0x1a8,0x44),
                 cVar3 == '\0')))))) || (sVar28 < 0)) ||
             ((uVar26 <= (ulonglong)(longlong)sVar28 ||
              (cVar3 = FUN_14000d840(*(longlong *)(lVar8 + (longlong)sVar28 * 8) + 0x1a8,0x45),
              cVar3 == '\0')))) goto LAB_140759ca6;
          if (*(char *)((longlong)puVar20 + 6) == '\0') {
            uVar16 = 0x2f;
            local_2b8 = 0x2f;
            if ((&local_2b8 < (ushort *)param_3[1]) &&
               (puVar9 = (ushort *)*param_3, puVar9 <= &local_2b8)) goto LAB_140759bb0;
            if (param_3[1] == param_3[2]) {
              FUN_14000c460(param_3,1);
              uVar16 = 0x2f;
            }
            goto LAB_140759d5e;
          }
          if (*(char *)((longlong)puVar20 + 6) == '\x01') {
            uVar16 = 0x30;
            local_2b8 = 0x30;
            if (((ushort *)param_3[1] <= &local_2b8) ||
               (puVar9 = (ushort *)*param_3, &local_2b8 < puVar9)) {
              if (param_3[1] == param_3[2]) {
                FUN_14000c460(param_3,1);
                uVar16 = 0x30;
              }
              goto LAB_140759d5e;
            }
            goto LAB_140759bb0;
          }
          local_2b8 = 0x33;
          if ((&local_2b8 < (ushort *)param_3[1]) &&
             (puVar9 = (ushort *)*param_3, puVar9 <= &local_2b8)) goto LAB_140759bb0;
LAB_140759bee:
          local_2b8 = 0x33;
          if (param_3[1] == param_3[2]) {
            FUN_14000c460(param_3,1);
          }
          if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
            *(undefined2 *)param_3[1] = 0x33;
          }
        }
LAB_140759d6a:
        param_3[1] = param_3[1] + 2;
        local_2b6[0] = CONCAT11(local_2b6[0]._1_1_,1);
        local_298 = (ulonglong *)*local_res20;
        uStack_290 = 0;
        uVar26 = local_res20[3];
        if (uVar26 != 0) {
          if (((longlong)uVar26 < 0) && (uVar26 != 0)) {
            local_298 = (ulonglong *)((longlong)local_298 + (-uVar26 - 1 >> 5) * -4 + -4);
            uStack_290 = (ulonglong)((uint)uVar26 & 0x1f);
          }
          else {
            local_298 = (ulonglong *)((longlong)local_298 + (uVar26 >> 5) * 4);
            uStack_290 = (ulonglong)((uint)uVar26 & 0x1f);
          }
        }
        local_268 = local_298;
        uStack_260 = (undefined4)uStack_290;
        uStack_25c = 0;
        FUN_1400b2ab0(local_res20,&local_2a8,&local_268,1,local_2b6);
        puVar18 = local_238;
        plVar30 = local_res10;
      }
      sVar4 = sVar4 + 1;
      param_4 = local_res20;
      param_2 = local_res10;
    } while (sVar4 < 2);
  }
  puVar21 = local_248;
  if (local_248 != (ulonglong *)0x0) {
    FUN_14000bc60(param_2,local_248 + 0x1c);
    if (*(char *)((longlong)puVar21 + 6) == '\0') {
      local_2b8 = 0;
      if ((&local_2b8 < (ushort *)param_3[1]) && (puVar9 = (ushort *)*param_3, puVar9 <= &local_2b8)
         ) {
LAB_140759e90:
        lVar8 = (longlong)local_2b6 + (-2 - (longlong)puVar9) >> 1;
        if (param_3[1] == param_3[2]) {
LAB_140759eaa:
          FUN_14000c460(param_3,1);
        }
LAB_140759eb2:
        if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
          *(undefined2 *)param_3[1] = *(undefined2 *)(*param_3 + lVar8 * 2);
        }
      }
      else {
        if (param_3[1] == param_3[2]) {
          FUN_14000c460(param_3,1);
        }
        if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
          *(undefined2 *)param_3[1] = 0;
        }
      }
    }
    else {
      if (*(char *)((longlong)puVar21 + 6) == '\x01') {
        uVar16 = 1;
        local_2b8 = 1;
        if ((&local_2b8 < (ushort *)param_3[1]) && ((ushort *)*param_3 <= &local_2b8)) {
          lVar8 = (longlong)local_2b6 + (-2 - (longlong)*param_3) >> 1;
          if (param_3[1] == param_3[2]) goto LAB_140759eaa;
          goto LAB_140759eb2;
        }
        if (param_3[1] == param_3[2]) {
          FUN_14000c460(param_3);
          uVar16 = 1;
        }
      }
      else {
        uVar16 = 2;
        local_2b8 = 2;
        if ((&local_2b8 < (ushort *)param_3[1]) &&
           (puVar9 = (ushort *)*param_3, puVar9 <= &local_2b8)) goto LAB_140759e90;
        if (param_3[1] == param_3[2]) {
          FUN_14000c460(param_3,1);
          uVar16 = 2;
        }
      }
      if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_3[1] = uVar16;
      }
    }
    param_3[1] = param_3[1] + 2;
    local_2b6[0] = CONCAT11(local_2b6[0]._1_1_,1);
    local_278 = (ulonglong *)*param_4;
    puVar18 = (ulonglong *)0x0;
    uStack_270 = 0;
    uVar26 = param_4[3];
    if (uVar26 != 0) {
      if (((longlong)uVar26 < 0) && (uVar26 != 0)) {
        lVar8 = (-uVar26 - 1 >> 5) * -4 + -4;
      }
      else {
        lVar8 = (uVar26 >> 5) * 4;
      }
      local_278 = (ulonglong *)((longlong)local_278 + lVar8);
      uStack_270 = (ulonglong)((uint)uVar26 & 0x1f);
    }
    FUN_1400b2ab0(param_4,&local_298,&local_278,1,local_2b6);
    plVar27 = (longlong *)puVar21[0x24];
    for (plVar30 = (longlong *)puVar21[0x23]; plVar30 < plVar27; plVar30 = plVar30 + 1) {
      puVar1 = (undefined8 *)*plVar30;
      sVar4 = (**(code **)*puVar1)(puVar1);
      if (sVar4 == 0) {
        iVar6 = *(int *)(puVar1 + 1);
        break;
      }
    }
    lVar8 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if (((lVar8 != 0) && (iVar6 != -1)) && (iVar5 = (int)lVar8 + -1, puVar21 = puVar18, -1 < iVar5))
    {
      do {
        iVar17 = iVar5 + (int)puVar21 >> 1;
        local_278 = *(ulonglong **)(DAT_141d7a0a8 + (longlong)iVar17 * 8);
        if ((int)local_278[0x1c] == iVar6) goto LAB_14075a0b3;
        if (iVar6 < (int)local_278[0x1c]) {
          iVar5 = iVar17 + -1;
        }
        else {
          puVar21 = (ulonglong *)(ulonglong)(iVar17 + 1);
        }
      } while ((int)puVar21 <= iVar5);
    }
    local_278 = (ulonglong *)0x0;
LAB_14075a0b3:
    plVar27 = (longlong *)local_248[0x24];
    for (plVar30 = (longlong *)local_248[0x23]; plVar30 < plVar27; plVar30 = plVar30 + 1) {
      puVar1 = (undefined8 *)*plVar30;
      sVar4 = (**(code **)*puVar1)(puVar1);
      if (sVar4 == 1) {
        iVar6 = *(int *)(puVar1 + 1);
        goto LAB_14075a103;
      }
    }
    iVar6 = -1;
LAB_14075a103:
    lVar8 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    puVar20 = local_278;
    puVar21 = puVar18;
    if (((lVar8 != 0) && (iVar6 != -1)) && (iVar5 = (int)lVar8 + -1, puVar22 = puVar18, -1 < iVar5))
    {
      do {
        iVar12 = iVar5 + (int)puVar22 >> 1;
        puVar21 = *(ulonglong **)(DAT_141d7a0a8 + (longlong)iVar12 * 8);
        iVar17 = (int)puVar21[0x1c];
        if (iVar17 == iVar6) break;
        if (iVar6 < iVar17) {
          iVar5 = iVar12 + -1;
        }
        else {
          puVar22 = (ulonglong *)(ulonglong)(iVar12 + 1);
        }
        puVar21 = puVar18;
      } while ((int)puVar22 <= iVar5);
    }
    do {
      puVar22 = puVar21;
      if ((short)puVar18 == 0) {
        puVar22 = puVar20;
      }
      if (puVar22 != (ulonglong *)0x0) {
        FUN_14000bc60(local_res10,puVar22 + 0x1c);
        lVar8 = DAT_141d6dd50;
        sVar4 = *(short *)((longlong)puVar22 + 2);
        if (sVar4 < 0) {
LAB_14075a333:
          if (*(char *)((longlong)puVar22 + 6) == '\0') {
            uVar16 = 0x31;
            local_2b8 = 0x31;
            if (((ushort *)param_3[1] <= &local_2b8) ||
               (puVar9 = (ushort *)*param_3, &local_2b8 < puVar9)) {
              if (param_3[1] == param_3[2]) {
                FUN_14000c460(param_3,1);
                uVar16 = 0x31;
              }
LAB_14075a3eb:
              if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
                *(undefined2 *)param_3[1] = uVar16;
              }
              goto LAB_14075a3f7;
            }
          }
          else if (*(char *)((longlong)puVar22 + 6) == '\x01') {
            uVar16 = 0x32;
            local_2b8 = 0x32;
            if (((ushort *)param_3[1] <= &local_2b8) ||
               (puVar9 = (ushort *)*param_3, &local_2b8 < puVar9)) {
              if (param_3[1] == param_3[2]) {
                FUN_14000c460(param_3,1);
                uVar16 = 0x32;
              }
              goto LAB_14075a3eb;
            }
          }
          else {
            local_2b8 = 0x33;
            if (((ushort *)param_3[1] <= &local_2b8) ||
               (puVar9 = (ushort *)*param_3, &local_2b8 < puVar9)) goto LAB_14075a2b3;
          }
LAB_14075a275:
          if (param_3[1] == param_3[2]) {
            FUN_14000c460(param_3,1);
          }
          if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
            *(undefined2 *)param_3[1] =
                 *(undefined2 *)
                  (*param_3 + ((longlong)local_2b6 + (-2 - (longlong)puVar9) >> 1) * 2);
          }
        }
        else {
          uVar26 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
          if (((uVar26 <= (ulonglong)(longlong)sVar4) ||
              (cVar3 = FUN_14000d840(*(longlong *)(DAT_141d6dd50 + (longlong)sVar4 * 8) + 0x1a8,0x43
                                    ), cVar3 == '\0')) ||
             ((sVar4 < 0 ||
              ((((uVar26 <= (ulonglong)(longlong)sVar4 ||
                 (cVar3 = FUN_14000d840(*(longlong *)(lVar8 + (longlong)sVar4 * 8) + 0x1a8,0x44),
                 cVar3 == '\0')) || (sVar4 < 0)) ||
               ((uVar26 <= (ulonglong)(longlong)sVar4 ||
                (cVar3 = FUN_14000d840(*(longlong *)(lVar8 + (longlong)sVar4 * 8) + 0x1a8,0x45),
                cVar3 == '\0')))))))) goto LAB_14075a333;
          if (*(char *)((longlong)puVar22 + 6) == '\0') {
            uVar33 = 0x2d;
LAB_14075a2e4:
            local_2b8 = uVar33;
            if ((&local_2b8 < (ushort *)param_3[1]) &&
               (puVar9 = (ushort *)*param_3, puVar9 <= &local_2b8)) goto LAB_14075a275;
            if (param_3[1] == param_3[2]) {
              FUN_14000c460(param_3,1);
            }
            if ((ushort *)param_3[1] != (ushort *)0x0) {
              *(ushort *)param_3[1] = uVar33;
            }
          }
          else {
            if (*(char *)((longlong)puVar22 + 6) == '\x01') {
              uVar33 = 0x2e;
              goto LAB_14075a2e4;
            }
            local_2b8 = 0x33;
            if ((&local_2b8 < (ushort *)param_3[1]) &&
               (puVar9 = (ushort *)*param_3, puVar9 <= &local_2b8)) goto LAB_14075a275;
LAB_14075a2b3:
            local_2b8 = 0x33;
            if (param_3[1] == param_3[2]) {
              FUN_14000c460(param_3,1);
            }
            if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
              *(undefined2 *)param_3[1] = 0x33;
            }
          }
        }
LAB_14075a3f7:
        param_3[1] = param_3[1] + 2;
        local_2b6[0] = CONCAT11(local_2b6[0]._1_1_,1);
        local_298 = (ulonglong *)*local_res20;
        uStack_290 = 0;
        uVar26 = local_res20[3];
        if (uVar26 != 0) {
          if (((longlong)uVar26 < 0) && (uVar26 != 0)) {
            lVar8 = (-uVar26 - 1 >> 5) * -4 + -4;
          }
          else {
            lVar8 = (uVar26 >> 5) * 4;
          }
          local_298 = (ulonglong *)((longlong)local_298 + lVar8);
          uStack_290 = (ulonglong)((uint)uVar26 & 0x1f);
        }
        local_268 = local_298;
        uStack_260 = (undefined4)uStack_290;
        uStack_25c = 0;
        FUN_1400b2ab0(local_res20,&local_2a8,&local_268,1,local_2b6);
        puVar20 = local_278;
      }
      uVar33 = (short)puVar18 + 1;
      puVar18 = (ulonglong *)(ulonglong)uVar33;
    } while ((short)uVar33 < 2);
  }
  local_200 = (ulonglong *)0x0;
  puStack_1f8 = (ulonglong *)0x0;
  puVar18 = (ulonglong *)0x0;
  local_1f0 = (ulonglong *)0x0;
  local_218 = (ulonglong *)0x0;
  puStack_210 = (ulonglong *)0x0;
  puVar20 = (ulonglong *)0x0;
  local_208 = (ulonglong *)0x0;
  local_1d0 = (ulonglong *)0x0;
  puStack_1c8 = (ulonglong *)0x0;
  puVar22 = (ulonglong *)0x0;
  local_1c0 = (ulonglong *)0x0;
  puVar21 = (ulonglong *)0x0;
  if ((longlong)(param_1[0x24] - param_1[0x23]) >> 3 == 0) {
    local_268 = (ulonglong *)0x0;
    local_298 = (ulonglong *)0x0;
  }
  else {
    uVar23 = 0;
    local_268 = (ulonglong *)0x0;
    local_298 = (ulonglong *)0x0;
    uVar26 = uVar23;
    do {
      sVar4 = (**(code **)**(undefined8 **)(uVar26 + param_1[0x23]))();
      if (sVar4 == 3) {
        iVar6 = *(int *)(*(longlong *)(uVar26 + param_1[0x23]) + 8);
        lVar8 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
        if ((lVar8 != 0) && (iVar6 != -1)) {
          iVar17 = 0;
          iVar5 = (int)lVar8 + -1;
          if (-1 < iVar5) {
            do {
              iVar12 = iVar5 + iVar17 >> 1;
              uVar31 = *(ulonglong *)(DAT_141d7a0a8 + (longlong)iVar12 * 8);
              if (*(int *)(uVar31 + 0xe0) == iVar6) goto LAB_14075a59a;
              if (iVar6 < *(int *)(uVar31 + 0xe0)) {
                iVar5 = iVar12 + -1;
              }
              else {
                iVar17 = iVar12 + 1;
              }
            } while (iVar17 <= iVar5);
          }
        }
        uVar31 = 0;
LAB_14075a59a:
        local_2a8 = uVar31;
        if (uVar31 != 0) {
          if (*(char *)(uVar31 + 6) == '\0') {
            if ((&local_2a8 < local_268) && (local_218 <= &local_2a8)) {
              lVar8 = (longlong)&local_2a8 - (longlong)local_218;
              if (local_268 == puVar20) {
                FUN_14000c2d0(&local_218,1);
                local_268 = puStack_210;
                puVar20 = local_208;
              }
              if (local_268 != (ulonglong *)0x0) {
                *local_268 = local_218[lVar8 >> 3];
              }
              local_268 = local_268 + 1;
              puStack_210 = local_268;
            }
            else {
              if (local_268 == puVar20) {
                FUN_14000c2d0(&local_218,1);
                local_268 = puStack_210;
                puVar20 = local_208;
              }
              if (local_268 != (ulonglong *)0x0) {
                *local_268 = uVar31;
              }
              local_268 = local_268 + 1;
              puStack_210 = local_268;
            }
          }
          else if (*(char *)(uVar31 + 6) == '\x01') {
            if ((&local_2a8 < puVar21) && (local_200 <= &local_2a8)) {
              lVar8 = (longlong)&local_2a8 - (longlong)local_200;
              if (puVar21 == puVar18) {
                FUN_14000c2d0(&local_200,1);
                puVar18 = local_1f0;
                puVar21 = puStack_1f8;
              }
              if (puVar21 != (ulonglong *)0x0) {
                *puVar21 = local_200[lVar8 >> 3];
              }
              puVar21 = puVar21 + 1;
              puStack_1f8 = puVar21;
            }
            else {
              if (puVar21 == puVar18) {
                FUN_14000c2d0(&local_200,1);
                puVar18 = local_1f0;
                puVar21 = puStack_1f8;
              }
              if (puVar21 != (ulonglong *)0x0) {
                *puVar21 = uVar31;
              }
              puVar21 = puVar21 + 1;
              puStack_1f8 = puVar21;
            }
          }
          else {
            if ((&local_2a8 < local_298) && (local_1d0 <= &local_2a8)) {
              lVar8 = (longlong)&local_2a8 - (longlong)local_1d0;
              if (local_298 == puVar22) {
                FUN_14000c2d0(&local_1d0,1);
                local_298 = puStack_1c8;
                puVar22 = local_1c0;
              }
              if (local_298 != (ulonglong *)0x0) {
                *local_298 = local_1d0[lVar8 >> 3];
              }
            }
            else {
              if (local_298 == puVar22) {
                FUN_14000c2d0(&local_1d0,1);
                local_298 = puStack_1c8;
                puVar22 = local_1c0;
              }
              if (local_298 != (ulonglong *)0x0) {
                *local_298 = uVar31;
              }
            }
            local_298 = local_298 + 1;
            puStack_1c8 = local_298;
          }
        }
      }
      uVar25 = (int)uVar23 + 1;
      uVar23 = (ulonglong)uVar25;
      uVar26 = uVar26 + 8;
      param_3 = local_res18;
    } while ((ulonglong)(longlong)(int)uVar25 <
             (ulonglong)((longlong)(param_1[0x24] - param_1[0x23]) >> 3));
  }
  puVar22 = local_218;
  puVar20 = local_298;
  puVar18 = local_res20;
  plVar30 = local_res10;
  uVar26 = (longlong)puVar21 - (longlong)local_200 >> 3;
  plVar27 = plVar30;
  if (uVar26 != 1) {
    puVar21 = local_res20;
    if ((uVar26 != 0) && (iVar6 = 0, puVar29 = local_200, uVar26 != 0)) {
      do {
        local_2b6[0] = CONCAT11(local_2b6[0]._1_1_,1);
        puVar19 = (undefined4 *)(*puVar29 + 0xe0);
        if ((puVar19 < (undefined4 *)plVar30[1]) &&
           (puVar2 = (undefined4 *)*plVar30, puVar2 <= puVar19)) {
          if (plVar30[1] == plVar30[2]) {
            FUN_14000c390(plVar30,1);
          }
          puVar13 = (undefined4 *)plVar30[1];
          if (puVar13 != (undefined4 *)0x0) {
            uVar7 = *(undefined4 *)(*plVar30 + ((longlong)puVar19 - (longlong)puVar2 >> 2) * 4);
LAB_14075aa38:
            *puVar13 = uVar7;
          }
        }
        else {
          if (plVar30[1] == plVar30[2]) {
            FUN_14000c390(plVar30,1);
          }
          puVar13 = (undefined4 *)plVar30[1];
          if (puVar13 != (undefined4 *)0x0) {
            uVar7 = *puVar19;
            goto LAB_14075aa38;
          }
        }
        plVar30[1] = plVar30[1] + 4;
        if (iVar6 == 0) {
          local_2b8 = 6;
          if ((&local_2b8 < (ushort *)param_3[1]) &&
             (puVar9 = (ushort *)*param_3, puVar9 <= &local_2b8)) {
LAB_14075aa64:
            if (param_3[1] == param_3[2]) {
              FUN_14000c460(param_3,1);
            }
            if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
              *(undefined2 *)param_3[1] =
                   *(undefined2 *)
                    (*param_3 + ((longlong)local_2b6 + (-2 - (longlong)puVar9) >> 1) * 2);
            }
            param_3[1] = param_3[1] + 2;
          }
          else {
            if (param_3[1] == param_3[2]) {
              FUN_14000c460(param_3,1);
            }
            if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
              *(undefined2 *)param_3[1] = 6;
            }
            param_3[1] = param_3[1] + 2;
          }
        }
        else if (iVar6 == (int)uVar26 + -1) {
          local_2b8 = 0x11;
          if ((&local_2b8 < (ushort *)param_3[1]) &&
             (puVar9 = (ushort *)*param_3, puVar9 <= &local_2b8)) goto LAB_14075aa64;
          if (param_3[1] == param_3[2]) {
            FUN_14000c460(param_3,1);
          }
          if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
            *(undefined2 *)param_3[1] = 0x11;
          }
          param_3[1] = param_3[1] + 2;
        }
        else if (iVar6 == 1) {
          local_2b8 = 7;
          if ((&local_2b8 < (ushort *)param_3[1]) &&
             (puVar9 = (ushort *)*param_3, puVar9 <= &local_2b8)) goto LAB_14075aa64;
          if (param_3[1] == param_3[2]) {
            FUN_14000c460(param_3,1);
          }
          if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
            *(undefined2 *)param_3[1] = 7;
          }
          param_3[1] = param_3[1] + 2;
        }
        else {
          if (iVar6 == 2) {
            local_2b8 = 8;
          }
          else if (iVar6 == 3) {
            local_2b8 = 9;
          }
          else if (iVar6 == 4) {
            local_2b8 = 10;
          }
          else if (iVar6 == 5) {
            local_2b8 = 0xb;
          }
          else if (iVar6 == 6) {
            local_2b8 = 0xc;
          }
          else if (iVar6 == 7) {
            local_2b8 = 0xd;
          }
          else {
            if (iVar6 != 8) {
              if (iVar6 == 9) {
                local_2b8 = 0xf;
                FUN_14000be20(param_3,&local_2b8);
              }
              else {
                local_2b8 = 0x10;
                FUN_14000be20(param_3,&local_2b8);
                local_2b6[0] = local_2b6[0] & 0xff00;
              }
              goto LAB_14075ac20;
            }
            local_2b8 = 0xe;
          }
          FUN_14000be20(param_3,&local_2b8);
        }
LAB_14075ac20:
        FUN_1400b28a0(puVar18,local_2b6);
        iVar6 = iVar6 + 1;
        puVar22 = local_218;
        puVar21 = local_res20;
        puVar20 = local_298;
        puVar29 = puVar29 + 1;
        plVar27 = local_res10;
      } while ((ulonglong)(longlong)iVar6 < uVar26);
    }
    goto LAB_14075ac6f;
  }
  puVar19 = (undefined4 *)(*local_200 + 0xe0);
  if ((puVar19 < (undefined4 *)local_res10[1]) &&
     (puVar2 = (undefined4 *)*local_res10, puVar2 <= puVar19)) {
    if (local_res10[1] == local_res10[2]) {
      FUN_14000c390(local_res10,1);
    }
    puVar13 = (undefined4 *)plVar30[1];
    if (puVar13 != (undefined4 *)0x0) {
      uVar7 = *(undefined4 *)(*plVar30 + ((longlong)puVar19 - (longlong)puVar2 >> 2) * 4);
LAB_14075a83e:
      *puVar13 = uVar7;
    }
  }
  else {
    if (local_res10[1] == local_res10[2]) {
      FUN_14000c390(local_res10,1);
    }
    puVar13 = (undefined4 *)plVar30[1];
    if (puVar13 != (undefined4 *)0x0) {
      uVar7 = *puVar19;
      goto LAB_14075a83e;
    }
  }
  plVar30[1] = plVar30[1] + 4;
  local_2b8 = 0x12;
  if ((&local_2b8 < (ushort *)param_3[1]) && (puVar9 = (ushort *)*param_3, puVar9 <= &local_2b8)) {
    if (param_3[1] == param_3[2]) {
      FUN_14000c460(param_3,1);
    }
    if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
      *(undefined2 *)param_3[1] =
           *(undefined2 *)(*param_3 + ((longlong)local_2b6 + (-2 - (longlong)puVar9) >> 1) * 2);
    }
  }
  else {
    if (param_3[1] == param_3[2]) {
      FUN_14000c460(param_3,1);
    }
    if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
      *(undefined2 *)param_3[1] = 0x12;
    }
  }
  puVar21 = local_res20;
  param_3[1] = param_3[1] + 2;
  local_2b6[0] = CONCAT11(local_2b6[0]._1_1_,1);
  local_2a8 = *local_res20;
  uStack_2a0 = 0;
  uVar26 = local_res20[3];
  if (uVar26 != 0) {
    if (((longlong)uVar26 < 0) && (uVar26 != 0)) {
      lVar8 = (-uVar26 - 1 >> 5) * -4 + -4;
    }
    else {
      lVar8 = (uVar26 >> 5) * 4;
    }
    local_2a8 = local_2a8 + lVar8;
    uStack_2a0 = (ulonglong)((uint)uVar26 & 0x1f);
  }
  FUN_1400b2ab0(local_res20,&local_1b8,&local_2a8,1,local_2b6);
LAB_14075ac6f:
  puVar18 = (ulonglong *)((longlong)local_268 - (longlong)puVar22 >> 3);
  local_268 = puVar18;
  if (puVar18 == (ulonglong *)0x1) {
    FUN_14000bc60(plVar27,*puVar22 + 0xe0);
    local_2b8 = 0x1e;
    FUN_14000be20(param_3,&local_2b8);
    local_2b6[0] = CONCAT11(local_2b6[0]._1_1_,1);
    FUN_1400b28a0(puVar21);
  }
  else if ((puVar18 != (ulonglong *)0x0) && (iVar6 = 0, puVar18 != (ulonglong *)0x0)) {
    do {
      local_2b6[0] = CONCAT11(local_2b6[0]._1_1_,1);
      FUN_14000bc60(plVar27,*puVar22 + 0xe0);
      if (iVar6 == 0) {
        local_2b8 = 0x13;
LAB_14075ad67:
        FUN_14000be20(param_3,&local_2b8);
      }
      else {
        if (iVar6 == (int)puVar18 + -1) {
          local_2b8 = 0x1f;
          goto LAB_14075ad67;
        }
        if (iVar6 == 1) {
          local_2b8 = 0x14;
          goto LAB_14075ad67;
        }
        if (iVar6 == 2) {
          local_2b8 = 0x15;
          goto LAB_14075ad67;
        }
        if (iVar6 == 3) {
          local_2b8 = 0x16;
          goto LAB_14075ad67;
        }
        if (iVar6 == 4) {
          local_2b8 = 0x17;
          goto LAB_14075ad67;
        }
        if (iVar6 == 5) {
          local_2b8 = 0x18;
          goto LAB_14075ad67;
        }
        if (iVar6 == 6) {
          local_2b8 = 0x19;
          goto LAB_14075ad67;
        }
        if (iVar6 == 7) {
          local_2b8 = 0x1a;
          goto LAB_14075ad67;
        }
        if (iVar6 == 8) {
          local_2b8 = 0x1b;
          goto LAB_14075ad67;
        }
        if (iVar6 == 9) {
          local_2b8 = 0x1c;
          FUN_14000be20(param_3,&local_2b8);
        }
        else {
          local_2b8 = 0x1d;
          FUN_14000be20(param_3,&local_2b8);
          local_2b6[0] = local_2b6[0] & 0xff00;
        }
      }
      FUN_1400b28a0(puVar21);
      iVar6 = iVar6 + 1;
      puVar22 = puVar22 + 1;
      puVar20 = local_298;
    } while ((ulonglong *)(longlong)iVar6 < puVar18);
  }
  uVar26 = (longlong)puVar20 - (longlong)local_1d0 >> 3;
  if (uVar26 == 1) {
    FUN_14000bc60(plVar27,*local_1d0 + 0xe0);
    local_2b8 = 0x2c;
    FUN_14000be20(param_3,&local_2b8);
    puVar18 = local_res20;
    local_2b6[0] = CONCAT11(local_2b6[0]._1_1_,1);
    FUN_1400b28a0(local_res20);
  }
  else {
    iVar6 = 0;
    puVar20 = local_1d0;
    puVar18 = local_res20;
    if (uVar26 != 0) {
      do {
        local_2b6[0] = CONCAT11(local_2b6[0]._1_1_,1);
        FUN_14000bc60(plVar27,*puVar20 + 0xe0);
        if (iVar6 == 0) {
          local_2b8 = 0x20;
LAB_14075aebf:
          FUN_14000be20(param_3,&local_2b8);
        }
        else {
          if (iVar6 == (int)uVar26 + -1) {
            local_2b8 = 0x2b;
            goto LAB_14075aebf;
          }
          if (iVar6 == 1) {
            local_2b8 = 0x21;
            goto LAB_14075aebf;
          }
          if (iVar6 == 2) {
            local_2b8 = 0x22;
            goto LAB_14075aebf;
          }
          if (iVar6 == 3) {
            local_2b8 = 0x23;
            goto LAB_14075aebf;
          }
          if (iVar6 == 4) {
            local_2b8 = 0x24;
            goto LAB_14075aebf;
          }
          if (iVar6 == 5) {
            local_2b8 = 0x25;
            goto LAB_14075aebf;
          }
          if (iVar6 == 6) {
            local_2b8 = 0x26;
            goto LAB_14075aebf;
          }
          if (iVar6 == 7) {
            local_2b8 = 0x27;
            goto LAB_14075aebf;
          }
          if (iVar6 == 8) {
            local_2b8 = 0x28;
            goto LAB_14075aebf;
          }
          if (iVar6 == 9) {
            local_2b8 = 0x29;
            FUN_14000be20(param_3,&local_2b8);
          }
          else {
            local_2b8 = 0x2a;
            FUN_14000be20(param_3,&local_2b8);
            local_2b6[0] = local_2b6[0] & 0xff00;
          }
        }
        FUN_1400b28a0(puVar21);
        iVar6 = iVar6 + 1;
        puVar20 = puVar20 + 1;
        puVar18 = local_res20;
      } while ((ulonglong)(longlong)iVar6 < uVar26);
    }
  }
  uVar26 = 0;
  FUN_1400025a0(&local_140);
  FUN_1400520a0(local_d0);
  FUN_1400025a0(&local_158);
  FUN_1400520a0(local_f0);
  FUN_1400025a0(&local_170);
  FUN_1400520a0(local_110);
  FUN_1400025a0(&local_188);
  FUN_1400520a0(local_68);
  FUN_1400025a0(&local_1a0);
  FUN_1400520a0(local_88);
  FUN_1400025a0(&local_128);
  FUN_1400520a0(local_a8);
  puVar21 = local_240;
  if (local_240 != (ulonglong *)0x0) {
    local_2b6[0] = CONCAT11(local_2b6[0]._1_1_,1);
    uVar23 = uVar26;
    uVar31 = uVar26;
    if ((longlong)(local_240[0x24] - local_240[0x23]) >> 3 != 0) {
      do {
        sVar4 = (**(code **)**(undefined8 **)(uVar23 + puVar21[0x23]))();
        if ((sVar4 == 3) &&
           (local_298 = (ulonglong *)FUN_140004650(&DAT_141d7a048), local_298 != (ulonglong *)0x0))
        {
          if (local_298 == param_1) {
            local_2b6[0] = local_2b6[0] & 0xff00;
          }
          else {
            if (*(char *)((longlong)local_298 + 6) == '\0') {
              FUN_140050070(&local_158,&local_298);
              puVar14 = local_f0;
            }
            else if (*(char *)((longlong)local_298 + 6) == '\x01') {
              FUN_140050070(&local_140,&local_298);
              puVar14 = local_d0;
            }
            else {
              FUN_140050070(&local_170,&local_298);
              puVar14 = local_110;
            }
            FUN_1400b28a0(puVar14);
          }
        }
        uVar25 = (int)uVar31 + 1;
        uVar23 = uVar23 + 8;
        param_3 = local_res18;
        uVar31 = (ulonglong)uVar25;
      } while ((ulonglong)(longlong)(int)uVar25 <
               (ulonglong)((longlong)(puVar21[0x24] - puVar21[0x23]) >> 3));
    }
  }
  puVar21 = local_248;
  if (local_248 != (ulonglong *)0x0) {
    local_2b6[0] = CONCAT11(local_2b6[0]._1_1_,1);
    uVar23 = uVar26;
    if ((longlong)(local_248[0x24] - local_248[0x23]) >> 3 != 0) {
      do {
        sVar4 = (**(code **)**(undefined8 **)(uVar26 + puVar21[0x23]))();
        if ((sVar4 == 3) &&
           (local_298 = (ulonglong *)FUN_140004650(&DAT_141d7a048), local_298 != (ulonglong *)0x0))
        {
          if (local_298 == param_1) {
            local_2b6[0] = local_2b6[0] & 0xff00;
          }
          else {
            if (*(char *)((longlong)local_298 + 6) == '\0') {
              FUN_140050070(&local_1a0,&local_298);
              puVar14 = local_88;
            }
            else if (*(char *)((longlong)local_298 + 6) == '\x01') {
              FUN_140050070(&local_188,&local_298);
              puVar14 = local_68;
            }
            else {
              FUN_140050070(&local_128,&local_298);
              puVar14 = local_a8;
            }
            FUN_1400b28a0(puVar14);
          }
        }
        uVar25 = (int)uVar23 + 1;
        uVar26 = uVar26 + 8;
        uVar23 = (ulonglong)uVar25;
        puVar18 = local_res20;
      } while ((ulonglong)(longlong)(int)uVar25 <
               (ulonglong)((longlong)(puVar21[0x24] - puVar21[0x23]) >> 3));
    }
  }
  puVar20 = (ulonglong *)0x0;
  if (local_240 != (ulonglong *)0x0) {
    local_2a8 = local_2a8 & 0xffffffff00000000;
    local_268 = (ulonglong *)(local_138 - (longlong)local_140 >> 3);
    if (local_268 != (ulonglong *)0x0) {
      local_2b6[0] = local_2b6[0] & 0xff00;
      puVar21 = local_140;
      puVar22 = puVar20;
      do {
        local_298 = puVar21;
        FUN_14000bc60(plVar27,*puVar21 + 0xe0);
        iVar6 = FUN_140051780(*puVar21,&local_188);
        if (iVar6 == -1) {
          uVar10 = FUN_1400b2940(local_d0,&local_1e8,puVar20);
          cVar3 = FUN_1400b2850(uVar10);
          local_2b8 = 0x41;
          if (cVar3 == '\0') {
            local_2b8 = 0x44;
          }
        }
        else {
          uVar10 = FUN_1400b2940(local_d0,&local_1b8,puVar20);
          cVar3 = FUN_1400b2850(uVar10);
          if (cVar3 == '\0') {
            local_2b8 = 0x37;
          }
          else {
            local_2b8 = 0x34;
          }
        }
        FUN_14000be20(param_3,&local_2b8);
        FUN_1400b28a0(puVar18);
        puVar20 = local_res20;
        plVar30 = local_res10;
        uVar26 = *puVar21;
        uVar31 = 0;
        uVar23 = uVar31;
        iVar6 = (int)puVar22;
        if (*(longlong *)(uVar26 + 0x120) - *(longlong *)(uVar26 + 0x118) >> 3 != 0) {
          do {
            sVar4 = (**(code **)**(undefined8 **)(uVar31 + *(longlong *)(uVar26 + 0x118)))();
            if ((sVar4 == 3) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) {
              FUN_14000bc60(plVar30,lVar8 + 0xe0);
              local_2b8 = 0x3e;
              if (*(char *)(lVar8 + 6) == '\0') {
                local_2b8 = 0x3d;
              }
              FUN_14000be20(param_3,&local_2b8);
              local_2b8 = local_2b8 & 0xff00;
              FUN_1400b28a0(puVar20);
            }
            uVar25 = (int)uVar23 + 1;
            uVar31 = uVar31 + 8;
            uVar23 = (ulonglong)uVar25;
          } while ((ulonglong)(longlong)(int)uVar25 <
                   (ulonglong)(*(longlong *)(uVar26 + 0x120) - *(longlong *)(uVar26 + 0x118) >> 3));
          puVar21 = local_298;
          puVar18 = local_res20;
          iVar6 = (uint)local_2a8;
        }
        uVar25 = iVar6 + 1;
        puVar22 = (ulonglong *)(ulonglong)uVar25;
        local_2a8 = CONCAT44(local_2a8._4_4_,uVar25);
        puVar21 = puVar21 + 1;
        puVar20 = (ulonglong *)(longlong)(int)uVar25;
        plVar27 = local_res10;
      } while (puVar20 < local_268);
    }
    puVar21 = (ulonglong *)0x0;
    iVar6 = 0;
    local_2a8 = local_2a8 & 0xffffffff00000000;
    local_268 = (ulonglong *)(local_150 - (longlong)local_158 >> 3);
    if (local_268 != (ulonglong *)0x0) {
      local_2b8 = local_2b8 & 0xff00;
      puVar20 = local_158;
      do {
        local_298 = puVar20;
        FUN_14000bc60(local_res10,*puVar20 + 0xe0);
        iVar5 = FUN_140051780(*puVar20,&local_1a0);
        if (iVar5 == -1) {
          uVar10 = FUN_1400b2940(local_f0,&local_1b8,puVar21);
          cVar3 = FUN_1400b2850(uVar10);
          local_2b6[0] = 0x42;
          if (cVar3 == '\0') {
            local_2b6[0] = 0x45;
          }
        }
        else {
          uVar10 = FUN_1400b2940(local_f0,&local_1e8,puVar21);
          cVar3 = FUN_1400b2850(uVar10);
          if (cVar3 == '\0') {
            local_2b6[0] = 0x38;
          }
          else {
            local_2b6[0] = 0x35;
          }
        }
        FUN_14000be20(param_3,local_2b6);
        FUN_1400b28a0(puVar18);
        puVar21 = local_res20;
        plVar30 = local_res10;
        uVar26 = *puVar20;
        uVar31 = 0;
        uVar23 = uVar31;
        if (*(longlong *)(uVar26 + 0x120) - *(longlong *)(uVar26 + 0x118) >> 3 != 0) {
          do {
            sVar4 = (**(code **)**(undefined8 **)(uVar31 + *(longlong *)(uVar26 + 0x118)))();
            if ((sVar4 == 3) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) {
              FUN_14000bc60(plVar30,lVar8 + 0xe0);
              local_2b6[0] = 0x3e;
              if (*(char *)(lVar8 + 6) == '\0') {
                local_2b6[0] = 0x3d;
              }
              FUN_14000be20(param_3,local_2b6);
              local_2b6[0] = local_2b6[0] & 0xff00;
              FUN_1400b28a0(puVar21);
            }
            uVar25 = (int)uVar23 + 1;
            uVar31 = uVar31 + 8;
            uVar23 = (ulonglong)uVar25;
          } while ((ulonglong)(longlong)(int)uVar25 <
                   (ulonglong)(*(longlong *)(uVar26 + 0x120) - *(longlong *)(uVar26 + 0x118) >> 3));
          puVar20 = local_298;
          puVar18 = local_res20;
          iVar6 = (uint)local_2a8;
        }
        iVar6 = iVar6 + 1;
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar6);
        puVar20 = puVar20 + 1;
        puVar21 = (ulonglong *)(longlong)iVar6;
      } while (puVar21 < local_268);
    }
    puVar20 = (ulonglong *)0x0;
    local_2a8 = local_2a8 & 0xffffffff00000000;
    local_298 = local_170;
    local_268 = (ulonglong *)(local_168 - (longlong)local_170 >> 3);
    puVar21 = local_248;
    if (local_268 != (ulonglong *)0x0) {
      local_2b8 = local_2b8 & 0xff00;
      puVar22 = local_170;
      puVar29 = puVar20;
      do {
        local_298 = puVar22;
        FUN_14000bc60(local_res10,*puVar22 + 0xe0);
        iVar6 = FUN_140051780(*puVar22,&local_1a0);
        if (iVar6 == -1) {
          uVar10 = FUN_1400b2940(local_110,&local_1b8,puVar20);
          cVar3 = FUN_1400b2850(uVar10);
          local_2b6[0] = 0x43;
          if (cVar3 == '\0') {
            local_2b6[0] = 0x46;
          }
        }
        else {
          uVar10 = FUN_1400b2940(local_110,&local_1e8,puVar20);
          cVar3 = FUN_1400b2850(uVar10);
          if (cVar3 == '\0') {
            local_2b6[0] = 0x39;
          }
          else {
            local_2b6[0] = 0x36;
          }
        }
        FUN_14000be20(param_3,local_2b6);
        FUN_1400b28a0(puVar18);
        puVar21 = local_res20;
        plVar30 = local_res10;
        uVar26 = *puVar22;
        uVar31 = 0;
        uVar23 = uVar31;
        iVar6 = (int)puVar29;
        if (*(longlong *)(uVar26 + 0x120) - *(longlong *)(uVar26 + 0x118) >> 3 != 0) {
          do {
            sVar4 = (**(code **)**(undefined8 **)(uVar31 + *(longlong *)(uVar26 + 0x118)))();
            if ((sVar4 == 3) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) {
              FUN_14000bc60(plVar30,lVar8 + 0xe0);
              local_2b6[0] = 0x3e;
              if (*(char *)(lVar8 + 6) == '\0') {
                local_2b6[0] = 0x3d;
              }
              FUN_14000be20(param_3,local_2b6);
              local_2b6[0] = local_2b6[0] & 0xff00;
              FUN_1400b28a0(puVar21);
            }
            uVar25 = (int)uVar23 + 1;
            uVar31 = uVar31 + 8;
            uVar23 = (ulonglong)uVar25;
          } while ((ulonglong)(longlong)(int)uVar25 <
                   (ulonglong)(*(longlong *)(uVar26 + 0x120) - *(longlong *)(uVar26 + 0x118) >> 3));
          puVar22 = local_298;
          puVar18 = local_res20;
          iVar6 = (uint)local_2a8;
        }
        uVar25 = iVar6 + 1;
        puVar29 = (ulonglong *)(ulonglong)uVar25;
        local_2a8 = CONCAT44(local_2a8._4_4_,uVar25);
        puVar22 = puVar22 + 1;
        puVar20 = (ulonglong *)(longlong)(int)uVar25;
        puVar21 = local_248;
        local_298 = puVar22;
      } while (puVar20 < local_268);
    }
  }
  puVar22 = (ulonglong *)0x0;
  puVar20 = (ulonglong *)0x0;
  if (puVar21 != (ulonglong *)0x0) {
    local_2a8 = local_2a8 & 0xffffffff00000000;
    local_268 = (ulonglong *)(local_180 - (longlong)local_188 >> 3);
    puVar21 = puVar22;
    puVar20 = local_188;
    puVar29 = puVar22;
    if (local_268 != (ulonglong *)0x0) {
      do {
        uVar26 = *puVar20;
        local_298 = puVar20;
        iVar5 = FUN_140051780(uVar26);
        iVar6 = (int)puVar29;
        if (iVar5 == -1) {
          FUN_14000bc60(local_res10,uVar26 + 0xe0);
          uVar10 = FUN_1400b2940(local_68,&local_1e8,puVar22);
          cVar3 = FUN_1400b2850(uVar10);
          if (cVar3 == '\0') {
            local_2b8 = 0x44;
          }
          else {
            local_2b8 = 0x41;
          }
          FUN_14000be20(param_3,&local_2b8);
          local_2b8 = local_2b8 & 0xff00;
          FUN_1400b28a0(puVar18);
          puVar18 = local_res20;
          plVar30 = local_res10;
          uVar26 = *puVar20;
          puVar21 = (ulonglong *)0x0;
          puVar22 = puVar21;
          if (*(longlong *)(uVar26 + 0x120) - *(longlong *)(uVar26 + 0x118) >> 3 != 0) {
            do {
              sVar4 = (**(code **)**(undefined8 **)
                                    ((longlong)puVar21 + *(longlong *)(uVar26 + 0x118)))();
              if ((sVar4 == 3) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) {
                FUN_14000bc60(plVar30,lVar8 + 0xe0);
                local_2b8 = 0x3e;
                if (*(char *)(lVar8 + 6) == '\0') {
                  local_2b8 = 0x3d;
                }
                FUN_14000be20(param_3,&local_2b8);
                local_2b8 = local_2b8 & 0xff00;
                FUN_1400b28a0(puVar18);
              }
              uVar25 = (int)puVar22 + 1;
              puVar21 = puVar21 + 1;
              puVar22 = (ulonglong *)(ulonglong)uVar25;
            } while ((ulonglong)(longlong)(int)uVar25 <
                     (ulonglong)(*(longlong *)(uVar26 + 0x120) - *(longlong *)(uVar26 + 0x118) >> 3)
                    );
            puVar21 = (ulonglong *)0x0;
            puVar20 = local_298;
            iVar6 = (uint)local_2a8;
          }
        }
        uVar25 = iVar6 + 1;
        puVar29 = (ulonglong *)(ulonglong)uVar25;
        local_2a8 = CONCAT44(local_2a8._4_4_,uVar25);
        puVar20 = puVar20 + 1;
        puVar22 = (ulonglong *)(longlong)(int)uVar25;
        puVar18 = local_res20;
      } while (puVar22 < local_268);
    }
    uVar26 = (ulonglong)puVar21 & 0xffffffff;
    local_268 = (ulonglong *)(local_198 - (longlong)local_1a0 >> 3);
    puVar18 = puVar21;
    puVar20 = local_1a0;
    local_2a8._0_4_ = (uint)puVar21;
    if (local_268 != (ulonglong *)0x0) {
      do {
        uVar23 = *puVar20;
        local_298 = puVar20;
        iVar6 = FUN_140051780(uVar23);
        uVar25 = (uint)uVar26;
        if (iVar6 == -1) {
          FUN_14000bc60(local_res10,uVar23 + 0xe0);
          uVar10 = FUN_1400b2940(local_88,&local_1e8,puVar21);
          cVar3 = FUN_1400b2850(uVar10);
          local_2b8 = 0x42;
          if (cVar3 == '\0') {
            local_2b8 = 0x45;
          }
          FUN_14000be20(param_3,&local_2b8);
          local_2b8 = local_2b8 & 0xff00;
          FUN_1400b28a0(local_res20);
          puVar21 = local_res20;
          plVar30 = local_res10;
          uVar26 = *puVar20;
          puVar18 = (ulonglong *)0x0;
          puVar22 = puVar18;
          if (*(longlong *)(uVar26 + 0x120) - *(longlong *)(uVar26 + 0x118) >> 3 != 0) {
            do {
              sVar4 = (**(code **)**(undefined8 **)
                                    ((longlong)puVar18 + *(longlong *)(uVar26 + 0x118)))();
              if ((sVar4 == 3) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) {
                FUN_14000bc60(plVar30,lVar8 + 0xe0);
                local_2b8 = 0x3e;
                if (*(char *)(lVar8 + 6) == '\0') {
                  local_2b8 = 0x3d;
                }
                FUN_14000be20(param_3,&local_2b8);
                local_2b8 = local_2b8 & 0xff00;
                FUN_1400b28a0(puVar21);
              }
              uVar25 = (int)puVar22 + 1;
              puVar18 = puVar18 + 1;
              puVar22 = (ulonglong *)(ulonglong)uVar25;
            } while ((ulonglong)(longlong)(int)uVar25 <
                     (ulonglong)(*(longlong *)(uVar26 + 0x120) - *(longlong *)(uVar26 + 0x118) >> 3)
                    );
            puVar18 = (ulonglong *)0x0;
            puVar20 = local_298;
            uVar25 = (uint)local_2a8;
          }
        }
        local_2a8._0_4_ = uVar25 + 1;
        uVar26 = (ulonglong)(uint)local_2a8;
        puVar21 = (ulonglong *)(longlong)(int)(uint)local_2a8;
        puVar20 = puVar20 + 1;
      } while (puVar21 < local_268);
    }
    uVar26 = (ulonglong)puVar18 & 0xffffffff;
    local_2a8 = CONCAT44(local_2a8._4_4_,(int)puVar18);
    local_298 = local_128;
    local_268 = (ulonglong *)(local_120 - (longlong)local_128 >> 3);
    puVar21 = local_128;
    puVar20 = local_248;
    if (local_268 != (ulonglong *)0x0) {
      do {
        uVar23 = *puVar21;
        local_298 = puVar21;
        iVar5 = FUN_140051780(uVar23);
        iVar6 = (int)uVar26;
        if (iVar5 == -1) {
          FUN_14000bc60(local_res10,uVar23 + 0xe0);
          uVar10 = FUN_1400b2940(local_a8,&local_1e8,puVar18);
          cVar3 = FUN_1400b2850(uVar10);
          local_2b8 = 0x43;
          if (cVar3 == '\0') {
            local_2b8 = 0x46;
          }
          FUN_14000be20(param_3,&local_2b8);
          local_2b8 = local_2b8 & 0xff00;
          FUN_1400b28a0(local_res20);
          puVar18 = local_res20;
          plVar30 = local_res10;
          uVar26 = *puVar21;
          uVar31 = 0;
          uVar23 = uVar31;
          if (*(longlong *)(uVar26 + 0x120) - *(longlong *)(uVar26 + 0x118) >> 3 != 0) {
            do {
              sVar4 = (**(code **)**(undefined8 **)(uVar31 + *(longlong *)(uVar26 + 0x118)))();
              if ((sVar4 == 3) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) {
                FUN_14000bc60(plVar30,lVar8 + 0xe0);
                local_2b8 = 0x3e;
                if (*(char *)(lVar8 + 6) == '\0') {
                  local_2b8 = 0x3d;
                }
                FUN_14000be20(param_3,&local_2b8);
                local_2b8 = local_2b8 & 0xff00;
                FUN_1400b28a0(puVar18);
              }
              uVar25 = (int)uVar23 + 1;
              uVar31 = uVar31 + 8;
              uVar23 = (ulonglong)uVar25;
            } while ((ulonglong)(longlong)(int)uVar25 <
                     (ulonglong)(*(longlong *)(uVar26 + 0x120) - *(longlong *)(uVar26 + 0x118) >> 3)
                    );
            puVar21 = local_298;
            iVar6 = (uint)local_2a8;
          }
        }
        uVar25 = iVar6 + 1;
        uVar26 = (ulonglong)uVar25;
        local_2a8 = CONCAT44(local_2a8._4_4_,uVar25);
        local_298 = puVar21 + 1;
        puVar18 = (ulonglong *)(longlong)(int)uVar25;
        puVar21 = local_298;
        puVar20 = local_248;
      } while (puVar18 < local_268);
    }
  }
  puVar21 = local_238;
  if (local_238 != (ulonglong *)0x0) {
    FUN_1400025a0(&local_298);
    FUN_1400025a0(&local_1b8);
    FUN_1400025a0(&local_268);
    FUN_1400025a0(&local_1e8);
    puVar18 = local_240;
    uVar23 = 0;
    uVar26 = uVar23;
    if ((longlong)(puVar21[0x24] - puVar21[0x23]) >> 3 != 0) {
      do {
        sVar4 = (**(code **)**(undefined8 **)(uVar23 + puVar21[0x23]))();
        if ((((sVar4 == 3) &&
             (local_238 = (ulonglong *)FUN_140004650(&DAT_141d7a048), local_238 != (ulonglong *)0x0)
             ) && (local_238 != puVar18)) && (local_238 != puVar20)) {
          if (*(char *)((longlong)local_238 + 6) == '\0') {
            ppuVar15 = &local_1b8;
          }
          else if (*(char *)((longlong)local_238 + 6) == '\x01') {
            ppuVar15 = &local_298;
          }
          else {
            ppuVar15 = &local_268;
          }
          FUN_140050070(ppuVar15,&local_238);
          FUN_140050070(&local_1e8);
        }
        uVar25 = (int)uVar26 + 1;
        uVar23 = uVar23 + 8;
        uVar26 = (ulonglong)uVar25;
      } while ((ulonglong)(longlong)(int)uVar25 <
               (ulonglong)((longlong)(puVar21[0x24] - puVar21[0x23]) >> 3));
    }
    puVar21 = local_res20;
    plVar30 = local_res10;
    iVar6 = 0;
    uVar26 = (longlong)(uStack_290 - (longlong)local_298) >> 3;
    if (uVar26 != 0) {
      local_2b8 = local_2b8 & 0xff00;
      puVar18 = local_298;
      do {
        FUN_14000bc60(plVar30,*puVar18 + 0xe0);
        local_2b6[0] = 0x3c;
        FUN_14000be20(param_3,local_2b6);
        FUN_1400b28a0(puVar21,&local_2b8);
        iVar5 = FUN_140740200(*puVar18);
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar5);
        if ((iVar5 != -1) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) {
          FUN_14000bc60(plVar30,&local_2a8);
          local_2b6[0] = 0x3b;
          if (*(char *)(lVar8 + 6) != '\0') {
            local_2b6[0] = 0x3c;
          }
          FUN_14000be20(param_3,local_2b6);
          local_2b6[0] = local_2b6[0] & 0xff00;
          FUN_1400b28a0(puVar21);
        }
        iVar6 = iVar6 + 1;
        puVar18 = puVar18 + 1;
      } while ((ulonglong)(longlong)iVar6 < uVar26);
    }
    iVar6 = 0;
    uVar26 = local_1b0 - (longlong)local_1b8 >> 3;
    if (uVar26 != 0) {
      local_2b8 = local_2b8 & 0xff00;
      puVar18 = local_1b8;
      do {
        FUN_14000bc60(plVar30,*puVar18 + 0xe0);
        local_2b6[0] = 0x3b;
        FUN_14000be20(param_3,local_2b6);
        FUN_1400b28a0(puVar21,&local_2b8);
        iVar5 = FUN_140740200(*puVar18);
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar5);
        if ((iVar5 != -1) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) {
          FUN_14000bc60(plVar30,&local_2a8);
          local_2b6[0] = 0x3b;
          if (*(char *)(lVar8 + 6) != '\0') {
            local_2b6[0] = 0x3c;
          }
          FUN_14000be20(param_3,local_2b6);
          local_2b6[0] = local_2b6[0] & 0xff00;
          FUN_1400b28a0(puVar21);
        }
        iVar6 = iVar6 + 1;
        puVar18 = puVar18 + 1;
      } while ((ulonglong)(longlong)iVar6 < uVar26);
    }
    iVar6 = 0;
    local_2a8 = local_2a8 & 0xffffffff00000000;
    puVar21 = (ulonglong *)(local_1e0 - (longlong)local_1e8 >> 3);
    plVar27 = local_1e8;
    local_238 = puVar21;
    if (puVar21 != (ulonglong *)0x0) {
      do {
        puVar18 = local_res20;
        uVar23 = 0;
        uVar26 = uVar23;
        if (*(longlong *)(*plVar27 + 0x120) - *(longlong *)(*plVar27 + 0x118) >> 3 != 0) {
          do {
            sVar4 = (**(code **)**(undefined8 **)(uVar23 + *(longlong *)(*plVar27 + 0x118)))();
            if ((sVar4 == 3) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) {
              FUN_14000bc60(plVar30,lVar8 + 0xe0);
              local_2b8 = 0x3a;
              FUN_14000be20(param_3,&local_2b8);
              local_2b8 = local_2b8 & 0xff00;
              FUN_1400b28a0(puVar18);
            }
            uVar25 = (int)uVar26 + 1;
            uVar23 = uVar23 + 8;
            uVar26 = (ulonglong)uVar25;
          } while ((ulonglong)(longlong)(int)uVar25 <
                   (ulonglong)
                   (*(longlong *)(*plVar27 + 0x120) - *(longlong *)(*plVar27 + 0x118) >> 3));
          puVar21 = local_238;
          iVar6 = (uint)local_2a8;
        }
        iVar6 = iVar6 + 1;
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar6);
        plVar27 = plVar27 + 1;
      } while ((ulonglong *)(longlong)iVar6 < puVar21);
    }
    FUN_1400030c0(&local_1e8);
    FUN_1400030c0(&local_268);
    FUN_1400030c0(&local_1b8);
    FUN_1400030c0(&local_298);
  }
  puVar21 = local_278;
  if (local_278 != (ulonglong *)0x0) {
    FUN_1400025a0(&local_238);
    FUN_1400025a0(&local_1b8);
    FUN_1400025a0(&local_298);
    FUN_1400025a0(&local_1e8);
    puVar20 = local_240;
    puVar18 = local_248;
    uVar23 = 0;
    uVar26 = uVar23;
    if ((longlong)(puVar21[0x24] - puVar21[0x23]) >> 3 != 0) {
      do {
        sVar4 = (**(code **)**(undefined8 **)(uVar23 + puVar21[0x23]))();
        if ((((sVar4 == 3) &&
             (local_278 = (ulonglong *)FUN_140004650(&DAT_141d7a048), local_278 != (ulonglong *)0x0)
             ) && (local_278 != puVar20)) && (local_278 != puVar18)) {
          if (*(char *)((longlong)local_278 + 6) == '\0') {
            ppuVar15 = &local_1b8;
          }
          else if (*(char *)((longlong)local_278 + 6) == '\x01') {
            ppuVar15 = &local_238;
          }
          else {
            ppuVar15 = &local_298;
          }
          FUN_140050070(ppuVar15,&local_278);
          FUN_140050070(&local_1e8);
        }
        uVar25 = (int)uVar26 + 1;
        uVar23 = uVar23 + 8;
        param_3 = local_res18;
        uVar26 = (ulonglong)uVar25;
      } while ((ulonglong)(longlong)(int)uVar25 <
               (ulonglong)((longlong)(puVar21[0x24] - puVar21[0x23]) >> 3));
    }
    puVar21 = local_res20;
    plVar30 = local_res10;
    iVar6 = 0;
    uVar26 = (longlong)(uStack_230 - (longlong)local_238) >> 3;
    if (uVar26 != 0) {
      local_2b8 = local_2b8 & 0xff00;
      puVar18 = local_238;
      do {
        FUN_14000bc60(plVar30,*puVar18 + 0xe0);
        local_2b6[0] = 0x3c;
        FUN_14000be20(param_3,local_2b6);
        FUN_1400b28a0(puVar21,&local_2b8);
        iVar5 = FUN_140740200(*puVar18);
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar5);
        if ((iVar5 != -1) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) {
          FUN_14000bc60(plVar30,&local_2a8);
          local_2b6[0] = 0x3b;
          if (*(char *)(lVar8 + 6) != '\0') {
            local_2b6[0] = 0x3c;
          }
          FUN_14000be20(param_3,local_2b6);
          local_2b6[0] = local_2b6[0] & 0xff00;
          FUN_1400b28a0(puVar21);
        }
        iVar6 = iVar6 + 1;
        puVar18 = puVar18 + 1;
      } while ((ulonglong)(longlong)iVar6 < uVar26);
    }
    iVar6 = 0;
    uVar26 = local_1b0 - (longlong)local_1b8 >> 3;
    if (uVar26 != 0) {
      local_2b8 = local_2b8 & 0xff00;
      puVar18 = local_1b8;
      do {
        FUN_14000bc60(plVar30,*puVar18 + 0xe0);
        local_2b6[0] = 0x3b;
        FUN_14000be20(param_3,local_2b6);
        FUN_1400b28a0(puVar21,&local_2b8);
        iVar5 = FUN_140740200(*puVar18);
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar5);
        if ((iVar5 != -1) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) {
          FUN_14000bc60(plVar30,&local_2a8);
          local_2b6[0] = 0x3b;
          if (*(char *)(lVar8 + 6) != '\0') {
            local_2b6[0] = 0x3c;
          }
          FUN_14000be20(param_3,local_2b6);
          local_2b6[0] = local_2b6[0] & 0xff00;
          FUN_1400b28a0(puVar21);
        }
        iVar6 = iVar6 + 1;
        puVar18 = puVar18 + 1;
      } while ((ulonglong)(longlong)iVar6 < uVar26);
    }
    iVar6 = 0;
    local_2a8 = local_2a8 & 0xffffffff00000000;
    puVar21 = (ulonglong *)(local_1e0 - (longlong)local_1e8 >> 3);
    plVar27 = local_1e8;
    local_278 = puVar21;
    if (puVar21 != (ulonglong *)0x0) {
      do {
        puVar18 = local_res20;
        uVar23 = 0;
        uVar26 = uVar23;
        if (*(longlong *)(*plVar27 + 0x120) - *(longlong *)(*plVar27 + 0x118) >> 3 != 0) {
          do {
            sVar4 = (**(code **)**(undefined8 **)(uVar23 + *(longlong *)(*plVar27 + 0x118)))();
            if ((sVar4 == 3) && (lVar8 = FUN_140004650(&DAT_141d7a048), lVar8 != 0)) {
              FUN_14000bc60(plVar30,lVar8 + 0xe0);
              local_2b8 = 0x3a;
              FUN_14000be20(param_3,&local_2b8);
              local_2b8 = local_2b8 & 0xff00;
              FUN_1400b28a0(puVar18);
            }
            uVar25 = (int)uVar26 + 1;
            uVar23 = uVar23 + 8;
            uVar26 = (ulonglong)uVar25;
          } while ((ulonglong)(longlong)(int)uVar25 <
                   (ulonglong)
                   (*(longlong *)(*plVar27 + 0x120) - *(longlong *)(*plVar27 + 0x118) >> 3));
          puVar21 = local_278;
          iVar6 = (uint)local_2a8;
        }
        iVar6 = iVar6 + 1;
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar6);
        plVar27 = plVar27 + 1;
      } while ((ulonglong *)(longlong)iVar6 < puVar21);
    }
    FUN_1400030c0(&local_1e8);
    FUN_1400030c0(&local_298);
    FUN_1400030c0(&local_1b8);
    FUN_1400030c0(&local_238);
  }
  uVar7 = FUN_140740200(param_1,2);
  lVar8 = FUN_140004650(&DAT_141d7a048,uVar7);
  plVar30 = local_res10;
  puVar21 = local_res20;
  if (lVar8 != 0) {
    iVar6 = (int)(local_res10[1] - *local_res10 >> 2) + -1;
    if (-1 < iVar6) {
      lVar24 = (longlong)iVar6;
      lVar32 = lVar24 * 4;
      do {
        if (*(int *)(lVar32 + *plVar30) == *(int *)(lVar8 + 0xe0)) {
          FUN_140050340(plVar30,lVar24);
          FUN_1400b29f0(param_3,lVar24);
          FUN_140360820(local_res20,lVar24);
        }
        lVar24 = lVar24 + -1;
        lVar32 = lVar32 + -4;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    FUN_14000bc60(plVar30,lVar8 + 0xe0);
    if (*(char *)(lVar8 + 6) == '\0') {
      uVar16 = 4;
    }
    else if (*(char *)(lVar8 + 6) == '\x01') {
      uVar16 = 3;
    }
    else {
      uVar16 = 5;
    }
    local_res10 = (longlong *)CONCAT62(local_res10._2_6_,uVar16);
    FUN_14000be20(param_3,&local_res10);
    puVar21 = local_res20;
    local_res10 = (longlong *)CONCAT71(local_res10._1_7_,1);
    FUN_1400b28a0(local_res20,&local_res10);
  }
  iVar6 = (int)(plVar30[1] - *plVar30 >> 2) + -1;
  if (-1 < iVar6) {
    lVar32 = (longlong)iVar6;
    lVar8 = lVar32 * 4;
    do {
      if (*(int *)(lVar8 + *plVar30) == (int)param_1[0x1c]) {
        FUN_140050340(plVar30,lVar32);
        FUN_1400b29f0(param_3,lVar32);
        FUN_140360820(puVar21,lVar32);
      }
      lVar32 = lVar32 + -1;
      lVar8 = lVar8 + -4;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  FUN_1400025c0(local_a8);
  FUN_1400030c0(&local_128);
  FUN_1400025c0(local_88);
  FUN_1400030c0(&local_1a0);
  FUN_1400025c0(local_68);
  FUN_1400030c0(&local_188);
  FUN_1400025c0(local_110);
  FUN_1400030c0(&local_170);
  FUN_1400025c0(local_f0);
  FUN_1400030c0(&local_158);
  FUN_1400025c0(local_d0);
  FUN_1400030c0(&local_140);
  FUN_1400030c0(&local_1d0);
  FUN_1400030c0(&local_218);
  FUN_1400030c0(&local_200);
  return;
}

