// FUN_140071310 @ 140071310
// callees:
//   -> 140dfdcc0 memcmp


uint FUN_140071310(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong _Size;
  
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  puVar2 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar3 = *puVar1;
  uVar4 = *puVar2;
  _Size = uVar3;
  if (uVar4 < uVar3) {
    _Size = uVar4;
  }
  if ((_Size != 0) && (uVar5 = memcmp(param_1,param_2,_Size), uVar5 != 0)) {
    return uVar5;
  }
  if (uVar3 <= uVar4) {
    return (uint)(uVar3 < uVar4);
  }
  return 0xffffffff;
}

