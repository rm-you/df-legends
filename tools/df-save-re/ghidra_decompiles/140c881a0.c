// FUN_140c881a0 @ 140c881a0
// callees:
//   -> 140428a80 FUN_140428a80


void FUN_140c881a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
  uVar6 = uVar5;
  uVar8 = uVar5;
  if (*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3 != 0) {
    do {
      FUN_140428a80(**(undefined8 **)(uVar6 + *(longlong *)(param_1 + 0x3f8)),param_2);
      uVar7 = (int)uVar8 + 1;
      uVar6 = uVar6 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3));
  }
  uVar6 = uVar5;
  if (param_2[1] - *param_2 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar6 + *param_2);
      if (((*(byte *)(lVar1 + 0x10) & 0x40) != 0) &&
         (iVar2 = (int)(*(longlong *)(lVar1 + 0x40) - *(longlong *)(lVar1 + 0x38) >> 3) + -1,
         lVar4 = (longlong)iVar2, -1 < iVar2)) {
        do {
          iVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x38) + lVar4 * 8) + 0x10))();
          if ((iVar2 == 10) &&
             (lVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x38) + lVar4 * 8) + 0x18))
                                (), lVar3 != 0)) {
            FUN_140428a80(lVar3,param_2);
          }
          lVar4 = lVar4 + -1;
        } while (-1 < lVar4);
      }
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 < (ulonglong)(param_2[1] - *param_2 >> 3));
  }
  return;
}

