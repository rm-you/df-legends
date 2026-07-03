// FUN_1400b54b0 @ 1400b54b0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140071eb0 FUN_140071eb0
//   -> 14000bd10 FUN_14000bd10


void FUN_1400b54b0(longlong param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int local_res8 [2];
  int local_res18 [4];
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x10,(longlong)local_res18[0]);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uVar3 = 0;
  uVar4 = (*(longlong *)(param_1 + 0x18) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x18) < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      pvVar1 = operator_new(0x18);
      *puVar2 = pvVar1;
      FUN_140071eb0(pvVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar4);
  }
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000bd10(param_1 + 0x28,(longlong)local_res8[0]);
  uVar4 = *(ulonglong *)(param_1 + 0x30);
  for (uVar3 = *(ulonglong *)(param_1 + 0x28); uVar3 < uVar4; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000bd10(param_1 + 0x40,(longlong)local_res8[0]);
  uVar4 = *(ulonglong *)(param_1 + 0x48);
  for (uVar3 = *(ulonglong *)(param_1 + 0x40); uVar3 < uVar4; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x58,4);
  FUN_1405bba90(param_2,param_1 + 0x5c,4);
  FUN_1405bba90(param_2,param_1 + 0x60,4);
  if (0x649 < param_3) {
    FUN_1405bba90(param_2,local_res8,4);
    FUN_14000bd10(param_1 + 0x68,(longlong)local_res8[0]);
    uVar4 = *(ulonglong *)(param_1 + 0x70);
    for (uVar3 = *(ulonglong *)(param_1 + 0x68); uVar3 < uVar4; uVar3 = uVar3 + 4) {
      FUN_1405bba90(param_2,uVar3,4);
    }
  }
  return;
}

