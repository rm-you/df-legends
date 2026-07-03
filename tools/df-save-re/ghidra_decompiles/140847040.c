// FUN_140847040 @ 140847040
// callees:
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_140847040(longlong param_1,int param_2)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar2 = (longlong)param_2 * 8;
  lVar3 = **(longlong **)(lVar2 + *(longlong *)(param_1 + 0x80));
  iVar5 = (int)(*(longlong *)(lVar3 + 0x28) - *(longlong *)(lVar3 + 0x20) >> 3) + -1;
  if (-1 < iVar5) {
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar5 * 8);
    do {
      if ((*(int *)*puVar7 == 2) && (*(longlong *)((int *)*puVar7 + 2) == param_1)) {
        free(*(void **)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar5 * 8));
        lVar3 = **(longlong **)(lVar2 + *(longlong *)(param_1 + 0x80));
        pvVar6 = (void *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar5 * 8);
        pvVar1 = (void *)((longlong)pvVar6 + 8);
        memmove(pvVar6,pvVar1,*(longlong *)(lVar3 + 0x28) - (longlong)pvVar1);
        *(longlong *)(lVar3 + 0x28) = *(longlong *)(lVar3 + 0x28) + -8;
        plVar4 = *(longlong **)(lVar2 + *(longlong *)(param_1 + 0x80));
        if ((int)plVar4[1] != 6) {
          lVar3 = *plVar4;
          iVar5 = (int)(*(longlong *)(lVar3 + 0x40) - *(longlong *)(lVar3 + 0x38) >> 3) + -1;
          lVar8 = (longlong)iVar5;
          if (iVar5 < 0) goto LAB_140847139;
          goto LAB_140847120;
        }
        break;
      }
      puVar7 = puVar7 + -1;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  goto LAB_140847147;
  while (lVar8 = lVar8 + -1, -1 < lVar8) {
LAB_140847120:
    iVar5 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x38) + lVar8 * 8) + 0x10))();
    if (iVar5 == 0xc) goto LAB_140847147;
  }
LAB_140847139:
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) & 0xfffffffd;
LAB_140847147:
  free(*(void **)(lVar2 + *(longlong *)(param_1 + 0x80)));
  pvVar6 = (void *)(*(longlong *)(param_1 + 0x80) + lVar2);
  pvVar1 = (void *)((longlong)pvVar6 + 8);
  memmove(pvVar6,pvVar1,*(longlong *)(param_1 + 0x88) - (longlong)pvVar1);
  *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -8;
  return;
}

