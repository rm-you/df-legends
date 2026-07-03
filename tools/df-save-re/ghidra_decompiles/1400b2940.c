// FUN_1400b2940 @ 1400b2940
// callees:


longlong * FUN_1400b2940(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  param_2[1] = (ulonglong)((uint)param_3 & 0x1f);
  *param_2 = lVar1 + (param_3 >> 5) * 4;
  return param_2;
}

