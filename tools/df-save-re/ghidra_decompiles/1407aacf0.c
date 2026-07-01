// FUN_1407aacf0 @ 1407aacf0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1407ab080 FUN_1407ab080


void FUN_1407aacf0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint local_res8 [2];
  undefined1 local_res18 [8];
  
  local_res8[0] = (uint)(param_1[1] - *param_1 >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = (undefined8 *)*param_1;
  uVar4 = 0;
  uVar3 = (param_1[1] - (longlong)puVar1) + 7U >> 3;
  if ((undefined8 *)param_1[1] < puVar1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      local_res8[0] = *(uint *)*puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  local_res8[0] = *(uint *)(param_1 + 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x1c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x11);
  FUN_1405bb7c0(param_2,local_res8,4);
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    puVar2 = (uint *)((longlong)param_1 + 0x54);
    lVar5 = 0xd;
    do {
      local_res8[0] = puVar2[-0xd];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      puVar2 = puVar2 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_1[0x12] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1407ab080(param_1[0x12],param_2);
  }
  return;
}

