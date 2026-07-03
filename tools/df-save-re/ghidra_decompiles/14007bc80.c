// FUN_14007bc80 @ 14007bc80
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1405bb6d0 FUN_1405bb6d0


void FUN_14007bc80(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < local_res18[0]) {
    do {
      puVar1 = operator_new(0x20);
      *(undefined8 *)(puVar1 + 0x18) = 0xf;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *puVar1 = 0;
      *(undefined1 **)(uVar2 + *param_1) = puVar1;
      FUN_1405bb6d0(param_2,*(undefined8 *)(uVar2 + *param_1));
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 8;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < local_res18[0]);
  }
  return;
}

