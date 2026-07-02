// FUN_1406f8d00 @ 1406f8d00
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140071eb0 FUN_140071eb0
//   -> 14000bd10 FUN_14000bd10


void FUN_1406f8d00(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  void *local_res8;
  int local_res18 [2];
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x24,4);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x30,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  for (puVar3 = *(undefined8 **)(param_1 + 0x30); puVar3 < puVar1; puVar3 = puVar3 + 1) {
    local_res8 = operator_new(0x18);
    *(undefined8 *)((longlong)local_res8 + 4) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)local_res8 + 0xc) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)local_res8 + 0x14) = 0xffffffff;
    *puVar3 = local_res8;
    FUN_140071eb0(local_res8,param_2);
  }
  if (0x634 < param_3) {
    FUN_1405bba90(param_2,&local_res8,4);
    FUN_14000bd10(param_1 + 0x48,(longlong)(int)local_res8);
    uVar2 = *(ulonglong *)(param_1 + 0x50);
    for (uVar4 = *(ulonglong *)(param_1 + 0x48); uVar4 < uVar2; uVar4 = uVar4 + 4) {
      FUN_1405bba90(param_2,uVar4,4);
    }
  }
  return;
}

