// FUN_140339e10 @ 140339e10
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140306590 FUN_140306590


void FUN_140339e10(undefined2 *param_1,undefined8 param_2)

{
  ushort uVar1;
  ulonglong uVar3;
  undefined2 local_res8 [4];
  ulonglong uVar2;
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] =
       (undefined2)((longlong)(ulonglong)(uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) >> 3)
  ;
  FUN_1405bb7c0(param_2,local_res8,2);
  uVar2 = 0;
  uVar3 = uVar2;
  if (*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 4) >> 3 != 0) {
    do {
      FUN_140306590(*(undefined8 *)(*(longlong *)(param_1 + 4) + uVar3 * 8),param_2);
      uVar1 = (short)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = (longlong)(short)uVar1;
    } while ((ulonglong)(longlong)(short)uVar1 <
             (ulonglong)(*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 4) >> 3));
  }
  return;
}

