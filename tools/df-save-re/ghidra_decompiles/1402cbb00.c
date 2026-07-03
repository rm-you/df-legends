// FUN_1402cbb00 @ 1402cbb00
// callees:
//   -> 14007b940 FUN_14007b940
//   -> 14000cb40 FUN_14000cb40
//   -> 140050540 FUN_140050540


undefined8 *
FUN_1402cbb00(undefined8 *param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_14007b940(param_1,*(longlong *)(param_2 + 0x10) + 1,param_3,param_4,1,0xfffffffffffffffe);
  FUN_14000cb40(param_1,param_2,0,0xffffffffffffffff);
  FUN_140050540(param_1,1,param_3 & 0xff);
  return param_1;
}

