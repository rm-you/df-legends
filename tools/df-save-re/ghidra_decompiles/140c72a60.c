// FUN_140c72a60 @ 140c72a60
// callees:
//   -> 14000dda0 FUN_14000dda0
//   -> 140c72a60 FUN_140c72a60
//   -> 140162450 FUN_140162450


void FUN_140c72a60(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar3 = param_3;
    uVar5 = param_3;
    if (*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 3 != 0) {
      do {
        iVar1 = (**(code **)(**(longlong **)(uVar3 + *(longlong *)(param_2 + 0x38)) + 0x10))();
        if (iVar1 == 0x2c) {
          param_3 = (**(code **)(**(longlong **)
                                   (*(longlong *)(param_2 + 0x38) + (longlong)(int)uVar5 * 8) + 0x38
                                ))();
          break;
        }
        uVar4 = (int)uVar5 + 1;
        uVar3 = uVar3 + 8;
        uVar5 = (ulonglong)uVar4;
      } while ((ulonglong)(longlong)(int)uVar4 <
               (ulonglong)(*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 3));
    }
  }
  else {
    FUN_14000dda0(param_2,0x2c,*(undefined4 *)(param_3 + 4));
  }
  iVar1 = (int)(*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 3) + -1;
  lVar6 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_2 + 0x38) + lVar6 * 8) + 0x10))();
      lVar2 = **(longlong **)(*(longlong *)(param_2 + 0x38) + lVar6 * 8);
      if (iVar1 == 10) {
        lVar2 = (**(code **)(lVar2 + 0x18))();
        if (lVar2 != 0) {
          FUN_140c72a60(param_1,lVar2,param_3);
        }
      }
      else {
        iVar1 = (**(code **)(lVar2 + 0x10))();
        if (((iVar1 == 9) &&
            (lVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_2 + 0x38) + lVar6 * 8) + 0x20)
                     )(), lVar2 != 0)) &&
           (*(uint *)(lVar2 + 0x110) = *(uint *)(lVar2 + 0x110) & 0xfffffffe, param_3 != 0)) {
          FUN_140162450(lVar2,0x2c,*(undefined4 *)(param_3 + 4));
          *(uint *)(lVar2 + 0x110) = *(uint *)(lVar2 + 0x110) | 1;
        }
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return;
}

