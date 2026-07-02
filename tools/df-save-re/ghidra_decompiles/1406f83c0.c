// FUN_1406f83c0 @ 1406f83c0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140002250 FUN_140002250


void FUN_1406f83c0(ulonglong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int local_res18 [2];
  void *local_res20;
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  puVar6 = (undefined8 *)param_1[1];
  for (puVar7 = (undefined8 *)*param_1; puVar7 < puVar6; puVar7 = puVar7 + 1) {
    local_res20 = operator_new(0x30);
    *(undefined8 *)((longlong)local_res20 + 8) = 0;
    *(undefined8 *)((longlong)local_res20 + 0x10) = 0;
    *(undefined8 *)((longlong)local_res20 + 0x18) = 0;
    lVar1 = (longlong)local_res20 + 8;
    *(undefined4 *)((longlong)local_res20 + 0x20) = 0;
    *(undefined4 *)((longlong)local_res20 + 0x24) = 0;
    lVar2 = (longlong)local_res20 + 0x20;
    *(undefined4 *)((longlong)local_res20 + 0x28) = 0;
    lVar3 = (longlong)local_res20 + 0x24;
    lVar4 = (longlong)local_res20 + 0x28;
    *(undefined4 *)((longlong)local_res20 + 0x2c) = 0;
    lVar5 = (longlong)local_res20 + 0x2c;
    *puVar7 = local_res20;
    FUN_1405bba90(param_2,local_res20,4);
    FUN_140002250(param_2,lVar1);
    FUN_1405bba90(param_2,lVar2,4);
    FUN_1405bba90(param_2,lVar3,4);
    FUN_1405bba90(param_2,lVar4,4);
    FUN_1405bba90(param_2,lVar5,4);
  }
  FUN_1405bba90(param_2,param_1 + 3,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1c,4);
  return;
}

