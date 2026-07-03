// FUN_14014da90 @ 14014da90
// callees:
//   -> 14000c780 FUN_14000c780
//   -> 14007b2f0 FUN_14007b2f0
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14014da90(longlong param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (((*(uint *)(param_1 + 0x70) & 2) == 0) &&
     (uVar1 = **(ulonglong **)(param_1 + 0x40), uVar1 != 0)) {
    plVar2 = *(longlong **)(param_1 + 0x20);
    uVar3 = *(ulonglong *)(param_1 + 0x68);
    if (*(ulonglong *)(param_1 + 0x68) < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    if (((*(uint *)(param_1 + 0x70) & 4) != 0) || (**(longlong **)(param_1 + 0x38) == 0)) {
      local_18 = 0xf;
      local_20 = 0;
      local_30 = 0;
      goto LAB_14014db2e;
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    uVar3 = (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
  }
  local_18 = 0xf;
  local_20 = 0;
  local_30 = 0;
  FUN_14000c780(&local_30,*plVar2,uVar3 - *plVar2);
LAB_14014db2e:
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_14007b2f0(param_2,&local_30);
  if (0xf < local_18) {
    FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
  }
  return param_2;
}

