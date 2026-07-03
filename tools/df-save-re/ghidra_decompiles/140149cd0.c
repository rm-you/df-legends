// FUN_140149cd0 @ 140149cd0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_140149cd0(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400021b0(param_2,param_1 + 4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0xc) - *(longlong *)(param_1 + 10) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  plVar2 = *(longlong **)(param_1 + 10);
  uVar3 = 0;
  uVar4 = (*(longlong *)(param_1 + 0xc) - (longlong)plVar2) + 7U >> 3;
  if (*(longlong **)(param_1 + 0xc) < plVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar2;
      FUN_1400021b0(param_2,lVar1);
      local_res18[0] = *(undefined4 *)(lVar1 + 0x18);
      FUN_1405bb7c0(param_2,local_res18,4);
      local_res18[0] = *(undefined4 *)(lVar1 + 0x1c);
      FUN_1405bb7c0(param_2,local_res18,4);
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 1;
    } while (uVar3 < uVar4);
  }
  return;
}

