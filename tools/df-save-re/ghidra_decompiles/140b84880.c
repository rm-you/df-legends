// FUN_140b84880 @ 140b84880
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb6d8 operator_new


void FUN_140b84880(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined1 auVar1 [16];
  __uint64 _Var2;
  void *pvVar3;
  int iVar4;
  char local_res18 [8];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,1);
  if (local_res18[0] == '\0') {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_1405bba90(param_2,param_1 + 1,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(int)param_1[1];
  _Var2 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    _Var2 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new(_Var2);
  iVar4 = 0;
  *param_1 = (longlong)pvVar3;
  if (0 < (int)param_1[1]) {
    do {
      FUN_1405bba90(param_2,*param_1 + (longlong)iVar4 * 4,4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[1]);
  }
  return;
}

