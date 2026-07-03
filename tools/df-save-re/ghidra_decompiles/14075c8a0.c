// FUN_14075c8a0 @ 14075c8a0
// callees:
//   -> 14075c790 FUN_14075c790


void FUN_14075c8a0(longlong param_1,short param_2,int param_3,undefined1 param_4)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x120) - *(longlong *)(param_1 + 0x118) >> 3) + -1;
  if (-1 < iVar2) {
    lVar3 = (longlong)iVar2 * 8;
    do {
      sVar1 = (**(code **)**(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0x118)))();
      if (((sVar1 == param_2) || (param_2 == -1)) &&
         ((*(int *)(*(longlong *)(lVar3 + *(longlong *)(param_1 + 0x118)) + 8) == param_3 ||
          (param_3 == -1)))) {
        FUN_14075c790(param_1,iVar2,param_4);
      }
      lVar3 = lVar3 + -8;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return;
}

