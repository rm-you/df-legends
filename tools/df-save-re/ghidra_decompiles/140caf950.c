// FUN_140caf950 @ 140caf950
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140c23ae0 FUN_140c23ae0
//   -> 140caf460 FUN_140caf460


void FUN_140caf950(uint *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint local_res8 [2];
  undefined1 local_res18 [8];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[8];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[9];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[10];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xb];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xc];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xe];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xf];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x10];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x11];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x12];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x16];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x17];
  FUN_1405bb7c0(param_2,local_res8,4);
  if (*(longlong *)(param_1 + 0x14) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_140c23ae0(*(undefined8 *)(param_1 + 0x14),param_2);
  }
  local_res8[0] = (uint)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 3 != 0) {
    do {
      FUN_140caf460(*(undefined8 *)(*(longlong *)(param_1 + 2) + uVar1),param_2);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 3));
  }
  return;
}

