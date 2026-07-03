// FUN_14029b610 @ 14029b610
// callees:
//   -> 140288480 FUN_140288480
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140dfc99c memset
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> EXTERNAL:000000e1 memmove
//   -> 1402bbe60 FUN_1402bbe60
//   -> 140050150 FUN_140050150
//   -> 1402803e0 FUN_1402803e0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140282ef0 FUN_140282ef0
//   -> 14000bfc0 FUN_14000bfc0
//   -> 140283040 FUN_140283040
//   -> 140283100 FUN_140283100
//   -> 140284f00 FUN_140284f00
//   -> 14000c9e0 FUN_14000c9e0
//   -> 140282e20 FUN_140282e20
//   -> 140282e70 FUN_140282e70
//   -> 14000dc80 FUN_14000dc80
//   -> 14000c230 FUN_14000c230
//   -> 14029cf10 FUN_14029cf10
//   -> 140002600 FUN_140002600


void FUN_14029b610(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  __uint64 _Var21;
  
  FUN_140288480();
  lVar20 = param_2 - param_1;
  lVar12 = 0x23;
  lVar14 = param_1;
  do {
    if (lVar14 != lVar20 + lVar14) {
      FUN_14000c8b0(lVar14,lVar20 + lVar14,0,0xffffffffffffffff);
    }
    lVar14 = lVar14 + 0x20;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  puVar9 = (undefined2 *)(param_1 + 0x46e);
  *(undefined1 *)(param_1 + 0x460) = *(undefined1 *)(param_2 + 0x460);
  lVar12 = 0xd;
  lVar14 = 0xd;
  *(undefined1 *)(param_1 + 0x461) = *(undefined1 *)(param_2 + 0x461);
  *(undefined1 *)(param_1 + 0x462) = *(undefined1 *)(param_2 + 0x462);
  *(undefined1 *)(param_1 + 0x463) = *(undefined1 *)(param_2 + 0x463);
  *(undefined1 *)(param_1 + 0x464) = *(undefined1 *)(param_2 + 0x464);
  *(undefined2 *)(param_1 + 0x466) = *(undefined2 *)(param_2 + 0x466);
  *(undefined2 *)(param_1 + 0x468) = *(undefined2 *)(param_2 + 0x468);
  *(undefined2 *)(param_1 + 0x46a) = *(undefined2 *)(param_2 + 0x46a);
  *(undefined2 *)(param_1 + 0x46c) = *(undefined2 *)(param_2 + 0x46c);
  do {
    *puVar9 = *(undefined2 *)((longlong)puVar9 + lVar20);
    puVar9[1] = *(undefined2 *)(lVar20 + 2 + (longlong)puVar9);
    puVar9 = puVar9 + 2;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar7 = (undefined4 *)(param_1 + 0x4a4);
  lVar14 = 0x1b;
  do {
    *puVar7 = *(undefined4 *)((longlong)puVar7 + lVar20);
    puVar7[1] = *(undefined4 *)(lVar20 + 4 + (longlong)puVar7);
    puVar7 = puVar7 + 2;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  lVar16 = 0x32;
  puVar9 = (undefined2 *)(param_1 + 0x5e0);
  lVar14 = (param_2 + 0x57c) - (param_1 + 0x57c);
  do {
    puVar9[-0x32] = *(undefined2 *)(lVar14 + -100 + (longlong)puVar9);
    *puVar9 = *(undefined2 *)(lVar14 + (longlong)puVar9);
    puVar9[0x32] = *(undefined2 *)(lVar14 + 100 + (longlong)puVar9);
    puVar9 = puVar9 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  if ((0 < *(int *)(param_1 + 0x6b0)) && (*(void **)(param_1 + 0x6a8) != (void *)0x0)) {
    memset(*(void **)(param_1 + 0x6a8),0,(longlong)*(int *)(param_1 + 0x6b0));
  }
  iVar18 = *(int *)(param_2 + 0x6b0);
  _Var21 = (__uint64)iVar18;
  if (0 < iVar18) {
    if (*(void **)(param_1 + 0x6a8) != (void *)0x0) {
      free(*(void **)(param_1 + 0x6a8));
    }
    pvVar4 = operator_new(_Var21);
    *(void **)(param_1 + 0x6a8) = pvVar4;
    memset(pvVar4,0,_Var21);
    *(int *)(param_1 + 0x6b0) = iVar18;
    memmove(*(void **)(param_1 + 0x6a8),*(void **)(param_2 + 0x6a8),_Var21);
  }
  FUN_1402bbe60(param_1 + 0x6c0,param_2 + 0x6c0);
  FUN_140050150(param_1 + 0x890,param_2 + 0x890);
  FUN_1402803e0(param_1 + 0x8a8,param_2 + 0x8a8);
  lVar14 = 6;
  puVar7 = (undefined4 *)(param_1 + 0x11f0);
  puVar10 = (undefined4 *)(param_1 + 0x1404);
  puVar17 = (undefined4 *)(param_1 + 0x1534);
  do {
    *puVar7 = *(undefined4 *)(lVar20 + (longlong)puVar7);
    puVar1 = puVar10 + 4;
    puVar7[1] = *(undefined4 *)(lVar20 + 4 + (longlong)puVar7);
    puVar7[2] = *(undefined4 *)(lVar20 + 8 + (longlong)puVar7);
    puVar7[3] = *(undefined4 *)(lVar20 + 0xc + (longlong)puVar7);
    puVar7[4] = *(undefined4 *)(lVar20 + 0x10 + (longlong)puVar7);
    puVar7[5] = *(undefined4 *)(lVar20 + 0x14 + (longlong)puVar7);
    puVar7[6] = *(undefined4 *)(lVar20 + 0x18 + (longlong)puVar7);
    puVar7 = puVar7 + 7;
    *puVar10 = *(undefined4 *)(lVar20 + -0x10 + (longlong)puVar1);
    puVar10[1] = *(undefined4 *)(lVar20 + -0xc + (longlong)puVar1);
    puVar10[2] = *(undefined4 *)(lVar20 + -8 + (longlong)puVar1);
    puVar10[3] = *(undefined4 *)(lVar20 + -4 + (longlong)puVar1);
    *puVar17 = *(undefined4 *)(lVar20 + -4 + (longlong)(puVar17 + 1));
    lVar14 = lVar14 + -1;
    puVar10 = puVar1;
    puVar17 = puVar17 + 1;
  } while (lVar14 != 0);
  puVar7 = (undefined4 *)(param_1 + 0x1298);
  puVar10 = (undefined4 *)(param_1 + 0x1464);
  puVar17 = (undefined4 *)(param_1 + 0x154c);
  do {
    *puVar7 = *(undefined4 *)(lVar20 + (longlong)puVar7);
    puVar7[1] = *(undefined4 *)(lVar20 + 4 + (longlong)puVar7);
    puVar7[2] = *(undefined4 *)(lVar20 + 8 + (longlong)puVar7);
    puVar7[3] = *(undefined4 *)(lVar20 + 0xc + (longlong)puVar7);
    puVar7[4] = *(undefined4 *)(lVar20 + 0x10 + (longlong)puVar7);
    puVar7[5] = *(undefined4 *)(lVar20 + 0x14 + (longlong)puVar7);
    puVar7[6] = *(undefined4 *)(lVar20 + 0x18 + (longlong)puVar7);
    puVar7 = puVar7 + 7;
    *puVar10 = *(undefined4 *)((longlong)puVar10 + lVar20);
    puVar10[1] = *(undefined4 *)((longlong)puVar10 + lVar20 + 4);
    puVar10[2] = *(undefined4 *)((longlong)puVar10 + lVar20 + 8);
    puVar10[3] = *(undefined4 *)((longlong)puVar10 + lVar20 + 0xc);
    *puVar17 = *(undefined4 *)((longlong)puVar17 + lVar20);
    lVar12 = lVar12 + -1;
    puVar10 = puVar10 + 4;
    puVar17 = puVar17 + 1;
  } while (lVar12 != 0);
  puVar7 = (undefined4 *)(param_1 + 0x8c0);
  lVar14 = 0x93;
  do {
    *puVar7 = *(undefined4 *)((longlong)puVar7 + lVar20);
    puVar7[0x93] = *(undefined4 *)(lVar20 + 0x24c + (longlong)puVar7);
    puVar7[0x126] = *(undefined4 *)(lVar20 + 0x498 + (longlong)puVar7);
    puVar7[0x1b9] = *(undefined4 *)(lVar20 + 0x6e4 + (longlong)puVar7);
    puVar7 = puVar7 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  *(undefined1 *)(param_1 + 0x1580) = *(undefined1 *)(param_2 + 0x1580);
  *(undefined4 *)(param_1 + 0x1584) = *(undefined4 *)(param_2 + 0x1584);
  *(undefined4 *)(param_1 + 0x1588) = *(undefined4 *)(param_2 + 0x1588);
  *(undefined4 *)(param_1 + 0x158c) = *(undefined4 *)(param_2 + 0x158c);
  *(undefined4 *)(param_1 + 0x1590) = *(undefined4 *)(param_2 + 0x1590);
  *(undefined4 *)(param_1 + 0x1594) = *(undefined4 *)(param_2 + 0x1594);
  *(undefined4 *)(param_1 + 0x1598) = *(undefined4 *)(param_2 + 0x1598);
  FUN_140050150(param_1 + 0x15a0,param_2 + 0x15a0);
  FUN_140050150(param_1 + 0x15b8,param_2 + 0x15b8);
  plVar2 = (longlong *)(param_1 + 0x15d0);
  FUN_14000b9d0(plVar2,*(longlong *)(param_2 + 0x15d8) - *(longlong *)(param_2 + 0x15d0) >> 3);
  iVar18 = 0;
  if (*(longlong *)(param_2 + 0x15d8) - *(longlong *)(param_2 + 0x15d0) >> 3 != 0) {
    lVar14 = 0;
    do {
      pvVar4 = operator_new(0x88);
      *(undefined8 *)((longlong)pvVar4 + 0x70) = 0xf;
      *(undefined8 *)((longlong)pvVar4 + 0x68) = 0;
      *(undefined1 *)((longlong)pvVar4 + 0x58) = 0;
      *(undefined4 *)((longlong)pvVar4 + 4) = 100;
      *(undefined4 *)((longlong)pvVar4 + 8) = 100;
      *(undefined4 *)((longlong)pvVar4 + 0xc) = 100;
      *(undefined4 *)((longlong)pvVar4 + 0x10) = 100;
      *(undefined4 *)((longlong)pvVar4 + 0x14) = 100;
      *(undefined4 *)((longlong)pvVar4 + 0x18) = 100;
      *(undefined4 *)((longlong)pvVar4 + 0x1c) = 100;
      *(undefined4 *)((longlong)pvVar4 + 0x20) = 10;
      *(undefined4 *)((longlong)pvVar4 + 0x24) = 0x32;
      *(undefined4 *)((longlong)pvVar4 + 0x28) = 0x5f;
      *(undefined4 *)((longlong)pvVar4 + 0x2c) = 0x69;
      *(undefined4 *)((longlong)pvVar4 + 0x30) = 0x96;
      *(undefined8 *)((longlong)pvVar4 + 0x34) = 0xbe;
      *(undefined2 *)((longlong)pvVar4 + 0x3c) = 3;
      *(undefined4 *)((longlong)pvVar4 + 0x40) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x44) = 10000;
      *(undefined4 *)((longlong)pvVar4 + 0x4c) = 0xffffffff;
      *(undefined2 *)((longlong)pvVar4 + 0x7a) = 0;
      *(undefined4 *)((longlong)pvVar4 + 0x7c) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar4 + 0x50) = 100;
      *(undefined2 *)((longlong)pvVar4 + 0x78) = 0xffff;
      *(void **)(lVar14 + *plVar2) = pvVar4;
      lVar12 = *(longlong *)(lVar14 + *(longlong *)(param_2 + 0x15d0));
      lVar16 = *(longlong *)(lVar14 + *plVar2);
      FUN_140282ef0(lVar16,lVar12);
      lVar14 = lVar14 + 8;
      *(undefined4 *)(lVar16 + 0x80) = *(undefined4 *)(lVar12 + 0x80);
      iVar18 = iVar18 + 1;
    } while ((ulonglong)(longlong)iVar18 <
             (ulonglong)(*(longlong *)(param_2 + 0x15d8) - *(longlong *)(param_2 + 0x15d0) >> 3));
  }
  plVar2 = (longlong *)(param_1 + 0x15e8);
  FUN_14000b9d0(plVar2,*(longlong *)(param_2 + 0x15f0) - *(longlong *)(param_2 + 0x15e8) >> 3);
  iVar18 = 0;
  if (*(longlong *)(param_2 + 0x15f0) - *(longlong *)(param_2 + 0x15e8) >> 3 != 0) {
    lVar14 = 0;
    do {
      pvVar4 = operator_new(0xb8);
      *(undefined8 *)((longlong)pvVar4 + 0x70) = 0xf;
      *(undefined8 *)((longlong)pvVar4 + 0x68) = 0;
      *(undefined1 *)((longlong)pvVar4 + 0x58) = 0;
      *(undefined4 *)((longlong)pvVar4 + 4) = 100;
      *(undefined4 *)((longlong)pvVar4 + 8) = 100;
      *(undefined4 *)((longlong)pvVar4 + 0xc) = 100;
      *(undefined4 *)((longlong)pvVar4 + 0x10) = 100;
      *(undefined4 *)((longlong)pvVar4 + 0x14) = 100;
      *(undefined4 *)((longlong)pvVar4 + 0x18) = 100;
      *(undefined4 *)((longlong)pvVar4 + 0x1c) = 100;
      *(undefined4 *)((longlong)pvVar4 + 0x20) = 10;
      *(undefined4 *)((longlong)pvVar4 + 0x24) = 0x32;
      *(undefined4 *)((longlong)pvVar4 + 0x28) = 0x5f;
      *(undefined4 *)((longlong)pvVar4 + 0x2c) = 0x69;
      *(undefined4 *)((longlong)pvVar4 + 0x30) = 0x96;
      *(undefined8 *)((longlong)pvVar4 + 0x34) = 0xbe;
      *(undefined2 *)((longlong)pvVar4 + 0x3c) = 3;
      *(undefined4 *)((longlong)pvVar4 + 0x40) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x44) = 10000;
      *(undefined4 *)((longlong)pvVar4 + 0x4c) = 0xffffffff;
      *(undefined2 *)((longlong)pvVar4 + 0x7a) = 0;
      *(undefined4 *)((longlong)pvVar4 + 0x7c) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar4 + 0x50) = 100;
      *(undefined2 *)((longlong)pvVar4 + 0x78) = 0xffff;
      *(undefined8 *)((longlong)pvVar4 + 0x80) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x88) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x90) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x98) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0xa0) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0xa8) = 0;
      *(void **)(lVar14 + *plVar2) = pvVar4;
      lVar12 = *(longlong *)(lVar14 + *(longlong *)(param_2 + 0x15e8));
      lVar16 = *(longlong *)(lVar14 + *plVar2);
      FUN_140282ef0(lVar16,lVar12);
      FUN_14000bfc0(lVar16 + 0x80,lVar12 + 0x80);
      FUN_14000bfc0(lVar16 + 0x98,lVar12 + 0x98);
      lVar14 = lVar14 + 8;
      *(undefined4 *)(lVar16 + 0xb0) = *(undefined4 *)(lVar12 + 0xb0);
      iVar18 = iVar18 + 1;
    } while ((ulonglong)(longlong)iVar18 <
             (ulonglong)(*(longlong *)(param_2 + 0x15f0) - *(longlong *)(param_2 + 0x15e8) >> 3));
  }
  FUN_140050150(param_1 + 0x1600,param_2 + 0x1600);
  FUN_14000bfc0(param_1 + 0x1618,param_2 + 0x1618);
  FUN_14000bfc0(param_1 + 0x1630,param_2 + 0x1630);
  FUN_14000bfc0(param_1 + 0x1648,param_2 + 0x1648);
  FUN_14000bfc0(param_1 + 0x1660,param_2 + 0x1660);
  FUN_140050150(param_1 + 0x1678,param_2 + 0x1678);
  FUN_14000bfc0(param_1 + 0x17a0,param_2 + 0x17a0);
  FUN_140050150(param_1 + 0x17b8,param_2 + 0x17b8);
  FUN_140050150(param_1 + 0x17d0,param_2 + 0x17d0);
  FUN_14000b9d0(param_1 + 0x1690,
                *(longlong *)(param_2 + 0x1698) - *(longlong *)(param_2 + 0x1690) >> 3);
  uVar19 = 0;
  uVar13 = uVar19;
  uVar15 = uVar19;
  if (*(longlong *)(param_2 + 0x1698) - *(longlong *)(param_2 + 0x1690) >> 3 != 0) {
    do {
      puVar5 = operator_new(0xd0);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0x11] = 0xf;
      puVar5[0x10] = 0;
      *(undefined1 *)(puVar5 + 0xe) = 0;
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      puVar5[0x16] = 0;
      puVar5[0x17] = 0;
      puVar5[0x18] = 0;
      puVar5[0x19] = 0;
      *(undefined2 *)(puVar5 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar5 + 100) = 0;
      *(undefined2 *)((longlong)puVar5 + 0x92) = 1;
      *(undefined4 *)((longlong)puVar5 + 0x94) = 0xffffffff;
      *(undefined4 *)(puVar5 + 0x13) = 0xffffffff;
      *(undefined4 *)((longlong)puVar5 + 0x6c) = 2000;
      *(undefined2 *)(puVar5 + 0x12) = 0xffff;
      *(undefined8 **)(uVar15 + *(longlong *)(param_1 + 0x1690)) = puVar5;
      FUN_140283040(*(undefined8 *)(*(longlong *)(param_1 + 0x1690) + uVar15),
                    *(undefined8 *)(*(longlong *)(param_2 + 0x1690) + uVar15));
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar11;
      uVar15 = uVar15 + 8;
    } while ((ulonglong)(longlong)(int)uVar11 <
             (ulonglong)(*(longlong *)(param_2 + 0x1698) - *(longlong *)(param_2 + 0x1690) >> 3));
  }
  FUN_14000b9d0(param_1 + 0x16a8,
                *(longlong *)(param_2 + 0x16b0) - *(longlong *)(param_2 + 0x16a8) >> 3);
  uVar13 = uVar19;
  uVar15 = uVar19;
  if (*(longlong *)(param_2 + 0x16b0) - *(longlong *)(param_2 + 0x16a8) >> 3 != 0) {
    do {
      puVar6 = operator_new(0xb0);
      *(undefined8 *)(puVar6 + 0x18) = 0xf;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *puVar6 = 0;
      *(undefined8 *)(puVar6 + 0x20) = 0;
      *(undefined8 *)(puVar6 + 0x28) = 0;
      *(undefined8 *)(puVar6 + 0x30) = 0;
      *(undefined8 *)(puVar6 + 0x38) = 0;
      *(undefined8 *)(puVar6 + 0x40) = 0;
      *(undefined8 *)(puVar6 + 0x48) = 0;
      *(undefined8 *)(puVar6 + 0x50) = 0;
      *(undefined8 *)(puVar6 + 0x58) = 0;
      *(undefined8 *)(puVar6 + 0x60) = 0;
      *(undefined8 *)(puVar6 + 0x68) = 0;
      *(undefined8 *)(puVar6 + 0x70) = 0;
      *(undefined8 *)(puVar6 + 0x78) = 0;
      *(undefined8 *)(puVar6 + 0xa0) = 0xf;
      *(undefined8 *)(puVar6 + 0x98) = 0;
      puVar6[0x88] = 0;
      *(undefined1 **)(uVar15 + *(longlong *)(param_1 + 0x16a8)) = puVar6;
      FUN_140283100(*(undefined8 *)(*(longlong *)(param_1 + 0x16a8) + uVar15),
                    *(undefined8 *)(*(longlong *)(param_2 + 0x16a8) + uVar15));
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar11;
      uVar15 = uVar15 + 8;
    } while ((ulonglong)(longlong)(int)uVar11 <
             (ulonglong)(*(longlong *)(param_2 + 0x16b0) - *(longlong *)(param_2 + 0x16a8) >> 3));
  }
  FUN_14000b9d0(param_1 + 0x16c0,
                *(longlong *)(param_2 + 0x16c8) - *(longlong *)(param_2 + 0x16c0) >> 3);
  if (*(longlong *)(param_2 + 0x16c8) - *(longlong *)(param_2 + 0x16c0) >> 3 != 0) {
    lVar14 = 0;
    do {
      pvVar4 = operator_new(0x50);
      *(undefined8 *)((longlong)pvVar4 + 8) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x18) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x20) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x28) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x30) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x38) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x40) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x48) = 0;
      *(void **)(lVar14 + *(longlong *)(param_1 + 0x16c0)) = pvVar4;
      puVar9 = *(undefined2 **)(lVar14 + *(longlong *)(param_2 + 0x16c0));
      puVar3 = *(undefined2 **)(lVar14 + *(longlong *)(param_1 + 0x16c0));
      *puVar3 = *puVar9;
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar9 + 2);
      FUN_14000bfc0(puVar3 + 4,puVar9 + 4);
      FUN_14000bfc0(puVar3 + 0x10,puVar9 + 0x10);
      FUN_140050150(puVar3 + 0x1c,puVar9 + 0x1c);
      lVar14 = lVar14 + 8;
      uVar11 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar11;
    } while ((ulonglong)(longlong)(int)uVar11 <
             (ulonglong)(*(longlong *)(param_2 + 0x16c8) - *(longlong *)(param_2 + 0x16c0) >> 3));
  }
  lVar14 = param_1 + 0x16d8;
  lVar12 = 4;
  do {
    FUN_140050150(lVar14,lVar14 + lVar20);
    FUN_140050150(lVar14 + 0x60,lVar14 + 0x60 + lVar20);
    lVar14 = lVar14 + 0x18;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  lVar14 = param_1 + 0x17e8;
  lVar12 = 0x87;
  do {
    if (lVar14 != lVar14 + lVar20) {
      FUN_14000c8b0(lVar14,lVar14 + lVar20,0,0xffffffffffffffff);
    }
    lVar16 = lVar14 + 0x10e0 + lVar20;
    if (lVar14 + 0x10e0 != lVar16) {
      FUN_14000c8b0(lVar14 + 0x10e0,lVar16,0,0xffffffffffffffff);
    }
    lVar14 = lVar14 + 0x20;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FUN_14000bfc0(param_1 + 0x39a8,param_2 + 0x39a8);
  FUN_140050150(param_1 + 0x39c0,param_2 + 0x39c0);
  FUN_1402803e0(param_1 + 0x39d8,param_2 + 0x39d8);
  FUN_1402803e0(param_1 + 0x39f0,param_2 + 0x39f0);
  FUN_1402803e0(param_1 + 0x3a08,param_2 + 0x3a08);
  *(undefined2 *)(param_1 + 0x3a20) = *(undefined2 *)(param_2 + 0x3a20);
  lVar14 = 4;
  *(undefined4 *)(param_1 + 0x3a24) = *(undefined4 *)(param_2 + 0x3a24);
  if (param_1 + 0x3a28 != param_2 + 0x3a28) {
    FUN_14000c8b0(param_1 + 0x3a28,param_2 + 0x3a28,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3a48 != param_2 + 0x3a48) {
    FUN_14000c8b0(param_1 + 0x3a48,param_2 + 0x3a48,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3a68 != param_2 + 0x3a68) {
    FUN_14000c8b0(param_1 + 0x3a68,param_2 + 0x3a68,0,0xffffffffffffffff);
  }
  *(undefined2 *)(param_1 + 0x3a88) = *(undefined2 *)(param_2 + 0x3a88);
  *(undefined4 *)(param_1 + 0x3a8c) = *(undefined4 *)(param_2 + 0x3a8c);
  if (param_1 + 0x3a90 != param_2 + 0x3a90) {
    FUN_14000c8b0(param_1 + 0x3a90,param_2 + 0x3a90,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3ab0 != param_2 + 0x3ab0) {
    FUN_14000c8b0(param_1 + 0x3ab0,param_2 + 0x3ab0,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3ad0 != param_2 + 0x3ad0) {
    FUN_14000c8b0(param_1 + 0x3ad0,param_2 + 0x3ad0,0,0xffffffffffffffff);
  }
  *(undefined2 *)(param_1 + 0x3af0) = *(undefined2 *)(param_2 + 0x3af0);
  *(undefined4 *)(param_1 + 0x3af4) = *(undefined4 *)(param_2 + 0x3af4);
  *(undefined2 *)(param_1 + 0x3af8) = *(undefined2 *)(param_2 + 0x3af8);
  if (param_1 + 0x3b00 != param_2 + 0x3b00) {
    FUN_14000c8b0(param_1 + 0x3b00,param_2 + 0x3b00,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3b20 != param_2 + 0x3b20) {
    FUN_14000c8b0(param_1 + 0x3b20,param_2 + 0x3b20,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3b40 != param_2 + 0x3b40) {
    FUN_14000c8b0(param_1 + 0x3b40,param_2 + 0x3b40,0,0xffffffffffffffff);
  }
  *(undefined2 *)(param_1 + 0x3b60) = *(undefined2 *)(param_2 + 0x3b60);
  *(undefined4 *)(param_1 + 0x3b64) = *(undefined4 *)(param_2 + 0x3b64);
  if (param_1 + 0x3b68 != param_2 + 0x3b68) {
    FUN_14000c8b0(param_1 + 0x3b68,param_2 + 0x3b68,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3b88 != param_2 + 0x3b88) {
    FUN_14000c8b0(param_1 + 0x3b88,param_2 + 0x3b88,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3ba8 != param_2 + 0x3ba8) {
    FUN_14000c8b0(param_1 + 0x3ba8,param_2 + 0x3ba8,0,0xffffffffffffffff);
  }
  *(undefined4 *)(param_1 + 0x3bc8) = *(undefined4 *)(param_2 + 0x3bc8);
  *(undefined2 *)(param_1 + 0x3bcc) = *(undefined2 *)(param_2 + 0x3bcc);
  *(undefined4 *)(param_1 + 0x3bd0) = *(undefined4 *)(param_2 + 0x3bd0);
  if (param_1 + 0x3bd8 != param_2 + 0x3bd8) {
    FUN_14000c8b0(param_1 + 0x3bd8,param_2 + 0x3bd8,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3bf8 != param_2 + 0x3bf8) {
    FUN_14000c8b0(param_1 + 0x3bf8,param_2 + 0x3bf8,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3c18 != param_2 + 0x3c18) {
    FUN_14000c8b0(param_1 + 0x3c18,param_2 + 0x3c18,0,0xffffffffffffffff);
  }
  *(undefined4 *)(param_1 + 0x3c38) = *(undefined4 *)(param_2 + 0x3c38);
  *(undefined2 *)(param_1 + 0x3c3e) = *(undefined2 *)(param_2 + 0x3c3e);
  *(undefined4 *)(param_1 + 0x3c40) = *(undefined4 *)(param_2 + 0x3c40);
  if (param_1 + 0x3c48 != param_2 + 0x3c48) {
    FUN_14000c8b0(param_1 + 0x3c48,param_2 + 0x3c48,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3c68 != param_2 + 0x3c68) {
    FUN_14000c8b0(param_1 + 0x3c68,param_2 + 0x3c68,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3c88 != param_2 + 0x3c88) {
    FUN_14000c8b0(param_1 + 0x3c88,param_2 + 0x3c88,0,0xffffffffffffffff);
  }
  *(undefined2 *)(param_1 + 0x3c3c) = *(undefined2 *)(param_2 + 0x3c3c);
  *(undefined2 *)(param_1 + 0x3caa) = *(undefined2 *)(param_2 + 0x3caa);
  *(undefined4 *)(param_1 + 0x3cac) = *(undefined4 *)(param_2 + 0x3cac);
  if (param_1 + 0x3cb0 != param_2 + 0x3cb0) {
    FUN_14000c8b0(param_1 + 0x3cb0,param_2 + 0x3cb0,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3cd0 != param_2 + 0x3cd0) {
    FUN_14000c8b0(param_1 + 0x3cd0,param_2 + 0x3cd0,0,0xffffffffffffffff);
  }
  if (param_1 + 0x3cf0 != param_2 + 0x3cf0) {
    FUN_14000c8b0(param_1 + 0x3cf0,param_2 + 0x3cf0,0,0xffffffffffffffff);
  }
  *(undefined2 *)(param_1 + 0x3ca8) = *(undefined2 *)(param_2 + 0x3ca8);
  FUN_14000bfc0(param_1 + 0x3d10,param_2 + 0x3d10);
  FUN_140050150(param_1 + 0x3d28,param_2 + 0x3d28);
  FUN_1402803e0(param_1 + 0x3d40,param_2 + 0x3d40);
  FUN_1402803e0(param_1 + 0x3d58,param_2 + 0x3d58);
  FUN_1402803e0(param_1 + 0x3d70,param_2 + 0x3d70);
  FUN_14000bfc0(param_1 + 0x3d88,param_2 + 0x3d88);
  FUN_14000bfc0(param_1 + 0x3da0,param_2 + 0x3da0);
  FUN_14000bfc0(param_1 + 0x3db8,param_2 + 0x3db8);
  FUN_140050150(param_1 + 0x3dd0,param_2 + 0x3dd0);
  FUN_1402803e0(param_1 + 0x3de8,param_2 + 0x3de8);
  FUN_1402803e0(param_1 + 0x3e00,param_2 + 0x3e00);
  FUN_1402803e0(param_1 + 0x3e18,param_2 + 0x3e18);
  FUN_1402803e0(param_1 + 0x3e30,param_2 + 0x3e30);
  FUN_1402803e0(param_1 + 0x3e48,param_2 + 0x3e48);
  FUN_14000b9d0(param_1 + 0x3e60,
                *(longlong *)(param_2 + 0x3e68) - *(longlong *)(param_2 + 0x3e60) >> 3);
  iVar18 = (int)(*(longlong *)(param_1 + 0x3e68) - *(longlong *)(param_1 + 0x3e60) >> 3) + -1;
  lVar12 = (longlong)iVar18;
  if (-1 < iVar18) {
    do {
      pvVar4 = operator_new(0xa8);
      *(undefined8 *)((longlong)pvVar4 + 0x28) = 0xf;
      *(undefined8 *)((longlong)pvVar4 + 0x20) = 0;
      *(undefined1 *)((longlong)pvVar4 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x48) = 0xf;
      *(undefined8 *)((longlong)pvVar4 + 0x40) = 0;
      *(undefined1 *)((longlong)pvVar4 + 0x30) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x68) = 0xf;
      *(undefined8 *)((longlong)pvVar4 + 0x60) = 0;
      *(undefined1 *)((longlong)pvVar4 + 0x50) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x70) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x78) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x80) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x88) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x90) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x98) = 0;
      *(void **)(*(longlong *)(param_1 + 0x3e60) + lVar12 * 8) = pvVar4;
      FUN_140284f00(*(undefined8 *)(*(longlong *)(param_1 + 0x3e60) + lVar12 * 8),
                    *(undefined8 *)(*(longlong *)(param_2 + 0x3e60) + lVar12 * 8));
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  FUN_1402803e0(param_1 + 0x3e78,param_2 + 0x3e78);
  FUN_1402803e0(param_1 + 0x3e90,param_2 + 0x3e90);
  FUN_140050150(param_1 + 0x3ea8,param_2 + 0x3ea8);
  FUN_1402803e0(param_1 + 0x3ec0,param_2 + 0x3ec0);
  FUN_1402803e0(param_1 + 0x3ed8,param_2 + 0x3ed8);
  FUN_1402803e0(param_1 + 0x3ef0,param_2 + 0x3ef0);
  FUN_140050150(param_1 + 0x3f08,param_2 + 0x3f08);
  FUN_140050150(param_1 + 0x3f20,param_2 + 0x3f20);
  FUN_140050150(param_1 + 0x3f38,param_2 + 0x3f38);
  FUN_140050150(param_1 + 0x3f50);
  if ((0 < *(int *)(param_1 + 0x3f70)) && (*(void **)(param_1 + 0x3f68) != (void *)0x0)) {
    memset(*(void **)(param_1 + 0x3f68),0,(longlong)*(int *)(param_1 + 0x3f70));
  }
  iVar18 = *(int *)(param_2 + 0x3f70);
  _Var21 = (__uint64)iVar18;
  if (0 < iVar18) {
    if (*(void **)(param_1 + 0x3f68) != (void *)0x0) {
      free(*(void **)(param_1 + 0x3f68));
    }
    pvVar4 = operator_new(_Var21);
    *(void **)(param_1 + 0x3f68) = pvVar4;
    memset(pvVar4,0,_Var21);
    *(int *)(param_1 + 0x3f70) = iVar18;
    memmove(*(void **)(param_1 + 0x3f68),*(void **)(param_2 + 0x3f68),_Var21);
  }
  if ((0 < *(int *)(param_1 + 0x3f80)) && (*(void **)(param_1 + 0x3f78) != (void *)0x0)) {
    memset(*(void **)(param_1 + 0x3f78),0,(longlong)*(int *)(param_1 + 0x3f80));
  }
  iVar18 = *(int *)(param_2 + 0x3f80);
  _Var21 = (__uint64)iVar18;
  if (0 < iVar18) {
    if (*(void **)(param_1 + 0x3f78) != (void *)0x0) {
      free(*(void **)(param_1 + 0x3f78));
    }
    pvVar4 = operator_new(_Var21);
    *(void **)(param_1 + 0x3f78) = pvVar4;
    memset(pvVar4,0,_Var21);
    *(int *)(param_1 + 0x3f80) = iVar18;
    memmove(*(void **)(param_1 + 0x3f78),*(void **)(param_2 + 0x3f78),_Var21);
  }
  puVar7 = (undefined4 *)(param_1 + 0x3fc8);
  puVar10 = (undefined4 *)(param_1 + 0x3f88);
  do {
    puVar17 = puVar10 + 4;
    *puVar7 = *(undefined4 *)((longlong)puVar7 + lVar20);
    puVar7[5] = *(undefined4 *)((longlong)puVar7 + lVar20 + 0x14);
    puVar7[9] = *(undefined4 *)((longlong)puVar7 + lVar20 + 0x24);
    puVar7[0xd] = *(undefined4 *)((longlong)puVar7 + lVar20 + 0x34);
    puVar7 = puVar7 + 1;
    *puVar10 = *(undefined4 *)(lVar20 + -0x10 + (longlong)puVar17);
    puVar10[1] = *(undefined4 *)(lVar20 + -0xc + (longlong)puVar17);
    puVar10[2] = *(undefined4 *)(lVar20 + -8 + (longlong)puVar17);
    puVar10[3] = *(undefined4 *)(lVar20 + -4 + (longlong)puVar17);
    lVar14 = lVar14 + -1;
    puVar10 = puVar17;
  } while (lVar14 != 0);
  *(undefined4 *)(param_1 + 0x3fd8) = *(undefined4 *)(param_2 + 0x3fd8);
  *(undefined4 *)(param_1 + 0x40a8) = *(undefined4 *)(param_2 + 0x40a8);
  *(undefined4 *)(param_1 + 0x40ac) = *(undefined4 *)(param_2 + 0x40ac);
  FUN_14000bfc0(param_1 + 0x40b0,param_2 + 0x40b0);
  FUN_140050150(param_1 + 0x40c8,param_2 + 0x40c8);
  FUN_14000bfc0(param_1 + 0x40e0,param_2 + 0x40e0);
  FUN_140050150(param_1 + 0x40f8,param_2 + 0x40f8);
  FUN_14000bfc0(param_1 + 0x4110,param_2 + 0x4110);
  FUN_140050150(param_1 + 0x4128,param_2 + 0x4128);
  FUN_140050150(param_1 + 0x4140,param_2 + 0x4140);
  FUN_1402803e0(param_1 + 0x4158,param_2 + 0x4158);
  FUN_140050150(param_1 + 0x4170,param_2 + 0x4170);
  FUN_140050150(param_1 + 0x4188,param_2 + 0x4188);
  FUN_1402803e0(param_1 + 0x41a0,param_2 + 0x41a0);
  FUN_1402803e0(param_1 + 0x41b8,param_2 + 0x41b8);
  FUN_14000b9d0(param_1 + 0x41d0,
                *(longlong *)(param_2 + 0x41d8) - *(longlong *)(param_2 + 0x41d0) >> 3);
  iVar18 = (int)(*(longlong *)(param_1 + 0x41d8) - *(longlong *)(param_1 + 0x41d0) >> 3) + -1;
  lVar14 = (longlong)iVar18;
  if (-1 < iVar18) {
    do {
      puVar7 = operator_new(0x70);
      *(undefined8 *)(puVar7 + 10) = 0xf;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined1 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 0x12) = 0xf;
      *(undefined8 *)(puVar7 + 0x10) = 0;
      *(undefined1 *)(puVar7 + 0xc) = 0;
      *(undefined8 *)(puVar7 + 0x1a) = 0xf;
      *(undefined8 *)(puVar7 + 0x18) = 0;
      *(undefined1 *)(puVar7 + 0x14) = 0;
      *puVar7 = 1;
      puVar7[1] = 100;
      puVar7[2] = 10000;
      puVar7[3] = 0xffffffff;
      *(undefined4 **)(*(longlong *)(param_1 + 0x41d0) + lVar14 * 8) = puVar7;
      puVar7 = *(undefined4 **)(*(longlong *)(param_2 + 0x41d0) + lVar14 * 8);
      puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x41d0) + lVar14 * 8);
      *puVar10 = *puVar7;
      puVar10[1] = puVar7[1];
      puVar10[2] = puVar7[2];
      puVar10[3] = puVar7[3];
      if (puVar10 + 4 != puVar7 + 4) {
        FUN_14000c8b0(puVar10 + 4,puVar7 + 4,0,0xffffffffffffffff);
      }
      if (puVar10 + 0xc != puVar7 + 0xc) {
        FUN_14000c8b0(puVar10 + 0xc,puVar7 + 0xc,0,0xffffffffffffffff);
      }
      if (puVar10 + 0x14 != puVar7 + 0x14) {
        FUN_14000c9e0();
      }
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  FUN_14000b9d0(param_1 + 0x4218,
                *(longlong *)(param_2 + 0x4220) - *(longlong *)(param_2 + 0x4218) >> 3);
  iVar18 = (int)(*(longlong *)(param_1 + 0x4220) - *(longlong *)(param_1 + 0x4218) >> 3) + -1;
  lVar14 = (longlong)iVar18;
  if (-1 < iVar18) {
    do {
      pvVar4 = operator_new(0x70);
      uVar8 = FUN_140282e20(pvVar4);
      *(undefined8 *)(*(longlong *)(param_1 + 0x4218) + lVar14 * 8) = uVar8;
      FUN_140282e70(*(undefined8 *)(*(longlong *)(param_1 + 0x4218) + lVar14 * 8),
                    *(undefined8 *)(*(longlong *)(param_2 + 0x4218) + lVar14 * 8));
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  lVar14 = param_1 + 0x41e8;
  lVar12 = 2;
  do {
    FUN_14000dc80(lVar14,lVar20 + lVar14);
    lVar14 = lVar14 + 0x18;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  *(undefined4 *)(param_1 + 0x4230) = *(undefined4 *)(param_2 + 0x4230);
  *(undefined4 *)(param_1 + 0x4234) = *(undefined4 *)(param_2 + 0x4234);
  FUN_14000c230(param_1 + 0x4238,param_2 + 0x4238);
  *(undefined4 *)(param_1 + 0x4258) = *(undefined4 *)(param_2 + 0x4258);
  FUN_1402803e0(param_1 + 0x4260,param_2 + 0x4260);
  FUN_14029cf10(param_1 + 0x4278,param_2 + 0x4278);
  FUN_140002600(param_1 + 0x4290,param_2 + 0x4290);
  FUN_140002600(param_1 + 0x42a8,param_2 + 0x42a8);
  FUN_140002600(param_1 + 0x42c0,param_2 + 0x42c0);
  return;
}

