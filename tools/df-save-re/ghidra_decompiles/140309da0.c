// FUN_140309da0 @ 140309da0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1405bb6d0 FUN_1405bb6d0


void FUN_140309da0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  puVar1 = (undefined8 *)param_1[1];
  for (param_1 = (undefined8 *)*param_1; param_1 < puVar1; param_1 = param_1 + 1) {
    puVar2 = operator_new(0x28);
    *(undefined8 *)(puVar2 + 0x18) = 0xf;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 0x20) = 0;
    *(undefined4 *)(puVar2 + 0x24) = 0;
    *param_1 = puVar2;
    FUN_1405bb6d0(param_2,puVar2);
    FUN_1405bba90(param_2,puVar2 + 0x20,4);
    FUN_1405bba90(param_2,puVar2 + 0x24,4);
  }
  return;
}

