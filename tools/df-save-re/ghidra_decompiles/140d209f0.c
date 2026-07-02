// FUN_140d209f0 @ 140d209f0
// callees:
//   -> 1405bc8e0 FUN_1405bc8e0
//   -> 1405bc0e0 FUN_1405bc0e0
//   -> EXTERNAL:00000092 clear
//   -> 1403068f0 FUN_1403068f0
//   -> 1400be580 FUN_1400be580
//   -> 1400be650 FUN_1400be650
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0
//   -> 1400be490 FUN_1400be490
//   -> EXTERNAL:000000a0 setstate
//   -> 14014d930 FUN_14014d930
//   -> EXTERNAL:000000b3 read
//   -> 1405bba90 FUN_1405bba90
//   -> 140306a00 FUN_140306a00
//   -> 140dfb5c4 operator_new
//   -> 140d20fa0 FUN_140d20fa0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 1401069c0 FUN_1401069c0
//   -> 140002740 FUN_140002740
//   -> 1400bd590 FUN_1400bd590
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>
//   -> 140051e20 FUN_140051e20
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d209f0(ulonglong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_3a8 [32];
  short local_388 [2];
  int local_384;
  int local_380 [2];
  longlong local_378;
  longlong *local_370;
  longlong lStack_368;
  longlong local_360;
  undefined8 local_358;
  void *local_350;
  undefined1 local_348 [8];
  longlong local_340 [3];
  undefined1 local_328 [128];
  longlong local_2a8;
  basic_ios<char,std::char_traits<char>_> local_288 [96];
  undefined *local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined *local_210;
  ulonglong local_208;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  longlong local_1e8;
  ulonglong local_1e0;
  undefined1 local_1d8;
  undefined7 uStack_1d7;
  undefined8 local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8 [3];
  ulonglong local_1a0;
  undefined1 local_198 [120];
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 local_110;
  ulonglong local_108;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_358 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_3a8;
  local_370 = (longlong *)0x0;
  lStack_368 = 0;
  iVar8 = 0;
  local_360 = 0;
  FUN_1405bc8e0();
  FUN_1405bc0e0(local_340);
  local_348[0] = 1;
  local_228 = &DAT_1416acb50;
  local_220 = 20000;
  uStack_21c = 0;
  local_218 = 0;
  local_210 = &DAT_1416992d0;
  local_208 = 80000;
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)local_340 + (longlong)*(int *)(local_340[0] + 4)),0,false);
  FUN_1403068f0(local_198);
  local_1e0 = 0xf;
  local_1e8 = 0;
  local_1f8 = 0;
  uVar9 = lStack_368 - (longlong)local_370 >> 3;
  plVar7 = local_370;
  if (uVar9 != 0) {
    do {
      uVar4 = FUN_1400be580(local_1b8,"data/save/",*plVar7);
      puVar5 = (undefined1 *)FUN_1400be650(&local_1d8,uVar4);
      if (&local_1f8 != puVar5) {
        if (0xf < local_1e0) {
          FUN_140002020(CONCAT71(uStack_1f7,local_1f8),local_1e0 + 1);
        }
        local_1e0 = 0xf;
        local_1e8 = 0;
        local_1f8 = 0;
        FUN_14007b2f0(&local_1f8,puVar5);
      }
      if (0xf < local_1c0) {
        FUN_140002020(CONCAT71(uStack_1d7,local_1d8),local_1c0 + 1);
      }
      local_1c0 = 0xf;
      local_1c8 = 0;
      local_1d8 = 0;
      if (0xf < local_1a0) {
        FUN_140002020(local_1b8[0]);
      }
      if (local_1e8 != 0) {
        uStack_21c = 0;
        local_218 = 0;
        local_208 = local_208 & 0xffffffff;
        if ((local_2a8 != 0) && (lVar6 = FUN_1400be490(local_328), lVar6 == 0)) {
          std::basic_ios<char,std::char_traits<char>_>::setstate
                    ((basic_ios<char,std::char_traits<char>_> *)
                     ((longlong)local_340 + (longlong)*(int *)(local_340[0] + 4)),2,false);
        }
        std::basic_ios<char,std::char_traits<char>_>::clear
                  ((basic_ios<char,std::char_traits<char>_> *)
                   ((longlong)local_340 + (longlong)*(int *)(local_340[0] + 4)),0,false);
        lVar6 = FUN_14014d930(local_328);
        if (lVar6 == 0) {
          std::basic_ios<char,std::char_traits<char>_>::setstate
                    ((basic_ios<char,std::char_traits<char>_> *)
                     ((longlong)local_340 + (longlong)*(int *)(local_340[0] + 4)),2,false);
        }
        else {
          std::basic_ios<char,std::char_traits<char>_>::clear
                    ((basic_ios<char,std::char_traits<char>_> *)
                     ((longlong)local_340 + (longlong)*(int *)(local_340[0] + 4)),0,false);
        }
        if (local_2a8 != 0) {
          local_384 = 1;
          std::basic_istream<char,std::char_traits<char>_>::read
                    ((basic_istream<char,std::char_traits<char>_> *)local_340,(char *)local_380,4);
          std::basic_istream<char,std::char_traits<char>_>::read
                    ((basic_istream<char,std::char_traits<char>_> *)local_340,(char *)&local_384,4);
          local_348[0] = local_384 != 0;
          if ((((local_380[0] <= DAT_1416992c8) && (DAT_141699290 <= local_380[0])) &&
              (cVar3 = FUN_1405bba90(local_348,local_388), cVar3 != '\0')) &&
             ((local_388[0] == 0 && (cVar3 = FUN_140306a00(local_198,local_348), cVar3 != '\0')))) {
            local_350 = operator_new(0x160);
            lVar6 = FUN_1403068f0(local_350);
            local_378 = lVar6;
            FUN_140d20fa0(lVar6,local_198);
            if (lVar6 + 0x140 != *plVar7) {
              FUN_14000c8b0(lVar6 + 0x140,*plVar7,0,0xffffffffffffffff);
            }
            plVar1 = (longlong *)param_1[1];
            if ((&local_378 < plVar1) && (plVar2 = (longlong *)*param_1, plVar2 <= &local_378)) {
              if (plVar1 == (longlong *)param_1[2]) {
                FUN_1401069c0(param_1);
              }
              if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                *(undefined8 *)param_1[1] =
                     *(undefined8 *)(*param_1 + ((longlong)&local_378 - (longlong)plVar2 >> 3) * 8);
              }
            }
            else {
              if (plVar1 == (longlong *)param_1[2]) {
                FUN_1401069c0(param_1);
              }
              if ((longlong *)param_1[1] != (longlong *)0x0) {
                *(longlong *)param_1[1] = lVar6;
              }
            }
            param_1[1] = param_1[1] + 8;
          }
          if ((local_2a8 != 0) && (lVar6 = FUN_1400be490(local_328), lVar6 == 0)) {
            std::basic_ios<char,std::char_traits<char>_>::setstate
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)local_340 + (longlong)*(int *)(local_340[0] + 4)),2,false);
          }
        }
      }
      iVar8 = iVar8 + 1;
      plVar7 = plVar7 + 1;
    } while ((ulonglong)(longlong)iVar8 < uVar9);
  }
  if (0xf < local_1e0) {
    FUN_140002020(CONCAT71(uStack_1f7,local_1f8),local_1e0 + 1);
  }
  local_1e0 = 0xf;
  local_1e8 = 0;
  local_1f8 = 0;
  if (0xf < local_40) {
    FUN_140002020(CONCAT71(uStack_57,local_58),local_40 + 1);
  }
  local_40 = 0xf;
  local_48 = 0;
  local_58 = 0;
  if (0xf < local_108) {
    FUN_140002020(CONCAT71(uStack_11f,local_120),local_108 + 1);
  }
  local_108 = 0xf;
  local_110 = 0;
  local_120 = 0;
  FUN_140002740(local_198);
  if ((local_2a8 != 0) && (lVar6 = FUN_1400be490(local_328), lVar6 == 0)) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_340 + (longlong)*(int *)(local_340[0] + 4)),2,false);
  }
  FUN_1400bd590(local_288);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_288);
  FUN_140051e20(&local_370);
  if (local_370 != (longlong *)0x0) {
    FUN_140002020(local_370,local_360 - (longlong)local_370 >> 3,8);
  }
  return;
}

