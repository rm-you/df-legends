// FUN_140b16370 @ 140b16370
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140b1bcf0 FUN_140b1bcf0


void FUN_140b16370(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  ulonglong uVar3;
  int local_res8 [2];
  ulonglong uVar2;
  
  local_res8[0] =
       CONCAT22(local_res8[0]._2_2_,
                (short)((longlong)(ulonglong)(uint)((int)param_1[1] - (int)*param_1) >> 3));
  FUN_1405bb7c0(param_2,local_res8,2);
  uVar2 = 0;
  uVar3 = uVar2;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      FUN_140b1bcf0(*(undefined8 *)(*param_1 + uVar3 * 8),param_2);
      uVar1 = (short)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = (longlong)(short)uVar1;
    } while ((ulonglong)(longlong)(short)uVar1 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  local_res8[0] = (int)param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(int *)((longlong)param_1 + 0x1c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (int)param_1[4];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(int *)((longlong)param_1 + 0x24);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = (short)param_1[5];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 0x2a);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 0x2c);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0x2e));
  FUN_1405bb7c0(param_2,local_res8,2);
  return;
}

