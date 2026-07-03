// FUN_140072620 @ 140072620
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 140002d90 FUN_140002d90
//   -> 140071eb0 FUN_140071eb0
//   -> 140002250 FUN_140002250
//   -> 1400721a0 FUN_1400721a0


void FUN_140072620(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    pvVar2 = operator_new(0x20);
    *(undefined4 *)((longlong)pvVar2 + 0x18) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 0x1c) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 0x14) = 0xffffffff;
    *(void **)(param_1 + 0x10) = pvVar2;
    FUN_140002d90(pvVar2,param_2);
    break;
  case 1:
    pvVar2 = operator_new(0x18);
    *(undefined4 *)((longlong)pvVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 0x10) = 0xffffffff;
    *(void **)(param_1 + 0x10) = pvVar2;
    FUN_140071eb0(pvVar2,param_2);
    break;
  case 2:
    pvVar2 = operator_new(0x18);
    *(undefined4 *)((longlong)pvVar2 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 0xc) = 0xffffffff;
    *(void **)(param_1 + 0x10) = pvVar2;
    FUN_140071eb0(pvVar2,param_2);
    break;
  case 3:
  case 0xe:
    puVar1 = operator_new(0x14);
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar6 = (undefined8 *)(puVar1 + 4);
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    FUN_1405bba90(param_2,puVar1,4);
    FUN_1405bba90(param_2,puVar1 + 1,4);
    FUN_1405bba90(param_2,puVar1 + 2,4);
    FUN_1405bba90(param_2,puVar1 + 3,4);
    goto LAB_140072a11;
  case 4:
    pvVar2 = operator_new(0x18);
    *(undefined4 *)((longlong)pvVar2 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 0xc) = 0xffffffff;
    *(void **)(param_1 + 0x10) = pvVar2;
    FUN_140071eb0(pvVar2,param_2);
    break;
  case 5:
    puVar1 = operator_new(0x18);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    FUN_140071eb0(puVar1,param_2);
    break;
  case 6:
  case 8:
  case 9:
  case 0xf:
    puVar4 = operator_new(0x10);
    uVar5 = 0xffffffff;
    *puVar4 = 0xffffffff;
    puVar1 = puVar4 + 1;
    puVar7 = puVar4 + 2;
    *puVar1 = 0xffffffff;
    *puVar7 = 0xffffffff;
    goto LAB_1400729cb;
  case 7:
    puVar1 = operator_new(0x30);
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[10] = 0xffffffff;
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    FUN_1405bba90(param_2,puVar1,4);
    FUN_1405bba90(param_2,puVar1 + 1,4);
    FUN_1405bba90(param_2,puVar1 + 2,4);
    FUN_1405bba90(param_2,puVar1 + 3,4);
    FUN_140002250(param_2,puVar1 + 4);
    FUN_1405bba90(param_2,puVar1 + 10,4);
    break;
  case 10:
    puVar1 = operator_new(0x18);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    FUN_140071eb0(puVar1,param_2);
    break;
  case 0xb:
    puVar3 = operator_new(0x20);
    *puVar3 = 0;
    puVar6 = puVar3 + 3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)puVar6 = 0xffffffff;
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    FUN_140002250(param_2,puVar3);
    goto LAB_140072a11;
  case 0xc:
    puVar1 = operator_new(0x24);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    *(undefined2 *)(puVar1 + 6) = 0xffff;
    *(undefined8 *)(puVar1 + 7) = 0;
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    FUN_1400721a0(puVar1,param_2);
    break;
  case 0xd:
    puVar4 = operator_new(0x10);
    puVar4[1] = 0xffffffff;
    puVar4[2] = 0xffffffff;
    puVar1 = puVar4 + 1;
    *puVar4 = 0xffffffff;
    puVar7 = puVar4 + 2;
    uVar5 = 0;
LAB_1400729cb:
    puVar4[3] = uVar5;
    puVar6 = (undefined8 *)(puVar4 + 3);
    *(undefined4 **)(param_1 + 0x10) = puVar4;
    FUN_1405bba90(param_2,puVar4,4);
    FUN_1405bba90(param_2,puVar1,4);
    FUN_1405bba90(param_2,puVar7,4);
LAB_140072a11:
    FUN_1405bba90(param_2,puVar6,4);
  }
  return;
}

