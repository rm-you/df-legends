// FUN_14027ffb0 @ 14027ffb0
// callees:
//   -> 140280210 FUN_140280210


longlong * FUN_14027ffb0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong uStack_30;
  
  puVar4 = (uint *)*param_1;
  uVar1 = param_1[3];
  uStack_40 = 0;
  puVar8 = puVar4;
  if (uVar1 != 0) {
    uVar5 = (*param_3 - (longlong)puVar4 >> 2) * 0x20 + param_3[1];
    if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
      lVar3 = (-uVar5 - 1 >> 5) * -4 + -4;
    }
    else {
      lVar3 = (uVar5 >> 5) * 4;
    }
    puVar8 = (uint *)((longlong)puVar4 + lVar3);
    uStack_40 = (ulonglong)((uint)uVar5 & 0x1f);
  }
  uStack_30 = 0;
  puVar6 = puVar4;
  if (uVar1 != 0) {
    uVar5 = (*param_4 - (longlong)puVar4 >> 2) * 0x20 + param_4[1];
    if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
      lVar3 = (-uVar5 - 1 >> 5) * -4 + -4;
    }
    else {
      lVar3 = (uVar5 >> 5) * 4;
    }
    puVar6 = (uint *)((longlong)puVar4 + lVar3);
    uStack_30 = (ulonglong)((uint)uVar5 & 0x1f);
  }
  uVar5 = ((longlong)puVar8 - (longlong)puVar4 >> 2) * 0x20 + uStack_40;
  if ((puVar8 != puVar6) || (uStack_40 != uStack_30)) {
    uVar7 = 0;
    if (uVar1 != 0) {
      if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
        lVar3 = (-uVar1 - 1 >> 5) * -4 + -4;
      }
      else {
        lVar3 = (uVar1 >> 5) * 4;
      }
      puVar4 = (uint *)((longlong)puVar4 + lVar3);
      uVar7 = (ulonglong)((uint)uVar1 & 0x1f);
    }
    while ((puVar6 != puVar4 || (uStack_30 != uVar7))) {
      if ((*puVar6 & 1 << ((byte)uStack_30 & 0x1f)) == 0) {
        uVar2 = *puVar8 & ~(1 << ((uint)uStack_40 & 0x1f));
      }
      else {
        uVar2 = *puVar8 | 1 << ((uint)uStack_40 & 0x1f);
      }
      *puVar8 = uVar2;
      if (uStack_40 < 0x1f) {
        uStack_40 = uStack_40 + 1;
      }
      else {
        uStack_40 = 0;
        puVar8 = puVar8 + 1;
      }
      if (uStack_30 < 0x1f) {
        uStack_30 = uStack_30 + 1;
      }
      else {
        uStack_30 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    FUN_140280210(param_1,((longlong)puVar8 - *param_1 >> 2) * 0x20 + uStack_40);
  }
  if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
    local_48 = (-uVar5 - 1 >> 5) * -4 + -4;
  }
  else {
    local_48 = (uVar5 >> 5) * 4;
  }
  local_48 = *param_1 + local_48;
  *param_2 = local_48;
  param_2[1] = (ulonglong)((uint)uVar5 & 0x1f);
  return param_2;
}

