// FUN_1400b28a0 @ 1400b28a0
// callees:
//   -> 1400b2ab0 FUN_1400b2ab0


void FUN_1400b28a0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_28;
  ulonglong uStack_20;
  undefined1 local_18 [24];
  
  uVar1 = param_1[3];
  local_28 = *param_1;
  uStack_20 = 0;
  if (uVar1 != 0) {
    if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
      lVar2 = (-uVar1 - 1 >> 5) * -4 + -4;
    }
    else {
      lVar2 = (uVar1 >> 5) * 4;
    }
    local_28 = local_28 + lVar2;
    uStack_20 = (ulonglong)((uint)uVar1 & 0x1f);
  }
  FUN_1400b2ab0(param_1,local_18,&local_28,1,param_2);
  return;
}

