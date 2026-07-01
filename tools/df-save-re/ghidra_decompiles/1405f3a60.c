// FUN_1405f3a60 @ 1405f3a60
// callees:
//   -> EXTERNAL:0000000b FSOUND_PlaySound
//   -> 140038ff0 FUN_140038ff0
//   -> 140de31f0 FUN_140de31f0
//   -> 140c09f00 FUN_140c09f00
//   -> 140d2af20 FUN_140d2af20
//   -> 140d2adc0 FUN_140d2adc0
//   -> 140d209f0 FUN_140d209f0
//   -> 14000c780 FUN_14000c780
//   -> 140330050 FUN_140330050
//   -> 140dfb5b4 free
//   -> 140aca8c0 FUN_140aca8c0
//   -> 1403068f0 FUN_1403068f0
//   -> 140aaedd0 FUN_140aaedd0
//   -> 1405bbec0 FUN_1405bbec0
//   -> 1405bbda0 FUN_1405bbda0
//   -> EXTERNAL:000000b4 write
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405d47d0 FUN_1405d47d0
//   -> 140002020 FUN_140002020
//   -> 140327070 FUN_140327070
//   -> 140d381a0 FUN_140d381a0
//   -> 140309e70 FUN_140309e70
//   -> 14030af70 FUN_14030af70
//   -> 140aaf040 FUN_140aaf040
//   -> 140aaf1d0 FUN_140aaf1d0
//   -> 140315930 FUN_140315930
//   -> 14031a9b0 FUN_14031a9b0
//   -> 14031c540 FUN_14031c540
//   -> 14031db20 FUN_14031db20
//   -> 140a61f90 FUN_140a61f90
//   -> 1405d4660 FUN_1405d4660
//   -> 140709410 FUN_140709410
//   -> 1405d7850 FUN_1405d7850
//   -> 1405d7040 FUN_1405d7040
//   -> 1405d7a60 FUN_1405d7a60
//   -> 1405d3150 FUN_1405d3150
//   -> 1405bb630 FUN_1405bb630
//   -> 140323f00 FUN_140323f00
//   -> 140323e00 FUN_140323e00
//   -> 140304610 FUN_140304610
//   -> 140304710 FUN_140304710
//   -> 140304bd0 FUN_140304bd0
//   -> 140301f70 FUN_140301f70
//   -> 140301990 FUN_140301990
//   -> 1403029d0 FUN_1403029d0
//   -> 140304520 FUN_140304520
//   -> 140304970 FUN_140304970
//   -> 140304320 FUN_140304320
//   -> 140302f40 FUN_140302f40
//   -> 140302e20 FUN_140302e20
//   -> 140302b20 FUN_140302b20
//   -> 1403054a0 FUN_1403054a0
//   -> 1403020e0 FUN_1403020e0
//   -> 140301610 FUN_140301610
//   -> 140301790 FUN_140301790
//   -> 1403018a0 FUN_1403018a0
//   -> 140301390 FUN_140301390
//   -> 1403014b0 FUN_1403014b0
//   -> 140304850 FUN_140304850
//   -> 140302650 FUN_140302650
//   -> 140302400 FUN_140302400
//   -> 140302520 FUN_140302520
//   -> 1405bb8b0 FUN_1405bb8b0
//   -> 1405bbd50 FUN_1405bbd50
//   -> 1406d5e60 FUN_1406d5e60
//   -> 1406d53a0 FUN_1406d53a0
//   -> 14060a760 FUN_14060a760
//   -> 14060a7b0 FUN_14060a7b0
//   -> 14030eee0 FUN_14030eee0
//   -> 14014a3b0 FUN_14014a3b0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405f3a60(longlong param_1)

{
  undefined1 *puVar1;
  void *_Memory;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  short sVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined1 auStack_388 [48];
  undefined4 local_358 [2];
  undefined2 local_350 [4];
  undefined8 local_348;
  undefined1 local_340;
  undefined7 uStack_33f;
  undefined8 local_330;
  ulonglong local_328;
  ulonglong local_320;
  longlong lStack_318;
  longlong local_310;
  ulonglong local_308;
  undefined1 local_2f8 [704];
  ulonglong local_38;
  
  local_348 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_388;
  DAT_141c33e70 = DAT_141c33e70 | 2;
  uVar3 = 0;
  if ((DAT_141eca21c != '\0') && (DAT_141eca204 != 0)) {
    DAT_141eca204 = 0;
    FSOUND_PlaySound(0,DAT_141eca220);
  }
  DAT_141c33e70 = DAT_141c33e70 | 1;
  uVar7 = *(uint *)(param_1 + 0x20);
  if (0x26 < uVar7) {
    return;
  }
  switch(uVar7) {
  case 0:
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 1:
    iVar2 = (int)(DAT_141d64da0 - DAT_141d64d98 >> 3) + -1;
    lVar5 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        FUN_140038ff0(*(undefined8 *)(DAT_141d64d98 + lVar5 * 8));
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    FUN_140de31f0(&DAT_141c53470);
    puVar6 = *(undefined8 **)(DAT_141d6cfd0 + 0x168);
    uVar4 = (ulonglong)((longlong)*(undefined8 **)(DAT_141d6cfd0 + 0x170) + (7 - (longlong)puVar6))
            >> 3;
    if (*(undefined8 **)(DAT_141d6cfd0 + 0x170) < puVar6) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        FUN_140c09f00(*puVar6);
        puVar6 = puVar6 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    *(undefined4 *)(param_1 + 0x20) = 2;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 2:
    FUN_140d2af20(&DAT_141c53470,param_1 + 0x28);
    if ((int)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 2) <=
        *(int *)(param_1 + 0x7c)) {
      *(undefined4 *)(param_1 + 0x20) = 3;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    break;
  case 3:
    FUN_140d2adc0(&DAT_141c53470);
    *(undefined4 *)(param_1 + 0x20) = 4;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 4:
    local_328 = 0xf;
    local_330 = 0;
    local_340 = 0;
    local_320 = 0;
    lStack_318 = 0;
    local_310 = 0;
    FUN_140d209f0(&local_320);
    FUN_14000c780(&local_340,"data/save/current/world.dat",0x1b);
    uVar4 = local_320;
    sVar8 = 0;
    uVar9 = (longlong)(lStack_318 - local_320) >> 3;
    if (uVar9 != 0) {
      do {
        _Memory = *(void **)(uVar4 + uVar3 * 8);
        if (_Memory != (void *)0x0) {
          FUN_140330050(_Memory);
          free(_Memory);
        }
        sVar8 = sVar8 + 1;
        uVar3 = (ulonglong)sVar8;
      } while (uVar3 < uVar9);
    }
    FUN_140aca8c0(DAT_141d6cfd0);
    FUN_1403068f0(local_2f8);
    FUN_140aaedd0(DAT_141d6cfd0,local_2f8);
    puVar1 = (undefined1 *)(param_1 + 0x80);
    FUN_1405bbec0(puVar1);
    FUN_1405bbda0(puVar1,&local_340,0);
    local_358[0] = 1;
    *puVar1 = 1;
    if ((DAT_141c513c8 < 1) || ((*DAT_141c513c0 & 4) == 0)) {
      local_358[0] = 0;
      *puVar1 = 0;
    }
    if (*(longlong *)(param_1 + 0x120) != 0) {
      std::basic_ostream<char,std::char_traits<char>_>::write
                ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x98),
                 (char *)&DAT_1416992c8,4);
      std::basic_ostream<char,std::char_traits<char>_>::write
                ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x98),(char *)local_358,4
                );
    }
    local_350[0] = 0;
    FUN_1405bb7c0(puVar1,local_350,2);
    FUN_1405d47d0(local_2f8,puVar1);
    *(undefined4 *)(param_1 + 0x20) = 5;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    FUN_140330050(local_2f8);
    if (uVar4 != 0) {
      FUN_140002020(uVar4,(longlong)(local_310 - uVar4) >> 3,8);
    }
    if (local_328 < 0x10) {
      return;
    }
    uVar3 = CONCAT71(uStack_33f,local_340);
    uVar4 = local_328;
    goto LAB_1405f4531;
  case 5:
    FUN_140327070(local_2f8);
    FUN_140d381a0(&DAT_141c53470,local_2f8);
    FUN_140309e70(local_2f8,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 6;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    FUN_14030af70(local_2f8);
    break;
  case 6:
    FUN_140aaf040(DAT_141d6cfd0);
    *(undefined4 *)(param_1 + 0x20) = 7;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 7:
    FUN_140aaf1d0(switchD_140935618::caseD_26.e_magic +
                  (&switchD_1405f3b02::switchdataD_1405f456c)[(int)uVar7],param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 8;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 8:
    FUN_140315930(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 9;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 9:
    FUN_14031a9b0(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 10;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 10:
    FUN_14031c540(param_1 + 0x80,0x140000001);
    *(undefined4 *)(param_1 + 0x20) = 0xb;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0xb:
    FUN_14031db20(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0xc;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0xc:
    FUN_140a61f90(DAT_141d6cfd0,param_1 + 0x80,1);
    *(undefined4 *)(param_1 + 0x20) = 0xd;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0xd:
    local_358[0] = DAT_141d79b80;
    lVar5 = param_1 + 0x80;
    FUN_1405bb7c0(lVar5,local_358,4);
    local_350[0] = DAT_141d79b84;
    FUN_1405bb7c0(lVar5,local_350,2);
    local_358[0] = DAT_141d79b88;
    FUN_1405bb7c0(lVar5,local_358,4);
    local_350[0] = DAT_141d79b8c;
    FUN_1405bb7c0(lVar5,local_350,2);
    local_358[0] = (undefined4)(DAT_141d7a6b8 - DAT_141d7a6b0 >> 3);
    FUN_1405bb7c0(lVar5,local_358,4);
    uVar4 = uVar3;
    if (DAT_141d7a6b8 - DAT_141d7a6b0 >> 3 != 0) {
      do {
        FUN_1405d4660(*(undefined8 *)(uVar3 + DAT_141d7a6b0),lVar5);
        uVar7 = (int)uVar4 + 1;
        uVar3 = uVar3 + 8;
        uVar4 = (ulonglong)uVar7;
      } while ((ulonglong)(longlong)(int)uVar7 < (ulonglong)(DAT_141d7a6b8 - DAT_141d7a6b0 >> 3));
    }
    *(undefined4 *)(param_1 + 0x20) = 0xe;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0xe:
    FUN_140709410(&DAT_141d7a048,param_1 + 0x80);
    FUN_1405d7850(&DAT_141d7a6c8,param_1 + 0x80);
    FUN_1405d7040(&DAT_141d863e0,param_1 + 0x80);
    FUN_1405d7a60(&DAT_141d863f8,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0xf;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0xf:
    FUN_1405d3150(&DAT_141d79b90,param_1 + 0x80);
    local_358[0] = DAT_141d79b58;
    FUN_1405bb7c0(param_1 + 0x80,local_358,4);
    FUN_1405bb630(param_1 + 0x80,&DAT_141d79b60);
    *(undefined4 *)(param_1 + 0x20) = 0x10;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x10:
    FUN_140323f00(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x11;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x11:
    FUN_140323e00(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x12;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x12:
    FUN_140304610(&DAT_141d64d38,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x13;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x13:
    FUN_140304710(&DAT_141d64d68,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x14;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x14:
    FUN_140304bd0(&DAT_141d64d98,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x15;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x15:
    FUN_140301f70(&DAT_141d69118,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x16;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x16:
    FUN_140301990(&DAT_141d69148,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x17;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x17:
    FUN_1403029d0(&DAT_141d69178,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x18;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x18:
    FUN_140304520(&DAT_141d691a8,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x19;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x19:
    FUN_140304970(&DAT_141d691d8,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x1a;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x1a:
    FUN_140304320(&DAT_141d69208,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x1b;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x1b:
    FUN_140302f40(&DAT_141d69250,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x1c;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x1c:
    FUN_140302e20(&DAT_141d69280,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x1d;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x1d:
    FUN_140302b20(&DAT_141d692b0,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x1e;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x1e:
    FUN_1403054a0(&DAT_141d692e0,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x1f;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x1f:
    FUN_1403020e0(&DAT_141d69310,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x20;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x20:
    FUN_140301610(&DAT_141d69340,param_1 + 0x80);
    FUN_140301790(&DAT_141d69370,param_1 + 0x80);
    FUN_1403018a0(&DAT_141d693a0,param_1 + 0x80);
    FUN_140301390(&DAT_141d693d0,param_1 + 0x80);
    FUN_1403014b0(&DAT_141d69400,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x21;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x21:
    FUN_140304850(&DAT_141d69430,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x22;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x22:
    FUN_140302650(&DAT_141d69460,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x23;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x23:
    FUN_140302400(&DAT_141d69490,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x24;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x24:
    FUN_140302520(&DAT_141d694c0,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x20) = 0x25;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x25:
    local_350[0] = CONCAT11(local_350[0]._1_1_,DAT_1416992b2);
    lVar5 = param_1 + 0x80;
    FUN_1405bb7c0(lVar5,local_350,1);
    local_358[0] = DAT_1416992a4;
    FUN_1405bb7c0(lVar5,local_358,4);
    local_358[0] = DAT_1416b1974;
    FUN_1405bb7c0(lVar5,local_358,4);
    local_358[0] = DAT_1416b1980;
    FUN_1405bb7c0(lVar5,local_358,4);
    FUN_1405bb8b0(lVar5);
    FUN_1405bbd50(lVar5);
    *(undefined4 *)(param_1 + 0x20) = 0x26;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 0x26:
    local_308 = 0xf;
    local_310 = 0;
    local_320 = local_320 & 0xffffffffffffff00;
    FUN_14000c780(&local_320,"data/save/current/world.dat",0x1b);
    FUN_1406d5e60();
    local_328 = 0xf;
    local_330 = 0;
    local_340 = 0;
    uVar10 = FUN_14000c780(&local_340,"data/save/current",0x11);
    FUN_1406d53a0(uVar10,&local_340);
    if (0xf < local_328) {
      FUN_140002020(CONCAT71(uStack_33f,local_340),local_328 + 1,1);
    }
    if (DAT_141c3f0f8 == -1) {
      FUN_14060a760(0);
      FUN_14060a7b0(3);
      DAT_1410b67dc = 3;
      DAT_1410b67d8 = 0xb;
      DAT_141697473 = 0;
    }
    else {
      FUN_14030eee0(&DAT_141c3d4b0,0);
      local_328 = 0xf;
      local_330 = 0;
      local_340 = 0;
      FUN_14000c780(&local_340,"Command Line: World exported.",0x1d);
      FUN_14014a3b0(&local_340);
      if (0xf < local_328) {
        FUN_140002020(CONCAT71(uStack_33f,local_340),local_328 + 1,1);
      }
    }
    *(undefined1 *)(param_1 + 0x18) = 2;
    uVar3 = local_320;
    uVar4 = local_308;
    if (local_308 < 0x10) {
      return;
    }
LAB_1405f4531:
    FUN_140002020(uVar3,uVar4 + 1,1);
  }
  return;
}

