// FUN_1407f2c10 @ 1407f2c10
// callees:
//   -> 1407f3720 FUN_1407f3720
//   -> 1407f2c10 FUN_1407f2c10
//   -> 140c9c1e0 FUN_140c9c1e0


int FUN_1407f2c10(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = FUN_1407f3720();
  uVar5 = 0;
  if (((*(uint *)(param_1 + 0x10) & 0x4000) != 0) && (param_4 != '\0')) {
    iVar1 = 0;
  }
  uVar6 = uVar5;
  if (*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3 != 0) {
    do {
      iVar2 = (**(code **)(**(longlong **)(uVar6 + *(longlong *)(param_1 + 0x38)) + 0x10))();
      if ((iVar2 == 10) &&
         (lVar3 = (**(code **)(**(longlong **)(uVar6 + *(longlong *)(param_1 + 0x38)) + 0x18))(),
         lVar3 != 0)) {
        iVar2 = FUN_1407f2c10(lVar3,param_2,param_3,param_4);
        iVar1 = iVar1 + iVar2;
      }
      iVar2 = (**(code **)(**(longlong **)(uVar6 + *(longlong *)(param_1 + 0x38)) + 0x10))();
      if ((iVar2 == 9) &&
         (lVar3 = (**(code **)(**(longlong **)(uVar6 + *(longlong *)(param_1 + 0x38)) + 0x20))(),
         lVar3 != 0)) {
        iVar2 = FUN_140c9c1e0(lVar3,param_2);
        iVar1 = iVar1 + iVar2;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3));
  }
  return iVar1;
}

