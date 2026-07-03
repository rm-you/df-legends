// FUN_140ced860 @ 140ced860
// callees:
//   -> 14000c780 FUN_14000c780
//   -> 14014a650 FUN_14014a650
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1400be580 FUN_1400be580
//   -> 1400be650 FUN_1400be650
//   -> 14007b6d0 FUN_14007b6d0
//   -> 1405bc0e0 FUN_1405bc0e0
//   -> EXTERNAL:00000092 clear
//   -> 1400be490 FUN_1400be490
//   -> EXTERNAL:000000a0 setstate
//   -> 14014d930 FUN_14014d930
//   -> EXTERNAL:000000b3 read
//   -> 14014a240 FUN_14014a240
//   -> 140dfb5c4 operator_new
//   -> 140ced020 FUN_140ced020
//   -> 1405bba90 FUN_1405bba90
//   -> 140c73720 FUN_140c73720
//   -> 1400514e0 FUN_1400514e0
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140812580 FUN_140812580
//   -> 1400b3c20 FUN_1400b3c20
//   -> 14000c390 FUN_14000c390
//   -> 140c92130 FUN_140c92130
//   -> 1400bd590 FUN_1400bd590
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140ced860(undefined8 param_1,undefined4 param_2,char param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_288 [32];
  char local_268 [8];
  void *local_260;
  undefined4 local_258;
  undefined4 local_254;
  int local_250;
  int local_24c;
  int local_248 [4];
  undefined1 local_238 [8];
  longlong local_230 [3];
  undefined1 local_218 [128];
  longlong local_198;
  basic_ios<char,std::char_traits<char>_> local_178 [96];
  undefined *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined *local_100;
  ulonglong local_f8;
  undefined8 local_e8;
  void *local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  longlong local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_e8 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_288;
  local_60 = 0xf;
  uVar13 = 0;
  local_68 = 0;
  local_78 = 0;
  FUN_14000c780(&local_78,"unit-",5);
  local_c0 = 0xf;
  local_c8 = 0;
  local_d8 = 0;
  FUN_14014a650(param_2,&local_d8);
  FUN_14000cb40(&local_78,&local_d8,0,0xffffffffffffffff);
  if (0xf < local_c0) {
    FUN_140002020(CONCAT71(uStack_d7,local_d8),local_c0 + 1,1);
  }
  FUN_14000c9f0(&local_78,&DAT_140e63fa8,4);
  FUN_1400be580(&local_98,"data/save/current/",&local_78);
  uVar4 = FUN_1400be580(&local_58,"data/save/",&DAT_141ebec68);
  uVar4 = FUN_1400be650(&local_d8,uVar4,&DAT_140e5c854);
  FUN_14007b6d0(&local_b8,uVar4);
  if (0xf < local_c0) {
    FUN_140002020(CONCAT71(uStack_d7,local_d8),local_c0 + 1);
  }
  local_c0 = 0xf;
  local_c8 = 0;
  local_d8 = 0;
  if (0xf < local_40) {
    FUN_140002020(CONCAT71(uStack_57,local_58));
  }
  local_40 = 0xf;
  local_48 = 0;
  local_58 = 0;
  FUN_1405bc0e0(local_230);
  local_238[0] = 1;
  local_118 = &DAT_1416acb50;
  local_110 = 20000;
  uStack_10c = 0;
  local_108 = 0;
  local_100 = &DAT_1416992d0;
  local_f8 = 80000;
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)),0,false);
  if (local_88 == 0) {
LAB_140cedb63:
    if (local_a8 != 0) {
      uStack_10c = 0;
      local_108 = 0;
      local_f8 = local_f8 & 0xffffffff;
      if ((local_198 != 0) && (lVar5 = FUN_1400be490(local_218), lVar5 == 0)) {
        std::basic_ios<char,std::char_traits<char>_>::setstate
                  ((basic_ios<char,std::char_traits<char>_> *)
                   ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)),2,false);
      }
      std::basic_ios<char,std::char_traits<char>_>::clear
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)),0,false);
      lVar5 = FUN_14014d930(local_218);
      if (lVar5 == 0) {
        std::basic_ios<char,std::char_traits<char>_>::setstate
                  ((basic_ios<char,std::char_traits<char>_> *)
                   ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)),2,false);
      }
      else {
        std::basic_ios<char,std::char_traits<char>_>::clear
                  ((basic_ios<char,std::char_traits<char>_> *)
                   ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)),0,false);
      }
      if (local_198 != 0) goto LAB_140cedc33;
    }
    if (param_3 == '\0') goto LAB_140cee26f;
    local_c0 = 0xf;
    local_c8 = 0;
    local_d8 = 0;
    FUN_14000c780(&local_d8,"Expected unit file missing or corrupted: ");
    FUN_14000cb40(&local_d8,&local_b8,0,0xffffffffffffffff);
    FUN_14014a240(&local_d8);
  }
  else {
    uStack_10c = 0;
    local_108 = 0;
    local_f8 = local_f8 & 0xffffffff;
    if ((local_198 != 0) && (lVar5 = FUN_1400be490(local_218), lVar5 == 0)) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)),2,false);
    }
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)),0,false);
    lVar5 = FUN_14014d930(local_218);
    if (lVar5 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)),2,false);
    }
    else {
      std::basic_ios<char,std::char_traits<char>_>::clear
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)),0,false);
    }
    if (local_198 == 0) goto LAB_140cedb63;
LAB_140cedc33:
    local_248[0] = 1;
    std::basic_istream<char,std::char_traits<char>_>::read
              ((basic_istream<char,std::char_traits<char>_> *)local_230,(char *)&local_24c,4);
    std::basic_istream<char,std::char_traits<char>_>::read
              ((basic_istream<char,std::char_traits<char>_> *)local_230,(char *)local_248,4);
    local_238[0] = local_248[0] != 0;
    if (local_24c <= DAT_1416992c8) {
      local_260 = operator_new(0xc88);
      uVar6 = FUN_140ced020(local_260);
      FUN_1405bba90(local_238,uVar6,4);
      puVar8 = (ulonglong *)(uVar6 + 0x10);
      lVar5 = 100;
      do {
        FUN_1405bba90(local_238,local_268);
        if (local_268[0] == '\0') {
          puVar8[2] = 0;
        }
        else {
          DAT_141c67038 = DAT_141c67030;
          FUN_1405bba90(local_238,&local_258,4);
          local_e0 = operator_new(0x13d0);
          pvVar7 = (void *)FUN_140c73720(local_e0,1);
          *(undefined4 *)((longlong)pvVar7 + 0x130) = local_258;
          local_260 = pvVar7;
          FUN_1400514e0(pvVar7,&DAT_141c66fd0);
          if ((&local_260 < DAT_141c67038) && (DAT_141c67030 <= &local_260)) {
            lVar11 = (longlong)&local_260 - (longlong)DAT_141c67030;
            if (DAT_141c67038 == DAT_141c67040) {
              FUN_14000c2d0(&DAT_141c67030,1);
            }
            if (DAT_141c67038 != (void **)0x0) {
              *DAT_141c67038 = DAT_141c67030[lVar11 >> 3];
            }
          }
          else {
            if (DAT_141c67038 == DAT_141c67040) {
              FUN_14000c2d0(&DAT_141c67030,1);
            }
            if (DAT_141c67038 != (void **)0x0) {
              *DAT_141c67038 = pvVar7;
            }
          }
          DAT_141c67038 = DAT_141c67038 + 1;
          puVar8[2] = (ulonglong)pvVar7;
          DAT_141c67fe8 = DAT_141c67fe0;
          DAT_141c68000 = DAT_141c67ff8;
          FUN_1405bba90(local_238,&local_250);
          if (0 < local_250) {
            local_254 = 0xffffffff;
            do {
              FUN_1405bba90(local_238,&local_258);
              pvVar7 = (void *)FUN_140812580(local_238);
              *(undefined4 *)((longlong)pvVar7 + 0x1c) = local_258;
              local_260 = pvVar7;
              FUN_1400b3c20(pvVar7,&DAT_141c67368);
              if ((&local_260 < DAT_141c67fe8) && (DAT_141c67fe0 <= &local_260)) {
                lVar11 = (longlong)&local_260 - (longlong)DAT_141c67fe0;
                if (DAT_141c67fe8 == DAT_141c67ff0) {
                  FUN_14000c2d0(&DAT_141c67fe0,1);
                }
                if (DAT_141c67fe8 != (void **)0x0) {
                  *DAT_141c67fe8 = DAT_141c67fe0[lVar11 >> 3];
                }
              }
              else {
                if (DAT_141c67fe8 == DAT_141c67ff0) {
                  FUN_14000c2d0(&DAT_141c67fe0,1);
                }
                if (DAT_141c67fe8 != (void **)0x0) {
                  *DAT_141c67fe8 = pvVar7;
                }
              }
              DAT_141c67fe8 = DAT_141c67fe8 + 1;
              if ((&local_254 < DAT_141c68000) && (DAT_141c67ff8 <= &local_254)) {
                lVar11 = (longlong)&local_254 - (longlong)DAT_141c67ff8;
                if (DAT_141c68000 == DAT_141c68008) {
                  FUN_14000c390(&DAT_141c67ff8,1);
                }
                if (DAT_141c68000 != (undefined4 *)0x0) {
                  *DAT_141c68000 = DAT_141c67ff8[lVar11 >> 2];
                }
              }
              else {
                if (DAT_141c68000 == DAT_141c68008) {
                  FUN_14000c390(&DAT_141c67ff8,1);
                }
                if (DAT_141c68000 != (undefined4 *)0x0) {
                  *DAT_141c68000 = 0xffffffff;
                }
              }
              DAT_141c68000 = DAT_141c68000 + 1;
              ppvVar1 = (void **)*puVar8;
              if ((&local_260 < ppvVar1) && (ppvVar2 = (void **)puVar8[-1], ppvVar2 <= &local_260))
              {
                if (ppvVar1 == (void **)puVar8[1]) {
                  FUN_14000c2d0(puVar8 + -1,1);
                }
                if ((undefined8 *)*puVar8 != (undefined8 *)0x0) {
                  *(undefined8 *)*puVar8 =
                       *(undefined8 *)
                        (puVar8[-1] + ((longlong)&local_260 - (longlong)ppvVar2 >> 3) * 8);
                }
              }
              else {
                if (ppvVar1 == (void **)puVar8[1]) {
                  FUN_14000c2d0(puVar8 + -1,1);
                }
                if ((ulonglong *)*puVar8 != (ulonglong *)0x0) {
                  *(ulonglong *)*puVar8 = (ulonglong)pvVar7;
                }
              }
              *puVar8 = *puVar8 + 8;
              local_250 = local_250 + -1;
            } while (0 < local_250);
          }
          uVar10 = uVar13;
          uVar12 = uVar13;
          if ((longlong)DAT_141c67fe8 - (longlong)DAT_141c67fe0 >> 3 != 0) {
            do {
              (**(code **)(**(longlong **)(uVar12 + (longlong)DAT_141c67fe0) + 0x438))
                        (*(longlong **)(uVar12 + (longlong)DAT_141c67fe0),local_238);
              uVar9 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
              uVar12 = uVar12 + 8;
            } while ((ulonglong)(longlong)(int)uVar9 <
                     (ulonglong)((longlong)DAT_141c67fe8 - (longlong)DAT_141c67fe0 >> 3));
          }
          iVar3 = local_24c;
          uVar10 = uVar13;
          uVar12 = uVar13;
          if ((longlong)DAT_141c67038 - (longlong)DAT_141c67030 >> 3 != 0) {
            do {
              FUN_140c92130(*(undefined8 *)(uVar12 + (longlong)DAT_141c67030),local_238,iVar3,0);
              uVar9 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
              uVar12 = uVar12 + 8;
            } while ((ulonglong)(longlong)(int)uVar9 <
                     (ulonglong)((longlong)DAT_141c67038 - (longlong)DAT_141c67030 >> 3));
          }
        }
        puVar8 = puVar8 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar13 = uVar6;
      if ((local_198 != 0) && (lVar5 = FUN_1400be490(local_218), lVar5 == 0)) {
        std::basic_ios<char,std::char_traits<char>_>::setstate
                  ((basic_ios<char,std::char_traits<char>_> *)
                   ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)),2,false);
      }
      goto LAB_140cee26f;
    }
    if ((local_198 != 0) && (lVar5 = FUN_1400be490(local_218), lVar5 == 0)) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)),2,false);
    }
    if (param_3 == '\0') goto LAB_140cee26f;
    local_c0 = 0xf;
    local_c8 = 0;
    local_d8 = 0;
    FUN_14000c780(&local_d8,"Outdated unit file ignored: ");
    FUN_14000cb40(&local_d8,&local_b8,0,0xffffffffffffffff);
    FUN_14014a240(&local_d8);
  }
  if (0xf < local_c0) {
    FUN_140002020(CONCAT71(uStack_d7,local_d8),local_c0 + 1);
  }
LAB_140cee26f:
  if ((local_198 != 0) && (lVar5 = FUN_1400be490(local_218), lVar5 == 0)) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)),2,false);
  }
  FUN_1400bd590(local_178);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_178);
  if (0xf < local_a0) {
    FUN_140002020(CONCAT71(uStack_b7,local_b8),local_a0 + 1,1);
  }
  local_a0 = 0xf;
  local_a8 = 0;
  local_b8 = 0;
  if (0xf < local_80) {
    FUN_140002020(CONCAT71(uStack_97,local_98),local_80 + 1,1);
  }
  local_80 = 0xf;
  local_88 = 0;
  local_98 = 0;
  if (0xf < local_60) {
    FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
  }
  return uVar13;
}

