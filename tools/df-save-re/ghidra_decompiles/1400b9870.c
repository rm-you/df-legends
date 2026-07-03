// FUN_1400b9870 @ 1400b9870
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 1400b9d80 FUN_1400b9d80
//   -> 140dfb5c4 operator_new
//   -> 1400b9340 FUN_1400b9340
//   -> 1400b9180 FUN_1400b9180
//   -> 140315ac0 FUN_140315ac0
//   -> 140a40530 FUN_140a40530


void FUN_1400b9870(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  int local_res20 [2];
  
  FUN_1405bba90(param_2,param_1 + 6,4,param_4,0xfffffffffffffffe);
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1,(longlong)local_res20[0]);
  iVar5 = 0;
  if (param_1[1] - *param_1 >> 3 != 0) {
    lVar6 = 0;
    do {
      lVar1 = *param_1;
      uVar2 = FUN_1400b9d80(param_2);
      *(undefined8 *)(lVar1 + lVar6) = uVar2;
      (**(code **)(**(longlong **)(lVar6 + *param_1) + 8))
                (*(longlong **)(lVar6 + *param_1),param_2,param_3);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 3,(longlong)local_res20[0]);
  iVar5 = 0;
  if (param_1[4] - param_1[3] >> 3 != 0) {
    lVar6 = 0;
    do {
      FUN_1405bba90(param_2,local_res8,4);
      if (local_res8[0] == 0) {
        pvVar3 = operator_new(0x28);
        uVar2 = FUN_1400b9180(pvVar3);
      }
      else if (local_res8[0] == 1) {
        pvVar3 = operator_new(0x20);
        uVar2 = FUN_1400b9340(pvVar3);
      }
      else {
        uVar2 = 0;
      }
      *(undefined8 *)(lVar6 + param_1[3]) = uVar2;
      (**(code **)(**(longlong **)(lVar6 + param_1[3]) + 8))
                (*(longlong **)(lVar6 + param_1[3]),param_2,param_3);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(param_1[4] - param_1[3] >> 3));
  }
  FUN_140315ac0(param_1 + 7,param_2);
  FUN_1405bba90(param_2,param_1 + 0x16,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0xb4,2);
  FUN_1405bba90(param_2,param_1 + 0x17,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0xbc,2);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0xc4,4);
  FUN_1405bba90(param_2,local_res8,1);
  if ((char)local_res8[0] == '\0') {
    param_1[0x19] = 0;
  }
  else {
    plVar4 = (longlong *)FUN_140a40530(param_2);
    param_1[0x19] = (longlong)plVar4;
    (**(code **)(*plVar4 + 8))(plVar4,param_2,param_3);
  }
  FUN_1405bba90(param_2,param_1 + 0x1a,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0xd4,4);
  FUN_1405bba90(param_2,param_1 + 0x1b,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0xdc,2);
  return;
}

