// FUN_14000cfe0 @ 14000cfe0
// callees:
//   -> 14000cc60 FUN_14000cc60
//   -> 140dfdcc6 memcpy
//   -> 140002020 FUN_140002020


void FUN_14000cfe0(undefined8 *param_1,ulonglong param_2,size_t param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = param_2 | 0xf;
  puVar1 = param_1;
  uVar4 = param_3;
  if (uVar3 != 0xffffffffffffffff) {
    uVar4 = param_1[3];
    puVar1 = (undefined8 *)(uVar4 >> 1);
    param_2 = uVar3;
    if (((undefined8 *)(uVar3 / 3) < puVar1) &&
       (param_2 = 0xfffffffffffffffe, uVar4 <= -(longlong)puVar1 - 2U)) {
      param_2 = (longlong)puVar1 + uVar4;
    }
  }
  puVar1 = (undefined8 *)FUN_14000cc60(puVar1,param_2 + 1,uVar4,param_4,0xfffffffffffffffe);
  if (param_3 != 0) {
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (param_3 != 0) {
      memcpy(puVar1,puVar2,param_3);
    }
  }
  if (0xf < (ulonglong)param_1[3]) {
    FUN_140002020(*param_1,param_1[3] + 1,1);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar2 = 0;
  *param_1 = puVar1;
  param_1[3] = param_2;
  param_1[2] = param_3;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = puVar1;
  }
  *(undefined1 *)((longlong)param_1 + param_3) = 0;
  return;
}

