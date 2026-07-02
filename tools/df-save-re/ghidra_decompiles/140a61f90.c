// FUN_140a61f90 @ 140a61f90
// callees:
//   -> 14000c780 FUN_14000c780
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 140339750 FUN_140339750
//   -> 140b05a40 FUN_140b05a40
//   -> 140339d40 FUN_140339d40
//   -> 140339e10 FUN_140339e10
//   -> 140339a40 FUN_140339a40
//   -> 140339810 FUN_140339810
//   -> 1400022f0 FUN_1400022f0
//   -> 140a5af80 FUN_140a5af80
//   -> 140a5ded0 FUN_140a5ded0
//   -> 140a5bc30 FUN_140a5bc30
//   -> 1405cca20 FUN_1405cca20
//   -> 140a5d150 FUN_140a5d150
//   -> 140a5a920 FUN_140a5a920
//   -> 140a5c620 FUN_140a5c620
//   -> 140baf300 FUN_140baf300
//   -> 140b16370 FUN_140b16370
//   -> 140ad7c40 FUN_140ad7c40
//   -> 140df4150 FUN_140df4150
//   -> 140a5b110 FUN_140a5b110
//   -> 140519420 FUN_140519420
//   -> 140a5f840 FUN_140a5f840
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a61f90(longlong param_1,undefined8 param_2,char param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  ushort uVar5;
  short sVar6;
  ulonglong uVar7;
  ushort *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ushort uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  short sVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [32];
  uint local_a8 [2];
  ushort local_a0 [4];
  undefined1 local_98 [8];
  uint local_90 [2];
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_70 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_c8;
  local_a0[0] = CONCAT11(local_a0[0]._1_1_,param_3);
  local_50 = 0xf;
  uVar10 = 0;
  local_58 = 0;
  local_68 = 0;
  local_78 = param_1;
  FUN_14000c780(&local_68,"*START REGION SAVE*",0x13);
  uVar11 = 0;
  uVar5 = (ushort)local_58;
  if (9999 < (ushort)local_58) {
    uVar5 = uVar11;
  }
  local_90[0] = CONCAT22(local_90[0]._2_2_,uVar5);
  cVar2 = FUN_1405bb7c0(param_2,local_90,2);
  uVar7 = uVar10;
  if ((cVar2 != '\0') && (uVar5 != 0)) {
    puVar4 = &local_68;
    if (0xf < local_50) {
      puVar4 = (undefined1 *)CONCAT71(uStack_67,local_68);
    }
    FUN_1405bb7c0(param_2,puVar4,(longlong)(short)uVar5);
  }
  do {
    local_98[0] = *(undefined1 *)(uVar7 + 0x78 + param_1);
    FUN_1405bb7c0(param_2,local_98,1);
    uVar7 = uVar7 + 1;
  } while ((longlong)uVar7 < 0xf);
  FUN_1403159b0(param_1,param_2);
  FUN_14000c780(&local_68,"*START REGION DIM SAVE*",0x17);
  uVar5 = (ushort)local_58;
  if (9999 < (ushort)local_58) {
    uVar5 = uVar11;
  }
  local_90[0] = CONCAT22(local_90[0]._2_2_,uVar5);
  cVar2 = FUN_1405bb7c0(param_2,local_90,2);
  if ((cVar2 != '\0') && (uVar5 != 0)) {
    puVar4 = &local_68;
    if (0xf < local_50) {
      puVar4 = (undefined1 *)CONCAT71(uStack_67,local_68);
    }
    FUN_1405bb7c0(param_2,puVar4,(longlong)(short)uVar5);
  }
  local_90[0] = *(uint *)(param_1 + 0xa0);
  FUN_1405bb7c0(param_2,local_90,4);
  local_90[0] = *(uint *)(param_1 + 0xa4);
  FUN_1405bb7c0(param_2,local_90,4);
  FUN_14000c780(&local_68,"*START REGION MAP SAVE*",0x17);
  uVar5 = (ushort)local_58;
  if (9999 < (ushort)local_58) {
    uVar5 = uVar11;
  }
  local_90[0] = CONCAT22(local_90[0]._2_2_,uVar5);
  cVar2 = FUN_1405bb7c0(param_2,local_90,2);
  if ((cVar2 != '\0') && (uVar5 != 0)) {
    puVar4 = &local_68;
    if (0xf < local_50) {
      puVar4 = (undefined1 *)CONCAT71(uStack_67,local_68);
    }
    FUN_1405bb7c0(param_2,puVar4,(longlong)(short)uVar5);
  }
  if (*(longlong *)(param_1 + 0x2a0) == 0) {
    local_98[0] = 0;
    FUN_1405bb7c0(param_2,local_98,1);
  }
  else {
    local_90[0] = CONCAT31(local_90[0]._1_3_,1);
    FUN_1405bb7c0(param_2,local_90,1);
    sVar16 = 0;
    if (0 < *(int *)(param_1 + 0xa0)) {
      iVar3 = *(int *)(param_1 + 0xa4);
      do {
        sVar6 = 0;
        if (0 < iVar3) {
          do {
            FUN_140339750((longlong)sVar6 * 0x70 +
                          *(longlong *)((longlong)sVar16 * 8 + *(longlong *)(param_1 + 0x2a0)),
                          param_2);
            sVar6 = sVar6 + 1;
            iVar3 = *(int *)(param_1 + 0xa4);
          } while (sVar6 < iVar3);
        }
        sVar16 = sVar16 + 1;
      } while ((int)sVar16 < *(int *)(param_1 + 0xa0));
    }
    if (*(longlong *)(param_1 + 0x2a8) == 0) {
      local_90[0] = local_90[0] & 0xffffff00;
      FUN_1405bb7c0(param_2,local_90,1);
    }
    else {
      local_98[0] = 1;
      FUN_1405bb7c0(param_2,local_98,1);
      iVar3 = (*(int *)(param_1 + 0xa0) + 0xf >> 4) * (*(int *)(param_1 + 0xa4) + 0xf >> 4);
      uVar7 = uVar10;
      if (0 < iVar3) {
        do {
          local_90[0] = *(uint *)(*(longlong *)(param_1 + 0x2a8) + uVar7 * 4);
          FUN_1405bb7c0(param_2,local_90,4);
          uVar7 = uVar7 + 1;
        } while ((longlong)uVar7 < (longlong)iVar3);
      }
    }
    uVar14 = *(int *)(param_1 + 0xa0) + 0xf >> 4;
    uVar12 = *(int *)(param_1 + 0xa4) + 0xf >> 4;
    plVar13 = (longlong *)(param_1 + 0x2d0);
    local_88 = 6;
    local_a8[0] = uVar14;
    local_90[0] = uVar12;
    do {
      if (*plVar13 == 0) {
        local_90[0] = local_90[0] & 0xffffff00;
        FUN_1405bb7c0(param_2,local_90,1);
      }
      else {
        local_98[0] = 1;
        FUN_1405bb7c0(param_2,local_98,1);
        if (0 < (short)uVar14) {
          local_80 = (ulonglong)(uVar14 & 0xffff);
          uVar7 = uVar10;
          do {
            if (0 < (short)uVar12) {
              uVar18 = (ulonglong)(uVar12 & 0xffff);
              uVar9 = uVar10;
              do {
                FUN_140b05a40(*(longlong *)(uVar7 + *plVar13) + uVar9,param_2);
                uVar9 = uVar9 + 0x30;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            uVar7 = uVar7 + 8;
            local_80 = local_80 - 1;
          } while (local_80 != 0);
          local_80 = 0;
          uVar14 = local_a8[0];
        }
      }
      plVar13 = plVar13 + 1;
      local_88 = local_88 + -1;
    } while (local_88 != 0);
    local_88 = 0;
    param_1 = local_78;
    param_3 = (char)local_a0[0];
  }
  local_a8[0] = *(uint *)(param_1 + 0x88);
  FUN_1405bb7c0(param_2,local_a8,4);
  local_a8[0] = *(uint *)(param_1 + 0x8c);
  FUN_1405bb7c0(param_2,local_a8,4);
  local_a8[0] = *(uint *)(param_1 + 0x90);
  FUN_1405bb7c0(param_2,local_a8,4);
  local_a8[0] = *(uint *)(param_1 + 0x94);
  FUN_1405bb7c0(param_2,local_a8,4);
  local_a8[0] = *(uint *)(param_1 + 0x98);
  FUN_1405bb7c0(param_2,local_a8,4);
  local_a8[0] = *(uint *)(param_1 + 0x9c);
  FUN_1405bb7c0(param_2,local_a8,4);
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210) >> 3 != 0) {
    do {
      FUN_140339d40(*(undefined8 *)(*(longlong *)(param_1 + 0x210) + uVar7),param_2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210) >> 3));
  }
  FUN_14000c780(&local_68,"*START REGION GEOLOGY SAVE*",0x1b);
  uVar5 = (ushort)local_58;
  if (9999 < (ushort)local_58) {
    uVar5 = uVar11;
  }
  local_a0[0] = uVar5;
  cVar2 = FUN_1405bb7c0(param_2,local_a0,2);
  if ((cVar2 != '\0') && (uVar5 != 0)) {
    puVar4 = &local_68;
    if (0xf < local_50) {
      puVar4 = (undefined1 *)CONCAT71(uStack_67,local_68);
    }
    FUN_1405bb7c0(param_2,puVar4,(longlong)(short)uVar5);
  }
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x260) - *(longlong *)(param_1 + 600) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x260) - *(longlong *)(param_1 + 600) >> 3 != 0) {
    do {
      FUN_140339e10(*(undefined8 *)(uVar7 + *(longlong *)(param_1 + 600)),param_2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x260) - *(longlong *)(param_1 + 600) >> 3));
  }
  FUN_14000c780(&local_68,"*START REGION SUBREGION SAVE*",0x1d);
  uVar5 = (ushort)local_58;
  if (9999 < (ushort)local_58) {
    uVar5 = uVar11;
  }
  local_a0[0] = uVar5;
  cVar2 = FUN_1405bb7c0(param_2,local_a0,2);
  if ((cVar2 != '\0') && (uVar5 != 0)) {
    puVar4 = &local_68;
    if (0xf < local_50) {
      puVar4 = (undefined1 *)CONCAT71(uStack_67,local_68);
    }
    FUN_1405bb7c0(param_2,puVar4,(longlong)(short)uVar5);
  }
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x230) - *(longlong *)(param_1 + 0x228) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x230) - *(longlong *)(param_1 + 0x228) >> 3 != 0) {
    do {
      FUN_140339a40(*(undefined8 *)(*(longlong *)(param_1 + 0x228) + uVar7),param_2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x230) - *(longlong *)(param_1 + 0x228) >> 3));
  }
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x248) - *(longlong *)(param_1 + 0x240) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x248) - *(longlong *)(param_1 + 0x240) >> 3 != 0) {
    do {
      FUN_140339810(*(undefined8 *)(uVar7 + *(longlong *)(param_1 + 0x240)),param_2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x248) - *(longlong *)(param_1 + 0x240) >> 3));
  }
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x278) - *(longlong *)(param_1 + 0x270) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x278) - *(longlong *)(param_1 + 0x270) >> 3 != 0) {
    do {
      lVar15 = *(longlong *)(uVar7 + *(longlong *)(param_1 + 0x270));
      FUN_1403159b0(lVar15,param_2);
      local_a0[0] = *(ushort *)(lVar15 + 0x78);
      FUN_1405bb7c0(param_2,local_a0,2);
      local_a0[0] = *(ushort *)(lVar15 + 0x7a);
      FUN_1405bb7c0(param_2,local_a0,2);
      FUN_1400022f0(lVar15 + 0x80,param_2);
      local_a0[0] = *(ushort *)(lVar15 + 0x90);
      FUN_1405bb7c0(param_2,local_a0,2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x278) - *(longlong *)(param_1 + 0x270) >> 3));
  }
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x290) - *(longlong *)(param_1 + 0x288) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x290) - *(longlong *)(param_1 + 0x288) >> 3 != 0) {
    do {
      FUN_140a5af80(*(undefined8 *)(*(longlong *)(param_1 + 0x288) + uVar7),param_2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x290) - *(longlong *)(param_1 + 0x288) >> 3));
  }
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x188) - *(longlong *)(param_1 + 0x180) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x188) - *(longlong *)(param_1 + 0x180) >> 3 != 0) {
    do {
      FUN_140a5ded0(*(undefined8 *)(uVar7 + *(longlong *)(param_1 + 0x180)),param_2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x188) - *(longlong *)(param_1 + 0x180) >> 3));
  }
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x1a0) - *(longlong *)(param_1 + 0x198) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x1a0) - *(longlong *)(param_1 + 0x198) >> 3 != 0) {
    do {
      FUN_140a5bc30(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + uVar7),param_2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x1a0) - *(longlong *)(param_1 + 0x198) >> 3));
  }
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x1b8) - *(longlong *)(param_1 + 0x1b0) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x1b8) - *(longlong *)(param_1 + 0x1b0) >> 3 != 0) {
    do {
      puVar1 = *(uint **)(uVar7 + *(longlong *)(param_1 + 0x1b0));
      local_a8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_a8,4);
      local_a8[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_a8,4);
      FUN_1405cca20(puVar1 + 2,param_2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x1b8) - *(longlong *)(param_1 + 0x1b0) >> 3));
  }
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x1d0) - *(longlong *)(param_1 + 0x1c8) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x1d0) - *(longlong *)(param_1 + 0x1c8) >> 3 != 0) {
    do {
      FUN_140a5d150(*(undefined8 *)(uVar7 + *(longlong *)(param_1 + 0x1c8)),param_2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x1d0) - *(longlong *)(param_1 + 0x1c8) >> 3));
  }
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x1e8) - *(longlong *)(param_1 + 0x1e0) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x1e8) - *(longlong *)(param_1 + 0x1e0) >> 3 != 0) {
    do {
      FUN_140a5a920(*(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + uVar7),param_2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x1e8) - *(longlong *)(param_1 + 0x1e0) >> 3));
  }
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x200) - *(longlong *)(param_1 + 0x1f8) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x200) - *(longlong *)(param_1 + 0x1f8) >> 3 != 0) {
    do {
      FUN_140a5c620(*(undefined8 *)(uVar7 + *(longlong *)(param_1 + 0x1f8)),param_2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x200) - *(longlong *)(param_1 + 0x1f8) >> 3));
  }
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3 != 0) {
    do {
      FUN_140baf300(*(undefined8 *)(*(longlong *)(param_1 + 0x168) + uVar7),param_2);
      uVar14 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3));
  }
  local_a8[0] = *(uint *)(param_1 + 0xa8);
  FUN_1405bb7c0(param_2,local_a8,4);
  local_a8[0] = *(uint *)(param_1 + 0xac);
  FUN_1405bb7c0(param_2,local_a8,4);
  local_a0[0] = *(ushort *)(param_1 + 0xb0);
  FUN_1405bb7c0(param_2,local_a0,2);
  local_a0[0] = *(ushort *)(param_1 + 0xb2);
  FUN_1405bb7c0(param_2,local_a0,2);
  puVar8 = (ushort *)(param_1 + 0xb4);
  lVar15 = 3;
  lVar17 = 3;
  do {
    local_a0[0] = *puVar8;
    FUN_1405bb7c0(param_2,local_a0,2);
    puVar8 = puVar8 + 1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  puVar8 = (ushort *)(param_1 + 0xba);
  do {
    local_a0[0] = *puVar8;
    FUN_1405bb7c0(param_2,local_a0,2);
    puVar8 = puVar8 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  if (param_3 == '\0') {
    FUN_140b16370(param_1 + 0xe8,param_2);
  }
  FUN_140ad7c40(param_1 + 0xc0,param_2);
  FUN_140df4150(param_1 + 0x118,param_2);
  if (param_3 == '\0') {
    uVar14 = *(int *)(param_1 + 0xa0) + 0xf >> 4;
    uVar12 = *(int *)(param_1 + 0xa4) + 0xf >> 4;
    if (0 < (short)uVar14) {
      local_88 = (ulonglong)(uVar14 & 0xffff);
      uVar7 = uVar10;
      do {
        if (0 < (short)uVar12) {
          uVar18 = (ulonglong)(uVar12 & 0xffff);
          uVar9 = uVar10;
          do {
            if (*(longlong *)(*(longlong *)(uVar7 + *(longlong *)(param_1 + 0x483a8)) + 8 + uVar9)
                == 0) {
              local_a0[0] = local_a0[0] & 0xff00;
              FUN_1405bb7c0(param_2,local_a0,1);
            }
            else {
              local_90[0] = CONCAT31(local_90[0]._1_3_,1);
              FUN_1405bb7c0(param_2,local_90,1);
              FUN_140a5b110(*(undefined8 *)
                             (*(longlong *)(uVar7 + *(longlong *)(param_1 + 0x483a8)) + 8 + uVar9),
                            param_2,1);
            }
            uVar9 = uVar9 + 0x20;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        uVar7 = uVar7 + 8;
        local_88 = local_88 - 1;
      } while (local_88 != 0);
    }
  }
  FUN_140519420(param_1 + 0x148,param_2);
  FUN_140519420(param_1 + 0x158,param_2);
  local_a8[0] = (uint)(*(longlong *)(param_1 + 0x2c0) - *(longlong *)(param_1 + 0x2b8) >> 3);
  FUN_1405bb7c0(param_2,local_a8,4);
  uVar7 = uVar10;
  if (*(longlong *)(param_1 + 0x2c0) - *(longlong *)(param_1 + 0x2b8) >> 3 != 0) {
    do {
      FUN_140a5f840(*(undefined8 *)(uVar10 + *(longlong *)(param_1 + 0x2b8)),param_2);
      uVar14 = (int)uVar7 + 1;
      uVar10 = uVar10 + 8;
      uVar7 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x2c0) - *(longlong *)(param_1 + 0x2b8) >> 3));
  }
  if (0xf < local_50) {
    FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
  }
  return;
}

