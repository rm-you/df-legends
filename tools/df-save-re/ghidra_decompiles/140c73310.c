// FUN_140c73310 @ 140c73310
// callees:
//   -> 140c72a60 FUN_140c72a60
//   -> 140162450 FUN_140162450


void FUN_140c73310(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = 0;
  if (*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3 != 0) {
    lVar7 = 0;
    do {
      lVar3 = 0;
      iVar6 = 0;
      lVar5 = 0;
      lVar1 = **(longlong **)(lVar7 + *(longlong *)(param_1 + 0x3f8));
      if (*(longlong *)(lVar1 + 0x40) - *(longlong *)(lVar1 + 0x38) >> 3 != 0) {
        do {
          iVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x38) + lVar5 * 8) + 0x10))();
          if (iVar2 == 0x2c) {
            lVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x38) + lVar5 * 8) + 0x38))()
            ;
            break;
          }
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + 1;
        } while ((ulonglong)(longlong)iVar6 <
                 (ulonglong)(*(longlong *)(lVar1 + 0x40) - *(longlong *)(lVar1 + 0x38) >> 3));
      }
      iVar6 = (int)(*(longlong *)(lVar1 + 0x40) - *(longlong *)(lVar1 + 0x38) >> 3) + -1;
      lVar5 = (longlong)iVar6;
      if (-1 < iVar6) {
        do {
          iVar6 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x38) + lVar5 * 8) + 0x10))();
          lVar4 = **(longlong **)(*(longlong *)(lVar1 + 0x38) + lVar5 * 8);
          if (iVar6 == 10) {
            lVar4 = (**(code **)(lVar4 + 0x18))();
            if (lVar4 != 0) {
              FUN_140c72a60(param_1,lVar4,lVar3);
            }
          }
          else {
            iVar6 = (**(code **)(lVar4 + 0x10))();
            if (((iVar6 == 9) &&
                (lVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x38) + lVar5 * 8) +
                                     0x20))(), lVar4 != 0)) &&
               (*(uint *)(lVar4 + 0x110) = *(uint *)(lVar4 + 0x110) & 0xfffffffe, lVar3 != 0)) {
              FUN_140162450(lVar4,0x2c,*(undefined4 *)(lVar3 + 4));
              *(uint *)(lVar4 + 0x110) = *(uint *)(lVar4 + 0x110) | 1;
            }
          }
          lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
      }
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3));
  }
  return;
}

