// FUN_14031bf90 @ 14031bf90
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 140002140 FUN_140002140
//   -> 140002250 FUN_140002250
//   -> 1401610a0 FUN_1401610a0


void FUN_14031bf90(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18);
  if ((char)local_res18[0] == '\0') {
    *param_1 = 0;
  }
  else {
    puVar1 = operator_new(0x90);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    *param_1 = puVar1;
    FUN_140002140(param_2,puVar1);
    FUN_140002140(param_2,puVar1 + 3);
    FUN_140002140(param_2,puVar1 + 6);
    FUN_140002140(param_2,puVar1 + 9);
    FUN_140002250(param_2,puVar1 + 0xc);
    FUN_1401610a0(param_2,puVar1 + 0xf);
  }
  FUN_140002250(param_2,param_1 + 1);
  return;
}

