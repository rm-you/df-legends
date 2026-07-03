// FUN_140847550 @ 140847550
// callees:
//   -> 140847040 FUN_140847040
//   -> 1401b6600 FUN_1401b6600
//   -> EXTERNAL:000000e1 memmove


void FUN_140847550(longlong param_1,longlong param_2,char param_3)

{
  uint *puVar1;
  void *pvVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  iVar9 = (int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 3) + -1;
  if (-1 < iVar9) {
    lVar8 = (longlong)iVar9 * 8;
    do {
      if ((param_3 != '\0') ||
         (2 < *(int *)(*(longlong *)(lVar8 + *(longlong *)(param_1 + 0x80)) + 8) - 2U)) {
        FUN_140847040(param_1,iVar9);
      }
      lVar8 = lVar8 + -8;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xffffffd3;
  if (((*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) & 0xfffffffffffffff8U) != 0)
     && (iVar9 = (int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 3) + -1,
        lVar8 = (longlong)iVar9, -1 < iVar9)) {
    do {
      puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + lVar8 * 8) + 0xc);
      *puVar1 = *puVar1 & 0xfffffffe;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  iVar9 = (int)(*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 3) + -1;
  if (-1 < iVar9) {
    lVar8 = (longlong)iVar9 * 8;
    lVar10 = lVar8;
    do {
      iVar4 = (**(code **)(**(longlong **)(lVar10 + *(longlong *)(param_1 + 0xb0)) + 0x10))();
      if (((iVar4 != 0x13) && (1 < iVar4 - 0x24U)) && (iVar4 - 0x26U < 2)) {
        lVar5 = (**(code **)(**(longlong **)(lVar10 + *(longlong *)(param_1 + 0xb0)) + 0x30))();
        if ((lVar5 != 0) && (param_2 != 0)) {
          FUN_1401b6600(&DAT_141d79b30,lVar5,*(undefined4 *)(param_2 + 0x130));
        }
        plVar6 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0xb0));
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x78))(plVar6,1);
        }
        pvVar7 = (void *)(*(longlong *)(param_1 + 0xb0) + lVar8);
        pvVar2 = (void *)((longlong)pvVar7 + 8);
        memmove(pvVar7,pvVar2,*(longlong *)(param_1 + 0xb8) - (longlong)pvVar2);
        *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + -8;
      }
      lVar8 = lVar8 + -8;
      lVar10 = lVar10 + -8;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  sVar3 = *(short *)(param_1 + 0x14);
  if ((((sVar3 == 0x11) || (sVar3 == 0xd0)) || ((sVar3 == 0x13 || ((ushort)(sVar3 - 0xb0U) < 2))))
     && (iVar9 = (int)(*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 3) + -1,
        -1 < iVar9)) {
    lVar8 = (longlong)iVar9 * 8;
    lVar10 = lVar8;
    do {
      iVar4 = (**(code **)(**(longlong **)(lVar8 + *(longlong *)(param_1 + 0xb0)) + 0x10))();
      if (((iVar4 != 0x13) && (iVar4 != 0x24)) && (iVar4 == 0x25)) {
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(lVar8 + *(longlong *)(param_1 + 0xb0)) + 0x30))();
        if ((plVar6 != (longlong *)0x0) &&
           (iVar4 = (**(code **)(*plVar6 + 0xd8))(plVar6), iVar4 == 0x12)) {
          *(byte *)((longlong)plVar6 + 0x17a) =
               *(byte *)((longlong)plVar6 + 0x17a) &
               ~*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar8) + 0x10);
        }
        plVar6 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0xb0));
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x78))(plVar6,1);
        }
        pvVar7 = (void *)(*(longlong *)(param_1 + 0xb0) + lVar10);
        pvVar2 = (void *)((longlong)pvVar7 + 8);
        memmove(pvVar7,pvVar2,*(longlong *)(param_1 + 0xb8) - (longlong)pvVar2);
        *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + -8;
      }
      lVar10 = lVar10 + -8;
      lVar8 = lVar8 + -8;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  return;
}

