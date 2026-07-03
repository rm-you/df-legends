// FUN_1400ba750 @ 1400ba750
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
//   -> 140dfb5c4 operator_new
//   -> 1400ba260 FUN_1400ba260
//   -> 1405bba90 FUN_1405bba90
//   -> 1400b93a0 FUN_1400b93a0
//   -> 1400b9870 FUN_1400b9870
//   -> 1400bd590 FUN_1400bd590
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1400ba750(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_258 [32];
  char local_238 [4];
  int local_234;
  int local_230 [2];
  void *local_228;
  undefined1 local_218 [8];
  longlong local_210 [3];
  undefined1 local_1f8 [128];
  longlong local_178;
  basic_ios<char,std::char_traits<char>_> local_158 [96];
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined *local_e0;
  ulonglong local_d8;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  longlong local_90;
  ulonglong local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  longlong local_70;
  ulonglong local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_c8 = 0xfffffffffffffffe;
  local_20 = DAT_1410b5008 ^ (ulonglong)auStack_258;
  if (param_2 == -1) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)*param_1;
  uVar8 = param_1[1] - (longlong)puVar7 >> 3;
  puVar5 = puVar3;
  puVar6 = puVar7;
  if (uVar8 != 0) {
    do {
      if (*(int *)*puVar6 == param_2) {
        return (undefined8 *)puVar7[(int)puVar5];
      }
      uVar4 = (int)puVar5 + 1;
      puVar5 = (undefined8 *)(ulonglong)uVar4;
      puVar6 = puVar6 + 1;
    } while ((ulonglong)(longlong)(int)uVar4 < uVar8);
  }
  local_48 = 0xf;
  local_50 = 0;
  local_60 = 0;
  FUN_14000c780(&local_60,"art_image-",10);
  local_a8 = 0xf;
  local_b0 = 0;
  local_c0 = 0;
  FUN_14014a650(param_2,&local_c0);
  FUN_14000cb40(&local_60,&local_c0,0,0xffffffffffffffff);
  if (0xf < local_a8) {
    FUN_140002020(CONCAT71(uStack_bf,local_c0),local_a8 + 1,1);
  }
  FUN_14000c9f0(&local_60,&DAT_140e63fa8,4);
  FUN_1400be580(&local_80,"data/save/current/",&local_60);
  uVar1 = FUN_1400be580(&local_40,"data/save/",&DAT_141ebec68);
  uVar1 = FUN_1400be650(&local_c0,uVar1,&DAT_140e5c854);
  FUN_14007b6d0(&local_a0,uVar1);
  if (0xf < local_a8) {
    FUN_140002020(CONCAT71(uStack_bf,local_c0),local_a8 + 1);
  }
  local_a8 = 0xf;
  local_b0 = 0;
  local_c0 = 0;
  if (0xf < local_28) {
    FUN_140002020(CONCAT71(uStack_3f,local_40));
  }
  local_28 = 0xf;
  local_30 = 0;
  local_40 = 0;
  FUN_1405bc0e0(local_210);
  local_218[0] = 1;
  local_f8 = &DAT_1416acb50;
  local_f0 = 20000;
  uStack_ec = 0;
  local_e8 = 0;
  local_e0 = &DAT_1416992d0;
  local_d8 = 80000;
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)local_210 + (longlong)*(int *)(local_210[0] + 4)),0,false);
  if (local_70 == 0) {
LAB_1400baa8d:
    if (local_90 == 0) goto LAB_1400bacaf;
    uStack_ec = 0;
    local_e8 = 0;
    local_d8 = local_d8 & 0xffffffff;
    if ((local_178 != 0) && (lVar2 = FUN_1400be490(local_1f8), lVar2 == 0)) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_210 + (longlong)*(int *)(local_210[0] + 4)),2,false);
    }
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_210 + (longlong)*(int *)(local_210[0] + 4)),0,false);
    lVar2 = FUN_14014d930(local_1f8);
    if (lVar2 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_210 + (longlong)*(int *)(local_210[0] + 4)),2,false);
    }
    else {
      std::basic_ios<char,std::char_traits<char>_>::clear
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_210 + (longlong)*(int *)(local_210[0] + 4)),0,false);
    }
    if (local_178 == 0) goto LAB_1400bacaf;
  }
  else {
    uStack_ec = 0;
    local_e8 = 0;
    local_d8 = local_d8 & 0xffffffff;
    if ((local_178 != 0) && (lVar2 = FUN_1400be490(local_1f8), lVar2 == 0)) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_210 + (longlong)*(int *)(local_210[0] + 4)),2,false);
    }
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_210 + (longlong)*(int *)(local_210[0] + 4)),0,false);
    lVar2 = FUN_14014d930(local_1f8);
    if (lVar2 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_210 + (longlong)*(int *)(local_210[0] + 4)),2,false);
    }
    else {
      std::basic_ios<char,std::char_traits<char>_>::clear
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_210 + (longlong)*(int *)(local_210[0] + 4)),0,false);
    }
    if (local_178 == 0) goto LAB_1400baa8d;
  }
  local_234 = 1;
  std::basic_istream<char,std::char_traits<char>_>::read
            ((basic_istream<char,std::char_traits<char>_> *)local_210,(char *)local_230,4);
  std::basic_istream<char,std::char_traits<char>_>::read
            ((basic_istream<char,std::char_traits<char>_> *)local_210,(char *)&local_234,4);
  local_218[0] = local_234 != 0;
  if (DAT_1416992c8 < local_230[0]) {
    if ((local_178 != 0) && (lVar2 = FUN_1400be490(local_1f8), lVar2 == 0)) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_210 + (longlong)*(int *)(local_210[0] + 4)),2,false);
    }
  }
  else {
    local_228 = operator_new(0xfa8);
    puVar3 = (undefined8 *)FUN_1400ba260(local_228);
    FUN_1405bba90(local_218,puVar3,4);
    lVar2 = 500;
    puVar7 = puVar3;
    do {
      puVar7 = puVar7 + 1;
      FUN_1405bba90(local_218,local_238);
      if (local_238[0] == '\0') {
        *puVar7 = 0;
      }
      else {
        local_228 = operator_new(0xe0);
        uVar1 = FUN_1400b93a0(local_228);
        *puVar7 = uVar1;
        FUN_1400b9870(uVar1,local_218);
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if ((local_178 != 0) && (lVar2 = FUN_1400be490(local_1f8), lVar2 == 0)) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_210 + (longlong)*(int *)(local_210[0] + 4)),2,false);
    }
  }
LAB_1400bacaf:
  if ((local_178 != 0) && (lVar2 = FUN_1400be490(local_1f8), lVar2 == 0)) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_210 + (longlong)*(int *)(local_210[0] + 4)),2,false);
  }
  FUN_1400bd590(local_158);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_158);
  if (0xf < local_88) {
    FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
  }
  local_88 = 0xf;
  local_90 = 0;
  local_a0 = 0;
  if (0xf < local_68) {
    FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1,1);
  }
  local_68 = 0xf;
  local_70 = 0;
  local_80 = 0;
  if (0xf < local_48) {
    FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
  }
  return puVar3;
}

