// FUN_1408054d0 @ 1408054d0
// callees:
//   -> 140c627a0 FUN_140c627a0


void FUN_1408054d0(longlong param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  *param_2 = 0x8ad0;
  if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
    return;
  }
LAB_140805510:
  if ((*(byte *)(param_1 + 0x10) & 8) == 0) {
    *param_2 = *(undefined2 *)(param_1 + 8);
    *param_3 = *(undefined2 *)(param_1 + 10);
    uVar2 = *(undefined2 *)(param_1 + 0xc);
LAB_1408055d1:
    *param_4 = uVar2;
    return;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  do {
    if (puVar1 <= puVar5) {
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      while( true ) {
        if (*(undefined8 **)(param_1 + 0x28) <= puVar5) {
          return;
        }
        if (*(int *)*puVar5 == 10) break;
        puVar5 = puVar5 + 1;
      }
      lVar4 = *(longlong *)((int *)*puVar5 + 2);
      *param_2 = *(undefined2 *)(lVar4 + 4);
      *param_3 = *(undefined2 *)(lVar4 + 6);
      uVar2 = *(undefined2 *)(lVar4 + 8);
      goto LAB_1408055d1;
    }
    iVar3 = (**(code **)(*(longlong *)*puVar5 + 0x10))();
    if (iVar3 == 0xb) {
      lVar4 = (**(code **)(*(longlong *)*puVar5 + 0x18))();
      if (lVar4 != 0) break;
    }
    else if ((iVar3 == 0x12) && (lVar4 = (**(code **)(*(longlong *)*puVar5 + 0x20))(), lVar4 != 0))
    {
      FUN_140c627a0(lVar4,param_2,param_3,param_4);
      return;
    }
    puVar5 = puVar5 + 1;
  } while( true );
  *param_2 = 0x8ad0;
  param_1 = lVar4;
  if ((*(byte *)(lVar4 + 0x10) & 0x10) != 0) {
    return;
  }
  goto LAB_140805510;
}

