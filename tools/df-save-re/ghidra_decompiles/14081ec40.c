// FUN_14081ec40 @ 14081ec40
// callees:
//   -> 1407f0860 FUN_1407f0860
//   -> 140d3c620 FUN_140d3c620
//   -> 1401696c0 FUN_1401696c0
//   -> 140c29bb0 FUN_140c29bb0
//   -> 140802af0 FUN_140802af0


void FUN_14081ec40(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 in_stack_ffffffffffffffe8;
  undefined2 uVar10;
  
  uVar10 = (undefined2)((uint)in_stack_ffffffffffffffe8 >> 0x10);
  FUN_1407f0860(param_1,2);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  uVar1 = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  if ((*(uint *)(param_2 + 0x10) & 0x800) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x400) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x400;
  }
  if ((*(byte *)(param_2 + 0x10) & 0x20) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x2000000;
  }
  if ((*(byte *)(param_2 + 0x14) & 8) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 8;
  }
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    FUN_140d3c620(&DAT_141c53470,*(undefined4 *)(param_1 + 0x1c),*(undefined2 *)(param_1 + 8),
                  *(undefined2 *)(param_1 + 10),CONCAT22(uVar10,uVar1));
  }
  if ((*(byte *)(param_2 + 0x10) & 0x10) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
  }
  bVar2 = false;
  uVar6 = 0;
  uVar9 = uVar6;
  if (*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 3 != 0) {
    do {
      if (bVar2) {
        return;
      }
      iVar3 = (**(code **)(**(longlong **)(uVar6 + *(longlong *)(param_2 + 0x38)) + 0x10))();
      if (iVar3 == 0xb) {
        lVar4 = (**(code **)(**(longlong **)(uVar6 + *(longlong *)(param_2 + 0x38)) + 0x18))();
        if (lVar4 != 0) {
          FUN_140802af0(param_1,lVar4);
LAB_14081ee0b:
          bVar2 = true;
        }
      }
      else if (iVar3 == 0x12) {
        lVar4 = (**(code **)(**(longlong **)(uVar6 + *(longlong *)(param_2 + 0x38)) + 0x20))();
        if ((lVar4 != 0) &&
           (iVar3 = (int)(*(longlong *)(lVar4 + 0x400) - *(longlong *)(lVar4 + 0x3f8) >> 3) + -1,
           -1 < iVar3)) {
          lVar5 = (longlong)iVar3;
          puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x3f8) + lVar5 * 8);
          do {
            if (*(longlong *)*puVar7 == param_2) {
              lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x3f8) + (longlong)iVar3 * 8);
              if (lVar5 != 0) {
                FUN_140c29bb0(lVar4,param_1,(int)*(short *)(lVar5 + 8),(int)*(short *)(lVar5 + 10),
                              0xffffffff,1);
                goto LAB_14081ee0b;
              }
              break;
            }
            iVar3 = iVar3 + -1;
            puVar7 = puVar7 + -1;
            lVar5 = lVar5 + -1;
          } while (-1 < lVar5);
        }
      }
      else if ((iVar3 == 0x24) &&
              (lVar4 = (**(code **)(**(longlong **)(uVar6 + *(longlong *)(param_2 + 0x38)) + 0x30))
                                 (), lVar4 != 0)) {
        FUN_1401696c0(lVar4,param_1);
        goto LAB_14081ee0b;
      }
      uVar8 = (int)uVar9 + 1;
      uVar6 = uVar6 + 8;
      uVar9 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 3));
  }
  return;
}

