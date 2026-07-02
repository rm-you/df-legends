// FUN_140428600 @ 140428600
// callees:
//   -> 1400b2ab0 FUN_1400b2ab0
//   -> 14027ffb0 FUN_14027ffb0


void FUN_140428600(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  undefined1 local_18 [16];
  
  uVar1 = param_1[3];
  local_48[0] = 0;
  if (uVar1 < param_2) {
    local_38 = *param_1;
    uStack_30 = 0;
    if (uVar1 != 0) {
      if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
        lVar2 = (-uVar1 - 1 >> 5) * -4 + -4;
      }
      else {
        lVar2 = (uVar1 >> 5) * 4;
      }
      local_38 = local_38 + lVar2;
      uStack_30 = (ulonglong)((uint)uVar1 & 0x1f);
    }
    local_28 = local_38;
    uStack_20 = uStack_30;
    FUN_1400b2ab0(param_1,&local_38,&local_28,param_2 - uVar1,local_48);
    return;
  }
  if (param_2 < uVar1) {
    local_38 = *param_1;
    uStack_20 = 0;
    local_28 = local_38;
    if (uVar1 != 0) {
      if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
        local_28 = (-uVar1 - 1 >> 5) * -4 + -4;
      }
      else {
        local_28 = (uVar1 >> 5) * 4;
      }
      local_28 = local_38 + local_28;
      uStack_20 = (ulonglong)((uint)uVar1 & 0x1f);
    }
    if (((longlong)param_2 < 0) && (param_2 != 0)) {
      lVar2 = (-param_2 - 1 >> 5) * -4 + -4;
    }
    else {
      lVar2 = (param_2 >> 5) * 4;
    }
    local_38 = local_38 + lVar2;
    uStack_30 = (ulonglong)((uint)param_2 & 0x1f);
    FUN_14027ffb0(param_1,local_18,&local_38,&local_28);
  }
  return;
}

