// FUN_140cab160 @ 140cab160
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_140cab160(longlong *param_1)

{
  void *pvVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res10;
  uint uStackX_14;
  longlong *local_res20;
  longlong *local_58;
  longlong *local_50;
  
  iVar5 = DAT_1416b1980 * 0x62700 + DAT_1416b1974;
  local_res10 = 0;
  plVar7 = (longlong *)((ulonglong)uStackX_14 << 0x20);
  plVar3 = (longlong *)((ulonglong)uStackX_14 << 0x20);
  plVar6 = (longlong *)((ulonglong)uStackX_14 << 0x20);
  do {
    if (local_res10 == 0) {
      local_50 = param_1 + 0x15;
      plVar7 = param_1 + 0x12;
      local_58 = param_1 + 0x1b;
      local_res20 = param_1 + 0x18;
      plVar3 = param_1 + 0x1e;
      plVar6 = param_1 + 0x21;
    }
    else if (local_res10 == 1) {
      local_50 = param_1 + 3;
      local_res20 = param_1 + 6;
      local_58 = param_1 + 9;
      plVar3 = param_1 + 0xc;
      plVar6 = param_1 + 0xf;
      plVar7 = param_1;
    }
    iVar2 = (int)(plVar7[1] - *plVar7 >> 1) + -1;
    if (-1 < iVar2) {
      lVar4 = (longlong)iVar2 * 4;
      lVar9 = (longlong)iVar2 * 2;
      lVar8 = lVar4;
      do {
        if (0xc4dff < (iVar5 + *(int *)(lVar4 + *plVar3) * -0x62700) - *(int *)(lVar4 + *plVar6)) {
          pvVar1 = (void *)(*plVar7 + lVar9 + 2);
          memmove((void *)(*plVar7 + lVar9),pvVar1,plVar7[1] - (longlong)pvVar1);
          plVar7[1] = plVar7[1] + -2;
          pvVar1 = (void *)(*local_50 + lVar9 + 2);
          memmove((void *)(*local_50 + lVar9),pvVar1,local_50[1] - (longlong)pvVar1);
          local_50[1] = local_50[1] + -2;
          pvVar1 = (void *)(*local_res20 + lVar9 + 2);
          memmove((void *)(*local_res20 + lVar9),pvVar1,local_res20[1] - (longlong)pvVar1);
          local_res20[1] = local_res20[1] + -2;
          pvVar1 = (void *)(*local_58 + lVar8 + 4);
          memmove((void *)(*local_58 + lVar8),pvVar1,local_58[1] - (longlong)pvVar1);
          local_58[1] = local_58[1] + -4;
          pvVar1 = (void *)(*plVar3 + lVar8 + 4);
          memmove((void *)(*plVar3 + lVar8),pvVar1,plVar3[1] - (longlong)pvVar1);
          plVar3[1] = plVar3[1] + -4;
          pvVar1 = (void *)(*plVar6 + lVar8 + 4);
          memmove((void *)(*plVar6 + lVar8),pvVar1,plVar6[1] - (longlong)pvVar1);
          plVar6[1] = plVar6[1] + -4;
        }
        lVar9 = lVar9 + -2;
        lVar8 = lVar8 + -4;
        lVar4 = lVar4 + -4;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    local_res10 = local_res10 + 1;
  } while (local_res10 < 2);
  return;
}

