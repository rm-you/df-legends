// FUN_1407b2e10 @ 1407b2e10
// callees:
//   -> 1406f80c0 FUN_1406f80c0
//   -> 1400c2c50 FUN_1400c2c50
//   -> 1407648d0 FUN_1407648d0


void FUN_1407b2e10(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38) + 0x38) = 0xffffffff;
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38) + 0x3c) = 0xffffffff;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38);
    cVar2 = FUN_1406f80c0(lVar1);
    if (cVar2 != '\0') {
      if (lVar1 != 0) {
        FUN_1400c2c50(lVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x38) = 0;
      return;
    }
  }
  else {
    uVar4 = DAT_1416b1974 + param_2;
    iVar3 = DAT_1416b1980;
    if (0x626ff < (int)uVar4) {
      iVar3 = DAT_1416b1980 + uVar4 / 0x62700;
      uVar4 = uVar4 % 0x62700;
    }
    FUN_1407648d0();
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38) + 0x38) = iVar3;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38) + 0x3c) = uVar4;
  }
  return;
}

