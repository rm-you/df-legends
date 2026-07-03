// FUN_14031be40 @ 14031be40
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1401b2e10 FUN_1401b2e10


void FUN_14031be40(ulonglong *param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int local_res18 [4];
  
  lVar3 = 0x6b;
  local_res18[0] = param_3;
  do {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_1401b2e10(param_1,(longlong)local_res18[0]);
    uVar1 = param_1[1];
    for (uVar2 = *param_1; uVar2 < uVar1; uVar2 = uVar2 + 1) {
      FUN_1405bba90(param_2,uVar2,1);
    }
    param_1 = param_1 + 3;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

