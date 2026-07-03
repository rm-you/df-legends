// FUN_14047b0c0 @ 14047b0c0
// callees:
//   -> 140300b20 FUN_140300b20
//   -> EXTERNAL:0000009c widen
//   -> 140300ca0 FUN_140300ca0
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 1400be490 FUN_1400be490
//   -> EXTERNAL:000000a0 setstate
//   -> 140300ac0 FUN_140300ac0
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14047b0c0(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_188 [48];
  undefined8 local_158;
  longlong local_148 [2];
  undefined1 local_138 [128];
  longlong local_b8;
  basic_ios<char,std::char_traits<char>_> local_98 [96];
  undefined1 local_38;
  undefined7 uStack_37;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_158 = 0xfffffffffffffffe;
  local_18 = DAT_1410b5008 ^ (ulonglong)auStack_188;
  if (*(ulonglong *)(param_1 + 0x20) < 0x10) {
    lVar3 = param_1 + 8;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 8);
  }
  FUN_140300b20(local_148,lVar3,1);
  local_20 = 0xf;
  local_28 = 0;
  local_38 = 0;
  if (local_b8 == 0) {
    FUN_14000c780(&local_38,"Error Initializing Text: ");
    FUN_14000cb40(&local_38,param_1 + 8,0,0xffffffffffffffff);
    FUN_14014a240(&local_38);
  }
  else {
    std::basic_ios<char,std::char_traits<char>_>::widen
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)),'\n');
    plVar2 = (longlong *)FUN_140300ca0(local_148,&local_38);
    bVar1 = *(byte *)((longlong)*(int *)(*plVar2 + 4) + 0x10 + (longlong)plVar2);
    while ((bVar1 & 6) == 0) {
      if (local_28 != 0) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      std::basic_ios<char,std::char_traits<char>_>::widen
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)),'\n');
      plVar2 = (longlong *)FUN_140300ca0(local_148,&local_38);
      bVar1 = *(byte *)((longlong)*(int *)(*plVar2 + 4) + 0x10 + (longlong)plVar2);
    }
  }
  if (0xf < local_20) {
    FUN_140002020(CONCAT71(uStack_37,local_38),local_20 + 1);
  }
  lVar3 = FUN_1400be490(local_138);
  if (lVar3 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)),2,false);
  }
  FUN_140300ac0(local_98);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_98);
  return;
}

