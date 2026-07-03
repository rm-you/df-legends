// FUN_1403609e0 @ 1403609e0
// callees:
//   -> 140280210 FUN_140280210


longlong * FUN_1403609e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong uStack_30;
  
  puVar8 = (uint *)*param_1;
  uVar1 = param_1[3];
  uStack_40 = 0;
  puVar5 = puVar8;
  if (uVar1 != 0) {
    uVar4 = (*param_3 - (longlong)puVar8 >> 2) * 0x20 + param_3[1];
    if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
      lVar3 = (-uVar4 - 1 >> 5) * -4 + -4;
    }
    else {
      lVar3 = (uVar4 >> 5) * 4;
    }
    puVar5 = (uint *)((longlong)puVar8 + lVar3);
    uStack_40 = (ulonglong)((uint)uVar4 & 0x1f);
  }
  uVar7 = 0;
  uVar4 = ((longlong)puVar5 - (longlong)puVar8 >> 2) * 0x20 + uStack_40;
  if (uVar1 != 0) {
    if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
      lVar3 = (-uVar1 - 1 >> 5) * -4 + -4;
    }
    else {
      lVar3 = (uVar1 >> 5) * 4;
    }
    puVar8 = (uint *)((longlong)puVar8 + lVar3);
    uVar7 = (ulonglong)((uint)uVar1 & 0x1f);
  }
  puVar6 = puVar5 + (uStack_40 + 1 >> 5);
  uStack_30 = (ulonglong)((uint)(uStack_40 + 1) & 0x1f);
  while ((puVar6 != puVar8 || (uStack_30 != uVar7))) {
    if ((*puVar6 & 1 << ((byte)uStack_30 & 0x1f)) == 0) {
      uVar2 = *puVar5 & ~(1 << ((uint)uStack_40 & 0x1f));
    }
    else {
      uVar2 = *puVar5 | 1 << ((uint)uStack_40 & 0x1f);
    }
    *puVar5 = uVar2;
    if (uStack_40 < 0x1f) {
      uStack_40 = uStack_40 + 1;
    }
    else {
      uStack_40 = 0;
      puVar5 = puVar5 + 1;
    }
    if (uStack_30 < 0x1f) {
      uStack_30 = uStack_30 + 1;
    }
    else {
      uStack_30 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  FUN_140280210(param_1,param_1[3] + -1);
  if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
    local_48 = (-uVar4 - 1 >> 5) * -4 + -4;
  }
  else {
    local_48 = (uVar4 >> 5) * 4;
  }
  local_48 = *param_1 + local_48;
  *param_2 = local_48;
  param_2[1] = (ulonglong)((uint)uVar4 & 0x1f);
  return param_2;
}

