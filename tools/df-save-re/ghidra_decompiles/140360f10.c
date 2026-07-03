// FUN_140360f10 @ 140360f10
// callees:
//   -> 140051e20 FUN_140051e20
//   -> 1405bc0e0 FUN_1405bc0e0
//   -> EXTERNAL:00000092 clear
//   -> 14000c780 FUN_14000c780
//   -> 1400be490 FUN_1400be490
//   -> EXTERNAL:000000a0 setstate
//   -> 14014d930 FUN_14014d930
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb6d8 operator_new
//   -> 140dfb5b4 free
//   -> 140051b70 FUN_140051b70
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14014ae60 FUN_14014ae60
//   -> 140071310 FUN_140071310
//   -> 140002020 FUN_140002020
//   -> 14000c110 FUN_14000c110
//   -> 1400bd590 FUN_1400bd590
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_140360f10(longlong *param_1,char *param_2,char param_3,char param_4)

{
  byte *pbVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_358 [32];
  char local_338;
  short local_334 [2];
  int local_330;
  int local_32c [5];
  undefined1 local_318 [8];
  longlong local_310 [3];
  undefined1 local_2f8 [128];
  longlong local_278;
  basic_ios<char,std::char_traits<char>_> local_258 [96];
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined *local_1e0;
  ulonglong local_1d8;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  longlong local_1b8;
  ulonglong local_1b0;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined8 local_198;
  ulonglong local_190;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined8 local_178;
  ulonglong local_170;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 local_158;
  ulonglong local_150;
  char local_148 [256];
  ulonglong local_48;
  
  local_32c[1] = -2;
  local_32c[2] = -1;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_358;
  local_338 = param_4;
  FUN_140051e20();
  FUN_1405bc0e0(local_310);
  local_318[0] = 1;
  local_1f8 = &DAT_14167edc0;
  local_1f0 = 20000;
  uStack_1ec = 0;
  local_1e8 = 0;
  local_1e0 = &DAT_141683be0;
  local_1d8 = 80000;
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)local_310 + (longlong)*(int *)(local_310[0] + 4)),0,false);
  local_1b0 = 0xf;
  local_1b8 = 0;
  local_1c8 = 0;
  if (*param_2 != '\0') {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != '\0');
  }
  FUN_14000c780(&local_1c8);
  cVar12 = '\x01';
  if (local_1b8 == 0) {
LAB_140361480:
    cVar12 = '\0';
  }
  else {
    uStack_1ec = 0;
    local_1e8 = 0;
    local_1d8 = local_1d8 & 0xffffffff;
    if ((local_278 != 0) && (lVar5 = FUN_1400be490(local_2f8), lVar5 == 0)) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_310 + (longlong)*(int *)(local_310[0] + 4)),2,false);
    }
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_310 + (longlong)*(int *)(local_310[0] + 4)),0,false);
    lVar5 = FUN_14014d930(local_2f8);
    if (lVar5 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_310 + (longlong)*(int *)(local_310[0] + 4)),2,false);
    }
    else {
      std::basic_ios<char,std::char_traits<char>_>::clear
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_310 + (longlong)*(int *)(local_310[0] + 4)),0,false);
    }
    if (local_278 == 0) goto LAB_140361480;
    bVar2 = false;
    local_148[0] = '\0';
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != '\0');
    iVar8 = (int)lVar5 + -1;
    if (-1 < iVar8) {
      pcVar9 = param_2 + iVar8;
      if (*pcVar9 != '\\') {
        while (*pcVar9 != '/') {
          iVar8 = iVar8 + -1;
          pcVar9 = pcVar9 + -1;
          if (((longlong)pcVar9 - (longlong)param_2 < 0) || (*pcVar9 == '\\')) break;
        }
      }
      param_2 = param_2 + (iVar8 + 1);
      lVar5 = -(longlong)param_2;
      do {
        cVar4 = *param_2;
        param_2[(longlong)(local_148 + lVar5)] = cVar4;
        param_2 = param_2 + 1;
      } while (cVar4 != '\0');
    }
    FUN_1405bba90(local_318,local_32c);
    local_170 = 0xf;
    uVar10 = 0;
    local_178 = 0;
    local_188 = 0;
    uVar14 = uVar10;
    if (0 < local_32c[0]) {
      do {
        FUN_1405bba90(local_318,&local_330,4);
        local_178 = 0;
        puVar6 = &local_188;
        if (0xf < local_170) {
          puVar6 = (undefined1 *)CONCAT71(uStack_187,local_188);
        }
        *puVar6 = 0;
        cVar4 = FUN_1405bba90(local_318,local_334);
        if ((cVar4 != '\0') && (local_334[0] != 0)) {
          pcVar9 = operator_new((longlong)(local_334[0] + 1));
          cVar4 = FUN_1405bba90(local_318,pcVar9);
          if (cVar4 != '\0') {
            pcVar9[local_334[0]] = '\0';
            if (*pcVar9 != '\0') {
              lVar5 = -1;
              do {
                lVar5 = lVar5 + 1;
              } while (pcVar9[lVar5] != '\0');
            }
            FUN_14000c780(&local_188,pcVar9);
          }
          free(pcVar9);
        }
        FUN_140051b70(param_1,&local_188);
        if ((local_338 != '\0') && (uVar11 = 0, 0 < local_330)) {
          do {
            puVar7 = *(undefined8 **)(*param_1 + uVar10 * 8);
            if (0xf < (ulonglong)puVar7[3]) {
              puVar7 = (undefined8 *)*puVar7;
            }
            iVar8 = (int)uVar11;
            pbVar1 = (byte *)((longlong)iVar8 + (longlong)puVar7);
            *pbVar1 = ~*pbVar1;
            puVar7 = *(undefined8 **)(*param_1 + uVar10 * 8);
            if (0xf < (ulonglong)puVar7[3]) {
              puVar7 = (undefined8 *)*puVar7;
            }
            pcVar9 = (char *)((longlong)iVar8 + (longlong)puVar7);
            *pcVar9 = *pcVar9 + ((((char)(iVar8 / 5) + ((char)(uVar11 >> 0x18) >> 7)) -
                                 (char)((longlong)iVar8 * 0x66666667 >> 0x3f)) * '\x05' -
                                (char)uVar11);
            uVar11 = (ulonglong)(iVar8 + 1U);
          } while ((int)(iVar8 + 1U) < local_330);
        }
        if (uVar10 == 0) {
          local_150 = 0xf;
          local_158 = 0;
          local_168 = 0;
          if (local_148[0] != '\0') {
            lVar5 = -1;
            do {
              lVar3 = lVar5 + 1;
              lVar5 = lVar5 + 1;
            } while (local_148[lVar3] != '\0');
          }
          FUN_14000c780(&local_168,local_148);
          local_190 = 0xf;
          local_198 = 0;
          local_1a8 = 0;
          FUN_14000c8b0(&local_1a8,*(undefined8 *)*param_1,0,0xffffffffffffffff);
          FUN_14014ae60(&local_168);
          FUN_14014ae60(&local_1a8);
          iVar8 = FUN_140071310(&local_168,&local_1a8);
          if (iVar8 != 0) {
            cVar12 = '\0';
          }
          bVar2 = true;
          if (0xf < local_190) {
            FUN_140002020(CONCAT71(uStack_1a7,local_1a8),local_190 + 1);
          }
          local_190 = 0xf;
          local_198 = 0;
          local_1a8 = 0;
          if (0xf < local_150) {
            FUN_140002020(CONCAT71(uStack_167,local_168),local_150 + 1);
          }
        }
        else if ((param_3 != '\0') && (bVar2)) {
          iVar8 = FUN_14000c110(*(undefined8 *)(*param_1 + uVar10 * 8),"[INITIAL_LOAD]");
          if (iVar8 != 0) {
            cVar12 = '\0';
          }
          bVar2 = false;
        }
        uVar13 = (int)uVar14 + 1;
        uVar10 = uVar10 + 1;
        uVar14 = (ulonglong)uVar13;
      } while ((int)uVar13 < local_32c[0]);
    }
    if ((local_278 != 0) && (lVar5 = FUN_1400be490(local_2f8), lVar5 == 0)) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_310 + (longlong)*(int *)(local_310[0] + 4)),2,false);
    }
    if (0xf < local_170) {
      FUN_140002020(CONCAT71(uStack_187,local_188),local_170 + 1,1);
    }
    if (cVar12 != '\0') goto LAB_14036148c;
  }
  FUN_140051e20(param_1);
LAB_14036148c:
  if (0xf < local_1b0) {
    FUN_140002020(CONCAT71(uStack_1c7,local_1c8),local_1b0 + 1,1);
  }
  local_1b0 = 0xf;
  local_1b8 = 0;
  local_1c8 = 0;
  if ((local_278 != 0) && (lVar5 = FUN_1400be490(local_2f8), lVar5 == 0)) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_310 + (longlong)*(int *)(local_310[0] + 4)),2,false);
  }
  FUN_1400bd590(local_258);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_258);
  return cVar12;
}

