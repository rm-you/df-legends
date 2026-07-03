// FUN_140526e10 @ 140526e10
// callees:
//   -> 140dfc99c memset
//   -> 14000c460 FUN_14000c460
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140526e10(longlong param_1,ulonglong *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 auStack_f8 [32];
  undefined2 local_d8 [8];
  char local_c8 [5];
  undefined1 local_c3;
  undefined1 local_8c;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined4 local_7a;
  undefined2 local_76;
  undefined1 local_74;
  undefined1 local_67;
  undefined1 local_5c;
  undefined1 local_41;
  ulonglong local_28;
  
  local_28 = DAT_1410b5008 ^ (ulonglong)auStack_f8;
  memset(local_c8,0,0x93);
  iVar5 = 0;
  pcVar6 = (char *)(param_1 + 0x328);
  iVar3 = 0;
  do {
    if (*pcVar6 == '\0') goto switchD_140526e87_caseD_b;
    switch((short)iVar3) {
    case 2:
    case 3:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xf:
      local_80 = CONCAT13(local_80._3_1_,0x10101);
      goto LAB_140526e93;
    case 4:
      local_7c = 1;
      break;
    case 5:
      local_80 = 0x1010101;
LAB_140526e93:
      local_7a = 0x1010101;
      local_76 = 0x101;
      local_74 = 1;
      break;
    case 6:
      local_7b = 1;
      break;
    case 0xe:
      local_c3 = 1;
      break;
    case 0x18:
      local_8c = 1;
      break;
    case 0x19:
      local_41 = 1;
    }
switchD_140526e87_caseD_b:
    iVar3 = iVar3 + 1;
    pcVar6 = pcVar6 + 1;
    if (0x29 < iVar3) {
      if (0 < *(short *)(param_1 + 0x278)) {
        local_5c = 1;
        local_67 = 1;
      }
      pcVar6 = local_c8;
      do {
        if (*pcVar6 != '\0') {
          puVar1 = (undefined2 *)param_2[1];
          uVar4 = (undefined2)iVar5;
          local_d8[0] = uVar4;
          if ((local_d8 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_d8)) {
            if (puVar1 == (undefined2 *)param_2[2]) {
              FUN_14000c460(param_2,1);
            }
            if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
              *(undefined2 *)param_2[1] =
                   *(undefined2 *)(*param_2 + ((longlong)local_d8 - (longlong)puVar2 >> 1) * 2);
            }
          }
          else {
            if (puVar1 == (undefined2 *)param_2[2]) {
              FUN_14000c460(param_2,1);
            }
            if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
              *(undefined2 *)param_2[1] = uVar4;
            }
          }
          param_2[1] = param_2[1] + 2;
        }
        iVar5 = iVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (iVar5 < 0x93);
      return;
    }
  } while( true );
}

