// FUN_140002fc0 @ 140002fc0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140002d90 FUN_140002d90
//   -> 14000bd10 FUN_14000bd10


void FUN_140002fc0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 *local_res8;
  int local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  puVar1 = (undefined8 *)param_1[1];
  for (puVar3 = (undefined8 *)*param_1; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    local_res8 = operator_new(0x20);
    *local_res8 = 0;
    *(undefined8 *)(local_res8 + 1) = 0xffffffffffffffff;
    *(undefined8 *)(local_res8 + 3) = 0xffffffffffffffff;
    local_res8[5] = 0xffffffff;
    *(undefined8 *)(local_res8 + 6) = 0;
    *puVar3 = local_res8;
    FUN_140002d90(local_res8,param_2);
  }
  FUN_1405bba90(param_2,&local_res8,4);
  FUN_14000bd10(param_1 + 3,(longlong)(int)local_res8);
  uVar2 = param_1[4];
  for (uVar4 = param_1[3]; uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  return;
}

