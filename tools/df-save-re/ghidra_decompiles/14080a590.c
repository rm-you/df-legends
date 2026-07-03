// FUN_14080a590 @ 14080a590
// callees:
//   -> 1408244d0 FUN_1408244d0
//   -> 14080a590 FUN_14080a590
//   -> 140c8e620 FUN_140c8e620


void FUN_14080a590(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffff7fff;
  FUN_1408244d0(param_1,0x2d);
  FUN_1408244d0(param_1,0x2c);
  iVar4 = 0;
  if (*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3 != 0) {
    lVar5 = 0;
    do {
      iVar2 = (**(code **)(**(longlong **)(lVar5 + *(longlong *)(param_1 + 0x38)) + 0x10))();
      if ((iVar2 == 10) &&
         (lVar3 = (**(code **)(**(longlong **)(lVar5 + *(longlong *)(param_1 + 0x38)) + 0x18))(),
         lVar3 != 0)) {
        FUN_14080a590(lVar3);
      }
      iVar2 = (**(code **)(**(longlong **)(lVar5 + *(longlong *)(param_1 + 0x38)) + 0x10))();
      if ((iVar2 == 9) &&
         (lVar3 = (**(code **)(**(longlong **)(lVar5 + *(longlong *)(param_1 + 0x38)) + 0x20))(),
         lVar3 != 0)) {
        *(uint *)(lVar3 + 0x110) = *(uint *)(lVar3 + 0x110) & 0xffffff7f;
        uVar1 = DAT_141c36b80;
        *(uint *)(lVar3 + 0x114) = *(uint *)(lVar3 + 0x114) & 0xfffeffff;
        *(undefined4 *)(lVar3 + 0x140) = uVar1;
        FUN_140c8e620(lVar3,0x2d);
        FUN_140c8e620(lVar3,0x2c);
        *(uint *)(lVar3 + 0x114) = *(uint *)(lVar3 + 0x114) & 0xffffe7ff;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((ulonglong)(longlong)iVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3));
  }
  return;
}

