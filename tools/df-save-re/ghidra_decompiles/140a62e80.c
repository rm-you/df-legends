// FUN_140a62e80 @ 140a62e80
// callees:
//   -> 140adffb0 FUN_140adffb0
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 140ae07d0 FUN_140ae07d0
//   -> 140339ee0 FUN_140339ee0
//   -> 140b05af0 FUN_140b05af0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1400026e0 FUN_1400026e0
//   -> 14033a640 FUN_14033a640
//   -> 14033a6e0 FUN_14033a6e0
//   -> 140a5ed80 FUN_140a5ed80
//   -> 14033a130 FUN_14033a130
//   -> 140b06940 FUN_140b06940
//   -> 140a5f320 FUN_140a5f320
//   -> 140339f70 FUN_140339f70
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 140002380 FUN_140002380
//   -> 140a5aeb0 FUN_140a5aeb0
//   -> 140a5b040 FUN_140a5b040
//   -> 140a5dfd0 FUN_140a5dfd0
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140a5be40 FUN_140a5be40
//   -> 1403021d0 FUN_1403021d0
//   -> 140a5d220 FUN_140a5d220
//   -> 140a5aaa0 FUN_140a5aaa0
//   -> 140087020 FUN_140087020
//   -> 140a5c9c0 FUN_140a5c9c0
//   -> 140087710 FUN_140087710
//   -> 140baff50 FUN_140baff50
//   -> 1400b35a0 FUN_1400b35a0
//   -> 140b164d0 FUN_140b164d0
//   -> 140ad7e50 FUN_140ad7e50
//   -> 140df42e0 FUN_140df42e0
//   -> 140a5b2e0 FUN_140a5b2e0
//   -> 140519530 FUN_140519530
//   -> 140a5f970 FUN_140a5f970
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140a634c0) */

void FUN_140a62e80(ulonglong param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  __uint64 _Var12;
  void *pvVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  short sVar18;
  int iVar19;
  longlong lVar20;
  ulonglong *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  short sVar27;
  ulonglong *puVar28;
  int *piVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong *plVar33;
  undefined1 auStackY_d8 [32];
  int local_a8;
  short local_a4;
  char local_a2 [2];
  undefined4 *local_a0;
  undefined4 local_98;
  uint local_94;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong *local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_78 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStackY_d8;
  local_a2[0] = param_4;
  local_98 = param_3;
  local_88 = param_1;
  local_80 = param_2;
  FUN_140adffb0();
  local_50 = 0xf;
  local_58 = 0;
  local_68 = 0;
  FUN_1405bb6d0(param_2,&local_68);
  lVar20 = param_1 + 0x78;
  lVar22 = 0xf;
  do {
    FUN_1405bba90(param_2,lVar20,1);
    lVar20 = lVar20 + 1;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  FUN_140315ac0(param_1,param_2);
  FUN_1405bb6d0(param_2,&local_68);
  piVar24 = (int *)(param_1 + 0xa0);
  FUN_1405bba90(param_2,piVar24,4);
  piVar29 = (int *)(param_1 + 0xa4);
  FUN_1405bba90(param_2,piVar29,4);
  FUN_1405bb6d0(param_2,&local_68);
  FUN_1405bba90(param_2,&local_a4,1);
  if ((char)local_a4 == '\0') {
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  else {
    FUN_140ae07d0(param_1,*piVar24,*piVar29);
    iVar30 = 0;
    if (0 < *piVar24) {
      lVar20 = 0;
      do {
        iVar19 = 0;
        if (0 < *piVar29) {
          do {
            FUN_140339ee0((longlong)iVar19 * 0x70 +
                          *(longlong *)(*(longlong *)(param_1 + 0x2a0) + lVar20),param_2);
            iVar19 = iVar19 + 1;
          } while (iVar19 < *piVar29);
        }
        iVar30 = iVar30 + 1;
        lVar20 = lVar20 + 8;
        param_3 = local_98;
      } while (iVar30 < *(int *)(param_1 + 0xa0));
    }
    FUN_1405bba90(param_2,&local_a4,1);
    if ((char)local_a4 == '\0') {
      *(undefined8 *)(param_1 + 0x2a8) = 0;
    }
    else {
      uVar15 = (*piVar29 + 0xf >> 4) * (*(int *)(param_1 + 0xa0) + 0xf >> 4);
      if (0 < (int)uVar15) {
        lVar20 = 0;
        uVar23 = (ulonglong)uVar15;
        do {
          FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x2a8) + lVar20,4);
          lVar20 = lVar20 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
    uVar15 = *(int *)(param_1 + 0xa0) + 0xf >> 4;
    uVar6 = *piVar29 + 0xf >> 4;
    local_90 = CONCAT44(local_90._4_4_,uVar6);
    plVar33 = (longlong *)(param_1 + 0x2d0);
    local_a0 = (undefined4 *)0x6;
    local_94 = uVar15;
    do {
      puVar8 = local_a0;
      FUN_1405bba90(param_2,&local_a4,1);
      if (((char)local_a4 != '\0') && (lVar20 = 0, 0 < (short)uVar15)) {
        local_90 = (ulonglong)(uVar15 & 0xffff);
        do {
          lVar22 = 0;
          if (0 < (short)uVar6) {
            uVar23 = (ulonglong)(uVar6 & 0xffff);
            do {
              FUN_140b05af0(*(longlong *)(lVar20 + *plVar33) + lVar22,param_2,param_3);
              lVar22 = lVar22 + 0x30;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          lVar20 = lVar20 + 8;
          local_90 = local_90 - 1;
        } while (local_90 != 0);
        local_90 = 0;
        puVar8 = local_a0;
        uVar15 = local_94;
      }
      plVar33 = plVar33 + 1;
      local_a0 = (undefined4 *)((longlong)puVar8 + -1);
    } while (local_a0 != (undefined4 *)0x0);
    local_a0 = (undefined4 *)0x0;
    param_1 = local_88;
  }
  uVar14 = 0;
  FUN_1405bba90(param_2,param_1 + 0x88,4);
  FUN_1405bba90(param_2,param_1 + 0x8c,4);
  FUN_1405bba90(param_2,param_1 + 0x90,4);
  FUN_1405bba90(param_2,param_1 + 0x94,4);
  FUN_1405bba90(param_2,param_1 + 0x98,4);
  FUN_1405bba90(param_2,param_1 + 0x9c,4);
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(param_1 + 0x210);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  uVar23 = uVar14;
  uVar32 = uVar14;
  if (*(longlong *)(param_1 + 0x218) - *plVar33 >> 3 != 0) {
    do {
      puVar8 = operator_new(0xc0);
      local_a0 = puVar8;
      FUN_1400026e0();
      *(undefined8 *)(puVar8 + 0x24) = 0;
      *(undefined8 *)(puVar8 + 0x26) = 0;
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + 0x2a) = 0;
      *(undefined8 *)(puVar8 + 0x2c) = 0;
      *(undefined8 *)(puVar8 + 0x2e) = 0;
      puVar8[0x1f] = 0;
      *(undefined4 **)(uVar23 + *plVar33) = puVar8;
      FUN_14033a640(*(undefined8 *)(uVar23 + *plVar33),param_2);
      uVar15 = (int)uVar32 + 1;
      uVar23 = uVar23 + 8;
      uVar32 = (ulonglong)uVar15;
    } while ((ulonglong)(longlong)(int)uVar15 <
             (ulonglong)(*(longlong *)(param_1 + 0x218) - *plVar33 >> 3));
  }
  FUN_1405bb6d0(param_2,&local_68);
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(param_1 + 600);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  uVar23 = uVar14;
  uVar32 = uVar14;
  if (*(longlong *)(param_1 + 0x260) - *plVar33 >> 3 != 0) {
    do {
      local_a0 = operator_new(0x20);
      *(undefined8 *)(local_a0 + 2) = 0;
      *(undefined8 *)(local_a0 + 4) = 0;
      *(undefined8 *)(local_a0 + 6) = 0;
      *(undefined4 **)(uVar23 + *plVar33) = local_a0;
      FUN_14033a6e0(*(undefined8 *)(uVar23 + *plVar33),param_2);
      uVar15 = (int)uVar32 + 1;
      uVar23 = uVar23 + 8;
      uVar32 = (ulonglong)uVar15;
    } while ((ulonglong)(longlong)(int)uVar15 <
             (ulonglong)(*(longlong *)(param_1 + 0x260) - *plVar33 >> 3));
  }
  FUN_1405bb6d0(param_2,&local_68);
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(param_1 + 0x228);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  if (*(longlong *)(param_1 + 0x230) - *plVar33 >> 3 != 0) {
    lVar20 = 0;
    do {
      local_a0 = operator_new(0x288);
      uVar9 = FUN_140a5ed80(local_a0);
      FUN_14033a130(uVar9,param_2,param_3);
      FUN_140b06940(uVar9);
      *(undefined8 *)(lVar20 + *plVar33) = uVar9;
      uVar15 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar15;
      lVar20 = lVar20 + 8;
    } while ((ulonglong)(longlong)(int)uVar15 <
             (ulonglong)(*(longlong *)(param_1 + 0x230) - *plVar33 >> 3));
  }
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(param_1 + 0x240);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  iVar30 = 0;
  iVar19 = 0;
  if (*(longlong *)(param_1 + 0x248) - *plVar33 >> 3 != 0) {
    lVar20 = 0;
    do {
      local_a0 = operator_new(0x118);
      uVar9 = FUN_140a5f320(local_a0);
      *(undefined8 *)(lVar20 + *plVar33) = uVar9;
      FUN_140339f70(*(undefined8 *)(lVar20 + *plVar33),param_2,param_3);
      iVar19 = iVar19 + 1;
      lVar20 = lVar20 + 8;
    } while ((ulonglong)(longlong)iVar19 <
             (ulonglong)(*(longlong *)(param_1 + 0x248) - *plVar33 >> 3));
  }
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(param_1 + 0x270);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  if (*(longlong *)(param_1 + 0x278) - *plVar33 >> 3 != 0) {
    lVar20 = 0;
    do {
      puVar10 = operator_new(0x98);
      puVar8 = puVar10;
      local_a0 = puVar10;
      FUN_1400026e0();
      puVar8[0x22] = 0;
      *(undefined8 *)(puVar8 + 0x20) = 0;
      puVar11 = operator_new(1);
      *(undefined1 **)(puVar10 + 0x20) = puVar11;
      *puVar11 = 0;
      puVar10[0x22] = 1;
      *(undefined4 **)(lVar20 + *plVar33) = puVar10;
      lVar22 = *(longlong *)(lVar20 + *plVar33);
      FUN_140315ac0(lVar22,param_2);
      FUN_1405bba90(param_2,lVar22 + 0x78,2);
      FUN_1405bba90(param_2,lVar22 + 0x7a,2);
      FUN_140002380(lVar22 + 0x80,param_2);
      FUN_1405bba90(param_2,lVar22 + 0x90,2);
      iVar30 = iVar30 + 1;
      lVar20 = lVar20 + 8;
      param_3 = local_98;
    } while ((ulonglong)(longlong)iVar30 <
             (ulonglong)(*(longlong *)(param_1 + 0x278) - *plVar33 >> 3));
  }
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(param_1 + 0x288);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  iVar30 = 0;
  uVar23 = 0;
  if (*(longlong *)(param_1 + 0x290) - *plVar33 >> 3 != 0) {
    lVar20 = 0;
    do {
      local_a0 = operator_new(0x108);
      uVar9 = FUN_140a5aeb0(local_a0);
      *(undefined8 *)(lVar20 + *plVar33) = uVar9;
      FUN_140a5b040(*(undefined8 *)(lVar20 + *plVar33),param_2);
      iVar30 = iVar30 + 1;
      lVar20 = lVar20 + 8;
    } while ((ulonglong)(longlong)iVar30 <
             (ulonglong)(*(longlong *)(param_1 + 0x290) - *plVar33 >> 3));
  }
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(param_1 + 0x180);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  uVar32 = uVar23;
  uVar14 = uVar23;
  if (*(longlong *)(param_1 + 0x188) - *plVar33 >> 3 != 0) {
    do {
      local_a0 = operator_new(0x68);
      *(undefined8 *)(local_a0 + 2) = 0;
      *(undefined8 *)(local_a0 + 4) = 0;
      *(undefined8 *)(local_a0 + 6) = 0;
      *(undefined8 *)(local_a0 + 8) = 0;
      *(undefined8 *)(local_a0 + 10) = 0;
      *(undefined8 *)(local_a0 + 0xc) = 0;
      *(undefined8 *)(local_a0 + 0xe) = 0;
      *(undefined8 *)(local_a0 + 0x10) = 0;
      *(undefined8 *)(local_a0 + 0x12) = 0;
      *(undefined8 *)(local_a0 + 0x14) = 0;
      *(undefined8 *)(local_a0 + 0x16) = 0;
      *(undefined8 *)(local_a0 + 0x18) = 0;
      *local_a0 = 0xffffffff;
      *(undefined4 **)(uVar32 + *plVar33) = local_a0;
      FUN_140a5dfd0(*(undefined8 *)(uVar32 + *plVar33),param_2);
      uVar15 = (int)uVar14 + 1;
      uVar32 = uVar32 + 8;
      uVar14 = (ulonglong)uVar15;
      param_3 = local_98;
    } while ((ulonglong)(longlong)(int)uVar15 <
             (ulonglong)(*(longlong *)(param_1 + 0x188) - *plVar33 >> 3));
  }
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(param_1 + 0x198);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  uVar32 = param_1;
  if (*(longlong *)(param_1 + 0x1a0) - *plVar33 >> 3 != 0) {
    lVar20 = 0;
    do {
      puVar8 = operator_new(0x990);
      local_a0 = puVar8;
      _eh_vector_constructor_iterator_(puVar8 + 2,0x18,100,FUN_1400025a0,FUN_1400030c0);
      *(undefined8 *)(puVar8 + 0x25e) = 0;
      *(undefined8 *)(puVar8 + 0x260) = 0;
      *(undefined8 *)(puVar8 + 0x262) = 0;
      *puVar8 = 0xffffffff;
      puVar8[0x25a] = 0xffffffff;
      puVar8[0x25b] = 0xffffffff;
      puVar8[0x25c] = 0xffffffff;
      puVar8[0x25d] = 0xffffffff;
      *(undefined4 **)(lVar20 + *plVar33) = puVar8;
      FUN_140a5be40(*(undefined8 *)(lVar20 + *plVar33),param_2,param_3);
      uVar15 = (int)uVar23 + 1;
      uVar23 = (ulonglong)uVar15;
      lVar20 = lVar20 + 8;
      uVar32 = local_88;
    } while ((ulonglong)(longlong)(int)uVar15 <
             (ulonglong)(*(longlong *)(param_1 + 0x1a0) - *plVar33 >> 3));
  }
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(uVar32 + 0x1b0);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  iVar30 = 0;
  uVar23 = uVar32;
  if (*(longlong *)(uVar32 + 0x1b8) - *plVar33 >> 3 != 0) {
    lVar20 = 0;
    do {
      local_a0 = operator_new(0x50);
      *(undefined8 *)(local_a0 + 2) = 0;
      *(undefined8 *)(local_a0 + 4) = 0;
      *(undefined8 *)(local_a0 + 6) = 0;
      *(undefined8 *)(local_a0 + 8) = 0;
      *(undefined8 *)(local_a0 + 10) = 0;
      *(undefined8 *)(local_a0 + 0xc) = 0;
      *(undefined8 *)(local_a0 + 0xe) = 0;
      *(undefined8 *)(local_a0 + 0x10) = 0;
      *(undefined8 *)(local_a0 + 0x12) = 0;
      local_a0[1] = 0xffffffff;
      *local_a0 = 0xffffffff;
      *(undefined4 **)(lVar20 + *plVar33) = local_a0;
      lVar22 = *(longlong *)(lVar20 + *plVar33);
      FUN_1405bba90(param_2,lVar22,4);
      FUN_1405bba90(param_2,lVar22 + 4,4);
      FUN_1403021d0(lVar22 + 8,param_2);
      iVar30 = iVar30 + 1;
      lVar20 = lVar20 + 8;
      uVar23 = local_88;
      param_3 = local_98;
    } while ((ulonglong)(longlong)iVar30 <
             (ulonglong)(*(longlong *)(uVar32 + 0x1b8) - *plVar33 >> 3));
  }
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(uVar23 + 0x1c8);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  iVar30 = 0;
  lVar20 = 0;
  if (*(longlong *)(uVar23 + 0x1d0) - *plVar33 >> 3 != 0) {
    lVar22 = 0;
    iVar19 = iVar30;
    do {
      local_a0 = operator_new(0x68);
      *(undefined8 *)(local_a0 + 2) = 0;
      *(undefined8 *)(local_a0 + 4) = 0;
      *(undefined8 *)(local_a0 + 6) = 0;
      *(undefined8 *)(local_a0 + 8) = 0;
      *(undefined8 *)(local_a0 + 10) = 0;
      *(undefined8 *)(local_a0 + 0xc) = 0;
      *(undefined8 *)(local_a0 + 0x14) = 0;
      *(undefined8 *)(local_a0 + 0x16) = 0;
      *(undefined8 *)(local_a0 + 0x18) = 0;
      *local_a0 = 0xffffffff;
      local_a0[0xe] = 0xffffffff;
      local_a0[0xf] = 0xffffffff;
      local_a0[0x10] = 0xffffffff;
      local_a0[0x11] = 0xffffffff;
      local_a0[0x12] = 0xffffffff;
      *(undefined4 **)(lVar22 + *plVar33) = local_a0;
      FUN_140a5d220(*(undefined8 *)(lVar22 + *plVar33),param_2);
      iVar19 = iVar19 + 1;
      lVar22 = lVar22 + 8;
      param_3 = local_98;
    } while ((ulonglong)(longlong)iVar19 <
             (ulonglong)(*(longlong *)(uVar23 + 0x1d0) - *plVar33 >> 3));
  }
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(uVar23 + 0x1e0);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  lVar22 = lVar20;
  iVar19 = iVar30;
  if (*(longlong *)(uVar23 + 0x1e8) - *plVar33 >> 3 != 0) {
    do {
      local_a0 = operator_new(0x38);
      *local_a0 = 0xffffffff;
      local_a0[1] = 0xffffffff;
      *(undefined2 *)(local_a0 + 2) = 0xffff;
      local_a0[3] = 0xffffffff;
      local_a0[7] = 0xffff8ad0;
      local_a0[8] = 0xffff8ad0;
      local_a0[9] = 0xffff8ad0;
      local_a0[0xc] = 0;
      local_a0[4] = 0;
      local_a0[0xd] = 0xffffffff;
      *(undefined4 **)(lVar22 + *plVar33) = local_a0;
      FUN_140a5aaa0(*(undefined8 *)(lVar22 + *plVar33),param_2);
      iVar19 = iVar19 + 1;
      lVar22 = lVar22 + 8;
      param_3 = local_98;
    } while ((ulonglong)(longlong)iVar19 <
             (ulonglong)(*(longlong *)(uVar23 + 0x1e8) - *plVar33 >> 3));
  }
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(uVar23 + 0x1f8);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  lVar22 = lVar20;
  iVar19 = iVar30;
  if (*(longlong *)(uVar23 + 0x200) - *plVar33 >> 3 != 0) {
    do {
      local_a0 = operator_new(0x210);
      uVar9 = FUN_140087020(local_a0);
      *(undefined8 *)(lVar22 + *plVar33) = uVar9;
      FUN_140a5c9c0(*(undefined8 *)(lVar22 + *plVar33),param_2,param_3);
      iVar19 = iVar19 + 1;
      lVar22 = lVar22 + 8;
    } while ((ulonglong)(longlong)iVar19 <
             (ulonglong)(*(longlong *)(uVar23 + 0x200) - *plVar33 >> 3));
  }
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(uVar23 + 0x168);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  if (*(longlong *)(uVar23 + 0x170) - *plVar33 >> 3 != 0) {
    do {
      local_a0 = operator_new(0x540);
      uVar9 = FUN_140087710(local_a0);
      *(undefined8 *)(lVar20 + *plVar33) = uVar9;
      FUN_140baff50(*(undefined8 *)(lVar20 + *plVar33),param_2,param_3);
      lVar22 = *(longlong *)(lVar20 + *plVar33);
      sVar18 = *(short *)(lVar22 + 0x82);
      if ((((-1 < sVar18) && ((int)sVar18 < *(int *)(uVar23 + 0xa0))) &&
          (sVar27 = *(short *)(lVar22 + 0x84), -1 < sVar27)) &&
         ((int)sVar27 < *(int *)(uVar23 + 0xa4))) {
        FUN_1400b35a0(lVar22,(longlong)sVar27 * 0x70 +
                             *(longlong *)(*(longlong *)(uVar23 + 0x2a0) + (longlong)sVar18 * 8) + 8
                     );
      }
      iVar30 = iVar30 + 1;
      lVar20 = lVar20 + 8;
    } while ((ulonglong)(longlong)iVar30 <
             (ulonglong)(*(longlong *)(uVar23 + 0x170) - *plVar33 >> 3));
  }
  FUN_1405bba90(param_2,uVar23 + 0xa8,4);
  FUN_1405bba90(param_2,uVar23 + 0xac,4);
  FUN_1405bba90(param_2,uVar23 + 0xb0,2);
  FUN_1405bba90(param_2,uVar23 + 0xb2,2);
  lVar20 = uVar23 + 0xb4;
  lVar31 = 3;
  lVar22 = 3;
  do {
    FUN_1405bba90(param_2,lVar20,2);
    lVar20 = lVar20 + 2;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  lVar20 = uVar23 + 0xba;
  do {
    FUN_1405bba90(param_2,lVar20,2);
    cVar5 = local_a2[0];
    lVar20 = lVar20 + 2;
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  iVar30 = 0;
  if (*(longlong *)(uVar23 + 0x170) - *plVar33 >> 3 != 0) {
    piVar29 = (int *)0x0;
    piVar24 = piVar29;
    do {
      iVar1 = *(int *)(*(longlong *)((longlong)piVar24 + *plVar33) + 0x1e8);
      iVar19 = (int)(*(longlong *)(uVar23 + 0x188) - *(longlong *)(uVar23 + 0x180) >> 3) + -1;
      piVar25 = piVar29;
      piVar26 = piVar29;
      if (-1 < iVar19) {
        do {
          iVar16 = iVar19 + (int)piVar25 >> 1;
          piVar26 = *(int **)(*(longlong *)(uVar23 + 0x180) + (longlong)iVar16 * 8);
          iVar2 = *piVar26;
          if (iVar2 == iVar1) break;
          if (iVar1 < iVar2) {
            iVar19 = iVar16 + -1;
          }
          else {
            piVar25 = (int *)(ulonglong)(iVar16 + 1);
          }
          piVar26 = piVar29;
        } while ((int)piVar25 <= iVar19);
      }
      *(int **)(*(longlong *)((longlong)piVar24 + *plVar33) + 0x3f0) = piVar26;
      iVar30 = iVar30 + 1;
      piVar24 = piVar24 + 2;
      param_3 = local_98;
    } while ((ulonglong)(longlong)iVar30 <
             (ulonglong)(*(longlong *)(uVar23 + 0x170) - *plVar33 >> 3));
  }
  if (local_a2[0] == '\0') {
    FUN_140b164d0(uVar23 + 0xe8,param_2,param_3);
  }
  FUN_140ad7e50(uVar23 + 0xc0,param_2);
  FUN_140df42e0(uVar23 + 0x118,param_2,param_3);
  if (cVar5 == '\0') {
    uVar6 = *(int *)(uVar23 + 0xa0) + 0xf >> 4;
    local_90 = CONCAT44(local_90._4_4_,uVar6);
    uVar15 = *(int *)(uVar23 + 0xa4) + 0xf >> 4;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)(short)uVar6;
    _Var12 = SUB168(ZEXT816(8) * auVar3,0);
    if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
      _Var12 = 0xffffffffffffffff;
    }
    local_94 = uVar15;
    pvVar13 = operator_new(_Var12);
    *(void **)(uVar23 + 0x483a8) = pvVar13;
    if (0 < (short)uVar6) {
      uVar32 = (ulonglong)(short)uVar15;
      local_a0 = (undefined4 *)(ulonglong)(uVar6 & 0xffff);
      puVar28 = (ulonglong *)0x0;
      do {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar32;
        uVar14 = SUB168(ZEXT816(0x20) * auVar4,0);
        if (SUB168(ZEXT816(0x20) * auVar4,8) != 0) {
          uVar14 = 0xffffffffffffffff;
        }
        _Var12 = uVar14 + 8;
        if (0xfffffffffffffff7 < uVar14) {
          _Var12 = 0xffffffffffffffff;
        }
        local_88 = uVar32;
        local_70 = operator_new(_Var12);
        puVar21 = (ulonglong *)0x0;
        if (local_70 != (ulonglong *)0x0) {
          *local_70 = uVar32;
          puVar21 = local_70 + 1;
          _eh_vector_constructor_iterator_(puVar21,0x20,uVar32,FUN_140a5b540,FUN_140a5b560);
        }
        *(ulonglong **)((longlong)puVar28 + *(longlong *)(uVar23 + 0x483a8)) = puVar21;
        puVar28 = puVar28 + 1;
        local_a0 = (undefined4 *)((longlong)local_a0 - 1);
      } while (local_a0 != (undefined4 *)0x0);
      local_a0 = (undefined4 *)0x0;
      param_2 = local_80;
      uVar15 = local_94;
      param_3 = local_98;
    }
    lVar20 = 0;
    local_a4 = 0;
    uVar7 = (undefined4)local_90;
    if (0 < (short)local_90) {
      do {
        lVar22 = 0;
        sVar27 = 0;
        sVar18 = local_a4;
        if (0 < (short)uVar15) {
          do {
            *(short *)(lVar22 + *(longlong *)(*(longlong *)(uVar23 + 0x483a8) + lVar20)) = sVar18;
            *(short *)(*(longlong *)(*(longlong *)(uVar23 + 0x483a8) + lVar20) + 2 + lVar22) =
                 sVar27;
            FUN_1405bba90(param_2,local_a2,1);
            if (local_a2[0] == '\0') {
              *(undefined8 *)(*(longlong *)(*(longlong *)(uVar23 + 0x483a8) + lVar20) + 8 + lVar22)
                   = 0;
            }
            else {
              pvVar13 = operator_new(0x9000);
              _eh_vector_constructor_iterator_(pvVar13,0x18,0x100,FUN_1400025a0,FUN_1400030c0);
              *(void **)(*(longlong *)(*(longlong *)(uVar23 + 0x483a8) + lVar20) + 8 + lVar22) =
                   pvVar13;
              FUN_140a5b2e0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(uVar23 + 0x483a8) + lVar20) + 8 + lVar22),
                            param_2,param_3,1);
              sVar18 = local_a4;
            }
            sVar27 = sVar27 + 1;
            lVar22 = lVar22 + 0x20;
          } while (sVar27 < (short)local_94);
          uVar7 = (undefined4)local_90;
          uVar15 = local_94;
        }
        local_a4 = sVar18 + 1;
        lVar20 = lVar20 + 8;
      } while (local_a4 < (short)uVar7);
    }
  }
  FUN_140519530(uVar23 + 0x148,param_2);
  FUN_140519530(uVar23 + 0x158,param_2);
  FUN_1405bba90(param_2,&local_a8,4);
  plVar33 = (longlong *)(uVar23 + 0x2b8);
  FUN_14000b9d0(plVar33,(longlong)local_a8);
  uVar14 = 0;
  uVar32 = uVar14;
  if (*(longlong *)(uVar23 + 0x2c0) - *plVar33 >> 3 != 0) {
    do {
      pvVar13 = operator_new(0x38);
      puVar17 = (undefined8 *)((longlong)pvVar13 + 8);
      *(undefined8 *)((longlong)pvVar13 + 0x20) = 0xf;
      *(undefined8 *)((longlong)pvVar13 + 0x18) = 0;
      if (0xf < *(ulonglong *)((longlong)pvVar13 + 0x20)) {
        puVar17 = (undefined8 *)*puVar17;
      }
      *(undefined1 *)puVar17 = 0;
      *(void **)(uVar14 + *plVar33) = pvVar13;
      FUN_140a5f970(*(undefined8 *)(*plVar33 + uVar14),param_2);
      uVar15 = (int)uVar32 + 1;
      uVar14 = uVar14 + 8;
      uVar32 = (ulonglong)uVar15;
    } while ((ulonglong)(longlong)(int)uVar15 <
             (ulonglong)(*(longlong *)(uVar23 + 0x2c0) - *plVar33 >> 3));
  }
  if (0xf < local_50) {
    FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
  }
  return;
}

