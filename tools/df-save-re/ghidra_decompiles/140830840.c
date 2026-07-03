// FUN_140830840 @ 140830840
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 1407ea4a0 FUN_1407ea4a0
//   -> 140830a20 FUN_140830a20


void FUN_140830840(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined4 local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    *param_1 = 0;
  }
  else {
    pvVar1 = operator_new(0xf0);
    uVar2 = FUN_1407ea4a0(pvVar1);
    *param_1 = uVar2;
    FUN_140830a20(uVar2,param_2);
  }
  FUN_1405bba90(param_2,param_1 + 1,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0xc,4);
  return;
}

