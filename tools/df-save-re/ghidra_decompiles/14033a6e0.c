// FUN_14033a6e0 @ 14033a6e0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140306650 FUN_140306650


void FUN_14033a6e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  void *pvVar1;
  short sVar2;
  ulonglong uVar3;
  undefined4 local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,2);
  FUN_1405bba90(param_2,param_1 + 2,2);
  FUN_1405bba90(param_2,local_res18,2);
  FUN_14000b9d0(param_1 + 8,(longlong)(short)local_res18[0]);
  uVar3 = 0;
  sVar2 = 0;
  if (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3 != 0) {
    do {
      pvVar1 = operator_new(0x70);
      *(undefined8 *)((longlong)pvVar1 + 8) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x20) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x28) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x30) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x38) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x40) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x48) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x50) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x58) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x60) = 0;
      *(void **)(*(longlong *)(param_1 + 8) + uVar3 * 8) = pvVar1;
      FUN_140306650(*(undefined8 *)(*(longlong *)(param_1 + 8) + uVar3 * 8),param_2);
      sVar2 = sVar2 + 1;
      uVar3 = (ulonglong)sVar2;
    } while (uVar3 < (ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3));
  }
  return;
}

