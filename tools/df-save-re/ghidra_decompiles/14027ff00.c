// FUN_14027ff00 @ 14027ff00
// callees:
//   -> 14027ffb0 FUN_14027ffb0


void FUN_14027ff00(longlong *param_1)

{
  ulonglong uVar1;
  longlong local_38;
  ulonglong uStack_30;
  longlong local_28 [2];
  undefined1 local_18 [24];
  
  local_28[0] = *param_1;
  uStack_30 = 0;
  uVar1 = param_1[3];
  local_38 = local_28[0];
  if (uVar1 != 0) {
    if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
      local_38 = (-uVar1 - 1 >> 5) * -4 + -4;
    }
    else {
      local_38 = (uVar1 >> 5) * 4;
    }
    local_38 = local_28[0] + local_38;
    uStack_30 = (ulonglong)((uint)uVar1 & 0x1f);
  }
  local_28[1] = 0;
  FUN_14027ffb0(param_1,local_18,local_28,&local_38,0xfffffffffffffffe);
  return;
}

