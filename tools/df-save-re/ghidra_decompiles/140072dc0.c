// FUN_140072dc0 @ 140072dc0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140071ce0 FUN_140071ce0
//   -> 140072620 FUN_140072620


void FUN_140072dc0(longlong param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int local_res18 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 8,(longlong)local_res18[0]);
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar4 = 0;
  uVar5 = (*(longlong *)(param_1 + 0x10) - (longlong)puVar3) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x10) < puVar3) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      pvVar2 = operator_new(0x50);
      *(undefined8 *)((longlong)pvVar2 + 8) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x20) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x28) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x30) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x38) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x40) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x48) = 0;
      *puVar3 = pvVar2;
      FUN_140071ce0(pvVar2,param_2,param_4);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < uVar5);
  }
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x28,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  for (puVar3 = *(undefined8 **)(param_1 + 0x28); puVar3 < puVar1; puVar3 = puVar3 + 1) {
    pvVar2 = operator_new(0x20);
    *(undefined4 *)((longlong)pvVar2 + 0x18) = 0xffffffff;
    *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
    *(undefined8 *)((longlong)pvVar2 + 4) = 0xffffffffffffffff;
    *puVar3 = pvVar2;
    FUN_140072620(pvVar2,param_2);
  }
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  if (0x590 < param_4) {
    FUN_1405bba90(param_2,param_1 + 0x44,4);
    FUN_1405bba90(param_2,param_1 + 0x48,4);
  }
  if (param_4 < 0x5d5) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0x4c,4);
  }
  return;
}

