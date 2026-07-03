// FUN_1407efe20 @ 1407efe20
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb6d8 operator_new


void FUN_1407efe20(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  __uint64 _Var3;
  int iVar4;
  undefined4 local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    *param_1 = 0;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 1,2);
    pvVar2 = operator_new((longlong)(short)param_1[1]);
    iVar4 = 0;
    *param_1 = (longlong)pvVar2;
    if (0 < (short)param_1[1]) {
      do {
        FUN_1405bba90(param_2,(longlong)iVar4 + *param_1,1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (short)param_1[1]);
    }
  }
  iVar4 = 0;
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    param_1[2] = 0;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 3,2);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (longlong)(short)param_1[3];
    _Var3 = SUB168(ZEXT816(2) * auVar1,0);
    if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
      _Var3 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new(_Var3);
    param_1[2] = (longlong)pvVar2;
    if (0 < (short)param_1[3]) {
      do {
        FUN_1405bba90(param_2,param_1[2] + (longlong)iVar4 * 2,2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (short)param_1[3]);
      return;
    }
  }
  return;
}

