// FUN_140493700 @ 140493700
// callees:
//   -> 1400021b0 FUN_1400021b0
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140493700(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  
  FUN_1400021b0(param_2,param_1);
  iVar1 = (int)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3);
  local_res8[0] = iVar1;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar5 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = 0x10;
      puVar2 = *(undefined1 **)(*(longlong *)(param_1 + 0x18) + lVar5 * 8);
      do {
        lVar4 = 0x10;
        do {
          local_res8[0] = CONCAT31(local_res8[0]._1_3_,*puVar2);
          FUN_1405bb7c0(param_2,local_res8,1);
          puVar2 = puVar2 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  return;
}

