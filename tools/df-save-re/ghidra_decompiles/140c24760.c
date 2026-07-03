// FUN_140c24760 @ 140c24760
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140c24430 FUN_140c24430
//   -> 14000bd10 FUN_14000bd10


void FUN_140c24760(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int local_res8 [2];
  undefined8 *local_res20;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_140002250(param_2,param_1 + 0x10);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  FUN_1405bba90(param_2,param_1 + 0x48,2);
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 0x30,(longlong)local_res8[0]);
  iVar2 = (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      local_res20 = operator_new(0x98);
      local_res20[2] = 0;
      local_res20[3] = 0;
      local_res20[4] = 0;
      local_res20[5] = 0;
      local_res20[6] = 0;
      local_res20[7] = 0;
      local_res20[8] = 0;
      local_res20[9] = 0;
      local_res20[10] = 0;
      local_res20[0xb] = 0;
      local_res20[0xc] = 0;
      local_res20[0xd] = 0;
      local_res20[0xe] = 0;
      local_res20[0xf] = 0;
      local_res20[0x10] = 0;
      *(undefined4 *)(local_res20 + 0x11) = 0;
      *local_res20 = 0;
      *(undefined4 *)(local_res20 + 1) = 0;
      *(undefined8 *)((longlong)local_res20 + 0x8c) = 0xffffffffffffffff;
      *(undefined8 **)(*(longlong *)(param_1 + 0x30) + lVar3 * 8) = local_res20;
      FUN_140c24430(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3 * 8),param_2,param_3);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  FUN_1405bba90(param_2,param_1 + 0x4c,4);
  FUN_1405bba90(param_2,&local_res20,4);
  FUN_14000bd10(param_1 + 0x50,(longlong)(int)local_res20);
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  for (uVar4 = *(ulonglong *)(param_1 + 0x50); uVar4 < uVar1; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  return;
}

