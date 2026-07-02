// FUN_1406fa5a0 @ 1406fa5a0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> EXTERNAL:000000e1 memmove


void FUN_1406fa5a0(longlong param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_140002250(param_2,param_1 + 8);
  FUN_140002250(param_2,param_1 + 0x20);
  FUN_140002250(param_2,param_1 + 0x38);
  if (0x6a5 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x50,2);
  }
  FUN_1405bba90(param_2,param_1 + 0x68,4);
  FUN_1405bba90(param_2,param_1 + 0x6c,4);
  FUN_1405bba90(param_2,param_1 + 0x70,4);
  if (0x650 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x74,4);
    FUN_1405bba90(param_2,param_1 + 0x78,4);
    FUN_1405bba90(param_2,param_1 + 0x7c,4);
  }
  if (0x689 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x80,4);
    FUN_1405bba90(param_2,param_1 + 0x84,4);
    FUN_1405bba90(param_2,param_1 + 0x88,4);
    if (0x6aa < param_3) {
      FUN_1405bba90(param_2,param_1 + 0x8c,4);
    }
    if (0x6ab < param_3) {
      FUN_1405bba90(param_2,param_1 + 0x90,4);
      FUN_1405bba90(param_2,param_1 + 0x94,4);
    }
    FUN_1405bba90(param_2,param_1 + 0x98,4);
    FUN_1405bba90(param_2,param_1 + 0x9c,4);
    FUN_1405bba90(param_2,param_1 + 0x54,4);
    FUN_1405bba90(param_2,param_1 + 0x58,4);
    FUN_1405bba90(param_2,param_1 + 0x5c,4);
    FUN_1405bba90(param_2,param_1 + 0x60,4);
    FUN_1405bba90(param_2,param_1 + 100,4);
  }
  if ((param_3 < 0x6a0) &&
     (iVar5 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2) + -1,
     -1 < iVar5)) {
    lVar4 = (longlong)iVar5 * 4;
    lVar6 = lVar4;
    do {
      iVar2 = *(int *)(lVar4 + *(longlong *)(param_1 + 0x20));
      if (iVar2 - 1U < 2) {
        if (iVar2 == 1) {
          *(undefined4 *)(param_1 + 0x60) = 100;
        }
        if (*(int *)(lVar4 + *(longlong *)(param_1 + 0x20)) == 2) {
          *(undefined4 *)(param_1 + 0x60) = 0xffffff9c;
        }
        pvVar3 = (void *)(*(longlong *)(param_1 + 0x20) + lVar6);
        pvVar1 = (void *)((longlong)pvVar3 + 4);
        memmove(pvVar3,pvVar1,*(longlong *)(param_1 + 0x28) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -4;
        pvVar3 = (void *)(*(longlong *)(param_1 + 0x38) + lVar6);
        pvVar1 = (void *)((longlong)pvVar3 + 4);
        memmove(pvVar3,pvVar1,*(longlong *)(param_1 + 0x40) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -4;
      }
      lVar6 = lVar6 + -4;
      lVar4 = lVar4 + -4;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}

