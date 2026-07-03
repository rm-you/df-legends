// FUN_1408056a0 @ 1408056a0
// callees:
//   -> 140c62920 FUN_140c62920


undefined8 FUN_1408056a0(longlong param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *param_3 = 5;
  *(longlong *)(param_3 + 2) = param_1;
  if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
    return 0;
  }
LAB_1408056e0:
  uVar5 = 0;
  uVar6 = 0;
  if ((*(byte *)(param_1 + 0x10) & 8) == 0) {
    return 0;
  }
  do {
    if ((ulonglong)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) <=
        (ulonglong)(longlong)(int)uVar6) {
      puVar4 = *(undefined8 **)(param_1 + 0x20);
      while( true ) {
        if (*(undefined8 **)(param_1 + 0x28) <= puVar4) {
          return 0;
        }
        if (*(int *)*puVar4 == 10) break;
        puVar4 = puVar4 + 1;
      }
      if (*param_2 == 9) {
        if (*(longlong *)(param_2 + 2) == *(longlong *)((int *)*puVar4 + 2)) {
          return 1;
        }
        return 0;
      }
      return 0;
    }
    iVar1 = (**(code **)(**(longlong **)(uVar5 + *(longlong *)(param_1 + 0x38)) + 0x10))();
    if (iVar1 == 0xb) {
      lVar2 = (**(code **)(**(longlong **)(uVar5 + *(longlong *)(param_1 + 0x38)) + 0x18))();
      if (lVar2 != 0) break;
    }
    else if ((iVar1 == 0x12) &&
            (lVar2 = (**(code **)(**(longlong **)(uVar5 + *(longlong *)(param_1 + 0x38)) + 0x20))(),
            lVar2 != 0)) {
      if ((*param_2 == 1) && (*(longlong *)(param_2 + 2) == lVar2)) {
        return 1;
      }
      uVar3 = FUN_140c62920(lVar2,param_2,param_3);
      return uVar3;
    }
    uVar5 = uVar5 + 8;
    uVar6 = (ulonglong)((int)uVar6 + 1);
  } while( true );
  if ((*param_2 == 5) && (*(longlong *)(param_2 + 2) == lVar2)) {
    return 1;
  }
  *param_3 = 5;
  *(longlong *)(param_3 + 2) = lVar2;
  param_1 = lVar2;
  if ((*(byte *)(lVar2 + 0x10) & 0x10) != 0) {
    return 0;
  }
  goto LAB_1408056e0;
}

