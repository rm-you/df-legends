// FUN_140330310 @ 140330310
// callees:
//   -> EXTERNAL:0000000b FSOUND_PlaySound
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1405bbda0 FUN_1405bbda0
//   -> EXTERNAL:000000b3 read
//   -> 1405bba90 FUN_1405bba90
//   -> 140306a00 FUN_140306a00
//   -> 14030aa20 FUN_14030aa20
//   -> 140002020 FUN_140002020
//   -> 140d38b10 FUN_140d38b10
//   -> 140aafe60 FUN_140aafe60
//   -> 1403158a0 FUN_1403158a0
//   -> 14031aa30 FUN_14031aa30
//   -> 14031c5d0 FUN_14031c5d0
//   -> 14031db90 FUN_14031db90
//   -> 140a62e80 FUN_140a62e80
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140306870 FUN_140306870
//   -> 1403066f0 FUN_1403066f0
//   -> 1407099a0 FUN_1407099a0
//   -> 14030b9e0 FUN_14030b9e0
//   -> 140309da0 FUN_140309da0
//   -> 14030bd50 FUN_14030bd50
//   -> 140305a20 FUN_140305a20
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 140323f70 FUN_140323f70
//   -> 140323e70 FUN_140323e70
//   -> 140304680 FUN_140304680
//   -> 1403047a0 FUN_1403047a0
//   -> 140304c40 FUN_140304c40
//   -> 140301fe0 FUN_140301fe0
//   -> 140301a00 FUN_140301a00
//   -> 140302a40 FUN_140302a40
//   -> 140304590 FUN_140304590
//   -> 1403049e0 FUN_1403049e0
//   -> 140304390 FUN_140304390
//   -> 140302fb0 FUN_140302fb0
//   -> 140302e90 FUN_140302e90
//   -> 140302b90 FUN_140302b90
//   -> 140305510 FUN_140305510
//   -> 140302150 FUN_140302150
//   -> 140301680 FUN_140301680
//   -> 140301800 FUN_140301800
//   -> 140301910 FUN_140301910
//   -> 140301400 FUN_140301400
//   -> 140301520 FUN_140301520
//   -> 1403048c0 FUN_1403048c0
//   -> 1403026c0 FUN_1403026c0
//   -> 140302470 FUN_140302470
//   -> 140302590 FUN_140302590
//   -> 1405bbd50 FUN_1405bbd50
//   -> 140d24c10 FUN_140d24c10
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14014a480 FUN_14014a480
//   -> 14007f3d0 FUN_14007f3d0
//   -> 14000d840 FUN_14000d840
//   -> 1400199b0 FUN_1400199b0
//   -> 140dfb5b4 free
//   -> 140915c20 FUN_140915c20
//   -> 140914ff0 FUN_140914ff0
//   -> 140609ba0 FUN_140609ba0
//   -> 140607ff0 FUN_140607ff0
//   -> 1407ccfa0 FUN_1407ccfa0
//   -> 14060a760 FUN_14060a760
//   -> 14060a7b0 FUN_14060a7b0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140330310(longlong param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  void *_Memory;
  longlong *plVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int *piVar22;
  ulonglong uVar23;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  int *local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_60 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_98;
  DAT_141c33e70 = DAT_141c33e70 & 0xfffffffd;
  if (((DAT_1410b67dc == 0) && (DAT_141eca21c != '\0')) && (DAT_141eca204 != 1)) {
    DAT_141eca204 = 1;
    FSOUND_PlaySound(0,DAT_141eca228);
  }
  DAT_141c33e70 = DAT_141c33e70 | 1;
  uVar15 = *(uint *)(param_1 + 0x168);
  if (0x23 < uVar15) {
    return;
  }
  switch(uVar15) {
  case 0:
    local_40 = 0xf;
    local_48 = 0;
    local_58 = 0;
    FUN_14000c780(&local_58,"data/save/",10);
    FUN_14000cb40(&local_58,&DAT_141ebec68,0,0xffffffffffffffff);
    FUN_14000c9f0(&local_58,"/world.dat",10);
    FUN_1405bbda0(param_1 + 0x20,&local_58,1);
    local_78 = CONCAT44(local_78._4_4_,1);
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      std::basic_istream<char,std::char_traits<char>_>::read
                ((basic_istream<char,std::char_traits<char>_> *)(param_1 + 0x28),
                 (char *)(param_1 + 0x16c),4);
      std::basic_istream<char,std::char_traits<char>_>::read
                ((basic_istream<char,std::char_traits<char>_> *)(param_1 + 0x28),(char *)&local_78,4
                );
      *(bool *)(param_1 + 0x20) = (int)local_78 != 0;
    }
    FUN_1405bba90(param_1 + 0x20,local_68,2);
    FUN_140306a00(param_1 + 0x170,param_1 + 0x20,*(undefined4 *)(param_1 + 0x16c));
    FUN_14030aa20(param_1 + 0x2d0,param_1 + 0x20,*(undefined4 *)(param_1 + 0x16c));
    *(undefined4 *)(param_1 + 0x168) = 1;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    if (0xf < local_40) {
      FUN_140002020(CONCAT71(uStack_57,local_58),local_40 + 1,1);
    }
    break;
  case 1:
    FUN_140d38b10(&DAT_141c53470,param_1 + 0x2d0);
    DAT_14167e414 = *(int *)(param_1 + 0x218) + 1;
    DAT_14155b300 = *(int *)(param_1 + 0x21c) + 1;
    DAT_14167eca8 = *(int *)(param_1 + 0x220) + 1;
    DAT_14167ec50 = *(int *)(param_1 + 0x224) + 1;
    DAT_141697474 = *(int *)(param_1 + 0x228) + 1;
    DAT_14155b280 = *(int *)(param_1 + 0x22c) + 1;
    DAT_141699294 = 0;
    DAT_14167ec9c = 0;
    DAT_14167ec48 = 0;
    DAT_1416992ac = *(int *)(param_1 + 0x230) + 1;
    DAT_141697468 = *(int *)(param_1 + 0x234) + 1;
    DAT_141582928 = 0;
    DAT_14167e410 = *(int *)(param_1 + 0x238) + 1;
    DAT_14155b288 = *(int *)(param_1 + 0x23c) + 1;
    DAT_14169746c = *(int *)(param_1 + 0x240) + 1;
    DAT_14167ecac = *(int *)(param_1 + 0x244) + 1;
    DAT_14155b29c = *(int *)(param_1 + 0x248) + 1;
    DAT_141699280 = *(int *)(param_1 + 0x24c) + 1;
    DAT_14167ec78 = *(int *)(param_1 + 0x250) + 1;
    DAT_14155b2cc = *(int *)(param_1 + 0x254) + 1;
    DAT_1416b1978 = *(int *)(param_1 + 600) + 1;
    DAT_14155b284 = *(int *)(param_1 + 0x25c) + 1;
    DAT_14167ec44 = *(int *)(param_1 + 0x260) + 1;
    DAT_14167e40c = *(int *)(param_1 + 0x264) + 1;
    DAT_14167edb4 = *(int *)(param_1 + 0x268) + 1;
    DAT_1416992b4 = *(int *)(param_1 + 0x26c) + 1;
    DAT_14167ec40 = *(int *)(param_1 + 0x270) + 1;
    DAT_141c2fd90 = *(int *)(param_1 + 0x274) + 1;
    _DAT_1416b1984 = *(int *)(param_1 + 0x278) + 1;
    DAT_1416b1970 = *(int *)(param_1 + 0x27c) + 1;
    DAT_141699298 = *(int *)(param_1 + 0x280) + 1;
    DAT_1416b1988 = *(int *)(param_1 + 0x284) + 1;
    DAT_141697464 = *(int *)(param_1 + 0x288) + 1;
    DAT_14167edb8 = *(int *)(param_1 + 0x28c) + 1;
    DAT_14127ebbc = *(int *)(param_1 + 0x290) + 1;
    DAT_14155b2c8 = *(int *)(param_1 + 0x294) + 1;
    DAT_14167ec68 = *(int *)(param_1 + 0x298) + 1;
    DAT_14155b304 = *(int *)(param_1 + 0x29c) + 1;
    DAT_1416992b8 = *(int *)(param_1 + 0x2a0) + 1;
    DAT_14155b298 = *(int *)(param_1 + 0x2a4) + 1;
    DAT_1416b197c = *(int *)(param_1 + 0x2a8) + 1;
    if (DAT_141ebec8c == 0x29) {
      *(undefined4 *)(param_1 + 0x168) = 2;
      *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    }
    break;
  case 2:
    FUN_140aafe60(switchD_140935618::caseD_26.e_magic +
                  (&switchD_1403303b9::switchdataD_140331554)[(int)uVar15],param_1 + 0x20,
                  *(undefined4 *)(param_1 + 0x16c));
    *(undefined4 *)(param_1 + 0x168) = 3;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 3:
    FUN_1403158a0(param_1 + 0x20,*(undefined4 *)(param_1 + 0x16c));
    *(undefined4 *)(param_1 + 0x168) = 4;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 4:
    FUN_14031aa30(param_1 + 0x20,*(undefined4 *)(param_1 + 0x16c));
    *(undefined4 *)(param_1 + 0x168) = 5;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 5:
    FUN_14031c5d0(param_1 + 0x20,0x140000001,*(undefined4 *)(param_1 + 0x16c));
    *(undefined4 *)(param_1 + 0x168) = 6;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 6:
    FUN_14031db90(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 7;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 7:
    FUN_140a62e80(DAT_141d6cfd0,param_1 + 0x20,*(undefined4 *)(param_1 + 0x16c),1);
    *(undefined4 *)(param_1 + 0x168) = 8;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 8:
    FUN_1405bba90(param_1 + 0x20,&DAT_141d79b80,4);
    FUN_1405bba90(param_1 + 0x20,&DAT_141d79b84,2);
    FUN_1405bba90(param_1 + 0x20,&DAT_141d79b88,4);
    FUN_1405bba90(param_1 + 0x20,&DAT_141d79b8c,2);
    FUN_1405bba90(param_1 + 0x20,&local_78,4);
    FUN_14000b9d0(&DAT_141d7a6b0,(longlong)(int)local_78);
    uVar16 = 0;
    uVar23 = uVar16;
    if (DAT_141d7a6b8 - DAT_141d7a6b0 >> 3 != 0) {
      do {
        local_70 = operator_new(0xf0);
        uVar12 = FUN_140306870(local_70);
        *(undefined8 *)(DAT_141d7a6b0 + uVar16) = uVar12;
        FUN_1403066f0(uVar12,param_1 + 0x20);
        uVar15 = (int)uVar23 + 1;
        uVar16 = uVar16 + 8;
        uVar23 = (ulonglong)uVar15;
      } while ((ulonglong)(longlong)(int)uVar15 < (ulonglong)(DAT_141d7a6b8 - DAT_141d7a6b0 >> 3));
    }
    *(undefined4 *)(param_1 + 0x168) = 9;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 9:
    FUN_1407099a0(&DAT_141d7a048,param_1 + 0x20,*(undefined4 *)(param_1 + 0x16c));
    FUN_14030b9e0(&DAT_141d7a6c8,param_1 + 0x20);
    if (0x5cc < *(int *)(param_1 + 0x16c)) {
      FUN_140309da0(&DAT_141d863e0,param_1 + 0x20);
    }
    if (0x619 < *(int *)(param_1 + 0x16c)) {
      FUN_14030bd50(&DAT_141d863f8,param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x168) = 10;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 10:
    FUN_140305a20(&DAT_141d79b90,param_1 + 0x20,*(undefined4 *)(param_1 + 0x16c));
    FUN_1405bba90(param_1 + 0x20,&DAT_141d79b58,4);
    FUN_1405bb6d0(param_1 + 0x20,&DAT_141d79b60);
    *(undefined4 *)(param_1 + 0x168) = 0xb;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0xb:
    FUN_140323f70(param_1 + 0x20,*(undefined4 *)(param_1 + 0x16c));
    *(undefined4 *)(param_1 + 0x168) = 0xc;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0xc:
    FUN_140323e70(param_1 + 0x20,*(undefined4 *)(param_1 + 0x16c));
    *(undefined4 *)(param_1 + 0x168) = 0xd;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0xd:
    FUN_140304680(&DAT_141d64d38,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0xe;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0xe:
    FUN_1403047a0(&DAT_141d64d68,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0xf;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0xf:
    FUN_140304c40(&DAT_141d64d98,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x10;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x10:
    FUN_140301fe0(&DAT_141d69118,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x11;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x11:
    FUN_140301a00(&DAT_141d69148,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x12;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x12:
    FUN_140302a40(&DAT_141d69178,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x13;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x13:
    FUN_140304590(&DAT_141d691a8,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x14;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x14:
    FUN_1403049e0(&DAT_141d691d8,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x15;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x15:
    FUN_140304390(&DAT_141d69208,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x16;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x16:
    FUN_140302fb0(&DAT_141d69250,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x17;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x17:
    FUN_140302e90(&DAT_141d69280,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x18;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x18:
    FUN_140302b90(&DAT_141d692b0,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x19;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x19:
    FUN_140305510(&DAT_141d692e0,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x1a;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x1a:
    FUN_140302150(&DAT_141d69310,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x1b;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x1b:
    if (0x5cb < *(int *)(param_1 + 0x16c)) {
      FUN_140301680(&DAT_141d69340,param_1 + 0x20);
      FUN_140301800(&DAT_141d69370,param_1 + 0x20);
      FUN_140301910(&DAT_141d693a0,param_1 + 0x20);
    }
    if (0x5cc < *(int *)(param_1 + 0x16c)) {
      FUN_140301400(&DAT_141d693d0,param_1 + 0x20);
      FUN_140301520(&DAT_141d69400,param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x168) = 0x1c;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x1c:
    if (0x5d4 < *(int *)(param_1 + 0x16c)) {
      FUN_1403048c0(&DAT_141d69430,param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x168) = 0x1d;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x1d:
    if (0x622 < *(int *)(param_1 + 0x16c)) {
      FUN_1403026c0(&DAT_141d69460,param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x168) = 0x1e;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x1e:
    if (0x67d < *(int *)(param_1 + 0x16c)) {
      FUN_140302470(&DAT_141d69490,param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x168) = 0x1f;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x1f:
    if (0x67d < *(int *)(param_1 + 0x16c)) {
      FUN_140302590(&DAT_141d694c0,param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x168) = 0x20;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x20:
    FUN_1405bba90(param_1 + 0x20,&DAT_1416992b2,1);
    FUN_1405bba90(param_1 + 0x20,&DAT_1416992a4,4);
    FUN_1405bba90(param_1 + 0x20,&DAT_1416b1974,4);
    FUN_1405bba90(param_1 + 0x20,&DAT_1416b1980,4);
    if (*(int *)(param_1 + 0x16c) < 0x610) {
      plVar14 = *(longlong **)(DAT_141d6cfd0 + 0x168);
      uVar23 = 0;
      uVar16 = (ulonglong)
               ((longlong)*(longlong **)(DAT_141d6cfd0 + 0x170) + (7 - (longlong)plVar14)) >> 3;
      if (*(longlong **)(DAT_141d6cfd0 + 0x170) < plVar14) {
        uVar16 = uVar23;
      }
      if (uVar16 != 0) {
        do {
          lVar21 = *plVar14;
          if ((*(short *)(lVar21 + 0x80) == 9) && (*(int *)(lVar21 + 0x2f0) == -1)) {
            *(undefined4 *)(lVar21 + 0x2f0) = DAT_1416b1980;
            *(undefined4 *)(*plVar14 + 0x2ec) = DAT_1416b1974;
          }
          plVar14 = plVar14 + 1;
          uVar23 = uVar23 + 1;
        } while (uVar23 < uVar16);
      }
    }
    FUN_1405bbd50(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x168) = 0x21;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x21:
    FUN_140d24c10(&DAT_141c53470,*(undefined4 *)(param_1 + 0x16c),0);
    plVar7 = DAT_141c68018;
    uVar16 = 0;
    plVar14 = DAT_141c68010;
    if (*(int *)(param_1 + 0x16c) < 0x5d7) {
      for (; plVar14 < plVar7; plVar14 = plVar14 + 1) {
        sVar9 = (**(code **)**(undefined8 **)(*plVar14 + 0x90))();
        if (sVar9 == 0x58) {
          lVar21 = *(longlong *)(*plVar14 + 0x90);
          plVar17 = *(longlong **)(lVar21 + 200);
          uVar23 = (ulonglong)((longlong)*(longlong **)(lVar21 + 0xd0) + (7 - (longlong)plVar17)) >>
                   3;
          if (*(longlong **)(lVar21 + 0xd0) < plVar17) {
            uVar23 = uVar16;
          }
          uVar19 = uVar16;
          if (uVar23 != 0) {
            do {
              iVar10 = (**(code **)(*(longlong *)*plVar17 + 0x28))();
              if ((iVar10 == 9) &&
                 (lVar3 = *plVar17,
                 *(longlong *)(lVar3 + 0x38) - *(longlong *)(lVar3 + 0x30) >> 2 != 0)) {
                iVar10 = (int)(DAT_141d69150 - DAT_141d69148 >> 3) + -1;
                uVar20 = uVar16;
                if (-1 < iVar10) {
                  do {
                    iVar11 = iVar10 + (int)uVar20 >> 1;
                    piVar22 = *(int **)(DAT_141d69148 + (longlong)iVar11 * 8);
                    if (*piVar22 == **(int **)(lVar3 + 0x30)) {
                      if (piVar22 != (int *)0x0) {
                        if (piVar22 + 2 != (int *)(lVar21 + 0xe0)) {
                          FUN_14000c8b0(piVar22 + 2,(int *)(lVar21 + 0xe0),0,0xffffffffffffffff);
                        }
                      }
                      break;
                    }
                    if (**(int **)(lVar3 + 0x30) < *piVar22) {
                      iVar10 = iVar11 + -1;
                    }
                    else {
                      uVar20 = (ulonglong)(iVar11 + 1);
                    }
                  } while ((int)uVar20 <= iVar10);
                }
              }
              plVar17 = plVar17 + 1;
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar23);
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x16c) < 0x659) {
      uVar23 = (ulonglong)((longlong)DAT_141d64d40 + (7 - (longlong)DAT_141d64d38)) >> 3;
      if (DAT_141d64d40 < DAT_141d64d38) {
        uVar23 = uVar16;
      }
      plVar14 = DAT_141d64d38;
      uVar19 = uVar16;
      lVar21 = DAT_141d69280;
      if (uVar23 != 0) {
        do {
          lVar3 = *plVar14;
          iVar10 = *(int *)(lVar3 + 0x1c8);
          if (iVar10 != -1) {
            iVar11 = (int)(DAT_141d69288 - lVar21 >> 3) + -1;
            uVar20 = uVar16;
            if (-1 < iVar11) {
              do {
                iVar13 = (int)uVar20 + iVar11 >> 1;
                iVar2 = **(int **)(lVar21 + (longlong)iVar13 * 8);
                if (iVar2 == iVar10) goto LAB_14033114c;
                if (iVar10 < iVar2) {
                  iVar11 = iVar13 + -1;
                }
                else {
                  uVar20 = (ulonglong)(iVar13 + 1);
                }
              } while ((int)uVar20 <= iVar11);
            }
            FUN_14014a480("clearing orders from squad with invalid mission");
            FUN_14007f3d0(lVar3,1);
            *(undefined4 *)(lVar3 + 0x1c8) = 0xffffffff;
            lVar21 = DAT_141d69280;
          }
LAB_14033114c:
          uVar19 = uVar19 + 1;
          plVar14 = plVar14 + 1;
        } while (uVar19 < uVar23);
      }
    }
    plVar7 = DAT_141d7a0b0;
    plVar14 = DAT_141d7a0a8;
    if (*(int *)(param_1 + 0x16c) < 0x65b) {
      for (; plVar14 < plVar7; plVar14 = plVar14 + 1) {
        lVar21 = *plVar14;
        if ((*(longlong *)(lVar21 + 0x130) != 0) &&
           (*(longlong *)(*(longlong *)(lVar21 + 0x130) + 0x18) != 0)) {
          sVar9 = *(short *)(lVar21 + 4);
          sVar1 = *(short *)(lVar21 + 2);
          if ((-1 < sVar1) &&
             (((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) &&
              (-1 < sVar9)))) {
            lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
            if (((ulonglong)(longlong)sVar9 <
                 (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) &&
               (cVar8 = FUN_14000d840(*(longlong *)
                                       (*(longlong *)(lVar3 + 0x178) + (longlong)sVar9 * 8) + 0x6a8,
                                      0x85), cVar8 != '\0')) {
              plVar17 = *(longlong **)(lVar21 + 0xe8);
              plVar4 = *(longlong **)(lVar21 + 0xf0);
LAB_140331240:
              if (plVar17 < plVar4) {
                sVar9 = (*(code *)**(undefined8 **)*plVar17)();
                if ((sVar9 != 10) ||
                   (local_70 = (int *)FUN_1400199b0(&DAT_141c53718,*(undefined4 *)(*plVar17 + 8)),
                   local_70 == (int *)0x0)) goto LAB_140331273;
                puVar5 = *(ulonglong **)(*(longlong *)(lVar21 + 0x130) + 0x18);
                puVar18 = (undefined8 *)*puVar5;
                puVar6 = (undefined8 *)puVar5[1];
                uVar23 = (ulonglong)((longlong)puVar6 + (7 - (longlong)puVar18)) >> 3;
                if (puVar6 < puVar18) {
                  uVar23 = uVar16;
                }
                uVar19 = uVar16;
                if (uVar23 != 0) {
                  do {
                    free((void *)*puVar18);
                    puVar18 = puVar18 + 1;
                    uVar19 = uVar19 + 1;
                  } while (uVar19 < uVar23);
                }
                puVar18 = *(undefined8 **)(*(longlong *)(lVar21 + 0x130) + 0x18);
                puVar18[1] = *puVar18;
                lVar3 = *(longlong *)(*(longlong *)(lVar21 + 0x130) + 0x18);
                puVar18 = *(undefined8 **)(lVar3 + 0x48);
                puVar6 = *(undefined8 **)(lVar3 + 0x50);
                uVar23 = (ulonglong)((longlong)puVar6 + (7 - (longlong)puVar18)) >> 3;
                if (puVar6 < puVar18) {
                  uVar23 = uVar16;
                }
                uVar19 = uVar16;
                local_78 = uVar23;
                if (uVar23 != 0) {
                  do {
                    _Memory = (void *)*puVar18;
                    if (_Memory != (void *)0x0) {
                      lVar3 = *(longlong *)((longlong)_Memory + 0x10);
                      if (lVar3 != 0) {
                        FUN_140002020(lVar3,*(longlong *)((longlong)_Memory + 0x20) - lVar3 >> 2,4);
                        *(undefined8 *)((longlong)_Memory + 0x10) = 0;
                        *(undefined8 *)((longlong)_Memory + 0x18) = 0;
                        *(undefined8 *)((longlong)_Memory + 0x20) = 0;
                      }
                      free(_Memory);
                      uVar23 = local_78;
                    }
                    puVar18 = puVar18 + 1;
                    uVar19 = uVar19 + 1;
                  } while (uVar19 < uVar23);
                }
                lVar3 = *(longlong *)(*(longlong *)(lVar21 + 0x130) + 0x18);
                *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar3 + 0x48);
                lVar3 = *(longlong *)(*(longlong *)(lVar21 + 0x130) + 0x18);
                puVar18 = *(undefined8 **)(lVar3 + 0x138);
                puVar6 = *(undefined8 **)(lVar3 + 0x140);
                uVar23 = (ulonglong)((longlong)puVar6 + (7 - (longlong)puVar18)) >> 3;
                if (puVar6 < puVar18) {
                  uVar23 = uVar16;
                }
                uVar19 = uVar16;
                if (uVar23 != 0) {
                  do {
                    free((void *)*puVar18);
                    puVar18 = puVar18 + 1;
                    uVar19 = uVar19 + 1;
                  } while (uVar19 < uVar23);
                }
                lVar3 = *(longlong *)(*(longlong *)(lVar21 + 0x130) + 0x18);
                *(undefined8 *)(lVar3 + 0x140) = *(undefined8 *)(lVar3 + 0x138);
                FUN_14000b9d0(*(undefined8 *)(*(longlong *)(lVar21 + 0x130) + 0x18),0x21);
                piVar22 = local_70 + 0x344;
                uVar19 = uVar16;
                uVar23 = uVar16;
                do {
                  local_70 = operator_new(8);
                  local_70[1] = 0;
                  *local_70 = (int)uVar19;
                  local_70[1] = *piVar22;
                  *(int **)(uVar23 + **(longlong **)(*(longlong *)(lVar21 + 0x130) + 0x18)) =
                       local_70;
                  uVar15 = (int)uVar19 + 1;
                  uVar19 = (ulonglong)uVar15;
                  piVar22 = piVar22 + 1;
                  uVar23 = uVar23 + 8;
                } while ((int)uVar15 < 0x21);
                FUN_140915c20(*(undefined8 *)(*(longlong *)(lVar21 + 0x130) + 0x18));
                FUN_140914ff0(*(undefined8 *)(*(longlong *)(lVar21 + 0x130) + 0x18));
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x168) = 0x22;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
    break;
  case 0x22:
    if (DAT_1410b67d8 == 0) {
      DAT_1410b67dc = 0;
LAB_1403314d6:
      local_70 = operator_new(0x28);
      FUN_140607ff0(local_70);
    }
    else {
      if (DAT_1410b67d8 == 1) {
        DAT_1410b67dc = 1;
        goto LAB_1403314d6;
      }
      if (DAT_1410b67d8 != 2) goto LAB_140331523;
      local_70 = operator_new(0x3a0);
      FUN_140609ba0(local_70);
    }
    FUN_1407ccfa0();
    goto LAB_140331523;
  case 0x23:
    FUN_14060a760(0);
    FUN_14060a7b0(3);
    DAT_1410b67dc = 3;
    DAT_1410b67d8 = 0xb;
    DAT_141697473 = 0;
LAB_140331523:
    *(undefined1 *)(param_1 + 0x18) = 2;
  }
  return;
LAB_140331273:
  plVar17 = plVar17 + 1;
  goto LAB_140331240;
}

