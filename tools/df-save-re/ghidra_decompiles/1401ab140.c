// FUN_1401ab140 @ 1401ab140
// callees:
//   -> 1403197e0 FUN_1403197e0
//   -> 1405bba90 FUN_1405bba90


void FUN_1401ab140(longlong param_1,undefined8 param_2)

{
  short local_res8 [4];
  
  FUN_1403197e0();
  FUN_1405bba90(param_2,local_res8,2);
  *(int *)(param_1 + 0x178) = (int)local_res8[0];
  return;
}

