// FUN_1400b5bb0 @ 1400b5bb0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140071eb0 FUN_140071eb0


void FUN_1400b5bb0(longlong param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x10,(longlong)local_res18[0]);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uVar4 = 0;
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x18) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x18) < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      pvVar1 = operator_new(0x18);
      *puVar2 = pvVar1;
      FUN_140071eb0(pvVar1,param_2);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}

