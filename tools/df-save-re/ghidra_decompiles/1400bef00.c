// FUN_1400bef00 @ 1400bef00
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400be960 FUN_1400be960


void FUN_1400bef00(ulonglong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  
  local_res8[0] = (undefined4)((longlong)(param_1[1] - *param_1) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  plVar2 = (longlong *)*param_1;
  uVar3 = 0;
  uVar4 = (ulonglong)((longlong)param_1[1] + (7 - (longlong)plVar2)) >> 3;
  if ((longlong *)param_1[1] < plVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar2;
      FUN_1400be960(lVar1,param_2);
      local_res8[0] = *(undefined4 *)(lVar1 + 0x40);
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = *(undefined4 *)(lVar1 + 0x44);
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 1;
    } while (uVar3 < uVar4);
  }
  return;
}

