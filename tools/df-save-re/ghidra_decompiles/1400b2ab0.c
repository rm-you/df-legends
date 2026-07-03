// FUN_1400b2ab0 @ 1400b2ab0
// callees:
//   -> 1400b2ca0 FUN_1400b2ca0


longlong *
FUN_1400b2ab0(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,char *param_5
             )

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *local_28;
  undefined8 uStack_20;
  
  local_28 = (uint *)*param_3;
  uStack_20 = param_3[1];
  uVar3 = FUN_1400b2ca0(*(undefined4 *)param_3,&local_28,param_4);
  lVar7 = *param_1;
  uVar1 = uVar3 + param_4;
  if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
    lVar4 = (-uVar1 - 1 >> 5) * -4 + -4;
  }
  else {
    lVar4 = (uVar1 >> 5) * 4;
  }
  if (((longlong)uVar3 < 0) && (uVar3 != 0)) {
    lVar5 = (-uVar3 - 1 >> 5) * -4 + -4;
  }
  else {
    lVar5 = (uVar3 >> 5) * 4;
  }
  local_28 = (uint *)(lVar7 + lVar5);
  uVar8 = (ulonglong)((uint)uVar3 & 0x1f);
  uVar6 = uVar8;
  while ((local_28 != (uint *)(lVar7 + lVar4) || (uVar6 != ((uint)uVar1 & 0x1f)))) {
    if (*param_5 == '\0') {
      uVar2 = *local_28 & ~(1 << ((uint)uVar6 & 0x1f));
    }
    else {
      uVar2 = *local_28 | 1 << ((uint)uVar6 & 0x1f);
    }
    *local_28 = uVar2;
    if (uVar6 < 0x1f) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar6 = 0;
      local_28 = local_28 + 1;
    }
  }
  if (((longlong)uVar3 < 0) && (uVar3 != 0)) {
    lVar7 = (-uVar3 - 1 >> 5) * -4 + -4;
  }
  else {
    lVar7 = (uVar3 >> 5) * 4;
  }
  local_28 = (uint *)(*param_1 + lVar7);
  *param_2 = (longlong)local_28;
  param_2[1] = uVar8;
  return param_2;
}

