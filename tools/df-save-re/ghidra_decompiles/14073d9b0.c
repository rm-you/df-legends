// FUN_14073d9b0 @ 14073d9b0
// callees:
//   -> 14073d5b0 FUN_14073d5b0


void FUN_14073d9b0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = (int)(*(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0xe8) >> 3) + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4 * 8;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0xe8));
      sVar2 = (**(code **)*plVar1)(plVar1);
      if (((sVar2 == 0xc) && (((int)plVar1[1] == param_3 || (param_3 == -1)))) &&
         ((iVar3 = (**(code **)(*plVar1 + 0x30))(plVar1), iVar3 == param_2 || (param_2 == -1)))) {
        FUN_14073d5b0(param_1,iVar4,0);
      }
      lVar5 = lVar5 + -8;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}

