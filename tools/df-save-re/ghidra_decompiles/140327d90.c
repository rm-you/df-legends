// FUN_140327d90 @ 140327d90
// callees:
//   -> 1405bc8e0 FUN_1405bc8e0
//   -> 1405bc0e0 FUN_1405bc0e0
//   -> EXTERNAL:00000092 clear
//   -> 140300e50 FUN_140300e50
//   -> 1400be580 FUN_1400be580
//   -> 1400be650 FUN_1400be650
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0
//   -> 1400be490 FUN_1400be490
//   -> EXTERNAL:000000a0 setstate
//   -> 14014d930 FUN_14014d930
//   -> EXTERNAL:000000b3 read
//   -> 1403272b0 FUN_1403272b0
//   -> 140dfb5c4 operator_new
//   -> 1403282a0 FUN_1403282a0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 1401069c0 FUN_1401069c0
//   -> 140326f70 FUN_140326f70
//   -> 1400bd590 FUN_1400bd590
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>
//   -> 140051e20 FUN_140051e20
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140327d90(ulonglong *param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  void *pvVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_358 [32];
  int local_338 [2];
  void *local_330;
  int local_328 [2];
  longlong *local_320;
  longlong lStack_318;
  longlong local_310;
  undefined8 local_308;
  undefined1 local_2f8 [8];
  longlong local_2f0 [3];
  undefined1 local_2d8 [128];
  longlong local_258;
  basic_ios<char,std::char_traits<char>_> local_238 [96];
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined *local_1c0;
  ulonglong local_1b8;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  longlong local_198;
  ulonglong local_190;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined8 local_178;
  ulonglong local_170;
  undefined8 local_168 [3];
  ulonglong local_150;
  undefined1 local_148 [272];
  ulonglong local_38;
  
  local_308 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_358;
  local_320 = (longlong *)0x0;
  lStack_318 = 0;
  iVar9 = 0;
  local_310 = 0;
  FUN_1405bc8e0();
  FUN_1405bc0e0(local_2f0);
  local_2f8[0] = 1;
  local_1d8 = &DAT_1416acb50;
  local_1d0 = 20000;
  uStack_1cc = 0;
  local_1c8 = 0;
  local_1c0 = &DAT_1416992d0;
  local_1b8 = 80000;
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)local_2f0 + (longlong)*(int *)(local_2f0[0] + 4)),0,false);
  FUN_140300e50(local_148);
  local_190 = 0xf;
  local_198 = 0;
  local_1a8 = 0;
  uVar10 = lStack_318 - (longlong)local_320 >> 3;
  plVar8 = local_320;
  if (uVar10 != 0) {
    do {
      uVar4 = FUN_1400be580(local_168,"data/save/",*plVar8);
      puVar5 = (undefined1 *)FUN_1400be650(&local_188,uVar4);
      if (&local_1a8 != puVar5) {
        if (0xf < local_190) {
          FUN_140002020(CONCAT71(uStack_1a7,local_1a8),local_190 + 1);
        }
        local_190 = 0xf;
        local_198 = 0;
        local_1a8 = 0;
        FUN_14007b2f0(&local_1a8,puVar5);
      }
      if (0xf < local_170) {
        FUN_140002020(CONCAT71(uStack_187,local_188),local_170 + 1);
      }
      local_170 = 0xf;
      local_178 = 0;
      local_188 = 0;
      if (0xf < local_150) {
        FUN_140002020(local_168[0]);
      }
      if (local_198 != 0) {
        uStack_1cc = 0;
        local_1c8 = 0;
        local_1b8 = local_1b8 & 0xffffffff;
        if ((local_258 != 0) && (lVar6 = FUN_1400be490(local_2d8), lVar6 == 0)) {
          std::basic_ios<char,std::char_traits<char>_>::setstate
                    ((basic_ios<char,std::char_traits<char>_> *)
                     ((longlong)local_2f0 + (longlong)*(int *)(local_2f0[0] + 4)),2,false);
        }
        std::basic_ios<char,std::char_traits<char>_>::clear
                  ((basic_ios<char,std::char_traits<char>_> *)
                   ((longlong)local_2f0 + (longlong)*(int *)(local_2f0[0] + 4)),0,false);
        lVar6 = FUN_14014d930(local_2d8);
        if (lVar6 == 0) {
          std::basic_ios<char,std::char_traits<char>_>::setstate
                    ((basic_ios<char,std::char_traits<char>_> *)
                     ((longlong)local_2f0 + (longlong)*(int *)(local_2f0[0] + 4)),2,false);
        }
        else {
          std::basic_ios<char,std::char_traits<char>_>::clear
                    ((basic_ios<char,std::char_traits<char>_> *)
                     ((longlong)local_2f0 + (longlong)*(int *)(local_2f0[0] + 4)),0,false);
        }
        if (local_258 != 0) {
          local_338[0] = 1;
          std::basic_istream<char,std::char_traits<char>_>::read
                    ((basic_istream<char,std::char_traits<char>_> *)local_2f0,(char *)local_328,4);
          std::basic_istream<char,std::char_traits<char>_>::read
                    ((basic_istream<char,std::char_traits<char>_> *)local_2f0,(char *)local_338,4);
          local_2f8[0] = local_338[0] != 0;
          if (((local_328[0] <= DAT_1416992c8) && (DAT_141699290 <= local_328[0])) &&
             (cVar3 = FUN_1403272b0(local_148,local_2f8), cVar3 != '\0')) {
            local_330 = operator_new(0x110);
            pvVar7 = (void *)FUN_140300e50(local_330);
            local_330 = pvVar7;
            FUN_1403282a0(pvVar7,local_148);
            if ((longlong)pvVar7 + 0xf0 != *plVar8) {
              FUN_14000c8b0();
            }
            ppvVar1 = (void **)param_1[1];
            if ((&local_330 < ppvVar1) && (ppvVar2 = (void **)*param_1, ppvVar2 <= &local_330)) {
              if (ppvVar1 == (void **)param_1[2]) {
                FUN_1401069c0(param_1);
              }
              if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                *(undefined8 *)param_1[1] =
                     *(undefined8 *)
                      (*param_1 + ((longlong)local_328 + (-8 - (longlong)ppvVar2) >> 3) * 8);
              }
            }
            else {
              if (ppvVar1 == (void **)param_1[2]) {
                FUN_1401069c0(param_1);
              }
              if ((longlong *)param_1[1] != (longlong *)0x0) {
                *(longlong *)param_1[1] = (longlong)pvVar7;
              }
            }
            param_1[1] = param_1[1] + 8;
          }
          if ((local_258 != 0) && (lVar6 = FUN_1400be490(local_2d8), lVar6 == 0)) {
            std::basic_ios<char,std::char_traits<char>_>::setstate
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)local_2f0 + (longlong)*(int *)(local_2f0[0] + 4)),2,false);
          }
        }
      }
      iVar9 = iVar9 + 1;
      plVar8 = plVar8 + 1;
    } while ((ulonglong)(longlong)iVar9 < uVar10);
  }
  if (0xf < local_190) {
    FUN_140002020(CONCAT71(uStack_1a7,local_1a8),local_190 + 1);
  }
  local_190 = 0xf;
  local_198 = 0;
  local_1a8 = 0;
  FUN_140326f70(local_148);
  if ((local_258 != 0) && (lVar6 = FUN_1400be490(local_2d8), lVar6 == 0)) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_2f0 + (longlong)*(int *)(local_2f0[0] + 4)),2,false);
  }
  FUN_1400bd590(local_238);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_238);
  FUN_140051e20(&local_320);
  if (local_320 != (longlong *)0x0) {
    FUN_140002020(local_320,local_310 - (longlong)local_320 >> 3,8);
  }
  return;
}

