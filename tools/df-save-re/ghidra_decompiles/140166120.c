// FUN_140166120 @ 140166120
// callees:
//   -> 1403197e0 FUN_1403197e0
//   -> 1405bba90 FUN_1405bba90


void FUN_140166120(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char local_res8 [8];
  
  FUN_1403197e0();
  FUN_1405bba90(param_2,param_1 + 0x178,4);
  FUN_1405bba90(param_2,param_1 + 0x17c,4);
  cVar1 = FUN_1405bba90(param_2,local_res8,1);
  if (cVar1 != '\0') {
    *(bool *)(param_1 + 0x180) = local_res8[0] != '\0';
  }
  return;
}

