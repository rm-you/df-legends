// FUN_1407b4ee0 @ 1407b4ee0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1406fa5a0 FUN_1406fa5a0
//   -> 1406fa880 FUN_1406fa880
//   -> 1406fa940 FUN_1406fa940
//   -> 14000bd10 FUN_14000bd10
//   -> 1401b8820 FUN_1401b8820
//   -> 1407b4650 FUN_1407b4650


void FUN_1407b4ee0(ulonglong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int local_res18 [2];
  int local_res20 [2];
  
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1,(longlong)local_res20[0]);
  puVar1 = (undefined8 *)param_1[1];
  for (puVar4 = (undefined8 *)*param_1; puVar4 < puVar1; puVar4 = puVar4 + 1) {
    pvVar2 = operator_new(0xa0);
    *(undefined8 *)((longlong)pvVar2 + 8) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x20) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x28) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x30) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x38) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x40) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x48) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x54) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x5c) = 0;
    *(undefined8 *)((longlong)pvVar2 + 100) = 0;
    *(undefined4 *)((longlong)pvVar2 + 4) = 0;
    *(undefined4 *)((longlong)pvVar2 + 0x6c) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 0x74) = 0xfff0bdc0;
    *(undefined4 *)((longlong)pvVar2 + 0x78) = 0xfff0bdc0;
    *(undefined4 *)((longlong)pvVar2 + 0x7c) = 0xfff0bdc0;
    *(undefined8 *)((longlong)pvVar2 + 0x80) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x88) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x90) = 0;
    *(undefined4 *)((longlong)pvVar2 + 0x98) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 0x9c) = 0xffffffff;
    *(undefined2 *)((longlong)pvVar2 + 0x50) = 0xffff;
    *puVar4 = pvVar2;
    FUN_1406fa5a0(pvVar2,param_2,param_3,param_4,pvVar2);
  }
  if (0x628 < param_3) {
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000b9d0(param_1 + 3,(longlong)local_res20[0]);
    puVar1 = (undefined8 *)param_1[4];
    for (puVar4 = (undefined8 *)param_1[3]; puVar4 < puVar1; puVar4 = puVar4 + 1) {
      pvVar2 = operator_new(0x68);
      *(undefined8 *)((longlong)pvVar2 + 8) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x20) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x28) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x30) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x38) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x40) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x48) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x50) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x58) = 0;
      *(undefined4 *)((longlong)pvVar2 + 0x60) = 0;
      *puVar4 = pvVar2;
      FUN_1406fa880(pvVar2,param_2,param_3,param_4,pvVar2);
    }
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000b9d0(param_1 + 6,(longlong)local_res20[0]);
    puVar1 = (undefined8 *)param_1[7];
    for (puVar4 = (undefined8 *)param_1[6]; puVar4 < puVar1; puVar4 = puVar4 + 1) {
      pvVar2 = operator_new(0x50);
      *(undefined8 *)((longlong)pvVar2 + 8) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x20) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x28) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x30) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x38) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x40) = 0;
      *(undefined4 *)((longlong)pvVar2 + 0x48) = 0;
      *puVar4 = pvVar2;
      FUN_1406fa940(pvVar2,param_2,param_3,param_4,pvVar2);
    }
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 9,(longlong)local_res18[0]);
  uVar3 = param_1[10];
  for (uVar5 = param_1[9]; uVar5 < uVar3; uVar5 = uVar5 + 4) {
    FUN_1405bba90(param_2,uVar5,4);
  }
  if (0x617 < param_3) {
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000b9d0(param_1 + 0xc,(longlong)local_res20[0]);
    puVar1 = (undefined8 *)param_1[0xd];
    for (puVar4 = (undefined8 *)param_1[0xc]; puVar4 < puVar1; puVar4 = puVar4 + 1) {
      pvVar2 = operator_new(0x14);
      *(undefined4 *)((longlong)pvVar2 + 8) = 0xffffffff;
      *(undefined8 *)((longlong)pvVar2 + 0xc) = 0xffffffffffffffff;
      *puVar4 = pvVar2;
      FUN_1405bba90(param_2,pvVar2,4,param_4,pvVar2);
      FUN_1405bba90(param_2,(longlong)pvVar2 + 4,4);
      FUN_1405bba90(param_2,(longlong)pvVar2 + 8,4);
      FUN_1405bba90(param_2,(longlong)pvVar2 + 0xc,4);
      FUN_1405bba90(param_2,(longlong)pvVar2 + 0x10,4);
    }
  }
  if (0x65b < param_3) {
    FUN_1405bba90(param_2,param_1 + 0xf,4);
    FUN_1405bba90(param_2,local_res18,1);
    if ((char)local_res18[0] != '\0') {
      pvVar2 = operator_new(0x130);
      uVar3 = FUN_1401b8820(pvVar2);
      param_1[0x10] = uVar3;
      FUN_1407b4650(uVar3,param_2,param_3);
    }
  }
  return;
}

