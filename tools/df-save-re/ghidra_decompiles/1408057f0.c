// FUN_1408057f0 @ 1408057f0
// callees:
//   -> 140c62880 FUN_140c62880


void FUN_1408057f0(longlong param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
LAB_140805810:
  if (param_3 != '\0') {
    *param_2 = 5;
    *(longlong *)(param_2 + 2) = param_1;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x10) != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x10) & 8) == 0) {
    return;
  }
  iVar5 = 0;
  lVar4 = 0;
  do {
    if ((ulonglong)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) <=
        (ulonglong)(longlong)iVar5) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      if (*(longlong **)(param_1 + 0x28) <= plVar3) {
        return;
      }
      do {
        if (*(int *)*plVar3 == 10) {
          *param_2 = 9;
          *(undefined8 *)(param_2 + 2) = *(undefined8 *)(*plVar3 + 8);
          return;
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 < *(longlong **)(param_1 + 0x28));
      return;
    }
    iVar1 = (**(code **)(**(longlong **)(lVar4 + *(longlong *)(param_1 + 0x38)) + 0x10))();
    if (iVar1 == 0xb) {
      lVar2 = (**(code **)(**(longlong **)(lVar4 + *(longlong *)(param_1 + 0x38)) + 0x18))();
      if (lVar2 != 0) break;
    }
    else if ((iVar1 == 0x12) &&
            (lVar2 = (**(code **)(**(longlong **)(lVar4 + *(longlong *)(param_1 + 0x38)) + 0x20))(),
            lVar2 != 0)) {
      FUN_140c62880(lVar2,param_2,1);
      return;
    }
    iVar5 = iVar5 + 1;
    lVar4 = lVar4 + 8;
  } while( true );
  param_3 = '\x01';
  param_1 = lVar2;
  goto LAB_140805810;
}

