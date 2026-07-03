// FUN_140360820 @ 140360820
// callees:
//   -> 1403609e0 FUN_1403609e0


void FUN_140360820(longlong *param_1,ulonglong param_2)

{
  longlong local_28;
  ulonglong uStack_20;
  undefined1 local_18 [24];
  
  if (((longlong)param_2 < 0) && (param_2 != 0)) {
    local_28 = (-param_2 - 1 >> 5) * -4 + -4;
  }
  else {
    local_28 = (param_2 >> 5) * 4;
  }
  local_28 = *param_1 + local_28;
  uStack_20 = (ulonglong)((uint)param_2 & 0x1f);
  FUN_1403609e0(param_1,local_18,&local_28);
  return;
}

