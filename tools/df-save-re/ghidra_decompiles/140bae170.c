// FUN_140bae170 @ 140bae170
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140bad1e0 FUN_140bad1e0
//   -> 140bad6e0 FUN_140bad6e0
//   -> 140badcc0 FUN_140badcc0


void FUN_140bae170(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int local_res18 [2];
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 0x48,4);
  FUN_1405bba90(param_2,param_1 + 0x4c,4);
  FUN_1405bba90(param_2,param_1 + 0x50,4);
  FUN_1405bba90(param_2,param_1 + 0x54,4);
  FUN_1405bba90(param_2,param_1 + 0x58,4);
  FUN_1405bba90(param_2,param_1 + 0x5c,4);
  FUN_1405bba90(param_2,param_1 + 0x60,4);
  FUN_1405bba90(param_2,param_1 + 100,4);
  FUN_1405bba90(param_2,param_1 + 0x68,4);
  FUN_1405bba90(param_2,param_1 + 0x6c,4);
  FUN_1405bba90(param_2,param_1 + 0x88,4);
  FUN_1405bba90(param_2,param_1 + 0x8c,4);
  FUN_1405bba90(param_2,param_1 + 0x90,4);
  FUN_1405bba90(param_2,param_1 + 0x94,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x70,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  for (puVar5 = *(undefined8 **)(param_1 + 0x70); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    pvVar2 = operator_new(0x1f8);
    uVar3 = FUN_140bad1e0(pvVar2);
    *puVar5 = uVar3;
    FUN_140bad6e0(uVar3,param_2,param_3);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x18,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  for (puVar5 = *(undefined8 **)(param_1 + 0x18); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    puVar4 = operator_new(0x20);
    *puVar4 = 0xffff8ad0;
    puVar4[1] = 0xffff8ad0;
    *puVar5 = puVar4;
    FUN_140badcc0(puVar4,param_2);
  }
  FUN_1405bba90(param_2,param_1 + 0x98,4);
  FUN_1405bba90(param_2,param_1 + 0x9c,4);
  FUN_1405bba90(param_2,param_1 + 0xa0,4);
  FUN_1405bba90(param_2,param_1 + 0xa4,4);
  if (0x62f < param_3) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000b9d0(param_1 + 0x30,(longlong)local_res18[0]);
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    uVar6 = 0;
    uVar7 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x38) + (7 - (longlong)puVar5)) >> 3;
    if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      do {
        pvVar2 = operator_new(0x10);
        *puVar5 = pvVar2;
        FUN_1405bba90(param_2,pvVar2,4);
        FUN_1405bba90(param_2,(longlong)pvVar2 + 4,4);
        FUN_1405bba90(param_2,(longlong)pvVar2 + 8,4);
        FUN_1405bba90(param_2,(longlong)pvVar2 + 0xc,4);
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 < uVar7);
    }
  }
  return;
}

