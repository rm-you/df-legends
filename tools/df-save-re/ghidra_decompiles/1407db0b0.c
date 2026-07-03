// FUN_1407db0b0 @ 1407db0b0
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 14000c2d0 FUN_14000c2d0


undefined8 *
FUN_1407db0b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
  }
  puVar2 = operator_new(1);
  param_1[8] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 9) = 1;
  param_1[0x13] = 0xffffffffffffffff;
  local_res10 = param_1;
  if ((&local_res10 < DAT_141d779c8) && (DAT_141d779c0 <= &local_res10)) {
    lVar3 = (longlong)&local_res10 - (longlong)DAT_141d779c0;
    if (DAT_141d779c8 == DAT_141d779d0) {
      FUN_14000c2d0(&DAT_141d779c0,1,&local_res10,param_4,uVar4);
    }
    if (DAT_141d779c8 != (undefined8 **)0x0) {
      *DAT_141d779c8 = DAT_141d779c0[lVar3 >> 3];
    }
  }
  else {
    if (DAT_141d779c8 == DAT_141d779d0) {
      FUN_14000c2d0(&DAT_141d779c0,1);
    }
    if (DAT_141d779c8 != (undefined8 **)0x0) {
      *DAT_141d779c8 = param_1;
    }
  }
  DAT_141d779c8 = DAT_141d779c8 + 1;
  return param_1;
}

