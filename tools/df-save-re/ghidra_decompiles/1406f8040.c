// FUN_1406f8040 @ 1406f8040
// callees:
//   -> 140071520 FUN_140071520


undefined8 *
FUN_1406f8040(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong local_res10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 3;
  local_res10 = (ulonglong)puVar1 & 0xffffffff00000000;
  *puVar1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_140071520(puVar1,0,&local_res10,param_4,0xfffffffffffffffe);
  param_1[6] = 0;
  param_1[7] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

