// FUN_140cafb70 @ 140cafb70
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 1407ef4f0 FUN_1407ef4f0
//   -> 140c23e60 FUN_140c23e60
//   -> 140dfb5b4 free
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140caf720 FUN_140caf720


void FUN_140cafb70(longlong param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar5;
  int local_res8 [4];
  char local_res18 [8];
  undefined4 *local_res20;
  ulonglong uVar4;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x24,4);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  FUN_1405bba90(param_2,param_1 + 0x2c,4);
  FUN_1405bba90(param_2,param_1 + 0x30,4);
  FUN_1405bba90(param_2,param_1 + 0x34,4);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  FUN_1405bba90(param_2,param_1 + 0x44,4);
  FUN_1405bba90(param_2,param_1 + 0x48,4);
  if (0x5ed < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x58,4);
    FUN_1405bba90(param_2,param_1 + 0x5c,4);
  }
  FUN_1405bba90(param_2,local_res18,1);
  uVar4 = 0;
  if (local_res18[0] == '\0') {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    local_res20 = operator_new(0x118);
    uVar2 = FUN_1407ef4f0(local_res20);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    FUN_140c23e60(uVar2,param_2,param_3);
    if ((param_3 < 0x650) && (*(int *)(param_1 + 0x30) == -1)) {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x50) + 0x90);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x90) = 0;
      }
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x50) + 0x98);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x98) = 0;
      }
    }
  }
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 8,(longlong)local_res8[0]);
  uVar5 = uVar4;
  if (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3 != 0) {
    do {
      local_res20 = operator_new(0xa8);
      *(undefined8 *)(local_res20 + 6) = 0;
      *(undefined8 *)(local_res20 + 8) = 0;
      *(undefined8 *)(local_res20 + 10) = 0;
      *(undefined8 *)(local_res20 + 0xc) = 0;
      *(undefined8 *)(local_res20 + 0xe) = 0;
      *(undefined8 *)(local_res20 + 0x10) = 0;
      *(undefined8 *)(local_res20 + 0x12) = 0;
      *(undefined8 *)(local_res20 + 0x14) = 0;
      *(undefined8 *)(local_res20 + 0x16) = 0;
      *local_res20 = 0xffffffff;
      *(undefined2 *)(local_res20 + 1) = 0xffff;
      *(undefined2 *)((longlong)local_res20 + 6) = 0xffff;
      local_res20[2] = 1;
      *(undefined2 *)(local_res20 + 3) = 0;
      local_res20[4] = 0;
      *(undefined8 *)(local_res20 + 0x19) = 0;
      *(undefined2 *)(local_res20 + 0x18) = 0;
      *(undefined8 *)(local_res20 + 0x1b) = 0;
      *(undefined8 *)(local_res20 + 0x1d) = 0;
      *(undefined8 *)(local_res20 + 0x1f) = 0;
      *(undefined8 *)(local_res20 + 0x21) = 0;
      *(undefined8 *)(local_res20 + 0x23) = 0;
      *(undefined8 *)(local_res20 + 0x25) = 0;
      local_res20[0x27] = 0xffffffff;
      local_res20[0x28] = 0;
      *(undefined4 **)(uVar5 + *(longlong *)(param_1 + 8)) = local_res20;
      FUN_140caf720(*(undefined8 *)(uVar5 + *(longlong *)(param_1 + 8)),param_2,param_3);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3));
  }
  return;
}

