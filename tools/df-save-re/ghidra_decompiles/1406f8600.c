// FUN_1406f8600 @ 1406f8600
// callees:
//   -> 140002140 FUN_140002140
//   -> 140002250 FUN_140002250
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 1406f83c0 FUN_1406f83c0


void FUN_1406f8600(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  char local_res18 [8];
  
  FUN_140002140(param_2,param_1);
  FUN_140002250(param_2,param_1 + 0x18);
  FUN_140002140(param_2,param_1 + 0x30);
  FUN_140002250(param_2,param_1 + 0x48);
  FUN_1405bba90(param_2,param_1 + 0x60,2);
  if (0x614 < param_3) {
    FUN_1405bba90(param_2,param_1 + 100,4);
  }
  if (0x65d < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x68,4);
  }
  if (0x663 < param_3) {
    FUN_1405bba90(param_2,local_res18,1);
    if (local_res18[0] != '\0') {
      puVar1 = operator_new(0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0xffffffffffffffff;
      *(undefined8 **)(param_1 + 0x70) = puVar1;
      FUN_1406f83c0(puVar1,param_2);
      return;
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}

