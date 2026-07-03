// FUN_1408288d0 @ 1408288d0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000c780 FUN_14000c780
//   -> 14014a650 FUN_14014a650
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 14014a240 FUN_14014a240
//   -> 14014a480 FUN_14014a480
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408288d0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  char local_68 [4];
  int local_64 [3];
  undefined1 local_58;
  undefined7 uStack_57;
  longlong local_48;
  ulonglong local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_64[1] = -2;
  local_64[2] = -1;
  local_18 = DAT_1410b5008 ^ (ulonglong)auStack_88;
  FUN_1405bba90(param_2,local_68,1);
  if (local_68[0] == '\0') {
    *param_1 = 0;
    FUN_14014a480("NULL inventory pointer on load");
  }
  else {
    FUN_1405bba90(param_2,local_64);
    iVar2 = (int)(DAT_141c67370 - DAT_141c67368 >> 3);
    if ((iVar2 != 0) && (local_64[0] != -1)) {
      iVar2 = iVar2 + -1;
      iVar3 = 0;
      if (-1 < iVar2) {
        do {
          iVar1 = iVar3 + iVar2 >> 1;
          lVar4 = *(longlong *)(DAT_141c67368 + (longlong)iVar1 * 8);
          if (*(int *)(lVar4 + 0x1c) == local_64[0]) goto LAB_140828989;
          if (local_64[0] < *(int *)(lVar4 + 0x1c)) {
            iVar2 = iVar1 + -1;
          }
          else {
            iVar3 = iVar1 + 1;
          }
        } while (iVar3 <= iVar2);
      }
    }
    lVar4 = 0;
LAB_140828989:
    *param_1 = lVar4;
    if (lVar4 == 0) {
      local_40 = 0xf;
      local_58 = 0;
      local_48 = lVar4;
      FUN_14000c780(&local_58,"NULL inventory item on load: id #",0x21);
      local_20 = 0xf;
      local_28 = 0;
      local_38 = 0;
      FUN_14014a650(local_64[0],&local_38);
      FUN_14000cb40(&local_58,&local_38,0,0xffffffffffffffff);
      if (0xf < local_20) {
        FUN_140002020(CONCAT71(uStack_37,local_38),local_20 + 1,1);
      }
      FUN_14014a240(&local_58);
      if (0xf < local_40) {
        FUN_140002020(CONCAT71(uStack_57,local_58),local_40 + 1,1);
      }
    }
  }
  FUN_1405bba90(param_2,param_1 + 1,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 10,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 2,4);
  return;
}

