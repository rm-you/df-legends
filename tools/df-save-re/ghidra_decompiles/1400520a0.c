// FUN_1400520a0 @ 1400520a0
// callees:
//   -> 140071520 FUN_140071520


undefined8 * FUN_1400520a0(undefined8 *param_1)

{
  ulonglong local_res8;
  
  local_res8 = (ulonglong)param_1 & 0xffffffff00000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140071520(param_1,0,&local_res8);
  param_1[3] = 0;
  return param_1;
}

