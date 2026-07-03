// FUN_14007b5f0 @ 14007b5f0
// callees:
//   -> 14007b940 FUN_14007b940
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0


undefined8 * FUN_14007b5f0(undefined8 *param_1,longlong param_2,char *param_3,undefined8 param_4)

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
  if (*param_3 != '\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_3[lVar2] != '\0');
  }
  FUN_14007b940(param_1,lVar2 + *(longlong *)(param_2 + 0x10),param_3,param_4,1,0xfffffffffffffffe);
  FUN_14000cb40(param_1,param_2,0,0xffffffffffffffff);
  if (*param_3 != '\0') {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_3[lVar3] != '\0');
  }
  FUN_14000c9f0(param_1,param_3,lVar3);
  return param_1;
}

