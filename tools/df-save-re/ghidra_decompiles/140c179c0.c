// FUN_140c179c0 @ 140c179c0
// callees:
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140071520 FUN_140071520
//   -> 140c17680 FUN_140c17680


void FUN_140c179c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *local_res8;
  int local_res18 [4];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,(char)param_3);
  FUN_1405bb6d0(param_2,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_1405bba90(param_2,param_1 + 0x20,2);
  FUN_1405bba90(param_2,param_1 + 0x22,2);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x28,(longlong)local_res18[0]);
  lVar3 = (longlong)(local_res18[0] + -1);
  if (-1 < local_res18[0] + -1) {
    do {
      puVar2 = operator_new(0x30);
      puVar1 = puVar2 + 2;
      local_res8 = (undefined4 *)((ulonglong)puVar1 & 0xffffffff00000000);
      *puVar1 = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      FUN_140071520(puVar1,0,&local_res8);
      puVar2[5] = 0;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined8 **)(*(longlong *)(param_1 + 0x28) + lVar3 * 8) = puVar2;
      FUN_140c17680(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8));
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x40,(longlong)local_res18[0]);
  lVar3 = (longlong)(local_res18[0] + -1);
  if (-1 < local_res18[0] + -1) {
    do {
      local_res8 = operator_new(4);
      *local_res8 = 0xffffffff;
      *(undefined4 **)(*(longlong *)(param_1 + 0x40) + lVar3 * 8) = local_res8;
      FUN_1405bba90(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar3 * 8),4);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}

