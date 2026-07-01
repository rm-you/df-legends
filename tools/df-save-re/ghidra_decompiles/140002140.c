// FUN_140002140 @ 140002140
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000bed0 FUN_14000bed0


void FUN_140002140(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_res10 [2];
  
  FUN_1405bba90(param_1,local_res10,4);
  FUN_14000bed0(param_2,(longlong)local_res10[0]);
  uVar1 = param_2[1];
  for (uVar2 = *param_2; uVar2 < uVar1; uVar2 = uVar2 + 2) {
    FUN_1405bba90(param_1,uVar2,2);
  }
  return;
}

