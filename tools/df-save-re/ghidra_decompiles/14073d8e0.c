// FUN_14073d8e0 @ 14073d8e0
// callees:
//   -> 14073d100 FUN_14073d100


void FUN_14073d8e0(longlong param_1,int param_2,int param_3,undefined1 param_4,undefined1 param_5)

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
      if (((sVar2 == 10) && (((int)plVar1[1] == param_3 || (param_3 == -1)))) &&
         ((iVar3 = (**(code **)(*plVar1 + 0x30))(plVar1), iVar3 == param_2 || (param_2 == -1)))) {
        FUN_14073d100(param_1,iVar4,param_4,param_5);
      }
      lVar5 = lVar5 + -8;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}

