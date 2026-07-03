// FUN_140541a20 @ 140541a20
// callees:
//   -> 140019a10 FUN_140019a10
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140620120 FUN_140620120
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140541a20(longlong param_1,int *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_58;
  puVar2 = *(undefined8 **)(param_1 + 200);
  while( true ) {
    if (*(undefined8 **)(param_1 + 0xd0) <= puVar2) {
      return 0;
    }
    puVar1 = (undefined4 *)*puVar2;
    if (((puVar1[6] & 0x200) != 0) && (puVar1[2] == *param_2)) break;
    puVar2 = puVar2 + 1;
  }
  lVar3 = FUN_140019a10(DAT_141d6cfd0,*puVar1);
  if (lVar3 == 0) {
    return 0;
  }
  FUN_14000c9f0(param_3,&DAT_140e5d570,4);
  local_18 = 0xf;
  local_20 = 0;
  local_30 = 0;
  FUN_140620120(lVar3,&local_30,1,0);
  FUN_14000cb40(param_3,&local_30,0,0xffffffffffffffff);
  if (0xf < local_18) {
    FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
  }
  return 1;
}

