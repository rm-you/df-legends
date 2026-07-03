// FUN_14073bc10 @ 14073bc10
// callees:
//   -> 140620120 FUN_140620120
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14073bc10(undefined8 param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_58;
  iVar3 = (int)(DAT_141c68018 - DAT_141c68010 >> 3);
  if ((iVar3 != 0) && (param_3 != -1)) {
    iVar3 = iVar3 + -1;
    uVar4 = 0;
    if (-1 < iVar3) {
      do {
        iVar2 = (int)uVar4 + iVar3 >> 1;
        piVar1 = *(int **)(DAT_141c68010 + (longlong)iVar2 * 8);
        if (*piVar1 == param_3) {
          if (piVar1 != (int *)0x0) {
            local_18 = 0xf;
            local_20 = 0;
            local_30 = 0;
            FUN_140620120(piVar1 + 2,&local_30,CONCAT71((int7)(uVar4 >> 8),1),0);
            if (local_20 == 0) {
              FUN_14000c780(&local_30,"Untitled",8);
            }
            FUN_14000cb40(param_2,&local_30,0,0xffffffffffffffff);
            if (local_18 < 0x10) {
              return;
            }
            FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
            return;
          }
          break;
        }
        if (param_3 < *piVar1) {
          iVar3 = iVar2 + -1;
        }
        else {
          uVar4 = (ulonglong)(iVar2 + 1);
        }
      } while ((int)uVar4 <= iVar3);
    }
  }
  FUN_14000c9f0(param_2,"an unknown artifact",0x13);
  return;
}

