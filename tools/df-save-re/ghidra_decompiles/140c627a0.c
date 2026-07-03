// FUN_140c627a0 @ 140c627a0
// callees:
//   -> 1408054d0 FUN_1408054d0


void FUN_140c627a0(longlong param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *param_2 = 0x8ad0;
  if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
    *param_2 = *(undefined2 *)(param_1 + 0xa8);
    *param_3 = *(undefined2 *)(param_1 + 0xaa);
    *param_4 = *(undefined2 *)(param_1 + 0xac);
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x1c0);
  puVar1 = *(undefined8 **)(param_1 + 0x1c8);
  while( true ) {
    if (puVar1 <= puVar4) {
      return;
    }
    iVar2 = (**(code **)(*(longlong *)*puVar4 + 0x10))();
    if ((iVar2 == 0xb) && (lVar3 = (**(code **)(*(longlong *)*puVar4 + 0x18))(), lVar3 != 0)) break;
    puVar4 = puVar4 + 1;
  }
  FUN_1408054d0(lVar3,param_2,param_3,param_4);
  return;
}

