// FUN_1400be580 @ 1400be580
// callees:
//   -> 14007b940 FUN_14007b940
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40


undefined8 * FUN_1400be580(undefined8 *param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  lVar2 = lVar3;
  if (*param_2 != '\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != '\0');
  }
  FUN_14007b940(param_1,*(longlong *)(param_3 + 0x10) + lVar2,param_3,param_4,1,0xfffffffffffffffe);
  if (*param_2 != '\0') {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != '\0');
  }
  FUN_14000c9f0(param_1,param_2,lVar3);
  FUN_14000cb40(param_1,param_3,0,0xffffffffffffffff);
  return param_1;
}

