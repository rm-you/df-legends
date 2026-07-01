// FUN_14007f3d0 @ 14007f3d0
// callees:


void FUN_14007f3d0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  uVar6 = (ulonglong)((longlong)*(longlong **)(param_1 + 0xc0) + (7 - (longlong)plVar4)) >> 3;
  if (*(longlong **)(param_1 + 0xc0) < plVar4) {
    uVar6 = uVar8;
  }
  if (uVar6 != 0) {
    do {
      plVar5 = (longlong *)*plVar4;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,1);
      }
      plVar4 = plVar4 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xb8);
  if (param_2 != '\0') {
    plVar4 = *(longlong **)(param_1 + 0xa8);
    for (plVar5 = *(longlong **)(param_1 + 0xa0); plVar5 < plVar4; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      iVar3 = (int)(*(longlong *)(lVar1 + 0x10) - *(longlong *)(lVar1 + 8) >> 3) + -1;
      lVar7 = (longlong)iVar3;
      if (-1 < iVar3) {
        do {
          plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + lVar7 * 8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x28))(plVar2,1);
          }
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
      }
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 8);
    }
  }
  return;
}

