// FUN_1406fefc0 @ 1406fefc0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 1406feab0 FUN_1406feab0


void FUN_1406fefc0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char local_res8;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2);
  if (local_res8 != '\0') {
    puVar1 = operator_new(100);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    puVar1[6] = 0xffffffff;
    *(undefined8 *)(puVar1 + 7) = 0;
    puVar1[9] = 0xffffffff;
    *(undefined2 *)(puVar1 + 10) = 0x32;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0xffffffff;
    *(undefined8 *)(puVar1 + 0xd) = 0;
    puVar1[0xf] = 0xffffffff;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0xffffffff;
    puVar1[0x14] = 0xffffffff;
    puVar1[0x15] = 0xffffffff;
    puVar1[0x16] = 0xffffffff;
    *(undefined8 *)(puVar1 + 0x17) = 0;
    *(undefined4 **)(param_1 + 8) = puVar1;
    FUN_1406feab0(puVar1,param_2,param_3);
  }
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  return;
}

