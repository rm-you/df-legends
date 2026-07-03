// FUN_14083a600 @ 14083a600
// callees:


void FUN_14083a600(longlong param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
                  longlong *param_5)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x20;
  bVar1 = *(byte *)(param_1 + 0x10);
joined_r0x00014083a62c:
  if ((bVar1 & 8) == 0) {
    *param_2 = *(undefined2 *)(param_1 + 8);
    *param_3 = *(undefined2 *)(param_1 + 10);
    uVar2 = *(undefined2 *)(param_1 + 0xc);
LAB_14083a6e7:
    *param_4 = uVar2;
    return;
  }
  iVar7 = 0;
  lVar6 = 0;
  do {
    if ((ulonglong)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) <=
        (ulonglong)(longlong)iVar7) {
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      if (*(undefined8 **)(param_1 + 0x28) <= puVar5) {
        return;
      }
      while (*(int *)*puVar5 != 10) {
        puVar5 = puVar5 + 1;
        if (*(undefined8 **)(param_1 + 0x28) <= puVar5) {
          return;
        }
      }
      lVar6 = *(longlong *)((int *)*puVar5 + 2);
      *param_2 = *(undefined2 *)(lVar6 + 4);
      *param_3 = *(undefined2 *)(lVar6 + 6);
      uVar2 = *(undefined2 *)(lVar6 + 8);
      goto LAB_14083a6e7;
    }
    iVar3 = (**(code **)(**(longlong **)(lVar6 + *(longlong *)(param_1 + 0x38)) + 0x10))();
    if (iVar3 == 0xb) {
      lVar4 = (**(code **)(**(longlong **)(lVar6 + *(longlong *)(param_1 + 0x38)) + 0x18))();
      if (lVar4 != 0) break;
    }
    else if ((iVar3 == 0x12) &&
            (lVar4 = (**(code **)(**(longlong **)(lVar6 + *(longlong *)(param_1 + 0x38)) + 0x20))(),
            lVar4 != 0)) {
      *(uint *)(lVar4 + 0x11c) = *(uint *)(lVar4 + 0x11c) | 0x40;
      *param_5 = lVar4;
      return;
    }
    iVar7 = iVar7 + 1;
    lVar6 = lVar6 + 8;
  } while( true );
  *(uint *)(lVar4 + 0x14) = *(uint *)(lVar4 + 0x14) | 0x20;
  bVar1 = *(byte *)(lVar4 + 0x10);
  param_1 = lVar4;
  goto joined_r0x00014083a62c;
}

