// FUN_14000c110 @ 14000c110
// callees:
//   -> 140dfdcc0 memcmp


uint FUN_14000c110(undefined8 *param_1,char *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong _Size;
  
  uVar4 = 0;
  if (*param_2 != '\0') {
    uVar4 = 0xffffffffffffffff;
    do {
      uVar4 = uVar4 + 1;
    } while (param_2[uVar4] != '\0');
  }
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar2 = *puVar1;
  _Size = uVar4;
  if (uVar2 < uVar4) {
    _Size = uVar2;
  }
  if ((_Size == 0) || (uVar3 = memcmp(param_1,param_2,_Size), uVar3 == 0)) {
    if (uVar2 < uVar4) {
      return 0xffffffff;
    }
    uVar3 = (uint)(uVar4 < uVar2);
  }
  return uVar3;
}

