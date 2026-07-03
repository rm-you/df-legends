// FUN_140490ae0 @ 140490ae0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140490980 FUN_140490980
//   -> 14000bd10 FUN_14000bd10


void FUN_140490ae0(ulonglong *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  void *local_res8;
  int local_res18 [4];
  
  FUN_1405bba90(param_2,param_1 + 9,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  puVar1 = (undefined8 *)param_1[1];
  for (puVar3 = (undefined8 *)*param_1; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    local_res8 = operator_new(0xa0);
    *(undefined8 *)((longlong)local_res8 + 8) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x10) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x18) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x20) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x28) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x30) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x38) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x40) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x48) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x50) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x58) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x60) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x68) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x70) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x78) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x80) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x88) = 0;
    *(undefined8 *)((longlong)local_res8 + 0x90) = 0;
    *(undefined4 *)((longlong)local_res8 + 4) = 0;
    *(undefined4 *)((longlong)local_res8 + 0x98) = 0;
    *puVar3 = local_res8;
    FUN_140490980(local_res8,param_2,param_3);
  }
  FUN_1405bba90(param_2,&local_res8,4);
  FUN_14000bd10(param_1 + 3,(longlong)(int)local_res8);
  uVar2 = param_1[4];
  for (uVar4 = param_1[3]; uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  if (0x6a9 < param_3) {
    FUN_1405bba90(param_2,&local_res8,4);
    FUN_14000bd10(param_1 + 6,(longlong)(int)local_res8);
    uVar2 = param_1[7];
    for (uVar4 = param_1[6]; uVar4 < uVar2; uVar4 = uVar4 + 4) {
      FUN_1405bba90(param_2,uVar4,4);
    }
  }
  return;
}

