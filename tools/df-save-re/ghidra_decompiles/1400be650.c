// FUN_1400be650 @ 1400be650
// callees:
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14007b2f0 FUN_14007b2f0


undefined1 * FUN_1400be650(undefined1 *param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*param_3 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_3[lVar2] != '\0');
  }
  uVar1 = FUN_14000c9f0(param_2,param_3,lVar2,param_2,0);
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_14007b2f0(param_1,uVar1);
  return param_1;
}

