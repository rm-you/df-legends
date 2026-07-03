// FUN_1404aaa30 @ 1404aaa30
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 140071310 FUN_140071310
//   -> 140315ac0 FUN_140315ac0
//   -> 140002140 FUN_140002140
//   -> 140002250 FUN_140002250
//   -> 140dfb5c4 operator_new
//   -> 140b810d0 FUN_140b810d0
//   -> 140b817f0 FUN_140b817f0
//   -> 14000bed0 FUN_14000bed0
//   -> 14000bd10 FUN_14000bd10
//   -> 14000b9d0 FUN_14000b9d0
//   -> 14031c3c0 FUN_14031c3c0
//   -> 1404916f0 FUN_1404916f0
//   -> 14014a480 FUN_14014a480
//   -> 1401b2e10 FUN_1401b2e10
//   -> 140491990 FUN_140491990
//   -> 140491ba0 FUN_140491ba0
//   -> 140364380 FUN_140364380
//   -> 140dfc99c memset
//   -> 140086830 FUN_140086830
//   -> 140525f70 FUN_140525f70
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 140525b70 FUN_140525b70
//   -> EXTERNAL:000000e1 memmove
//   -> 140141fe0 FUN_140141fe0
//   -> 140492e60 FUN_140492e60
//   -> 14000c2b0 FUN_14000c2b0
//   -> 1400025a0 FUN_1400025a0
//   -> 140493120 FUN_140493120
//   -> 140002090 FUN_140002090
//   -> 1405bb600 FUN_1405bb600
//   -> 1400520f0 FUN_1400520f0
//   -> 140490ae0 FUN_140490ae0
//   -> 14000c260 FUN_14000c260
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404aaa30(short *param_1,undefined8 param_2,char param_3,int param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  short *psVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  int *piVar22;
  int *piVar23;
  int iVar24;
  int *piVar25;
  ulonglong uVar26;
  uint uVar27;
  short *psVar28;
  undefined1 auStack_b8 [32];
  int local_98;
  char local_94 [4];
  undefined8 *local_90;
  int local_88;
  int local_84;
  char local_80 [8];
  short *local_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_b8;
  local_94[0] = param_3;
  local_88 = param_4;
  local_78 = param_1;
  FUN_1405bba90(param_2,param_1,2);
  FUN_1405bba90(param_2,param_1 + 2,4);
  local_48 = 0xf;
  local_50 = 0;
  local_60[0] = 0;
  FUN_1405bb6d0(param_2,local_60);
  puVar4 = DAT_141d6e198;
  puVar9 = DAT_141d6e190;
  do {
    if (puVar4 <= puVar9) {
      uVar7 = 0;
LAB_1404aaaf7:
      *(undefined8 *)(param_1 + 4) = uVar7;
      FUN_1405bba90(param_2,param_1 + 0x670,2);
      FUN_1405bba90(param_2,param_1 + 0x671,2);
      FUN_1405bba90(param_2,param_1 + 8,4);
      FUN_1405bba90(param_2,param_1 + 10,2);
      FUN_140315ac0(param_1 + 0xc,param_2);
      FUN_1405bba90(param_2,param_1 + 0x48,2);
      FUN_1405bba90(param_2,param_1 + 0x4a,4);
      *(uint *)(param_1 + 0x4a) = *(uint *)(param_1 + 0x4a) & 0xffdfffff;
      FUN_140002140(param_2,param_1 + 0x1fc);
      FUN_140002250(param_2,param_1 + 0x208);
      if (0x5d2 < param_4) {
        FUN_140002140(param_2,param_1 + 0x214);
        FUN_140002250(param_2,param_1 + 0x220);
      }
      FUN_140002140(param_2,param_1 + 0x22c);
      FUN_140002250(param_2,param_1 + 0x238);
      FUN_140002140(param_2,param_1 + 0x244);
      FUN_140002250(param_2,param_1 + 0x250);
      FUN_140002140(param_2,param_1 + 0x25c);
      FUN_140002250(param_2,param_1 + 0x268);
      FUN_140002140(param_2,param_1 + 0x388);
      FUN_140002250(param_2,param_1 + 0x394);
      FUN_140002140(param_2,param_1 + 0x3a0);
      FUN_140002250(param_2,param_1 + 0x3ac);
      FUN_140002140(param_2,param_1 + 0x3b8);
      FUN_140002250(param_2,param_1 + 0x3c4);
      FUN_140002140(param_2,param_1 + 0x3d0);
      FUN_140002250(param_2,param_1 + 0x3dc);
      FUN_140002140(param_2,param_1 + 1000);
      FUN_140002250(param_2,param_1 + 0x3f4);
      FUN_140002140(param_2,param_1 + 0x400);
      FUN_140002250(param_2,param_1 + 0x40c);
      FUN_140002140(param_2,param_1 + 0x418);
      FUN_140002250(param_2,param_1 + 0x424);
      FUN_140002140(param_2,param_1 + 0x430);
      FUN_140002250(param_2,param_1 + 0x43c);
      FUN_140002140(param_2,param_1 + 0x448);
      FUN_140002250(param_2,param_1 + 0x454);
      FUN_140002140(param_2,param_1 + 0x460);
      FUN_140002250(param_2,param_1 + 0x46c);
      FUN_140002140(param_2,param_1 + 0x478);
      FUN_140002250(param_2,param_1 + 0x484);
      FUN_140002140(param_2,param_1 + 0x490);
      FUN_140002250(param_2,param_1 + 0x49c);
      FUN_140002140(param_2,param_1 + 0x4a8);
      FUN_140002250(param_2,param_1 + 0x4b4);
      FUN_140002140(param_2,param_1 + 0x4c0);
      FUN_140002250(param_2,param_1 + 0x4cc);
      FUN_140002250(param_2,param_1 + 0x4d8);
      FUN_140002140(param_2,param_1 + 0x4e4);
      FUN_140002250(param_2,param_1 + 0x4f0);
      FUN_140002140(param_2,param_1 + 0x4fc);
      FUN_140002140(param_2,param_1 + 0x508);
      FUN_140002250(param_2,param_1 + 0x514);
      FUN_140002250(param_2,param_1 + 0x520);
      FUN_140002140(param_2,param_1 + 0x52c);
      FUN_140002250(param_2,param_1 + 0x538);
      FUN_140002140(param_2,param_1 + 0x544);
      FUN_140002140(param_2,param_1 + 0x550);
      FUN_140002250(param_2,param_1 + 0x55c);
      FUN_140002140(param_2,param_1 + 0x568);
      FUN_140002140(param_2,param_1 + 0x574);
      FUN_140002140(param_2,param_1 + 0x580);
      FUN_140002250(param_2,param_1 + 0x58c);
      FUN_140002250(param_2,param_1 + 0x598);
      FUN_140002140(param_2,param_1 + 0x5ec);
      FUN_140002250(param_2,param_1 + 0x5a4);
      FUN_140002140(param_2,param_1 + 0x5f8);
      FUN_140002250(param_2,param_1 + 0x5b0);
      FUN_140002140(param_2,param_1 + 0x604);
      FUN_140002250(param_2,param_1 + 0x5bc);
      FUN_140002140(param_2,param_1 + 0x610);
      FUN_140002250(param_2,param_1 + 0x5c8);
      FUN_140002140(param_2,param_1 + 0x61c);
      FUN_140002250(param_2,param_1 + 0x5d4);
      FUN_140002140(param_2,param_1 + 0x628);
      FUN_140002250(param_2,param_1 + 0x5e0);
      FUN_140002140(param_2,param_1 + 0x634);
      FUN_140002140(param_2,param_1 + 0x274);
      FUN_140002250(param_2,param_1 + 0x280);
      FUN_140002250(param_2,param_1 + 0x28c);
      FUN_140002250(param_2,param_1 + 0x298);
      FUN_140002250(param_2,param_1 + 0x2a4);
      FUN_140002140(param_2,param_1 + 0x2b0);
      FUN_140002250(param_2,param_1 + 700);
      FUN_140002140(param_2,param_1 + 0x2c8);
      FUN_140002250(param_2,param_1 + 0x2d4);
      FUN_140002140(param_2,param_1 + 0x2e0);
      FUN_140002250(param_2,param_1 + 0x2ec);
      FUN_140002140(param_2,param_1 + 0x2f8);
      FUN_140002250(param_2,param_1 + 0x304);
      FUN_140002140(param_2,param_1 + 0x310);
      FUN_140002250(param_2,param_1 + 0x31c);
      FUN_140002140(param_2,param_1 + 0x328);
      FUN_140002250(param_2,param_1 + 0x334);
      FUN_140002140(param_2,param_1 + 0x358);
      FUN_140002250(param_2,param_1 + 0x364);
      FUN_140002140(param_2,param_1 + 0x340);
      FUN_140002250(param_2,param_1 + 0x34c);
      FUN_140002140(param_2,param_1 + 0x370);
      FUN_140002250(param_2,param_1 + 0x37c);
      FUN_1405bba90(param_2,param_1 + 0x658,2);
      FUN_1405bba90(param_2,param_1 + 0x65a,4);
      FUN_1405bba90(param_2,param_1 + 0x65c,2);
      FUN_1405bba90(param_2,param_1 + 0x65e,4);
      FUN_1405bba90(param_2,param_1 + 0x660,2);
      FUN_1405bba90(param_2,param_1 + 0x662,4);
      FUN_140002140(param_2,param_1 + 0x94);
      FUN_140002140(param_2,param_1 + 0xa0);
      FUN_140002140(param_2,param_1 + 0xac);
      FUN_140002140(param_2,param_1 + 0xb8);
      FUN_140002140(param_2,param_1 + 0xc4);
      FUN_140002140(param_2,param_1 + 0xd0);
      FUN_140002140(param_2,param_1 + 0xdc);
      FUN_140002140(param_2,param_1 + 0xe8);
      FUN_140002140(param_2,param_1 + 0xf4);
      FUN_140002140(param_2,param_1 + 0x100);
      FUN_140002140(param_2,param_1 + 0x10c);
      FUN_140002140(param_2,param_1 + 0x118);
      FUN_140002140(param_2,param_1 + 0x124);
      FUN_140002140(param_2,param_1 + 0x130);
      FUN_140002140(param_2,param_1 + 0x13c);
      if (0x5cc < param_4) {
        FUN_140002250(param_2,param_1 + 0x148);
      }
      FUN_140002140(param_2,param_1 + 0x154);
      FUN_140002250(param_2,param_1 + 0x160);
      FUN_140002140(param_2,param_1 + 0x16c);
      FUN_140002250(param_2,param_1 + 0x178);
      FUN_140002140(param_2,param_1 + 0x184);
      FUN_140002250(param_2,param_1 + 400);
      FUN_140002140(param_2,param_1 + 0x19c);
      FUN_140002250(param_2,param_1 + 0x1a8);
      FUN_140002140(param_2,param_1 + 0x1b4);
      FUN_140002250(param_2,param_1 + 0x1c0);
      FUN_140002140(param_2,param_1 + 0x1cc);
      FUN_140002250(param_2,param_1 + 0x1d8);
      FUN_140002140(param_2,param_1 + 0x1e4);
      FUN_140002250(param_2,param_1 + 0x1f0);
      if (param_3 == '\0') {
        FUN_1405bba90(param_2,local_80,1);
        if (local_80[0] == '\0') {
          param_1[0x9c4] = 0;
          param_1[0x9c5] = 0;
          param_1[0x9c6] = 0;
          param_1[0x9c7] = 0;
        }
        else {
          local_90 = operator_new(0x20d0);
          uVar7 = FUN_140b810d0(local_90);
          *(undefined8 *)(param_1 + 0x9c4) = uVar7;
          FUN_140b817f0(uVar7,param_2);
          FUN_1405bba90(param_2,param_1 + 0x9c8,2);
          FUN_1405bba90(param_2,param_1 + 0x9ca,4);
        }
        FUN_1405bba90(param_2,param_1 + 0x9cc,4);
        FUN_1405bba90(param_2,param_1 + 0x9ce,4);
        FUN_1405bba90(param_2,param_1 + 0x9d0,4);
        psVar14 = param_1 + 0x9d2;
        lVar19 = 10;
        do {
          FUN_1405bba90(param_2,psVar14,4);
          psVar14 = psVar14 + 2;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        FUN_1405bba90(param_2,param_1 + 0x9e6,4);
        FUN_1405bba90(param_2,param_1 + 0x9e8,4);
      }
      FUN_1405bba90(param_2,&local_84,4);
      FUN_14000bed0(param_1 + 0x81c,(longlong)local_84);
      uVar20 = *(ulonglong *)(param_1 + 0x820);
      for (uVar15 = *(ulonglong *)(param_1 + 0x81c); uVar15 < uVar20; uVar15 = uVar15 + 2) {
        FUN_1405bba90(param_2,uVar15,2);
      }
      FUN_1405bba90(param_2,&local_84,4);
      FUN_14000bed0(param_1 + 0x828,(longlong)local_84);
      uVar20 = *(ulonglong *)(param_1 + 0x82c);
      for (uVar15 = *(ulonglong *)(param_1 + 0x828); uVar15 < uVar20; uVar15 = uVar15 + 2) {
        FUN_1405bba90(param_2,uVar15,2);
      }
      FUN_1405bba90(param_2,&local_84,4);
      FUN_14000bd10(param_1 + 0x834,(longlong)local_84);
      uVar20 = *(ulonglong *)(param_1 + 0x838);
      for (uVar15 = *(ulonglong *)(param_1 + 0x834); uVar15 < uVar20; uVar15 = uVar15 + 4) {
        FUN_1405bba90(param_2,uVar15,4);
      }
      FUN_1405bba90(param_2,&local_98,4);
      plVar17 = (longlong *)(param_1 + 0x640);
      FUN_14000b9d0(plVar17,(longlong)local_98);
      uVar15 = 0;
      psVar14 = param_1;
      uVar20 = uVar15;
      if (*(longlong *)(param_1 + 0x644) - *plVar17 >> 3 != 0) {
        do {
          pvVar8 = operator_new(0x68);
          *(undefined8 *)((longlong)pvVar8 + 8) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x18) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x20) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x28) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x30) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x38) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x40) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x48) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x50) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x58) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x60) = 0;
          *(void **)(*plVar17 + uVar15) = pvVar8;
          FUN_1405bba90(param_2,*(undefined8 *)(*plVar17 + uVar15),2);
          lVar19 = *(longlong *)(*plVar17 + uVar15);
          FUN_1405bba90(param_2,&local_84,4);
          FUN_14000bed0(lVar19 + 8,(longlong)local_84);
          uVar26 = *(ulonglong *)(lVar19 + 0x10);
          for (uVar16 = *(ulonglong *)(lVar19 + 8); uVar16 < uVar26; uVar16 = uVar16 + 2) {
            FUN_1405bba90(param_2,uVar16,2);
          }
          lVar19 = *(longlong *)(*plVar17 + uVar15);
          FUN_1405bba90(param_2,&local_70,4);
          FUN_14000bed0(lVar19 + 0x20,(longlong)local_70);
          uVar26 = *(ulonglong *)(lVar19 + 0x28);
          for (uVar16 = *(ulonglong *)(lVar19 + 0x20); uVar16 < uVar26; uVar16 = uVar16 + 2) {
            FUN_1405bba90(param_2,uVar16,2);
          }
          lVar19 = *(longlong *)(*plVar17 + uVar15);
          FUN_1405bba90(param_2,&local_6c,4);
          FUN_14000bed0(lVar19 + 0x38,(longlong)local_6c);
          uVar26 = *(ulonglong *)(lVar19 + 0x40);
          for (uVar16 = *(ulonglong *)(lVar19 + 0x38); uVar16 < uVar26; uVar16 = uVar16 + 2) {
            FUN_1405bba90(param_2,uVar16,2);
          }
          lVar19 = *(longlong *)(*plVar17 + uVar15);
          FUN_1405bba90(param_2,&local_90,4);
          FUN_14000bed0(lVar19 + 0x50,(longlong)(int)local_90);
          uVar26 = *(ulonglong *)(lVar19 + 0x58);
          psVar14 = local_78;
          for (uVar16 = *(ulonglong *)(lVar19 + 0x50); local_78 = psVar14, uVar16 < uVar26;
              uVar16 = uVar16 + 2) {
            FUN_1405bba90(param_2,uVar16,2);
            psVar14 = local_78;
          }
          uVar27 = (int)uVar20 + 1;
          uVar15 = uVar15 + 8;
          uVar20 = (ulonglong)uVar27;
        } while ((ulonglong)(longlong)(int)uVar27 <
                 (ulonglong)(*(longlong *)(param_1 + 0x644) - *plVar17 >> 3));
      }
      uVar15 = 0;
      FUN_1405bba90(param_2,&local_98,4);
      plVar17 = (longlong *)(psVar14 + 0x64c);
      FUN_14000b9d0(plVar17,(longlong)local_98);
      psVar18 = psVar14;
      uVar20 = uVar15;
      if (*(longlong *)(psVar14 + 0x650) - *plVar17 >> 3 != 0) {
        do {
          pvVar8 = operator_new(0x68);
          *(undefined8 *)((longlong)pvVar8 + 8) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x18) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x20) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x28) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x30) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x38) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x40) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x48) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x50) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x58) = 0;
          *(undefined8 *)((longlong)pvVar8 + 0x60) = 0;
          *(void **)(*plVar17 + uVar15) = pvVar8;
          FUN_1405bba90(param_2,*(undefined8 *)(*plVar17 + uVar15),2);
          lVar19 = *(longlong *)(*plVar17 + uVar15);
          FUN_1405bba90(param_2,&local_90,4);
          FUN_14000bed0(lVar19 + 8,(longlong)(int)local_90);
          uVar26 = *(ulonglong *)(lVar19 + 0x10);
          for (uVar16 = *(ulonglong *)(lVar19 + 8); uVar16 < uVar26; uVar16 = uVar16 + 2) {
            FUN_1405bba90(param_2,uVar16,2);
          }
          lVar19 = *(longlong *)(*plVar17 + uVar15);
          FUN_1405bba90(param_2,&local_6c,4);
          FUN_14000bed0(lVar19 + 0x20,(longlong)local_6c);
          uVar26 = *(ulonglong *)(lVar19 + 0x28);
          for (uVar16 = *(ulonglong *)(lVar19 + 0x20); uVar16 < uVar26; uVar16 = uVar16 + 2) {
            FUN_1405bba90(param_2,uVar16,2);
          }
          lVar19 = *(longlong *)(*plVar17 + uVar15);
          FUN_1405bba90(param_2,&local_70,4);
          FUN_14000bed0(lVar19 + 0x38,(longlong)local_70);
          uVar26 = *(ulonglong *)(lVar19 + 0x40);
          for (uVar16 = *(ulonglong *)(lVar19 + 0x38); uVar16 < uVar26; uVar16 = uVar16 + 2) {
            FUN_1405bba90(param_2,uVar16,2);
          }
          lVar19 = *(longlong *)(*plVar17 + uVar15);
          FUN_1405bba90(param_2,&local_84,4);
          FUN_14000bed0(lVar19 + 0x50,(longlong)local_84);
          uVar26 = *(ulonglong *)(lVar19 + 0x58);
          psVar18 = local_78;
          for (uVar16 = *(ulonglong *)(lVar19 + 0x50); local_78 = psVar18, uVar16 < uVar26;
              uVar16 = uVar16 + 2) {
            FUN_1405bba90(param_2,uVar16,2);
            psVar18 = local_78;
          }
          uVar27 = (int)uVar20 + 1;
          uVar15 = uVar15 + 8;
          uVar20 = (ulonglong)uVar27;
        } while ((ulonglong)(longlong)(int)uVar27 <
                 (ulonglong)(*(longlong *)(psVar14 + 0x650) - *plVar17 >> 3));
      }
      uVar20 = 0;
      FUN_1405bba90(param_2,&local_98,4);
      plVar17 = (longlong *)(psVar18 + 0x664);
      FUN_14000b9d0(plVar17,(longlong)local_98);
      psVar14 = psVar18;
      if (*(longlong *)(psVar18 + 0x668) - *plVar17 >> 3 != 0) {
        lVar19 = 0;
        uVar15 = uVar20;
        do {
          FUN_1405bba90(param_2,&local_98,4);
          iVar6 = (int)(DAT_141c67370 - DAT_141c67368 >> 3);
          lVar21 = lVar19;
          if ((iVar6 != 0) && (local_98 != -1)) {
            iVar6 = iVar6 + -1;
            iVar24 = 0;
            if (-1 < iVar6) {
              do {
                iVar12 = iVar24 + iVar6 >> 1;
                lVar21 = *(longlong *)(DAT_141c67368 + (longlong)iVar12 * 8);
                iVar13 = *(int *)(lVar21 + 0x1c);
                if (iVar13 == local_98) break;
                if (local_98 < iVar13) {
                  iVar6 = iVar12 + -1;
                }
                else {
                  iVar24 = iVar12 + 1;
                }
                lVar21 = lVar19;
              } while (iVar24 <= iVar6);
            }
          }
          *(longlong *)(uVar20 + *plVar17) = lVar21;
          uVar27 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar27;
          uVar20 = uVar20 + 8;
          psVar14 = local_78;
        } while ((ulonglong)(longlong)(int)uVar27 <
                 (ulonglong)(*(longlong *)(psVar18 + 0x668) - *plVar17 >> 3));
      }
      uVar20 = 0;
      if (local_94[0] == '\0') {
        FUN_1405bba90(param_2,&local_98,4);
        plVar17 = (longlong *)(psVar14 + 0x9b8);
        FUN_14000b9d0(plVar17,(longlong)local_98);
        uVar15 = uVar20;
        if (*(longlong *)(psVar14 + 0x9bc) - *plVar17 >> 3 != 0) {
          do {
            local_90 = operator_new(0x58);
            local_90[1] = 0;
            local_90[2] = 0;
            local_90[3] = 0;
            local_90[4] = 0;
            local_90[5] = 0;
            local_90[6] = 0;
            local_90[9] = 0;
            local_90[10] = 0;
            *(undefined8 **)(uVar20 + *plVar17) = local_90;
            FUN_14031c3c0(*(undefined8 *)(*plVar17 + uVar20),param_2);
            uVar27 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar27;
            uVar20 = uVar20 + 8;
          } while ((ulonglong)(longlong)(int)uVar27 <
                   (ulonglong)(*(longlong *)(psVar14 + 0x9bc) - *plVar17 >> 3));
        }
      }
      iVar6 = local_88;
      if (0x65e < local_88) {
        FUN_1405bba90(param_2,&local_98,4);
        FUN_14000b9d0(psVar14 + 0x4c,(longlong)local_98);
        puVar9 = *(undefined8 **)(psVar14 + 0x4c);
        local_90 = (undefined8 *)0x0;
        uVar20 = (*(longlong *)(psVar14 + 0x50) - (longlong)puVar9) + 7U >> 3;
        if (*(undefined8 **)(psVar14 + 0x50) < puVar9) {
          uVar20 = 0;
        }
        if (uVar20 != 0) {
          uVar15 = 0;
          do {
            pvVar8 = operator_new(8);
            *puVar9 = pvVar8;
            FUN_1405bba90(param_2,pvVar8,4);
            FUN_1405bba90(param_2,(longlong)pvVar8 + 4,4);
            puVar9 = puVar9 + 1;
            uVar15 = uVar15 + 1;
            iVar6 = local_88;
          } while (uVar15 < uVar20);
        }
      }
      FUN_1405bba90(param_2,&local_98,4);
      plVar17 = (longlong *)(psVar14 + 0x58);
      FUN_14000b9d0(plVar17,(longlong)local_98);
      if (*(longlong *)(psVar14 + 0x5c) - *plVar17 >> 3 != 0) {
        lVar19 = 0;
        iVar24 = 0;
        do {
          pvVar8 = operator_new(0xc);
          *(void **)(*plVar17 + lVar19) = pvVar8;
          lVar21 = *(longlong *)(*plVar17 + lVar19);
          FUN_1405bba90(param_2,lVar21,2);
          FUN_1405bba90(param_2,lVar21 + 4,4);
          FUN_1405bba90(param_2,lVar21 + 8,2);
          iVar24 = iVar24 + 1;
          lVar19 = lVar19 + 8;
          iVar6 = local_88;
        } while ((ulonglong)(longlong)iVar24 <
                 (ulonglong)(*(longlong *)(psVar14 + 0x5c) - *plVar17 >> 3));
      }
      FUN_1405bba90(param_2,&local_98,4);
      puVar1 = (ulonglong *)(psVar14 + 100);
      FUN_14000b9d0(puVar1,(longlong)local_98);
      iVar24 = 0;
      psVar18 = psVar14;
      if ((longlong)(*(longlong *)(psVar14 + 0x68) - *puVar1) >> 3 != 0) {
        lVar19 = 0;
        do {
          local_90 = operator_new(0x58);
          local_90[6] = 0;
          local_90[7] = 0;
          local_90[8] = 0;
          *(undefined4 *)local_90 = 0xffffffff;
          *(undefined4 *)((longlong)local_90 + 4) = 0xffffffff;
          *(undefined4 *)(local_90 + 1) = 0xffffffff;
          *(undefined4 *)((longlong)local_90 + 0xc) = 0xffffffff;
          *(undefined4 *)(local_90 + 2) = 0xffffffff;
          *(undefined4 *)((longlong)local_90 + 0x14) = 0xffffffff;
          local_90[3] = 0;
          local_90[4] = 100;
          *(undefined4 *)(local_90 + 5) = 0;
          *(undefined4 *)(local_90 + 10) = 0xffffffff;
          *(undefined4 *)((longlong)local_90 + 0x54) = 0xffffffff;
          *(undefined8 **)(lVar19 + *puVar1) = local_90;
          FUN_1404916f0(*(undefined8 *)(lVar19 + *puVar1),param_2,iVar6);
          iVar24 = iVar24 + 1;
          lVar19 = lVar19 + 8;
          psVar18 = local_78;
        } while ((ulonglong)(longlong)iVar24 <
                 (ulonglong)((longlong)(*(longlong *)(psVar14 + 0x68) - *puVar1) >> 3));
      }
      uVar20 = 0;
      lVar19 = 2;
      if ((iVar6 < 0x658) && (*psVar18 != 1)) {
        plVar17 = (longlong *)*puVar1;
        uVar15 = (ulonglong)((longlong)*(longlong **)(psVar14 + 0x68) + (7 - (longlong)plVar17)) >>
                 3;
        if (*(longlong **)(psVar14 + 0x68) < plVar17) {
          uVar15 = uVar20;
        }
        if (uVar15 != 0) {
          do {
            uVar27 = *(uint *)(*plVar17 + 0x18);
            if ((uVar27 & 8) != 0) {
              *(uint *)(*plVar17 + 0x18) = uVar27 & 0xfffffff7;
              FUN_14014a480("patch: removed market link from non-site entity");
            }
            plVar17 = plVar17 + 1;
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar15);
        }
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bd10(psVar18 + 0x70,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x74);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x70); uVar15 < uVar20; uVar15 = uVar15 + 4) {
        FUN_1405bba90(param_2,uVar15,4);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bd10(psVar18 + 0x7c,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x80);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x7c); uVar15 < uVar20; uVar15 = uVar15 + 4) {
        FUN_1405bba90(param_2,uVar15,4);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bd10(psVar18 + 0x88,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x8c);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x88); uVar15 < uVar20; uVar15 = uVar15 + 4) {
        FUN_1405bba90(param_2,uVar15,4);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bed0(psVar18 + 0x754,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x758);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x754); uVar15 < uVar20; uVar15 = uVar15 + 2) {
        FUN_1405bba90(param_2,uVar15,2);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bd10(psVar18 + 0x760,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x764);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x760); uVar15 < uVar20; uVar15 = uVar15 + 4) {
        FUN_1405bba90(param_2,uVar15,4);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bed0(psVar18 + 0x76c,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x770);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x76c); uVar15 < uVar20; uVar15 = uVar15 + 2) {
        FUN_1405bba90(param_2,uVar15,2);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_1401b2e10(psVar18 + 0x778,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x77c);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x778); uVar15 < uVar20; uVar15 = uVar15 + 1) {
        FUN_1405bba90(param_2,uVar15,1);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_1401b2e10(psVar18 + 0x784,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x788);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x784); uVar15 < uVar20; uVar15 = uVar15 + 1) {
        FUN_1405bba90(param_2,uVar15,1);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_1401b2e10(psVar18 + 0x790,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x794);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x790); uVar15 < uVar20; uVar15 = uVar15 + 1) {
        FUN_1405bba90(param_2,uVar15,1);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_1401b2e10(psVar18 + 0x79c,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x7a0);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x79c); uVar15 < uVar20; uVar15 = uVar15 + 1) {
        FUN_1405bba90(param_2,uVar15,1);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bed0(psVar18 + 0x7a8,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x7ac);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x7a8); uVar15 < uVar20; uVar15 = uVar15 + 2) {
        FUN_1405bba90(param_2,uVar15,2);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bed0(psVar18 + 0x7b4,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x7b8);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x7b4); uVar15 < uVar20; uVar15 = uVar15 + 2) {
        FUN_1405bba90(param_2,uVar15,2);
      }
      FUN_1405bba90(param_2,&local_98,4);
      plVar17 = (longlong *)(psVar18 + 0x7c0);
      FUN_14000b9d0(plVar17,(longlong)local_98);
      iVar24 = 0;
      if (*(longlong *)(psVar18 + 0x7c4) - *plVar17 >> 3 != 0) {
        lVar21 = 0;
        do {
          local_90 = operator_new(0x228);
          uVar7 = FUN_140491990(local_90);
          *(undefined8 *)(lVar21 + *plVar17) = uVar7;
          FUN_140491ba0(*(undefined8 *)(*plVar17 + lVar21),param_2);
          iVar24 = iVar24 + 1;
          lVar21 = lVar21 + 8;
        } while ((ulonglong)(longlong)iVar24 <
                 (ulonglong)(*(longlong *)(psVar18 + 0x7c4) - *plVar17 >> 3));
      }
      FUN_1405bba90(param_2,psVar18 + 0x7cc,4);
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bd10(psVar18 + 2000,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x7d4);
      for (uVar15 = *(ulonglong *)(psVar18 + 2000); uVar15 < uVar20; uVar15 = uVar15 + 4) {
        FUN_1405bba90(param_2,uVar15,4);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bd10(psVar18 + 0x7dc,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x7e0);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x7dc); uVar15 < uVar20; uVar15 = uVar15 + 4) {
        FUN_1405bba90(param_2,uVar15,4);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bd10(psVar18 + 0x7e8,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar18 + 0x7ec);
      for (uVar15 = *(ulonglong *)(psVar18 + 0x7e8); uVar15 < uVar20; uVar15 = uVar15 + 4) {
        FUN_1405bba90(param_2,uVar15,4);
      }
      if (0x623 < iVar6) {
        FUN_1405bba90(param_2,&local_90,4);
        FUN_14000bd10(psVar18 + 0x7f4,(longlong)(int)local_90);
        uVar20 = *(ulonglong *)(psVar18 + 0x7f8);
        for (uVar15 = *(ulonglong *)(psVar18 + 0x7f4); uVar15 < uVar20; uVar15 = uVar15 + 4) {
          FUN_1405bba90(param_2,uVar15,4);
        }
      }
      FUN_1405bba90(param_2,&local_98,4);
      plVar17 = (longlong *)(psVar18 + 0x800);
      FUN_14000b9d0(plVar17,(longlong)local_98);
      uVar15 = 0;
      uVar20 = uVar15;
      psVar14 = psVar18;
      if (*(longlong *)(psVar18 + 0x804) - *plVar17 >> 3 != 0) {
        do {
          local_90 = operator_new(0x58);
          *local_90 = 0;
          local_90[1] = 0;
          local_90[2] = 0;
          local_90[3] = 0;
          local_90[4] = 0;
          local_90[5] = 0;
          local_90[7] = 0;
          local_90[8] = 0;
          local_90[9] = 0;
          *(undefined4 *)(local_90 + 6) = 0xffffffff;
          *(undefined4 *)((longlong)local_90 + 0x34) = 0xffffffff;
          *(undefined4 *)(local_90 + 10) = 0;
          *(undefined8 **)(*plVar17 + uVar20) = local_90;
          lVar21 = *(longlong *)(*plVar17 + uVar20);
          FUN_140002140(param_2,lVar21);
          FUN_140002140(param_2,lVar21 + 0x18);
          FUN_1405bba90(param_2,lVar21 + 0x30,4);
          FUN_1405bba90(param_2,lVar21 + 0x34,4);
          FUN_140002250(param_2,lVar21 + 0x38);
          FUN_1405bba90(param_2,lVar21 + 0x50,2);
          FUN_1405bba90(param_2,lVar21 + 0x52,2);
          uVar27 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar27;
          uVar20 = uVar20 + 8;
          psVar14 = local_78;
          iVar6 = local_88;
        } while ((ulonglong)(longlong)(int)uVar27 <
                 (ulonglong)(*(longlong *)(psVar18 + 0x804) - *plVar17 >> 3));
      }
      uVar26 = 0;
      FUN_140364380(psVar14 + 0x80c,param_2,iVar6);
      FUN_1405bba90(param_2,psVar14 + 0x818,2);
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bd10(psVar14 + 0x840,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar14 + 0x844);
      for (uVar15 = *(ulonglong *)(psVar14 + 0x840); uVar15 < uVar20; uVar15 = uVar15 + 4) {
        FUN_1405bba90(param_2,uVar15,4);
      }
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bd10(psVar14 + 0x84c,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar14 + 0x850);
      for (uVar15 = *(ulonglong *)(psVar14 + 0x84c); uVar15 < uVar20; uVar15 = uVar15 + 4) {
        FUN_1405bba90(param_2,uVar15,4);
      }
      psVar18 = psVar14 + 0x672;
      lVar21 = 0x16;
      do {
        FUN_1405bba90(param_2,psVar18,2);
        psVar18 = psVar18 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      psVar18 = psVar14 + 0x688;
      if (iVar6 < 0x5cf) {
        memset(psVar18,0,0x100);
        lVar21 = 0x20;
        do {
          FUN_1405bba90(param_2,psVar18,4);
          psVar18 = psVar18 + 2;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        psVar14[0x708] = -1;
        psVar14[0x709] = -1;
        psVar18 = psVar14 + 0x70a;
        do {
          psVar28 = psVar18;
          psVar28[0] = 0x101;
          psVar28[1] = 0x101;
          psVar28[2] = 0x101;
          psVar28[3] = 0x101;
          psVar28[4] = 0x101;
          psVar28[5] = 0x101;
          psVar28[6] = 0x101;
          psVar28[7] = 0x101;
          psVar28[8] = 0x101;
          psVar28[9] = 0x101;
          psVar28[10] = 0x101;
          psVar28[0xb] = 0x101;
          psVar18 = psVar28 + 0x20;
          psVar28[0xc] = 0x101;
          psVar28[0xd] = 0x101;
          psVar28[0xe] = 0x101;
          psVar28[0xf] = 0x101;
          psVar28[0x10] = 0x101;
          psVar28[0x11] = 0x101;
          psVar28[0x12] = 0x101;
          psVar28[0x13] = 0x101;
          psVar28[0x14] = 0x101;
          psVar28[0x15] = 0x101;
          psVar28[0x16] = 0x101;
          psVar28[0x17] = 0x101;
          psVar28[0x18] = 0x101;
          psVar28[0x19] = 0x101;
          psVar28[0x1a] = 0x101;
          psVar28[0x1b] = 0x101;
          psVar28[0x1c] = 0x101;
          psVar28[0x1d] = 0x101;
          psVar28[0x1e] = 0x101;
          psVar28[0x1f] = 0x101;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        psVar18[0] = 0x101;
        psVar18[1] = 0x101;
        psVar18[2] = 0x101;
        psVar18[3] = 0x101;
        psVar28[0x24] = 0x101;
        psVar28[0x25] = 0x101;
        psVar28[0x26] = 0x101;
        psVar28[0x27] = 0x101;
        psVar28[0x28] = 0x101;
        *(undefined1 *)(psVar28 + 0x29) = 1;
      }
      else {
        lVar19 = 0x40;
        do {
          FUN_1405bba90(param_2,psVar18,4);
          psVar18 = psVar18 + 2;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        FUN_1405bba90(param_2,psVar14 + 0x708,4);
        uVar20 = uVar26;
        if (iVar6 < 0x6ae) {
          if (iVar6 < 0x669) {
            do {
              cVar5 = FUN_1405bba90(param_2,local_94,1);
              if (cVar5 != '\0') {
                *(bool *)((longlong)psVar14 + uVar20 + 0xe14) = local_94[0] != '\0';
              }
              uVar20 = uVar20 + 1;
            } while ((longlong)uVar20 < 0x87);
            *(undefined8 *)((longlong)psVar14 + 0xe9b) = 0x101010101010101;
            *(undefined4 *)((longlong)psVar14 + 0xea3) = 0x1010101;
          }
          else {
            do {
              cVar5 = FUN_1405bba90(param_2,local_94,1);
              if (cVar5 != '\0') {
                *(bool *)((longlong)psVar14 + uVar20 + 0xe14) = local_94[0] != '\0';
              }
              uVar20 = uVar20 + 1;
            } while ((longlong)uVar20 < 0x88);
            psVar14[0x74e] = 0x101;
            psVar14[0x74f] = 0x101;
            psVar14[0x750] = 0x101;
            psVar14[0x751] = 0x101;
            psVar14[0x752] = 0x101;
            *(undefined1 *)(psVar14 + 0x753) = 1;
          }
        }
        else {
          do {
            cVar5 = FUN_1405bba90(param_2,local_94,1);
            if (cVar5 != '\0') {
              *(bool *)((longlong)psVar14 + uVar20 + 0xe14) = local_94[0] != '\0';
            }
            uVar20 = uVar20 + 1;
          } while ((longlong)uVar20 < 0x93);
        }
      }
      FUN_1405bba90(param_2,&local_98,4);
      plVar17 = (longlong *)(psVar14 + 0x858);
      FUN_14000b9d0(plVar17,(longlong)local_98);
      uVar20 = uVar26;
      uVar15 = uVar26;
      if (*(longlong *)(psVar14 + 0x85c) - *plVar17 >> 3 != 0) {
        do {
          local_90 = operator_new(0x388);
          uVar7 = FUN_140086830(local_90);
          *(undefined8 *)(uVar20 + *plVar17) = uVar7;
          FUN_140525f70(*(undefined8 *)(uVar20 + *plVar17),param_2,iVar6);
          uVar27 = (int)uVar15 + 1;
          uVar20 = uVar20 + 8;
          uVar15 = (ulonglong)uVar27;
        } while ((ulonglong)(longlong)(int)uVar27 <
                 (ulonglong)(*(longlong *)(psVar14 + 0x85c) - *plVar17 >> 3));
      }
      FUN_1405bba90(param_2,&local_98,4);
      plVar17 = (longlong *)(psVar14 + 0x864);
      FUN_14000b9d0(plVar17,(longlong)local_98);
      uVar20 = uVar26;
      uVar15 = uVar26;
      if (*(longlong *)(psVar14 + 0x868) - *plVar17 >> 3 != 0) {
        do {
          local_90 = operator_new(0x388);
          uVar7 = FUN_140086830(local_90);
          *(undefined8 *)(uVar20 + *plVar17) = uVar7;
          FUN_140525f70(*(undefined8 *)(uVar20 + *plVar17),param_2,iVar6);
          uVar27 = (int)uVar15 + 1;
          uVar20 = uVar20 + 8;
          uVar15 = (ulonglong)uVar27;
        } while ((ulonglong)(longlong)(int)uVar27 <
                 (ulonglong)(*(longlong *)(psVar14 + 0x868) - *plVar17 >> 3));
      }
      FUN_1405bba90(param_2,&local_98,4);
      plVar17 = (longlong *)(psVar14 + 0x870);
      FUN_14000b9d0(plVar17,(longlong)local_98);
      uVar20 = uVar26;
      uVar15 = uVar26;
      if (*(longlong *)(psVar14 + 0x874) - *plVar17 >> 3 != 0) {
        do {
          local_90 = operator_new(0x388);
          uVar7 = FUN_140086830(local_90);
          *(undefined8 *)(uVar20 + *plVar17) = uVar7;
          FUN_140525f70(*(undefined8 *)(uVar20 + *plVar17),param_2,iVar6);
          uVar27 = (int)uVar15 + 1;
          uVar20 = uVar20 + 8;
          uVar15 = (ulonglong)uVar27;
        } while ((ulonglong)(longlong)(int)uVar27 <
                 (ulonglong)(*(longlong *)(psVar14 + 0x874) - *plVar17 >> 3));
      }
      FUN_1405bba90(param_2,psVar14 + 0x87c,4);
      FUN_1405bba90(param_2,&local_98,4);
      plVar17 = (longlong *)(psVar14 + 0x880);
      FUN_14000b9d0(plVar17,(longlong)local_98);
      psVar18 = psVar14;
      if (*(longlong *)(psVar14 + 0x884) - *plVar17 >> 3 != 0) {
        lVar19 = 0;
        do {
          puVar9 = operator_new(0x58);
          *(undefined4 *)(puVar9 + 3) = 0;
          puVar9[2] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          *(undefined4 *)((longlong)puVar9 + 4) = 0xffffffff;
          *(undefined4 *)(puVar9 + 1) = 0xffffffff;
          *(undefined4 *)(puVar9 + 4) = 0xffffffff;
          local_90 = puVar9;
          if ((void *)puVar9[2] != (void *)0x0) {
            free((void *)puVar9[2]);
          }
          puVar10 = operator_new(4);
          puVar9[2] = puVar10;
          *puVar10 = 0;
          *(undefined4 *)(puVar9 + 3) = 4;
          *(undefined4 *)((longlong)puVar9 + 0x24) = 0xffffffff;
          *(undefined4 *)(puVar9 + 5) = 0xffffffff;
          *(undefined4 *)((longlong)puVar9 + 0x2c) = 0xffffffff;
          *(undefined4 *)(puVar9 + 6) = 0xffffffff;
          *(undefined8 **)(lVar19 + *plVar17) = puVar9;
          FUN_140525b70(*(undefined8 *)(lVar19 + *plVar17),param_2);
          uVar27 = (int)uVar26 + 1;
          uVar26 = (ulonglong)uVar27;
          lVar19 = lVar19 + 8;
          psVar18 = local_78;
        } while ((ulonglong)(longlong)(int)uVar27 <
                 (ulonglong)(*(longlong *)(psVar14 + 0x884) - *plVar17 >> 3));
      }
      FUN_1405bba90(param_2,psVar18 + 0x88c,4);
      FUN_1405bba90(param_2,&local_98,4);
      plVar2 = (longlong *)(psVar18 + 0x890);
      FUN_14000b9d0(plVar2,(longlong)local_98);
      puVar9 = (undefined8 *)*plVar2;
      uVar15 = 0;
      uVar20 = (*(longlong *)(psVar18 + 0x894) - (longlong)puVar9) + 7U >> 3;
      if (*(undefined8 **)(psVar18 + 0x894) < puVar9) {
        uVar20 = uVar15;
      }
      psVar28 = psVar18;
      if (uVar20 != 0) {
        piVar25 = (int *)0x0;
        do {
          FUN_1405bba90(param_2,&local_98,4);
          iVar6 = (int)(*(longlong *)(psVar14 + 0x884) - *plVar17 >> 3) + -1;
          piVar22 = piVar25;
          piVar23 = piVar25;
          if (-1 < iVar6) {
            do {
              iVar13 = iVar6 + (int)piVar22 >> 1;
              piVar23 = *(int **)(*plVar17 + (longlong)iVar13 * 8);
              iVar24 = *piVar23;
              if (iVar24 == local_98) break;
              if (local_98 < iVar24) {
                iVar6 = iVar13 + -1;
              }
              else {
                piVar22 = (int *)(ulonglong)(iVar13 + 1);
              }
              piVar23 = piVar25;
            } while ((int)piVar22 <= iVar6);
          }
          *puVar9 = piVar23;
          puVar9 = puVar9 + 1;
          uVar15 = uVar15 + 1;
          psVar28 = local_78;
        } while (uVar15 < uVar20);
      }
      iVar6 = (int)(*(longlong *)(psVar18 + 0x894) - *plVar2 >> 3) + -1;
      if (-1 < iVar6) {
        lVar19 = (longlong)iVar6 * 8;
        lVar21 = (longlong)iVar6 * 8;
        do {
          if (*(longlong *)(*plVar2 + lVar19) == 0) {
            pvVar3 = (void *)(lVar21 + *plVar2);
            pvVar8 = (void *)((longlong)pvVar3 + 8);
            memmove(pvVar3,pvVar8,*(longlong *)(psVar18 + 0x894) - (longlong)pvVar8);
            *(longlong *)(psVar18 + 0x894) = *(longlong *)(psVar18 + 0x894) + -8;
          }
          lVar21 = lVar21 + -8;
          lVar19 = lVar19 + -8;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
      FUN_1405bba90(param_2,&local_98,4);
      plVar2 = (longlong *)(psVar28 + 0x89c);
      FUN_14000b9d0(plVar2,(longlong)local_98);
      puVar9 = (undefined8 *)*plVar2;
      uVar15 = 0;
      uVar20 = (*(longlong *)(psVar28 + 0x8a0) - (longlong)puVar9) + 7U >> 3;
      if (*(undefined8 **)(psVar28 + 0x8a0) < puVar9) {
        uVar20 = uVar15;
      }
      psVar18 = psVar28;
      if (uVar20 != 0) {
        piVar25 = (int *)0x0;
        do {
          FUN_1405bba90(param_2,&local_98,4);
          iVar6 = (int)(*(longlong *)(psVar14 + 0x884) - *plVar17 >> 3) + -1;
          piVar22 = piVar25;
          piVar23 = piVar25;
          if (-1 < iVar6) {
            do {
              iVar13 = iVar6 + (int)piVar22 >> 1;
              piVar23 = *(int **)(*plVar17 + (longlong)iVar13 * 8);
              iVar24 = *piVar23;
              if (iVar24 == local_98) break;
              if (local_98 < iVar24) {
                iVar6 = iVar13 + -1;
              }
              else {
                piVar22 = (int *)(ulonglong)(iVar13 + 1);
              }
              piVar23 = piVar25;
            } while ((int)piVar22 <= iVar6);
          }
          *puVar9 = piVar23;
          puVar9 = puVar9 + 1;
          uVar15 = uVar15 + 1;
          psVar18 = local_78;
        } while (uVar15 < uVar20);
      }
      iVar6 = (int)(*(longlong *)(psVar28 + 0x8a0) - *plVar2 >> 3) + -1;
      if (-1 < iVar6) {
        lVar19 = (longlong)iVar6 * 8;
        lVar21 = (longlong)iVar6 * 8;
        do {
          if (*(longlong *)(*plVar2 + lVar19) == 0) {
            pvVar3 = (void *)(lVar21 + *plVar2);
            pvVar8 = (void *)((longlong)pvVar3 + 8);
            memmove(pvVar3,pvVar8,*(longlong *)(psVar28 + 0x8a0) - (longlong)pvVar8);
            *(longlong *)(psVar28 + 0x8a0) = *(longlong *)(psVar28 + 0x8a0) + -8;
          }
          lVar21 = lVar21 + -8;
          lVar19 = lVar19 + -8;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
      FUN_1405bba90(param_2,&local_98,4);
      plVar2 = (longlong *)(psVar18 + 0x8a8);
      FUN_14000b9d0(plVar2,(longlong)local_98);
      puVar9 = (undefined8 *)*plVar2;
      uVar15 = 0;
      uVar20 = (*(longlong *)(psVar18 + 0x8ac) - (longlong)puVar9) + 7U >> 3;
      if (*(undefined8 **)(psVar18 + 0x8ac) < puVar9) {
        uVar20 = uVar15;
      }
      psVar28 = psVar18;
      if (uVar20 != 0) {
        piVar25 = (int *)0x0;
        do {
          FUN_1405bba90(param_2,&local_98,4);
          iVar6 = (int)(*(longlong *)(psVar14 + 0x884) - *plVar17 >> 3) + -1;
          piVar22 = piVar25;
          piVar23 = piVar25;
          if (-1 < iVar6) {
            do {
              iVar13 = iVar6 + (int)piVar22 >> 1;
              piVar23 = *(int **)(*plVar17 + (longlong)iVar13 * 8);
              iVar24 = *piVar23;
              if (iVar24 == local_98) break;
              if (local_98 < iVar24) {
                iVar6 = iVar13 + -1;
              }
              else {
                piVar22 = (int *)(ulonglong)(iVar13 + 1);
              }
              piVar23 = piVar25;
            } while ((int)piVar22 <= iVar6);
          }
          *puVar9 = piVar23;
          puVar9 = puVar9 + 1;
          uVar15 = uVar15 + 1;
          psVar28 = local_78;
        } while (uVar15 < uVar20);
      }
      iVar6 = (int)(*(longlong *)(psVar18 + 0x8ac) - *plVar2 >> 3) + -1;
      if (-1 < iVar6) {
        lVar19 = (longlong)iVar6 * 8;
        lVar21 = (longlong)iVar6 * 8;
        do {
          if (*(longlong *)(*plVar2 + lVar19) == 0) {
            pvVar3 = (void *)(lVar21 + *plVar2);
            pvVar8 = (void *)((longlong)pvVar3 + 8);
            memmove(pvVar3,pvVar8,*(longlong *)(psVar18 + 0x8ac) - (longlong)pvVar8);
            *(longlong *)(psVar18 + 0x8ac) = *(longlong *)(psVar18 + 0x8ac) + -8;
          }
          lVar21 = lVar21 + -8;
          lVar19 = lVar19 + -8;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
      FUN_1405bba90(param_2,&local_98,4);
      plVar2 = (longlong *)(psVar28 + 0x8b4);
      FUN_14000b9d0(plVar2,(longlong)local_98);
      puVar9 = (undefined8 *)*plVar2;
      uVar15 = 0;
      uVar20 = (*(longlong *)(psVar28 + 0x8b8) - (longlong)puVar9) + 7U >> 3;
      if (*(undefined8 **)(psVar28 + 0x8b8) < puVar9) {
        uVar20 = uVar15;
      }
      psVar18 = psVar28;
      if (uVar20 != 0) {
        piVar25 = (int *)0x0;
        do {
          FUN_1405bba90(param_2,&local_98,4);
          iVar6 = (int)(*(longlong *)(psVar14 + 0x884) - *plVar17 >> 3) + -1;
          piVar22 = piVar25;
          piVar23 = piVar25;
          if (-1 < iVar6) {
            do {
              iVar13 = iVar6 + (int)piVar22 >> 1;
              piVar23 = *(int **)(*plVar17 + (longlong)iVar13 * 8);
              iVar24 = *piVar23;
              if (iVar24 == local_98) break;
              if (local_98 < iVar24) {
                iVar6 = iVar13 + -1;
              }
              else {
                piVar22 = (int *)(ulonglong)(iVar13 + 1);
              }
              piVar23 = piVar25;
            } while ((int)piVar22 <= iVar6);
          }
          *puVar9 = piVar23;
          puVar9 = puVar9 + 1;
          uVar15 = uVar15 + 1;
          psVar18 = local_78;
        } while (uVar15 < uVar20);
      }
      iVar6 = (int)(*(longlong *)(psVar28 + 0x8b8) - *plVar2 >> 3) + -1;
      if (-1 < iVar6) {
        lVar19 = (longlong)iVar6 * 8;
        lVar21 = (longlong)iVar6 * 8;
        do {
          if (*(longlong *)(*plVar2 + lVar19) == 0) {
            pvVar3 = (void *)(lVar21 + *plVar2);
            pvVar8 = (void *)((longlong)pvVar3 + 8);
            memmove(pvVar3,pvVar8,*(longlong *)(psVar28 + 0x8b8) - (longlong)pvVar8);
            *(longlong *)(psVar28 + 0x8b8) = *(longlong *)(psVar28 + 0x8b8) + -8;
          }
          lVar21 = lVar21 + -8;
          lVar19 = lVar19 + -8;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
      FUN_1405bba90(param_2,&local_98,4);
      plVar2 = (longlong *)(psVar18 + 0x8c0);
      FUN_14000b9d0(plVar2,(longlong)local_98);
      puVar9 = (undefined8 *)*plVar2;
      uVar15 = 0;
      uVar20 = (*(longlong *)(psVar18 + 0x8c4) - (longlong)puVar9) + 7U >> 3;
      if (*(undefined8 **)(psVar18 + 0x8c4) < puVar9) {
        uVar20 = uVar15;
      }
      psVar28 = psVar18;
      if (uVar20 != 0) {
        piVar25 = (int *)0x0;
        do {
          FUN_1405bba90(param_2,&local_98,4);
          iVar6 = (int)(*(longlong *)(psVar14 + 0x884) - *plVar17 >> 3) + -1;
          piVar22 = piVar25;
          piVar23 = piVar25;
          if (-1 < iVar6) {
            do {
              iVar13 = iVar6 + (int)piVar22 >> 1;
              piVar23 = *(int **)(*plVar17 + (longlong)iVar13 * 8);
              iVar24 = *piVar23;
              if (iVar24 == local_98) break;
              if (local_98 < iVar24) {
                iVar6 = iVar13 + -1;
              }
              else {
                piVar22 = (int *)(ulonglong)(iVar13 + 1);
              }
              piVar23 = piVar25;
            } while ((int)piVar22 <= iVar6);
          }
          *puVar9 = piVar23;
          puVar9 = puVar9 + 1;
          uVar15 = uVar15 + 1;
          psVar28 = local_78;
        } while (uVar15 < uVar20);
      }
      iVar6 = (int)(*(longlong *)(psVar18 + 0x8c4) - *plVar2 >> 3) + -1;
      if (-1 < iVar6) {
        lVar19 = (longlong)iVar6 * 8;
        lVar21 = (longlong)iVar6 * 8;
        do {
          if (*(longlong *)(lVar19 + *plVar2) == 0) {
            pvVar3 = (void *)(*plVar2 + lVar21);
            pvVar8 = (void *)((longlong)pvVar3 + 8);
            memmove(pvVar3,pvVar8,*(longlong *)(psVar18 + 0x8c4) - (longlong)pvVar8);
            *(longlong *)(psVar18 + 0x8c4) = *(longlong *)(psVar18 + 0x8c4) + -8;
          }
          lVar21 = lVar21 + -8;
          lVar19 = lVar19 + -8;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
      FUN_1405bba90(param_2,&local_98,4);
      plVar17 = (longlong *)(psVar28 + 0x8cc);
      FUN_14000b9d0(plVar17,(longlong)local_98);
      uVar15 = 0;
      uVar20 = uVar15;
      psVar14 = psVar28;
      if (*(longlong *)(psVar28 + 0x8d0) - *plVar17 >> 3 != 0) {
        do {
          local_90 = operator_new(0x60);
          local_90[3] = 0xf;
          local_90[2] = 0;
          puVar9 = local_90;
          if (0xf < (ulonglong)local_90[3]) {
            puVar9 = (undefined8 *)*local_90;
          }
          *(undefined1 *)puVar9 = 0;
          local_90[4] = 0;
          local_90[5] = 0;
          local_90[6] = 0;
          local_90[7] = 0;
          local_90[8] = 0;
          local_90[9] = 0;
          *(undefined4 *)(local_90 + 10) = 0xffff8ad0;
          *(undefined8 *)((longlong)local_90 + 0x54) = 0xffffffffffff8ad0;
          *(undefined8 **)(uVar20 + *plVar17) = local_90;
          lVar19 = *(longlong *)(uVar20 + *plVar17);
          FUN_1405bb6d0(param_2,lVar19);
          FUN_140002140(param_2,lVar19 + 0x20);
          FUN_140002250(param_2,lVar19 + 0x38);
          FUN_1405bba90(param_2,lVar19 + 0x50,4);
          FUN_1405bba90(param_2,lVar19 + 0x54,4);
          FUN_1405bba90(param_2,lVar19 + 0x58,4);
          uVar27 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar27;
          uVar20 = uVar20 + 8;
          psVar14 = local_78;
        } while ((ulonglong)(longlong)(int)uVar27 <
                 (ulonglong)(*(longlong *)(psVar28 + 0x8d0) - *plVar17 >> 3));
      }
      FUN_1405bba90(param_2,psVar14 + 0x8d8,4);
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bd10(psVar14 + 0x8dc,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar14 + 0x8e0);
      for (uVar15 = *(ulonglong *)(psVar14 + 0x8dc); uVar15 < uVar20; uVar15 = uVar15 + 4) {
        FUN_1405bba90(param_2,uVar15,4);
      }
      FUN_1405bba90(param_2,psVar14 + 0x8e8,4);
      FUN_1405bba90(param_2,&local_90,4);
      FUN_14000bd10(psVar14 + 0x8ec,(longlong)(int)local_90);
      uVar20 = *(ulonglong *)(psVar14 + 0x8f0);
      for (uVar15 = *(ulonglong *)(psVar14 + 0x8ec); uVar15 < uVar20; uVar15 = uVar15 + 4) {
        FUN_1405bba90(param_2,uVar15,4);
      }
      FUN_1405bba90(param_2,psVar14 + 0x8f8,4);
      FUN_1405bba90(param_2,psVar14 + 0x8fa,4);
      psVar18 = psVar14 + 0x8fc;
      lVar19 = 0xf;
      do {
        FUN_1405bba90(param_2,psVar18,4);
        psVar18 = psVar18 + 2;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      FUN_1405bba90(param_2,local_94,1);
      if (local_94[0] == '\0') {
        psVar14[0x91c] = 0;
        psVar14[0x91d] = 0;
        psVar14[0x91e] = 0;
        psVar14[0x91f] = 0;
      }
      else {
        local_90 = operator_new(0x30);
        *local_90 = 0;
        local_90[1] = 0;
        local_90[2] = 0;
        puVar9 = local_90 + 3;
        *puVar9 = 0;
        local_90[4] = 0;
        local_90[5] = 0;
        *(undefined8 **)(psVar14 + 0x91c) = local_90;
        FUN_140002250(param_2,local_90);
        FUN_140002250(param_2,puVar9);
      }
      plVar17 = (longlong *)(psVar14 + 0x920);
      FUN_140141fe0(plVar17,param_2);
      iVar6 = local_88;
      if ((local_88 < 0x6b2) &&
         (iVar24 = (int)(*(longlong *)(psVar14 + 0x924) - *plVar17 >> 3) + -1, -1 < iVar24)) {
        lVar19 = (longlong)iVar24 * 8;
        lVar21 = (longlong)iVar24 * 8;
        do {
          pvVar8 = *(void **)(lVar19 + *plVar17);
          if ((0x21 < *(int *)((longlong)pvVar8 + 0x24)) ||
             (0x7fffffff < *(uint *)((longlong)pvVar8 + 0x24))) {
            free(pvVar8);
            pvVar8 = (void *)(*plVar17 + lVar21 + 8);
            memmove((void *)(*plVar17 + lVar21),pvVar8,
                    *(longlong *)(psVar14 + 0x924) - (longlong)pvVar8);
            *(longlong *)(psVar14 + 0x924) = *(longlong *)(psVar14 + 0x924) + -8;
          }
          lVar21 = lVar21 + -8;
          lVar19 = lVar19 + -8;
          iVar24 = iVar24 + -1;
        } while (-1 < iVar24);
      }
      FUN_1405bba90(param_2,psVar14 + 0x92c,4);
      FUN_1405bba90(param_2,psVar14 + 0x92e,4);
      FUN_1405bba90(param_2,psVar14 + 0x930,4);
      FUN_1405bba90(param_2,psVar14 + 0x932,4);
      if (0x5a0 < iVar6) {
        FUN_1405bba90(param_2,psVar14 + 0x934,4);
      }
      if (0x598 < iVar6) {
        FUN_1405bba90(param_2,psVar14 + 0x9ea,4);
      }
      if (0x68e < iVar6) {
        FUN_1405bba90(param_2,psVar14 + 0x9ec,4);
        FUN_1405bba90(param_2,psVar14 + 0x9ee,4);
      }
      if (0x5cb < iVar6) {
        FUN_1405bba90(param_2,&local_90,4);
        FUN_14000bd10(psVar14 + 0x938,(longlong)(int)local_90);
        uVar20 = *(ulonglong *)(psVar14 + 0x93c);
        for (uVar15 = *(ulonglong *)(psVar14 + 0x938); uVar15 < uVar20; uVar15 = uVar15 + 4) {
          FUN_1405bba90(param_2,uVar15,4);
        }
        FUN_1405bba90(param_2,&local_90,4);
        FUN_14000bd10(psVar14 + 0x944,(longlong)(int)local_90);
        uVar20 = *(ulonglong *)(psVar14 + 0x948);
        for (uVar15 = *(ulonglong *)(psVar14 + 0x944); uVar15 < uVar20; uVar15 = uVar15 + 4) {
          FUN_1405bba90(param_2,uVar15,4);
        }
        FUN_1405bba90(param_2,&local_90,4);
        FUN_14000bd10(psVar14 + 0x950,(longlong)(int)local_90);
        uVar20 = *(ulonglong *)(psVar14 + 0x954);
        for (uVar15 = *(ulonglong *)(psVar14 + 0x950); uVar15 < uVar20; uVar15 = uVar15 + 4) {
          FUN_1405bba90(param_2,uVar15,4);
        }
      }
      if (0x5cc < iVar6) {
        FUN_1405bba90(param_2,&local_90,4);
        FUN_14000bd10(psVar14 + 0x95c,(longlong)(int)local_90);
        uVar20 = *(ulonglong *)(psVar14 + 0x960);
        for (uVar15 = *(ulonglong *)(psVar14 + 0x95c); uVar15 < uVar20; uVar15 = uVar15 + 4) {
          FUN_1405bba90(param_2,uVar15,4);
        }
        FUN_1405bba90(param_2,&local_90,4);
        FUN_14000bd10(psVar14 + 0x968,(longlong)(int)local_90);
        uVar20 = *(ulonglong *)(psVar14 + 0x96c);
        for (uVar15 = *(ulonglong *)(psVar14 + 0x968); uVar15 < uVar20; uVar15 = uVar15 + 4) {
          FUN_1405bba90(param_2,uVar15,4);
        }
      }
      if (0x5e9 < iVar6) {
        FUN_1405bba90(param_2,&local_90,4);
        FUN_14000bd10(psVar14 + 0x974,(longlong)(int)local_90);
        uVar20 = *(ulonglong *)(psVar14 + 0x978);
        for (uVar15 = *(ulonglong *)(psVar14 + 0x974); uVar15 < uVar20; uVar15 = uVar15 + 4) {
          FUN_1405bba90(param_2,uVar15,4);
        }
      }
      if ((0x5d0 < iVar6) && (FUN_1405bba90(param_2,local_94,1), local_94[0] != '\0')) {
        local_90 = operator_new(0x48);
        *local_90 = 0;
        local_90[1] = 0;
        local_90[2] = 0;
        *(undefined4 *)(local_90 + 3) = 0;
        *(undefined4 *)((longlong)local_90 + 0x44) = 0;
        *(undefined8 **)(psVar14 + 0x980) = local_90;
        FUN_140492e60(local_90,param_2);
      }
      if (0x617 < iVar6) {
        FUN_1405bba90(param_2,&local_98,4);
        FUN_14000b9d0(psVar14 + 0x984,(longlong)local_98);
        puVar4 = *(undefined8 **)(psVar14 + 0x988);
        puVar9 = *(undefined8 **)(psVar14 + 0x984);
        for (; puVar9 < puVar4; puVar9 = puVar9 + 1) {
          puVar11 = operator_new(0x58);
          puVar11[3] = 0;
          *(undefined4 *)(puVar11 + 4) = 0xffffffff;
          *(undefined4 *)((longlong)puVar11 + 0x24) = 0xffffffff;
          *(undefined4 *)(puVar11 + 5) = 0xffffffff;
          *(undefined4 *)((longlong)puVar11 + 0x2c) = 0xffffffff;
          *(undefined4 *)(puVar11 + 6) = 0xffffffff;
          *(undefined4 *)((longlong)puVar11 + 0x34) = 0xffffffff;
          *(undefined4 *)(puVar11 + 7) = 0xffffffff;
          puVar11[8] = 0;
          *(undefined4 *)(puVar11 + 1) = 0xffffffff;
          *(undefined4 *)((longlong)puVar11 + 0xc) = 0xffffffff;
          *(undefined4 *)(puVar11 + 2) = 0xffffffff;
          *(undefined4 *)((longlong)puVar11 + 0x14) = 0xffffffff;
          *puVar9 = puVar11;
          local_90 = puVar11;
          FUN_1405bba90(param_2,puVar11,4);
          FUN_1405bba90(param_2,(undefined1 *)((longlong)puVar11 + 4),4);
          FUN_1405bba90(param_2,puVar11 + 1,4);
          FUN_1405bba90(param_2,(undefined1 *)((longlong)puVar11 + 0xc),4);
          FUN_1405bba90(param_2,puVar11 + 2,4);
          FUN_1405bba90(param_2,(undefined1 *)((longlong)puVar11 + 0x14),4);
          psVar14 = local_78;
        }
      }
      if (0x663 < iVar6) {
        FUN_1405bba90(param_2,&local_98,4);
        FUN_14000b9d0(psVar14 + 0x990,(longlong)local_98);
        puVar4 = *(undefined8 **)(psVar14 + 0x994);
        puVar9 = *(undefined8 **)(psVar14 + 0x990);
        for (; puVar9 < puVar4; puVar9 = puVar9 + 1) {
          puVar11 = operator_new(0x90);
          local_90 = puVar11;
          FUN_14000c2b0(puVar11 + 1);
          FUN_1400025a0(puVar11 + 9);
          FUN_1400025a0(puVar11 + 0xc);
          FUN_1400025a0(puVar11 + 0xf);
          *(undefined4 *)((longlong)puVar11 + 4) = 0;
          *(undefined4 *)(puVar11 + 5) = 0x7531;
          *(undefined2 *)((longlong)puVar11 + 0x2c) = 0xffff;
          puVar11[6] = 0;
          puVar11[7] = 0;
          *(undefined4 *)(puVar11 + 8) = 0;
          *puVar9 = puVar11;
          FUN_140493120(puVar11,param_2);
          psVar14 = local_78;
          iVar6 = local_88;
        }
        FUN_140002090(param_2,psVar14 + 0x99c);
      }
      if (0x664 < iVar6) {
        FUN_140002090(param_2,psVar14 + 0x99e);
        FUN_140002090(param_2,psVar14 + 0x9a0);
        FUN_140002090(param_2,psVar14 + 0x9a2);
      }
      if ((iVar6 < 0x66b) || (cVar5 = FUN_1405bb600(param_2), cVar5 == '\0')) {
        psVar14[0x9a4] = 0;
        psVar14[0x9a5] = 0;
        psVar14[0x9a6] = 0;
        psVar14[0x9a7] = 0;
      }
      else {
        local_78 = operator_new(0x50);
        uVar7 = FUN_1400520f0(local_78);
        *(undefined8 *)(psVar14 + 0x9a4) = uVar7;
        FUN_140490ae0(uVar7,param_2,iVar6);
      }
      if (0x67d < iVar6) {
        FUN_140002250(param_2,psVar14 + 0x9a8);
      }
      if (0x683 < iVar6) {
        FUN_140002090(param_2,psVar14 + 0x9b4);
      }
      FUN_14000c260(local_60);
      return;
    }
    iVar6 = FUN_140071310(*puVar9,local_60);
    if (iVar6 == 0) {
      uVar7 = *puVar9;
      goto LAB_1404aaaf7;
    }
    puVar9 = puVar9 + 1;
  } while( true );
}

