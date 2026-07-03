// FUN_1405bd6f0 @ 1405bd6f0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140050410 FUN_140050410


void * FUN_1405bd6f0(int *param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  uint *puVar9;
  void *local_18 [2];
  
  if (((((param_2 < 0) || (DAT_141d69554 <= param_2)) || (param_3 < 0)) ||
      ((DAT_141d69558 <= param_3 || (param_4 < 0)))) ||
     ((DAT_141d6955c <= param_4 ||
      ((DAT_141d69520 == 0 ||
       (lVar6 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(DAT_141d69520 + ((longlong)param_2 >> 4) * 8) +
                   ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar6 == 0)))))) {
    puVar9 = (uint *)(param_1 + 1);
    puVar8 = &DAT_141d86420;
  }
  else {
    param_1 = (int *)(lVar6 + 0x80);
    puVar9 = (uint *)(lVar6 + 0x84);
    puVar8 = (ulonglong *)(lVar6 + 0x68);
  }
  if (*param_1 == -1) {
    pvVar4 = operator_new(0x1c);
    *(undefined2 *)((longlong)pvVar4 + 0x16) = 1;
    *(undefined2 *)((longlong)pvVar4 + 2) = 0;
    *(undefined4 *)((longlong)pvVar4 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar4 + 0x18) = 0xffffffff;
    local_18[0] = pvVar4;
    if ((local_18 < DAT_141c33c00) && (DAT_141c33bf8 <= local_18)) {
      lVar6 = (longlong)local_18 - (longlong)DAT_141c33bf8;
      if (DAT_141c33c00 == DAT_141c33c08) {
        FUN_140050410(&DAT_141c33bf8);
      }
      if (DAT_141c33c00 != (void **)0x0) {
        *DAT_141c33c00 = DAT_141c33bf8[lVar6 >> 3];
      }
    }
    else {
      if (DAT_141c33c00 == DAT_141c33c08) {
        FUN_140050410(&DAT_141c33bf8);
      }
      if (DAT_141c33c00 != (void **)0x0) {
        *DAT_141c33c00 = pvVar4;
      }
    }
    DAT_141c33c00 = DAT_141c33c00 + 1;
    ppvVar2 = (void **)puVar8[1];
    if ((local_18 < ppvVar2) && (ppvVar3 = (void **)*puVar8, ppvVar3 <= local_18)) {
      if (ppvVar2 == (void **)puVar8[2]) {
        FUN_140050410(puVar8);
      }
      if ((undefined8 *)puVar8[1] != (undefined8 *)0x0) {
        *(undefined8 *)puVar8[1] =
             *(undefined8 *)(*puVar8 + ((longlong)local_18 - (longlong)ppvVar3 >> 3) * 8);
        puVar8[1] = puVar8[1] + 8;
        goto LAB_1405bd8ff;
      }
    }
    else {
      if (ppvVar2 == (void **)puVar8[2]) {
        FUN_140050410(puVar8);
      }
      if ((undefined8 *)puVar8[1] != (undefined8 *)0x0) {
        *(undefined8 *)puVar8[1] = pvVar4;
      }
    }
    puVar8[1] = puVar8[1] + 8;
  }
  else {
    pvVar4 = *(void **)(*puVar8 + (longlong)*param_1 * 8);
    *(undefined2 *)((longlong)pvVar4 + 0x16) = 1;
    *(undefined2 *)((longlong)pvVar4 + 2) = 0;
    *(undefined4 *)((longlong)pvVar4 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar4 + 0x18) = 0xffffffff;
  }
LAB_1405bd8ff:
  iVar1 = *param_1;
  if ((iVar1 != -1) || ((*puVar9 & 1) != 0)) {
    iVar5 = iVar1 + -1;
    if (-1 < iVar5) {
      lVar6 = (longlong)iVar5;
      plVar7 = (longlong *)(*puVar8 + lVar6 * 8);
      do {
        if ((*(byte *)(*plVar7 + 0x17) & 1) != 0) goto LAB_1405bd989;
        iVar5 = iVar5 + -1;
        plVar7 = plVar7 + -1;
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
    iVar5 = (int)((longlong)(puVar8[1] - *puVar8) >> 3) + -1;
    if (iVar1 < iVar5) {
      plVar7 = (longlong *)(*puVar8 + (longlong)iVar5 * 8);
      do {
        if ((*(byte *)(*plVar7 + 0x17) & 1) != 0) {
LAB_1405bd989:
          *param_1 = iVar5;
          return pvVar4;
        }
        iVar5 = iVar5 + -1;
        plVar7 = plVar7 + -1;
      } while (iVar1 < iVar5);
    }
    *param_1 = -1;
    *puVar9 = *puVar9 & 0xfffffffe;
  }
  return pvVar4;
}

