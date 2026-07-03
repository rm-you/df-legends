// FUN_140281430 @ 140281430
// callees:
//   -> 140051e20 FUN_140051e20


void FUN_140281430(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  FUN_140051e20(param_1 + 0x38);
  FUN_140051e20(param_1 + 0x50);
  FUN_140051e20(param_1 + 0x68);
  FUN_140051e20(param_1 + 0x80);
  FUN_140051e20(param_1 + 0x98);
  FUN_140051e20(param_1 + 0xb0);
  FUN_140051e20(param_1 + 200);
  return;
}

