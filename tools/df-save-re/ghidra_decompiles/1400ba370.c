// FUN_1400ba370 @ 1400ba370
// callees:
//   -> EXTERNAL:0000006d CreateDirectoryA
//   -> 14000c780 FUN_14000c780
//   -> 14014a650 FUN_14014a650
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1405bc0e0 FUN_1405bc0e0
//   -> EXTERNAL:00000092 clear
//   -> 1400be490 FUN_1400be490
//   -> EXTERNAL:000000a0 setstate
//   -> 14014d930 FUN_14014d930
//   -> EXTERNAL:000000b4 write
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400b9590 FUN_1400b9590
//   -> 1405bb8b0 FUN_1405bb8b0
//   -> 1400bd590 FUN_1400bd590
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400ba370(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  char local_1b8 [8];
  undefined4 local_1b0 [2];
  undefined1 local_1a8 [8];
  longlong local_1a0 [2];
  basic_ostream<char,std::char_traits<char>_> local_190 [8];
  undefined1 local_188 [128];
  longlong local_108;
  basic_ios<char,std::char_traits<char>_> local_e8 [96];
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined *local_70;
  ulonglong local_68;
  undefined8 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  longlong local_40;
  ulonglong local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_58 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_1e8;
  CreateDirectoryA("data",(LPSECURITY_ATTRIBUTES)0x0);
  CreateDirectoryA("data/save",(LPSECURITY_ATTRIBUTES)0x0);
  CreateDirectoryA("data/save/current",(LPSECURITY_ATTRIBUTES)0x0);
  local_38 = 0xf;
  local_40 = 0;
  local_50 = 0;
  FUN_14000c780(&local_50,"data/save/current/art_image-",0x1c);
  local_18 = 0xf;
  local_20 = 0;
  local_30 = 0;
  FUN_14014a650((int)*param_1,&local_30);
  FUN_14000cb40(&local_50,&local_30,0,0xffffffffffffffff);
  if (0xf < local_18) {
    FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
  }
  FUN_14000c9f0(&local_50);
  FUN_1405bc0e0(local_1a0);
  local_1a8[0] = 1;
  local_88 = &DAT_1416acb50;
  local_80 = 20000;
  uStack_7c = 0;
  local_78 = 0;
  local_70 = &DAT_1416992d0;
  local_68 = 80000;
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)local_1a0 + (longlong)*(int *)(local_1a0[0] + 4)),0,false);
  if (local_40 != 0) {
    uStack_7c = 0;
    local_78 = 0;
    local_68 = local_68 & 0xffffffff;
    if ((local_108 != 0) && (lVar1 = FUN_1400be490(local_188), lVar1 == 0)) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_1a0 + (longlong)*(int *)(local_1a0[0] + 4)),2,false);
    }
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_1a0 + (longlong)*(int *)(local_1a0[0] + 4)),0,false);
    lVar1 = FUN_14014d930(local_188);
    if (lVar1 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_1a0 + (longlong)*(int *)(local_1a0[0] + 4)),2,false);
    }
    else {
      std::basic_ios<char,std::char_traits<char>_>::clear
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_1a0 + (longlong)*(int *)(local_1a0[0] + 4)),0,false);
    }
  }
  local_1b8[0] = '\x01';
  local_1b8[1] = '\0';
  local_1b8[2] = '\0';
  local_1b8[3] = '\0';
  local_1a8[0] = 1;
  if ((DAT_141c513c8 < 1) || ((*DAT_141c513c0 & 4) == 0)) {
    local_1b8[0] = '\0';
    local_1b8[1] = '\0';
    local_1b8[2] = '\0';
    local_1b8[3] = '\0';
    local_1a8[0] = 0;
  }
  if (local_108 != 0) {
    std::basic_ostream<char,std::char_traits<char>_>::write(local_190,(char *)&DAT_1416992c8,4);
    std::basic_ostream<char,std::char_traits<char>_>::write(local_190,local_1b8,4);
  }
  local_1b0[0] = (undefined4)*param_1;
  FUN_1405bb7c0(local_1a8,local_1b0,4);
  lVar1 = 500;
  do {
    param_1 = param_1 + 1;
    if (*param_1 == 0) {
      local_1c8[0] = 0;
      FUN_1405bb7c0(local_1a8,local_1c8);
    }
    else {
      local_1c0[0] = 1;
      FUN_1405bb7c0(local_1a8,local_1c0);
      FUN_1400b9590(*param_1,local_1a8);
    }
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1405bb8b0(local_1a8);
  if ((local_108 != 0) && (lVar1 = FUN_1400be490(local_188), lVar1 == 0)) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_1a0 + (longlong)*(int *)(local_1a0[0] + 4)),2,false);
  }
  if ((local_108 != 0) && (lVar1 = FUN_1400be490(local_188), lVar1 == 0)) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_1a0 + (longlong)*(int *)(local_1a0[0] + 4)),2,false);
  }
  FUN_1400bd590(local_e8);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_e8);
  if (0xf < local_38) {
    FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
  }
  return;
}

