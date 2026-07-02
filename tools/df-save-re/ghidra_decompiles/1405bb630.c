// FUN_1405bb630 @ 1405bb630
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


bool FUN_1405bb630(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  ushort uVar2;
  ushort local_res10 [4];
  
  uVar2 = *(ushort *)(param_2 + 2);
  if (9999 < uVar2) {
    uVar2 = 0;
  }
  local_res10[0] = uVar2;
  cVar1 = FUN_1405bb7c0(param_1,local_res10,2);
  if (cVar1 == '\0') {
    return false;
  }
  if (uVar2 == 0) {
    return true;
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  cVar1 = FUN_1405bb7c0(param_1,param_2,(longlong)(short)uVar2);
  return cVar1 != '\0';
}

