// FUN_140c17cd0 @ 140c17cd0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140c178a0 FUN_140c178a0


void FUN_140c17cd0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res18 [4];
  
  iVar1 = (int)(param_1[1] - *param_1 >> 3);
  local_res18[0] = iVar1;
  FUN_1405bb7c0(param_2,local_res18,4);
  iVar1 = iVar1 + -1;
  lVar3 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      lVar4 = 0xc;
      lVar2 = *(longlong *)(*param_1 + lVar3 * 8);
      do {
        FUN_140c178a0(lVar2,param_2);
        lVar2 = lVar2 + 0x58;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}

