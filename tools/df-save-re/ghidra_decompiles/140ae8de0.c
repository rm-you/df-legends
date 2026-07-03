// FUN_140ae8de0 @ 140ae8de0
// callees:
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14014a650 FUN_14014a650
//   -> 140002020 FUN_140002020
//   -> EXTERNAL:0000010f _unlink
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ae8de0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char *_Filename;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  char local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_58 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  uVar5 = uVar3;
  if (*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x168));
      if ((*(int *)(lVar1 + 0x2a8) < 1) || ((**(byte **)(lVar1 + 0x2a0) & 0x80) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_38 = 0xf;
        local_40 = 0;
        local_50 = '\0';
        FUN_14000c780(&local_50,"data/save/",10);
        FUN_14000cb40(&local_50,&DAT_141ebec68,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_50,"/site-",6);
        local_18 = 0xf;
        local_20 = 0;
        local_30 = 0;
        FUN_14014a650(*(undefined4 *)(*(longlong *)(uVar5 + *(longlong *)(param_1 + 0x168)) + 0x88),
                      &local_30);
        FUN_14000cb40(&local_50,&local_30,0);
        if (0xf < local_18) {
          FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
        }
        FUN_14000c9f0(&local_50,&DAT_140e63fa8,4);
        _Filename = &local_50;
        if (0xf < local_38) {
          _Filename = (char *)CONCAT71(uStack_4f,local_50);
        }
        _unlink(_Filename);
        if (0xf < local_38) {
          FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
        }
      }
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3));
  }
  return;
}

