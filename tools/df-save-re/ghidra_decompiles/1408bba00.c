// FUN_1408bba00 @ 1408bba00
// callees:
//   -> 1408bb990 FUN_1408bb990
//   -> 140dfb5c4 operator_new
//   -> 140281620 FUN_140281620
//   -> 14000c780 FUN_14000c780
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140071310 FUN_140071310
//   -> 140002020 FUN_140002020
//   -> 1401b83c0 FUN_1401b83c0
//   -> 14000c260 FUN_14000c260
//   -> 140050390 FUN_140050390
//   -> 14000c210 FUN_14000c210
//   -> 14000c230 FUN_14000c230
//   -> 14007bda0 FUN_14007bda0
//   -> 1401b36e0 FUN_1401b36e0
//   -> 140051cf0 FUN_140051cf0
//   -> 14000be20 FUN_14000be20
//   -> 14000bc60 FUN_14000bc60
//   -> 14000c2b0 FUN_14000c2b0
//   -> 140051b70 FUN_140051b70
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408bba00(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_168 [32];
  undefined2 local_148 [2];
  int local_144 [3];
  void *local_138;
  void *local_130;
  void *local_128;
  void *local_120;
  void *local_118;
  void *local_110;
  void *local_108;
  void *local_100;
  void *local_f8;
  void *local_f0;
  void *local_e8;
  void *local_e0;
  void *local_d8;
  void *local_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  ulonglong local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_144[1] = -2;
  local_144[2] = -1;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_168;
  FUN_1408bb990();
  uVar11 = 0;
  uVar10 = uVar11;
  do {
    iVar3 = 0;
    iVar12 = (int)uVar10;
    if (0x1a3 < iVar12) goto switchD_1408bba8a_default;
    if (iVar12 == 0x1a3) {
      local_98 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_98);
      FUN_14000c210(lVar6,"PLANT_1");
      *(undefined4 *)(lVar6 + 0x90) = 2000;
      *(undefined4 *)(lVar6 + 0x94) = 2000;
      FUN_14000c210(lVar6 + 0xb8,"unknown frozen plant substance");
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"unknown frozen plant powder");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"unknown frozen plant paste");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"unknown pressed frozen plant substance");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      FUN_14000c210(lVar6 + 0xd8,"unknown plant substance");
      FUN_14000c230(lVar6 + 0x198,lVar6 + 0xd8);
      FUN_14000c210(lVar6 + 0xf8,"unknown boiling plant substance");
      FUN_14000c230(lVar6 + 0x1b8,lVar6 + 0xf8);
      *(undefined4 *)(lVar6 + 0x288) = 1;
      goto LAB_1408be71f;
    }
    switch(iVar12) {
    case 0:
      local_138 = operator_new(0x6a8);
      lVar5 = FUN_140281620(local_138);
      FUN_14000c780(lVar5,"INORGANIC",9);
      *(undefined4 *)(lVar5 + 0x90) = 2000;
      *(undefined4 *)(lVar5 + 0x94) = 2000;
      lVar6 = lVar5 + 0xb8;
      FUN_14000c780(lVar6,&DAT_140ee66cc,4);
      if (lVar5 + 0x178 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x178,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0x118;
      FUN_14000c780(lVar6,&DAT_140ee66cc,4);
      if (lVar5 + 0x1d8 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x1d8,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0x138;
      FUN_14000c780(lVar6,&DAT_140ee66cc,4);
      if (lVar5 + 0x1f8 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x1f8,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0x158;
      FUN_14000c780(lVar6,&DAT_140ee66cc,4);
      if (lVar5 + 0x218 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x218,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0xd8;
      FUN_14000c780(lVar6,"magma",5);
      if (lVar5 + 0x198 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x198,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0xf8;
      FUN_14000c780(lVar6,"boiling magma",0xd);
      if (lVar5 + 0x1b8 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x1b8,lVar6,0,0xffffffffffffffff);
      }
      *(undefined4 *)(lVar5 + 0x248) = 10000;
      *(undefined4 *)(lVar5 + 0x260) = 10000;
      *(undefined8 *)(lVar5 + 0x278) = 0;
      *(undefined4 *)(lVar5 + 0x250) = 10000;
      *(undefined4 *)(lVar5 + 0x268) = 10000;
      *(undefined4 *)(lVar5 + 0x280) = 0;
      *(undefined4 *)(lVar5 + 0x24c) = 10000;
      *(undefined4 *)(lVar5 + 0x264) = 10000;
      *(undefined4 *)(lVar5 + 0x244) = 10000;
      *(undefined4 *)(lVar5 + 0x25c) = 10000;
      *(undefined8 *)(lVar5 + 0x270) = 0;
      *(undefined4 *)(lVar5 + 0x240) = 10000;
      *(undefined4 *)(lVar5 + 600) = 10000;
      *(undefined4 *)(lVar5 + 0x23c) = 10000;
      *(undefined4 *)(lVar5 + 0x254) = 10000;
      *(undefined4 *)(lVar5 + 0x26c) = 0;
      *(undefined4 *)(lVar5 + 0x288) = 1;
      *(undefined4 *)(lVar5 + 0x88) = 0x32c82cec;
      *(undefined2 *)(lVar5 + 0x8c) = 12000;
      *(undefined2 *)(lVar5 + 0x80) = 1000;
      *(undefined4 *)(lVar5 + 0x4ba) = 7;
      *(undefined4 *)(lVar5 + 0x4be) = 7;
      *(undefined2 *)(lVar5 + 0x4c2) = 0;
      local_78 = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_14000c780(&local_90,&DAT_140f448e0,4);
      uVar10 = DAT_141d778e8 - (longlong)DAT_141d778e0 >> 3;
      puVar9 = DAT_141d778e0;
      if (uVar10 != 0) {
        do {
          iVar2 = FUN_140071310(*puVar9,&local_90);
          if (iVar2 == 0) goto LAB_1408bbd44;
          iVar3 = iVar3 + 1;
          puVar9 = puVar9 + 1;
        } while ((ulonglong)(longlong)iVar3 < uVar10);
      }
      iVar3 = -1;
LAB_1408bbd44:
      *(int *)(lVar5 + 0x9c) = iVar3;
      if (0xf < local_78) {
        FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
      }
      uVar4 = *(undefined4 *)(lVar5 + 0x9c);
      *(undefined4 *)(lVar5 + 0xa8) = uVar4;
      *(undefined4 *)(lVar5 + 0xac) = uVar4;
      *(undefined4 *)(lVar5 + 0xb0) = uVar4;
      local_78 = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_14000c780(&local_90,&DAT_140f448dc,3);
      iVar3 = 0;
      uVar10 = DAT_141d778e8 - (longlong)DAT_141d778e0 >> 3;
      puVar9 = DAT_141d778e0;
      if (uVar10 != 0) {
        do {
          iVar2 = FUN_140071310(*puVar9,&local_90);
          if (iVar2 == 0) goto LAB_1408bbdf1;
          iVar3 = iVar3 + 1;
          puVar9 = puVar9 + 1;
        } while ((ulonglong)(longlong)iVar3 < uVar10);
      }
      iVar3 = -1;
LAB_1408bbdf1:
      *(int *)(lVar5 + 0xa0) = iVar3;
      if (0xf < local_78) {
        FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
      }
      local_78 = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_14000c780(&local_90,&DAT_140f448dc,3);
      iVar3 = 0;
      uVar10 = DAT_141d778e8 - (longlong)DAT_141d778e0 >> 3;
      puVar9 = DAT_141d778e0;
      if (uVar10 != 0) {
        do {
          iVar2 = FUN_140071310(*puVar9,&local_90);
          if (iVar2 == 0) goto LAB_1408bbe81;
          iVar3 = iVar3 + 1;
          puVar9 = puVar9 + 1;
        } while ((ulonglong)(longlong)iVar3 < uVar10);
      }
      goto LAB_1408bbe7e;
    case 1:
      local_130 = operator_new(0x6a8);
      lVar5 = FUN_140281620(local_130);
      FUN_14000c780(lVar5,"AMBER",5);
      *(undefined4 *)(lVar5 + 0x90) = 0x4b0;
      *(undefined4 *)(lVar5 + 0x94) = 0x4b0;
      lVar6 = lVar5 + 0xb8;
      FUN_14000c780(lVar6,"amber",5);
      if (lVar5 + 0x178 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x178,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0x118;
      FUN_14000c780(lVar6,"ground amber",0xc);
      if (lVar5 + 0x1d8 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x1d8,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0x138;
      FUN_14000c780(lVar6,"amber paste",0xb);
      if (lVar5 + 0x1f8 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x1f8,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0x158;
      FUN_14000c780(lVar6,"pressed amber",0xd);
      if (lVar5 + 0x218 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x218,lVar6,0,0xffffffffffffffff);
      }
      *(undefined4 *)(lVar5 + 0x248) = 10000;
      *(undefined4 *)(lVar5 + 0x260) = 10000;
      *(undefined8 *)(lVar5 + 0x278) = 0;
      *(undefined4 *)(lVar5 + 0x250) = 10000;
      *(undefined4 *)(lVar5 + 0x268) = 10000;
      *(undefined4 *)(lVar5 + 0x280) = 0;
      *(undefined4 *)(lVar5 + 0x24c) = 10000;
      *(undefined4 *)(lVar5 + 0x264) = 10000;
      *(undefined4 *)(lVar5 + 0x244) = 10000;
      *(undefined4 *)(lVar5 + 0x25c) = 10000;
      *(undefined8 *)(lVar5 + 0x270) = 0;
      *(undefined4 *)(lVar5 + 0x240) = 10000;
      *(undefined4 *)(lVar5 + 600) = 10000;
      *(undefined4 *)(lVar5 + 0x23c) = 10000;
      *(undefined4 *)(lVar5 + 0x254) = 10000;
      *(undefined4 *)(lVar5 + 0x26c) = 0;
      *(undefined4 *)(lVar5 + 0x288) = 2;
      if (7 < *(int *)(lVar5 + 0x298)) {
        pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x290) + 7);
        *pbVar1 = *pbVar1 | 2;
      }
      *(undefined4 *)(lVar5 + 0x80) = 0x2af803e8;
      *(undefined4 *)(lVar5 + 0x4ba) = 6;
      *(undefined4 *)(lVar5 + 0x4be) = 6;
      *(undefined2 *)(lVar5 + 0x4c2) = 0;
      local_78 = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_14000c780(&local_90,"AMBER",5);
      uVar10 = DAT_141d778e8 - (longlong)DAT_141d778e0 >> 3;
      puVar9 = DAT_141d778e0;
      if (uVar10 != 0) {
        do {
          iVar2 = FUN_140071310(*puVar9,&local_90);
          if (iVar2 == 0) goto LAB_1408bc111;
          iVar3 = iVar3 + 1;
          puVar9 = puVar9 + 1;
        } while ((ulonglong)(longlong)iVar3 < uVar10);
      }
      iVar3 = -1;
LAB_1408bc111:
      *(int *)(lVar5 + 0x9c) = iVar3;
      if (0xf < local_78) {
        FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
      }
      uVar4 = *(undefined4 *)(lVar5 + 0x9c);
      *(undefined4 *)(lVar5 + 0xa8) = uVar4;
      *(undefined4 *)(lVar5 + 0xac) = uVar4;
      *(undefined4 *)(lVar5 + 0xb0) = uVar4;
      local_78 = 0xf;
      iVar3 = 0;
      local_80 = 0;
      local_90 = 0;
      FUN_14000c780(&local_90,"AMBER",5);
      uVar10 = DAT_141d778e8 - (longlong)DAT_141d778e0 >> 3;
      puVar9 = DAT_141d778e0;
      if (uVar10 != 0) {
        do {
          iVar2 = FUN_140071310(*puVar9,&local_90);
          if (iVar2 == 0) goto LAB_1408bc1b2;
          iVar3 = iVar3 + 1;
          puVar9 = puVar9 + 1;
        } while ((ulonglong)(longlong)iVar3 < uVar10);
      }
      iVar3 = -1;
LAB_1408bc1b2:
      *(int *)(lVar5 + 0xa0) = iVar3;
      if (0xf < local_78) {
        FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
      }
      local_78 = 0xf;
      iVar3 = 0;
      local_80 = 0;
      local_90 = 0;
      FUN_14000c780(&local_90,"AMBER",5);
      uVar10 = DAT_141d778e8 - (longlong)DAT_141d778e0 >> 3;
      puVar9 = DAT_141d778e0;
      if (uVar10 != 0) {
        do {
          iVar2 = FUN_140071310(*puVar9,&local_90);
          if (iVar2 == 0) goto LAB_1408bbe81;
          iVar3 = iVar3 + 1;
          puVar9 = puVar9 + 1;
        } while ((ulonglong)(longlong)iVar3 < uVar10);
      }
      goto LAB_1408bbe7e;
    case 2:
      local_128 = operator_new(0x6a8);
      lVar5 = FUN_140281620(local_128);
      FUN_14000c780(lVar5,"CORAL",5);
      *(undefined4 *)(lVar5 + 0x90) = 0x4b0;
      lVar6 = lVar5 + 0xb8;
      FUN_14000c780(lVar6,"coral",5);
      if (lVar5 + 0x178 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x178,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0x118;
      FUN_14000c780(lVar6,"ground coral",0xc);
      if (lVar5 + 0x1d8 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x1d8,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0x138;
      FUN_14000c780(lVar6,"coral paste",0xb);
      if (lVar5 + 0x1f8 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x1f8,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0x158;
      FUN_14000c780(lVar6,"pressed coral",0xd);
      if (lVar5 + 0x218 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x218,lVar6,0,0xffffffffffffffff);
      }
      *(undefined4 *)(lVar5 + 0x248) = 10000;
      *(undefined4 *)(lVar5 + 0x260) = 10000;
      *(undefined8 *)(lVar5 + 0x278) = 0;
      *(undefined4 *)(lVar5 + 0x250) = 10000;
      *(undefined4 *)(lVar5 + 0x268) = 10000;
      *(undefined4 *)(lVar5 + 0x280) = 0;
      *(undefined4 *)(lVar5 + 0x24c) = 10000;
      *(undefined4 *)(lVar5 + 0x264) = 10000;
      *(undefined4 *)(lVar5 + 0x244) = 10000;
      *(undefined4 *)(lVar5 + 0x25c) = 10000;
      *(undefined8 *)(lVar5 + 0x270) = 0;
      *(undefined4 *)(lVar5 + 0x240) = 10000;
      *(undefined4 *)(lVar5 + 600) = 10000;
      *(undefined4 *)(lVar5 + 0x23c) = 10000;
      *(undefined4 *)(lVar5 + 0x254) = 10000;
      *(undefined4 *)(lVar5 + 0x26c) = 0;
      *(undefined4 *)(lVar5 + 0x288) = 2;
      if (7 < *(int *)(lVar5 + 0x298)) {
        pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x290) + 7);
        *pbVar1 = *pbVar1 | 2;
      }
      *(undefined4 *)(lVar5 + 0x80) = 0x296803e8;
      *(undefined4 *)(lVar5 + 0x4ba) = 0x10007;
      *(undefined4 *)(lVar5 + 0x4be) = 7;
      *(undefined2 *)(lVar5 + 0x4c2) = 1;
      local_78 = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_14000c780(&local_90,"WHITE",5);
      uVar10 = DAT_141d778e8 - (longlong)DAT_141d778e0 >> 3;
      puVar9 = DAT_141d778e0;
      if (uVar10 != 0) {
        do {
          iVar2 = FUN_140071310(*puVar9,&local_90);
          if (iVar2 == 0) goto LAB_1408bc491;
          iVar3 = iVar3 + 1;
          puVar9 = puVar9 + 1;
        } while ((ulonglong)(longlong)iVar3 < uVar10);
      }
      iVar3 = -1;
LAB_1408bc491:
      *(int *)(lVar5 + 0x9c) = iVar3;
      if (0xf < local_78) {
        FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
      }
      uVar4 = *(undefined4 *)(lVar5 + 0x9c);
      *(undefined4 *)(lVar5 + 0xa8) = uVar4;
      *(undefined4 *)(lVar5 + 0xac) = uVar4;
      *(undefined4 *)(lVar5 + 0xb0) = uVar4;
      local_78 = 0xf;
      iVar3 = 0;
      local_80 = 0;
      local_90 = 0;
      FUN_14000c780(&local_90,"WHITE",5);
      uVar10 = DAT_141d778e8 - (longlong)DAT_141d778e0 >> 3;
      puVar9 = DAT_141d778e0;
      if (uVar10 != 0) {
        do {
          iVar2 = FUN_140071310(*puVar9,&local_90);
          if (iVar2 == 0) goto LAB_1408bc532;
          iVar3 = iVar3 + 1;
          puVar9 = puVar9 + 1;
        } while ((ulonglong)(longlong)iVar3 < uVar10);
      }
      iVar3 = -1;
LAB_1408bc532:
      *(int *)(lVar5 + 0xa0) = iVar3;
      if (0xf < local_78) {
        FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
      }
      local_78 = 0xf;
      iVar3 = 0;
      local_80 = 0;
      local_90 = 0;
      FUN_14000c780(&local_90,"WHITE",5);
      uVar10 = DAT_141d778e8 - (longlong)DAT_141d778e0 >> 3;
      puVar9 = DAT_141d778e0;
      if (uVar10 != 0) {
        do {
          iVar2 = FUN_140071310(*puVar9,&local_90);
          if (iVar2 == 0) goto LAB_1408bbe81;
          iVar3 = iVar3 + 1;
          puVar9 = puVar9 + 1;
        } while ((ulonglong)(longlong)iVar3 < uVar10);
      }
LAB_1408bbe7e:
      iVar3 = -1;
LAB_1408bbe81:
      *(int *)(lVar5 + 0xa4) = iVar3;
      if (0xf < local_78) {
        FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
      }
      *(undefined2 *)(lVar5 + 0x2a0) = 0x11;
      *(longlong *)(param_1 + 0xaf8 + uVar11 * 8) = lVar5;
      goto switchD_1408bba8a_default;
    case 3:
      local_120 = operator_new(0x6a8);
      lVar5 = FUN_140281620(local_120);
      FUN_14000c780(lVar5,"GLASS_GREEN",0xb);
      *(undefined4 *)(lVar5 + 0x90) = 0xa28;
      *(undefined4 *)(lVar5 + 0x94) = 0x8c0;
      lVar6 = lVar5 + 0xb8;
      FUN_14000c780(lVar6,"green glass",0xb);
      if (lVar5 + 0x178 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x178,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0x118;
      FUN_14000c780(lVar6,"ground green glass",0x12);
      if (lVar5 + 0x1d8 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x1d8,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0x138;
      FUN_14000c780(lVar6,"green glass paste",0x11);
      if (lVar5 + 0x1f8 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x1f8,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0x158;
      FUN_14000c780(lVar6,"pressed green glass",0x13);
      if (lVar5 + 0x218 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x218,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0xd8;
      FUN_14000c780(lVar6,"molten green glass",0x12);
      if (lVar5 + 0x198 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x198,lVar6,0,0xffffffffffffffff);
      }
      lVar6 = lVar5 + 0xf8;
      FUN_14000c780(lVar6,"boiling green glass",0x13);
      if (lVar5 + 0x1b8 != lVar6) {
        FUN_14000c8b0(lVar5 + 0x1b8,lVar6,0,0xffffffffffffffff);
      }
      *(undefined4 *)(lVar5 + 0x248) = 1000000;
      *(undefined4 *)(lVar5 + 0x260) = 1000000;
      *(undefined4 *)(lVar5 + 0x278) = 0x8ae;
      *(undefined4 *)(lVar5 + 0x250) = 1000000;
      *(undefined4 *)(lVar5 + 0x268) = 1000000;
      *(undefined4 *)(lVar5 + 0x280) = 0x8ae;
      *(undefined4 *)(lVar5 + 0x24c) = 33000;
      *(undefined4 *)(lVar5 + 0x264) = 33000;
      *(undefined4 *)(lVar5 + 0x27c) = 0x2f;
      *(undefined4 *)(lVar5 + 0x244) = 33000;
      *(undefined4 *)(lVar5 + 0x25c) = 33000;
      *(undefined4 *)(lVar5 + 0x274) = 0x71;
      *(undefined4 *)(lVar5 + 0x240) = 33000;
      *(undefined4 *)(lVar5 + 600) = 33000;
      *(undefined4 *)(lVar5 + 0x270) = 0x71;
      *(undefined4 *)(lVar5 + 0x23c) = 33000;
      *(undefined4 *)(lVar5 + 0x254) = 33000;
      *(undefined4 *)(lVar5 + 0x26c) = 0x2f;
      *(undefined4 *)(lVar5 + 0x284) = 15000;
      *(undefined4 *)(lVar5 + 0x288) = 2;
      if (1 < *(int *)(lVar5 + 0x298)) {
        pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x290) + 1);
        *pbVar1 = *pbVar1 | 8;
      }
      if (6 < *(int *)(lVar5 + 0x298)) {
        pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x290) + 6);
        *pbVar1 = *pbVar1 | 2;
      }
      *(undefined2 *)(lVar5 + 0x80) = 700;
      *(undefined4 *)(lVar5 + 0x88) = 0x3e803520;
      *(undefined4 *)(lVar5 + 0x4ba) = 2;
      *(undefined4 *)(lVar5 + 0x4be) = 2;
      *(undefined2 *)(lVar5 + 0x4c2) = 0;
      local_78 = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_14000c780(&local_90,"DARK_GREEN",10);
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar5 + 0x9c) = uVar4;
      FUN_14000c260(&local_90);
      uVar4 = *(undefined4 *)(lVar5 + 0x9c);
      *(undefined4 *)(lVar5 + 0xa8) = uVar4;
      *(undefined4 *)(lVar5 + 0xac) = uVar4;
      *(undefined4 *)(lVar5 + 0xb0) = uVar4;
      FUN_140050390(&local_90,&DAT_140f448dc);
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar5 + 0xa0) = uVar4;
      FUN_14000c260(&local_90);
      FUN_140050390(&local_90,&DAT_140f448dc);
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar5 + 0xa4) = uVar4;
      FUN_14000c260(&local_90);
      *(undefined2 *)(lVar5 + 0x2a0) = 0x11;
      *(longlong *)(param_1 + 0xaf8 + uVar11 * 8) = lVar5;
      goto switchD_1408bba8a_default;
    case 4:
      local_118 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_118);
      FUN_14000c210(lVar6,"GLASS_CLEAR");
      *(undefined4 *)(lVar6 + 0x90) = 0xa28;
      *(undefined4 *)(lVar6 + 0x94) = 0x8c0;
      FUN_14000c210(lVar6 + 0xb8,"clear glass");
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"ground clear glass");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"clear glass paste");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"pressed clear glass");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      FUN_14000c210(lVar6 + 0xd8,"molten clear glass");
      FUN_14000c230(lVar6 + 0x198,lVar6 + 0xd8);
      FUN_14000c210(lVar6 + 0xf8,"boiling clear glass");
      FUN_14000c230(lVar6 + 0x1b8,lVar6 + 0xf8);
      *(undefined4 *)(lVar6 + 0x248) = 1000000;
      *(undefined4 *)(lVar6 + 0x260) = 1000000;
      *(undefined4 *)(lVar6 + 0x278) = 0x8ae;
      *(undefined4 *)(lVar6 + 0x250) = 1000000;
      *(undefined4 *)(lVar6 + 0x268) = 1000000;
      *(undefined4 *)(lVar6 + 0x280) = 0x8ae;
      *(undefined4 *)(lVar6 + 0x24c) = 33000;
      *(undefined4 *)(lVar6 + 0x264) = 33000;
      *(undefined4 *)(lVar6 + 0x27c) = 0x2f;
      *(undefined4 *)(lVar6 + 0x244) = 33000;
      *(undefined4 *)(lVar6 + 0x25c) = 33000;
      *(undefined4 *)(lVar6 + 0x274) = 0x71;
      *(undefined4 *)(lVar6 + 0x240) = 33000;
      *(undefined4 *)(lVar6 + 600) = 33000;
      *(undefined4 *)(lVar6 + 0x270) = 0x71;
      *(undefined4 *)(lVar6 + 0x23c) = 33000;
      *(undefined4 *)(lVar6 + 0x254) = 33000;
      *(undefined4 *)(lVar6 + 0x26c) = 0x2f;
      *(undefined4 *)(lVar6 + 0x284) = 15000;
      *(undefined4 *)(lVar6 + 0x288) = 5;
      FUN_14007bda0(lVar6 + 0x290,0xb);
      FUN_14007bda0(lVar6 + 0x290,0x31);
      *(undefined2 *)(lVar6 + 0x80) = 700;
      *(undefined4 *)(lVar6 + 0x88) = 0x3e803520;
      *(undefined4 *)(lVar6 + 0x4ba) = 3;
      *(undefined4 *)(lVar6 + 0x4be) = 3;
      *(undefined2 *)(lVar6 + 0x4c2) = 0;
      FUN_140050390(&local_90,"CLEAR");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(&local_90);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(&local_90,&DAT_140f448dc);
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(&local_90);
      FUN_140050390(&local_90,&DAT_140f448dc);
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      puVar7 = &local_90;
      goto LAB_1408be7d4;
    case 5:
      local_110 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_110);
      FUN_14000c210(lVar6,"GLASS_CRYSTAL");
      *(undefined4 *)(lVar6 + 0x90) = 0xa28;
      *(undefined4 *)(lVar6 + 0x94) = 0x8c0;
      FUN_14000c210(lVar6 + 0xb8,"crystal glass");
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"ground crystal glass");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"crystal glass paste");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"pressed crystal glass");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      FUN_14000c210(lVar6 + 0xd8,"molten crystal glass");
      FUN_14000c230(lVar6 + 0x198,lVar6 + 0xd8);
      FUN_14000c210(lVar6 + 0xf8,"boiling crystal glass");
      FUN_14000c230(lVar6 + 0x1b8,lVar6 + 0xf8);
      *(undefined4 *)(lVar6 + 0x248) = 1000000;
      *(undefined4 *)(lVar6 + 0x260) = 1000000;
      *(undefined4 *)(lVar6 + 0x278) = 0x8ae;
      *(undefined4 *)(lVar6 + 0x250) = 1000000;
      *(undefined4 *)(lVar6 + 0x268) = 1000000;
      *(undefined4 *)(lVar6 + 0x280) = 0x8ae;
      *(undefined4 *)(lVar6 + 0x24c) = 33000;
      *(undefined4 *)(lVar6 + 0x264) = 33000;
      *(undefined4 *)(lVar6 + 0x27c) = 0x2f;
      *(undefined4 *)(lVar6 + 0x244) = 33000;
      *(undefined4 *)(lVar6 + 0x25c) = 33000;
      *(undefined4 *)(lVar6 + 0x274) = 0x71;
      *(undefined4 *)(lVar6 + 0x240) = 33000;
      *(undefined4 *)(lVar6 + 600) = 33000;
      *(undefined4 *)(lVar6 + 0x270) = 0x71;
      *(undefined4 *)(lVar6 + 0x23c) = 33000;
      *(undefined4 *)(lVar6 + 0x254) = 33000;
      *(undefined4 *)(lVar6 + 0x26c) = 0x2f;
      *(undefined4 *)(lVar6 + 0x284) = 15000;
      *(undefined4 *)(lVar6 + 0x288) = 10;
      FUN_14007bda0(lVar6 + 0x290,0xb);
      FUN_14007bda0(lVar6 + 0x290,0x31);
      *(undefined2 *)(lVar6 + 0x80) = 700;
      *(undefined4 *)(lVar6 + 0x88) = 0x3e803520;
      *(undefined4 *)(lVar6 + 0x4ba) = 0x10007;
      *(undefined4 *)(lVar6 + 0x4be) = 7;
      *(undefined2 *)(lVar6 + 0x4c2) = 1;
      FUN_140050390(&local_90,"CLEAR");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(&local_90);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(&local_90,&DAT_140f448dc);
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(&local_90);
      FUN_140050390(&local_90,&DAT_140f448dc);
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      puVar7 = &local_90;
      goto LAB_1408be7d4;
    case 6:
      local_108 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_108);
      FUN_14000c210(lVar6,"WATER");
      *(undefined4 *)(lVar6 + 0x90) = 0x398;
      *(undefined4 *)(lVar6 + 0x94) = 1000;
      FUN_14000c210(lVar6 + 0xb8,&DAT_140f446c4);
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,&DAT_140f446bc);
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"slush");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,&DAT_140f446c4);
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      FUN_14000c210(lVar6 + 0xd8,"water");
      FUN_14000c230(lVar6 + 0x198,lVar6 + 0xd8);
      FUN_14000c210(lVar6 + 0xf8,"steam");
      FUN_14000c230(lVar6 + 0x1b8,lVar6 + 0xf8);
      *(undefined4 *)(lVar6 + 0x288) = 1;
      *(undefined2 *)(lVar6 + 0x80) = 0x1055;
      *(undefined4 *)(lVar6 + 0x88) = 0x27c42710;
      *(undefined4 *)(lVar6 + 0x4ba) = 1;
      *(undefined4 *)(lVar6 + 0x4be) = 3;
      *(undefined2 *)(lVar6 + 0x4c2) = 0;
      FUN_140050390(&local_90,"WHITE");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(&local_90);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(&local_90,"CLEAR");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(&local_90);
      FUN_140050390(&local_90,"CLEAR");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0xa4) = uVar4;
      FUN_14000c260(&local_90);
      *(undefined2 *)(lVar6 + 0x2a0) = 0x11;
      FUN_14007bda0(lVar6 + 0x290,0x48);
      *(undefined4 *)(lVar6 + 0x284) = 1000;
      *(longlong *)(param_1 + 0xaf8 + uVar11 * 8) = lVar6;
      goto switchD_1408bba8a_default;
    case 7:
      local_100 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_100);
      FUN_14000c210(lVar6,&DAT_140eb54dc);
      *(undefined4 *)(lVar6 + 0x90) = 0x542;
      FUN_14000c210(lVar6 + 0xb8,&DAT_140f446ac);
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"coal powder");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"coal slush");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"pressed coal");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      *(undefined4 *)(lVar6 + 0x288) = 2;
      *(undefined2 *)(lVar6 + 0x80) = 0x199;
      *(undefined2 *)(lVar6 + 0x86) = 0x2cb0;
      *(undefined8 *)(lVar6 + 0x4ba) = 0x10000;
      *(undefined2 *)(lVar6 + 0x4c2) = 1;
      FUN_140050390(&local_90,"BLACK");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(&local_90);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(&local_90,"BLACK");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(&local_90);
      FUN_140050390(&local_90,"BLACK");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      puVar7 = &local_90;
      goto LAB_1408be7d4;
    case 8:
      local_f8 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_f8);
      FUN_14000c210(lVar6,"POTASH");
      *(undefined4 *)(lVar6 + 0x90) = 0x4b0;
      FUN_14000c210(lVar6 + 0xb8,"potash");
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"potash");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"potash slush");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"pressed potash");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      *(undefined4 *)(lVar6 + 0x288) = 3;
      *(undefined2 *)(lVar6 + 0x80) = 800;
      *(undefined4 *)(lVar6 + 0x4ba) = 0x10007;
      *(undefined4 *)(lVar6 + 0x4be) = 7;
      *(undefined2 *)(lVar6 + 0x4c2) = 1;
      FUN_140050390(&local_90,"WHITE");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(&local_90);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(&local_90,"WHITE");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(&local_90);
      FUN_140050390(&local_90,"WHITE");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      puVar7 = &local_90;
      goto LAB_1408be7d4;
    case 9:
      local_f0 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_f0);
      FUN_14000c210(lVar6,&DAT_140eb555c);
      *(undefined4 *)(lVar6 + 0x90) = 0x4b0;
      FUN_14000c210(lVar6 + 0xb8,&DAT_140f44644);
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,&DAT_140f44644);
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"ash paste");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"pressed ash");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      *(undefined4 *)(lVar6 + 0x288) = 1;
      *(undefined2 *)(lVar6 + 0x80) = 800;
      *(undefined4 *)(lVar6 + 0x4ba) = 7;
      *(undefined4 *)(lVar6 + 0x4be) = 7;
      *(undefined2 *)(lVar6 + 0x4c2) = 0;
      FUN_140050390(&local_90,&DAT_140f448e0);
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(&local_90);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(&local_90,&DAT_140f448e0);
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(&local_90);
      FUN_140050390(&local_90,&DAT_140f448e0);
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,&local_90);
      *(undefined4 *)(lVar6 + 0xa4) = uVar4;
      FUN_14000c260(&local_90);
      *(undefined2 *)(lVar6 + 0x2a0) = 0x11;
      FUN_140050390(&local_90,"ASH_GLAZE");
      iVar3 = FUN_1401b36e0(&DAT_141d6dbe0,&local_90);
      local_144[0] = iVar3;
      FUN_14000c260(&local_90);
      if (iVar3 != -1) {
        FUN_140051cf0(lVar6 + 0x348,"GLAZE_MAT");
        local_148[0] = 0xffff;
        FUN_14000be20(lVar6 + 0x360,local_148);
        local_148[0] = 0xffff;
        FUN_14000be20(lVar6 + 0x378,local_148);
        local_148[0] = 0;
        FUN_14000be20(lVar6 + 0x390,local_148);
        FUN_14000bc60(lVar6 + 0x3a8,local_144);
        FUN_140051cf0(lVar6 + 0x3c0,&DAT_140e8cc54);
        FUN_140051cf0(lVar6 + 0x3d8,&DAT_140e8cc54);
        FUN_140050390(local_70,"INORGANIC");
        FUN_140050390(local_50,"ASH_GLAZE");
        FUN_14000c2b0(&local_90);
        FUN_140051b70(lVar6 + 0x3f0,local_70);
        FUN_140051b70(lVar6 + 0x408,local_50);
        FUN_140051b70(lVar6 + 0x420,&local_90);
        FUN_14000c260(&local_90);
        FUN_14000c260(local_50);
        FUN_14000c260(local_70);
      }
      goto LAB_1408be7eb;
    case 10:
      local_e8 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_e8);
      FUN_14000c210(lVar6,"PEARLASH");
      *(undefined4 *)(lVar6 + 0x90) = 0x4b0;
      FUN_14000c210(lVar6 + 0xb8,"pearlash");
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"pearlash");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"pearlash paste");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"pressed pearlash");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      *(undefined4 *)(lVar6 + 0x288) = 4;
      *(undefined2 *)(lVar6 + 0x80) = 800;
      *(undefined4 *)(lVar6 + 0x4ba) = 0x10007;
      *(undefined4 *)(lVar6 + 0x4be) = 7;
      *(undefined2 *)(lVar6 + 0x4c2) = 1;
      FUN_140050390(local_70,"WHITE");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(local_70);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(local_70,"WHITE");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(local_70);
      pcVar8 = "WHITE";
      break;
    case 0xb:
      local_e0 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_e0);
      FUN_14000c210(lVar6,&DAT_140eb5524);
      *(undefined4 *)(lVar6 + 0x90) = 0x398;
      *(undefined4 *)(lVar6 + 0x94) = 1000;
      FUN_14000c210(lVar6 + 0xb8,"frozen lye");
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"frozen lye powder");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"lye slush");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"frozen lye");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      FUN_14000c210(lVar6 + 0xd8,&DAT_140f44d4c);
      FUN_14000c230(lVar6 + 0x198,lVar6 + 0xd8);
      FUN_14000c210(lVar6 + 0xf8,"boiling lye");
      FUN_14000c230(lVar6 + 0x1b8,lVar6 + 0xf8);
      *(undefined4 *)(lVar6 + 0x288) = 2;
      *(undefined2 *)(lVar6 + 0x80) = 0x1055;
      *(undefined4 *)(lVar6 + 0x88) = 0x27c42710;
      *(undefined4 *)(lVar6 + 0x4ba) = 7;
      *(undefined4 *)(lVar6 + 0x4be) = 7;
      *(undefined2 *)(lVar6 + 0x4c2) = 0;
      FUN_140050390(local_70,"CLEAR");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(local_70);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(local_70,"CLEAR");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(local_70);
      pcVar8 = "CLEAR";
      break;
    case 0xc:
      local_d8 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_d8);
      FUN_14000c210(lVar6,&DAT_140eb553c);
      *(undefined4 *)(lVar6 + 0x90) = 0x4b0;
      FUN_14000c210(lVar6 + 0xb8,&DAT_140f44cb8);
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,&DAT_140f44cb0);
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,&DAT_140f44cb8);
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"pressed dirt");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      *(undefined4 *)(lVar6 + 0x288) = 1;
      *(undefined2 *)(lVar6 + 0x80) = 800;
      goto LAB_1408be71f;
    case 0xd:
      local_d0 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_d0);
      FUN_14000c210(lVar6,"VOMIT");
      *(undefined4 *)(lVar6 + 0x90) = 0x4b0;
      FUN_14000c210(lVar6 + 0xb8,"vomit");
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"vomit");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"vomit");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"pressed vomit");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      *(undefined4 *)(lVar6 + 0x288) = 1;
      *(undefined2 *)(lVar6 + 0x4ce) = 2;
      *(undefined4 *)(lVar6 + 0x80) = 0x27c41055;
      *(undefined4 *)(lVar6 + 0x4ba) = 2;
      *(undefined4 *)(lVar6 + 0x4be) = 2;
      *(undefined2 *)(lVar6 + 0x4c2) = 0;
      FUN_140050390(local_70,"DARK_GREEN");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(local_70);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(local_70,"DARK_GREEN");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(local_70);
      pcVar8 = "DARK_GREEN";
      break;
    case 0xe:
      local_c8 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_c8);
      FUN_14000c210(lVar6,&DAT_140eb3d7c);
      *(undefined4 *)(lVar6 + 0x90) = 0x4b0;
      *(undefined4 *)(lVar6 + 0x94) = 0x4b0;
      FUN_14000c210(lVar6 + 0xb8,&DAT_140eb7a2c);
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,&DAT_140eb7a2c);
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,&DAT_140eb7a2c);
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,&DAT_140eb7a2c);
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      FUN_14000c210(lVar6 + 0xd8,"molten salt");
      FUN_14000c230(lVar6 + 0x198,lVar6 + 0xd8);
      FUN_14000c210(lVar6 + 0xf8,"boiling salt");
      FUN_14000c230(lVar6 + 0x1b8,lVar6 + 0xf8);
      *(undefined4 *)(lVar6 + 0x288) = 10;
      *(undefined2 *)(lVar6 + 0x80) = 0x356;
      *(undefined4 *)(lVar6 + 0x88) = 0x315d2cb2;
      *(undefined4 *)(lVar6 + 0x4ba) = 7;
      *(undefined4 *)(lVar6 + 0x4be) = 7;
      *(undefined2 *)(lVar6 + 0x4c2) = 1;
      FUN_140050390(local_70,"WHITE");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(local_70);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(local_70,"WHITE");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(local_70);
      pcVar8 = "WHITE";
      break;
    case 0xf:
      local_c0 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_c0);
      FUN_14000c210(lVar6,"FILTH_B");
      *(undefined4 *)(lVar6 + 0x90) = 0x4b0;
      FUN_14000c210(lVar6 + 0xb8,"filth");
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"filth");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"filth");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"pressed filth");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      *(undefined4 *)(lVar6 + 0x288) = 1;
      *(undefined2 *)(lVar6 + 0x4ce) = 7;
      *(undefined4 *)(lVar6 + 0x80) = 0x27c41055;
LAB_1408be71f:
      *(undefined4 *)(lVar6 + 0x4ba) = 6;
      *(undefined4 *)(lVar6 + 0x4be) = 6;
LAB_1408be733:
      *(undefined2 *)(lVar6 + 0x4c2) = 0;
      FUN_140050390(local_70,"BROWN");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(local_70);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(local_70,"BROWN");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(local_70);
      pcVar8 = "BROWN";
      break;
    case 0x10:
      local_b8 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_b8);
      FUN_14000c210(lVar6,"FILTH_Y");
      *(undefined4 *)(lVar6 + 0x90) = 0x398;
      *(undefined4 *)(lVar6 + 0x94) = 1000;
      FUN_14000c210(lVar6 + 0xb8,"frozen filth");
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"frozen filth powder");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"filth slush");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"frozen filth");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      FUN_14000c210(lVar6 + 0xd8,"filth");
      FUN_14000c230(lVar6 + 0x198,lVar6 + 0xd8);
      FUN_14000c210(lVar6 + 0xf8,"boiling filth");
      FUN_14000c230(lVar6 + 0x1b8,lVar6 + 0xf8);
      *(undefined4 *)(lVar6 + 0x288) = 1;
      *(undefined2 *)(lVar6 + 0x4ce) = 7;
      *(undefined4 *)(lVar6 + 0x80) = 0x27c41055;
      *(undefined4 *)(lVar6 + 0x88) = 0x27c42710;
      *(undefined4 *)(lVar6 + 0x4ba) = 0x10006;
      *(undefined4 *)(lVar6 + 0x4be) = 6;
      *(undefined2 *)(lVar6 + 0x4c2) = 1;
      FUN_140050390(local_70,"YELLOW");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(local_70);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(local_70,"YELLOW");
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(local_70);
      pcVar8 = "YELLOW";
      break;
    case 0x11:
      local_b0 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_b0);
      FUN_14000c210(lVar6,"UNKNOWN_SUBSTANCE");
      *(undefined4 *)(lVar6 + 0x90) = 0x398;
      *(undefined4 *)(lVar6 + 0x94) = 1000;
      FUN_14000c210(lVar6 + 0xb8,"unknown frozen substance");
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"unknown frozen powder");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"unknown slush");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"unknown frozen substance");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      FUN_14000c210(lVar6 + 0xd8,"unknown substance");
      FUN_14000c230(lVar6 + 0x198,lVar6 + 0xd8);
      FUN_14000c210(lVar6 + 0xf8,"unknown boiling substance");
      FUN_14000c230(lVar6 + 0x1b8,lVar6 + 0xf8);
      *(undefined2 *)(lVar6 + 0x4ce) = 7;
      *(undefined4 *)(lVar6 + 0x80) = 0x27c41055;
      *(undefined4 *)(lVar6 + 0x88) = 0x27c42710;
      *(undefined4 *)(lVar6 + 0x4ba) = 7;
      *(undefined4 *)(lVar6 + 0x4be) = 7;
      goto LAB_1408be321;
    case 0x12:
      local_a8 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_a8);
      FUN_14000c210(lVar6,"GRIME");
      *(undefined4 *)(lVar6 + 0x90) = 0x4b0;
      FUN_14000c210(lVar6 + 0xb8,"grime");
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"grime");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"grime paste");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"pressed grime");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      *(undefined4 *)(lVar6 + 0x288) = 1;
      *(undefined2 *)(lVar6 + 0x4ce) = 6;
      *(undefined2 *)(lVar6 + 0x80) = 800;
      *(undefined4 *)(lVar6 + 0x4ba) = 2;
      *(undefined4 *)(lVar6 + 0x4be) = 2;
      goto LAB_1408be733;
    case 0x13:
      local_a0 = operator_new(0x6a8);
      lVar6 = FUN_140281620(local_a0);
      FUN_14000c210(lVar6,"CREATURE_1");
      *(undefined4 *)(lVar6 + 0x90) = 2000;
      *(undefined4 *)(lVar6 + 0x94) = 2000;
      FUN_14000c210(lVar6 + 0xb8,"unknown frozen creature substance");
      FUN_14000c230(lVar6 + 0x178,lVar6 + 0xb8);
      FUN_14000c210(lVar6 + 0x118,"unknown frozen creature powder");
      FUN_14000c230(lVar6 + 0x1d8,lVar6 + 0x118);
      FUN_14000c210(lVar6 + 0x138,"unknown creature paste");
      FUN_14000c230(lVar6 + 0x1f8,lVar6 + 0x138);
      FUN_14000c210(lVar6 + 0x158,"unknown pressed frozen creature substance");
      FUN_14000c230(lVar6 + 0x218,lVar6 + 0x158);
      FUN_14000c210(lVar6 + 0xd8,"unknown creature substance");
      FUN_14000c230(lVar6 + 0x198,lVar6 + 0xd8);
      FUN_14000c210(lVar6 + 0xf8,"unknown boiling creature substance");
      FUN_14000c230(lVar6 + 0x1b8,lVar6 + 0xf8);
      *(undefined4 *)(lVar6 + 0x4ba) = 7;
      *(undefined4 *)(lVar6 + 0x4be) = 7;
LAB_1408be321:
      *(undefined4 *)(lVar6 + 0x288) = 1;
      *(undefined2 *)(lVar6 + 0x4c2) = 0;
      FUN_140050390(local_70,&DAT_140f448e0);
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0x9c) = uVar4;
      FUN_14000c260(local_70);
      uVar4 = *(undefined4 *)(lVar6 + 0x9c);
      *(undefined4 *)(lVar6 + 0xa8) = uVar4;
      *(undefined4 *)(lVar6 + 0xac) = uVar4;
      *(undefined4 *)(lVar6 + 0xb0) = uVar4;
      FUN_140050390(local_70,&DAT_140f448e0);
      uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      FUN_14000c260(local_70);
      pcVar8 = "GRAY";
      break;
    default:
      goto switchD_1408bba8a_default;
    }
    FUN_140050390(local_70,pcVar8);
    uVar4 = FUN_1401b83c0(&DAT_141d778b0,local_70);
    puVar7 = local_70;
LAB_1408be7d4:
    *(undefined4 *)(lVar6 + 0xa4) = uVar4;
    FUN_14000c260(puVar7);
    *(undefined2 *)(lVar6 + 0x2a0) = 0x11;
LAB_1408be7eb:
    *(longlong *)(param_1 + 0xaf8 + uVar11 * 8) = lVar6;
switchD_1408bba8a_default:
    uVar10 = (ulonglong)(iVar12 + 1U);
    uVar11 = uVar11 + 1;
    if (0x292 < (int)(iVar12 + 1U)) {
      return;
    }
  } while( true );
}

