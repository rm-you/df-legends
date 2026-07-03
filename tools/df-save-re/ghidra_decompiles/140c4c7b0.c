// FUN_140c4c7b0 @ 140c4c7b0
// callees:
//   -> 14000f360 FUN_14000f360
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14080a590 FUN_14080a590
//   -> 140c2ab20 FUN_140c2ab20


void FUN_140c4c7b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x3c0) == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_14000f360(&DAT_141c66fd0);
  }
  if (*(int *)(param_1 + 0x3bc) == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_14000f360(&DAT_141c66fd0);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x3bc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c0) = 0xffffffff;
  }
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x3c0) = 0xffffffff;
    if (((*(uint *)(lVar3 + 0x110) & 0x40) != 0) && ((*(uint *)(param_1 + 0x110) & 0x100) == 0)) {
      *(undefined8 *)(lVar3 + 0x398) = 0;
      *(uint *)(lVar3 + 0x110) = *(uint *)(lVar3 + 0x110) & 0xffffffbf | 0x80;
      uVar1 = FUN_1409fc0c0();
      *(uint *)(lVar3 + 0x330) =
           (uVar1 + (int)((longlong)((ulonglong)uVar1 * 0x100000003) >> 0x3f) * 0x7fffffff) /
           0x418938 + 500;
      iVar4 = (int)(*(longlong *)(lVar3 + 0x400) - *(longlong *)(lVar3 + 0x3f8) >> 3);
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        FUN_14080a590(**(undefined8 **)((longlong)iVar4 * 8 + *(longlong *)(lVar3 + 0x3f8)));
        FUN_140c2ab20(lVar3,**(undefined8 **)((longlong)iVar4 * 8 + *(longlong *)(lVar3 + 0x3f8)),1,
                      param_4,1);
        if ((int)(*(longlong *)(lVar3 + 0x400) - *(longlong *)(lVar3 + 0x3f8) >> 3) < iVar4) {
          iVar4 = (int)(*(longlong *)(lVar3 + 0x400) - *(longlong *)(lVar3 + 0x3f8) >> 3);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x3bc) = 0xffffffff;
  }
  return;
}

