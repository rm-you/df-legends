// FUN_140c23e60 @ 140c23e60
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 140dfb5c4 operator_new
//   -> 140c23550 FUN_140c23550
//   -> 140dfc99c memset
//   -> 140002250 FUN_140002250


void FUN_140c23e60(longlong param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char local_res18 [8];
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,1);
  FUN_1405bb6d0(param_2,param_1 + 0x18);
  FUN_1405bb6d0(param_2,param_1 + 0x38);
  FUN_1405bb6d0(param_2,param_1 + 0x58);
  FUN_1405bba90(param_2,param_1 + 0x78,1);
  FUN_1405bba90(param_2,param_1 + 0x79,1);
  FUN_1405bba90(param_2,param_1 + 0x7a,1);
  FUN_1405bba90(param_2,param_1 + 0x7b,1);
  FUN_1405bba90(param_2,param_1 + 0x7c,1);
  FUN_1405bba90(param_2,param_1 + 0x7d,1);
  FUN_1405bba90(param_2,param_1 + 0x7e,1);
  FUN_1405bba90(param_2,param_1 + 0x7f,1);
  FUN_1405bba90(param_2,param_1 + 0x80,4);
  FUN_1405bba90(param_2,param_1 + 0x84,4);
  FUN_1405bba90(param_2,param_1 + 0x88,4);
  FUN_1405bba90(param_2,param_1 + 0x8c,4);
  FUN_1405bba90(param_2,local_res18,1);
  if (local_res18[0] == '\0') {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else {
    pvVar1 = operator_new(0x98);
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)pvVar1 + lVar3 * 4) = 100;
      *(undefined4 *)((longlong)pvVar1 + lVar3 * 4 + 0x18) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < 6);
    puVar2 = (undefined4 *)((longlong)pvVar1 + 100);
    lVar3 = 0xd;
    do {
      puVar2[-0xd] = 100;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(void **)(param_1 + 0x90) = pvVar1;
    FUN_140c23550(pvVar1,param_2);
  }
  if ((param_3 < 0x5d9) || (FUN_1405bba90(param_2,local_res18,1), local_res18[0] == '\0')) {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  else {
    pvVar1 = operator_new(100);
    memset(pvVar1,0,100);
    *(void **)(param_1 + 0x98) = pvVar1;
    lVar3 = 0x32;
    do {
      FUN_1405bba90(param_2,pvVar1,2);
      pvVar1 = (void *)((longlong)pvVar1 + 2);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  FUN_1405bba90(param_2,param_1 + 0xa0,4);
  if (0x5d8 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0xa4,4);
  }
  FUN_140002250(param_2,param_1 + 0xa8);
  FUN_140002250(param_2,param_1 + 0xc0);
  FUN_1405bba90(param_2,param_1 + 0xd8,4);
  FUN_1405bba90(param_2,param_1 + 0xe0,4);
  FUN_1405bba90(param_2,param_1 + 0xe4,4);
  FUN_140002250(param_2,param_1 + 0xe8);
  FUN_140002250(param_2,param_1 + 0x100);
  return;
}

