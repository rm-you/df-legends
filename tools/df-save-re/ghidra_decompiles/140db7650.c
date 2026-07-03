// FUN_140db7650 @ 140db7650
// callees:
//   -> 14007b5f0 FUN_14007b5f0
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0
//   -> 140280500 FUN_140280500
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140db7650(int *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_a8 [48];
  undefined8 local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  
  local_78 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_a8;
  local_58 = 0xf;
  iVar2 = 0;
  local_60 = 0;
  local_70 = 0;
  piVar3 = param_1;
  do {
    if (iVar2 == 0) {
      puVar1 = (undefined1 *)FUN_14007b5f0(local_50,param_2,"objects/text/book_instruction.txt");
      if (&local_70 != puVar1) {
        if (0xf < local_58) {
          FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
        }
        local_58 = 0xf;
        local_60 = 0;
        local_70 = 0;
        FUN_14007b2f0(&local_70,puVar1);
      }
LAB_140db77c9:
      if (0xf < local_38) {
        FUN_140002020(local_50[0],local_38 + 1,1);
      }
    }
    else {
      if (iVar2 == 1) {
        puVar1 = (undefined1 *)FUN_14007b5f0(local_50,param_2,"objects/text/book_art.txt");
        if (&local_70 != puVar1) {
          if (0xf < local_58) {
            FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
          }
          local_58 = 0xf;
          local_60 = 0;
          local_70 = 0;
          FUN_14007b2f0(&local_70,puVar1);
        }
        goto LAB_140db77c9;
      }
      if (iVar2 == 2) {
        puVar1 = (undefined1 *)FUN_14007b5f0(local_50,param_2,"objects/text/secret_death.txt");
        if (&local_70 != puVar1) {
          if (0xf < local_58) {
            FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
          }
          local_58 = 0xf;
          local_60 = 0;
          local_70 = 0;
          FUN_14007b2f0(&local_70,puVar1);
        }
        goto LAB_140db77c9;
      }
    }
    *piVar3 = DAT_141c3f130;
    DAT_141c3f130 = DAT_141c3f130 + 1;
    FUN_140280500(&DAT_141c33eb0,&local_70,param_1 + iVar2);
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
    if (2 < iVar2) {
      if (0xf < local_58) {
        FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
      }
      return;
    }
  } while( true );
}

