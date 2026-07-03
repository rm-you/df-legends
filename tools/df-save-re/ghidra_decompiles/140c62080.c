// FUN_140c62080 @ 140c62080
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 1408243e0 FUN_1408243e0
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0
//   -> 140c8e620 FUN_140c8e620


void FUN_140c62080(longlong param_1)

{
  void *_Src;
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  void *_Dst;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  iVar9 = (int)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3) + -1;
  lVar8 = (longlong)iVar9;
  if (-1 < iVar9) {
    do {
      iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1c0) + lVar8 * 8) + 0x10))();
      if (iVar4 == 0xb) {
        lVar8 = (longlong)iVar9 * 8;
        lVar5 = (**(code **)(**(longlong **)(lVar8 + *(longlong *)(param_1 + 0x1c0)) + 0x18))();
        plVar2 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0x1c0));
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x78))(plVar2,1);
        }
        _Dst = (void *)(*(longlong *)(param_1 + 0x1c0) + lVar8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x1c8) - (longlong)_Src);
        *(longlong *)(param_1 + 0x1c8) = *(longlong *)(param_1 + 0x1c8) + -8;
        if (lVar5 != 0) {
          FUN_1408243e0(lVar5,9,*(undefined4 *)(param_1 + 0x130));
        }
        break;
      }
      iVar9 = iVar9 + -1;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  if ((*(uint *)(param_1 + 0x110) >> 0x19 & 1) != 0) {
    lVar8 = *(longlong *)(param_1 + 0xa78);
    local_34 = 0xffffffff;
    local_30 = 0;
    local_2c = 100;
    local_10 = 0;
    local_38 = 0x21;
    local_20 = 0;
    uStack_18 = 0;
    if (((lVar8 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
       ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
      cVar3 = FUN_140106f30(param_1);
      FUN_1409165e0(lVar8 + 0x248,&local_38,cVar3 != '\0');
    }
  }
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xfdffffff;
  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xfffeffff;
  FUN_140c8e620(param_1,0x2d);
  *(undefined4 *)(param_1 + 0xc0) = 0x8ad08ad0;
  *(undefined2 *)(param_1 + 0xc4) = 0x8ad0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf8);
  uVar1 = *(uint *)(param_1 + 0x1268);
  if (uVar1 < 500) {
    puVar6 = &DAT_141c70ac4 + (longlong)(int)uVar1 * 0xfa;
    puVar7 = (undefined4 *)((longlong)&DAT_141c70ac4 + (longlong)(int)uVar1 * 4);
    lVar8 = 500;
    do {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 500;
      *(undefined4 *)puVar6 = 0xffffffff;
      puVar6 = (undefined8 *)((longlong)puVar6 + 4);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

