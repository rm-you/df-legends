// FUN_140c1d8d0 @ 140c1d8d0
// callees:
//   -> 140051e20 FUN_140051e20
//   -> 140300b20 FUN_140300b20
//   -> EXTERNAL:0000009c widen
//   -> 140300ca0 FUN_140300ca0
//   -> EXTERNAL:0000011d isspace
//   -> 140050540 FUN_140050540
//   -> 140051b70 FUN_140051b70
//   -> 140002020 FUN_140002020
//   -> 1400be490 FUN_1400be490
//   -> EXTERNAL:000000a0 setstate
//   -> 140300ac0 FUN_140300ac0
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c1d8d0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_1a8 [48];
  undefined8 local_178;
  longlong local_168 [2];
  undefined1 local_158 [128];
  longlong local_d8;
  basic_ios<char,std::char_traits<char>_> local_b8 [96];
  undefined1 local_58;
  undefined7 uStack_57;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_178 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_1a8;
  FUN_140051e20();
  FUN_140300b20(local_168,param_2);
  if (local_d8 != 0) {
    local_40 = 0xf;
    local_48 = 0;
    local_58 = 0;
    std::basic_ios<char,std::char_traits<char>_>::widen
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)),'\n');
    plVar5 = (longlong *)FUN_140300ca0(local_168,&local_58);
    bVar1 = *(byte *)((longlong)*(int *)(*plVar5 + 4) + 0x10 + (longlong)plVar5);
    uVar3 = local_40;
    while (local_40 = uVar3, (bVar1 & 6) == 0) {
      uVar10 = (ulonglong)(int)(uint)local_48;
      puVar2 = (undefined1 *)CONCAT71(uStack_57,local_58);
      uVar8 = uVar10;
      uVar9 = (uint)local_48;
      if (0 < (int)(uint)local_48) {
        do {
          uVar9 = (uint)uVar8;
          puVar6 = &local_58;
          if (0xf < uVar3) {
            puVar6 = puVar2;
          }
          iVar4 = isspace((int)(char)puVar6[uVar10 - 1]);
          if (iVar4 == 0) break;
          uVar9 = uVar9 - 1;
          uVar8 = (ulonglong)uVar9;
          uVar10 = uVar10 - 1;
        } while (0 < (longlong)uVar10);
      }
      uVar8 = (ulonglong)(int)uVar9;
      if (local_48 < uVar8) {
        FUN_140050540(&local_58,uVar8 - local_48,0);
      }
      else {
        puVar6 = &local_58;
        if (0xf < uVar3) {
          puVar6 = puVar2;
        }
        local_48 = uVar8;
        puVar6[uVar8] = 0;
      }
      if (local_48 != 0) {
        FUN_140051b70(param_1,&local_58);
      }
      std::basic_ios<char,std::char_traits<char>_>::widen
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)),'\n');
      plVar5 = (longlong *)FUN_140300ca0(local_168,&local_58);
      uVar3 = local_40;
      bVar1 = *(byte *)((longlong)*(int *)(*plVar5 + 4) + 0x10 + (longlong)plVar5);
    }
    if (0xf < uVar3) {
      FUN_140002020(CONCAT71(uStack_57,local_58),uVar3 + 1);
    }
  }
  lVar7 = FUN_1400be490(local_158);
  if (lVar7 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)),2,false);
  }
  FUN_140300ac0(local_b8);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_b8);
  return;
}

