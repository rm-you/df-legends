// FUN_1401610a0 @ 1401610a0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1401b2e10 FUN_1401b2e10


void FUN_1401610a0(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_res10 [2];
  
  FUN_1405bba90(param_1,local_res10,4);
  FUN_1401b2e10(param_2,(longlong)local_res10[0]);
  uVar1 = param_2[1];
  for (uVar2 = *param_2; uVar2 < uVar1; uVar2 = uVar2 + 1) {
    FUN_1405bba90(param_1,uVar2,1);
  }
  return;
}

