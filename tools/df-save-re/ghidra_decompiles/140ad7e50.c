// FUN_140ad7e50 @ 140ad7e50
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb6d8 operator_new


void FUN_140ad7e50(int *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  __uint64 _Var4;
  void *pvVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 1,4);
  FUN_1405bba90(param_2,local_res18,1);
  lVar8 = 0;
  if ((char)local_res18[0] == '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    uVar6 = (*param_1 + 1) * (param_1[1] + 1);
    uVar7 = (ulonglong)uVar6;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (longlong)(int)uVar6;
    _Var4 = SUB168(ZEXT816(4) * auVar1,0);
    if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
      _Var4 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new(_Var4);
    *(void **)(param_1 + 2) = pvVar5;
    lVar9 = lVar8;
    if (0 < (int)uVar6) {
      do {
        FUN_1405bba90(param_2,*(longlong *)(param_1 + 2) + lVar9,4);
        uVar7 = uVar7 - 1;
        lVar9 = lVar9 + 4;
      } while (uVar7 != 0);
    }
  }
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    uVar6 = (*param_1 + 1) * (param_1[1] + 1);
    uVar7 = (ulonglong)uVar6;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)(int)uVar6;
    _Var4 = SUB168(ZEXT816(4) * auVar2,0);
    if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
      _Var4 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new(_Var4);
    *(void **)(param_1 + 4) = pvVar5;
    lVar9 = lVar8;
    if (0 < (int)uVar6) {
      do {
        FUN_1405bba90(param_2,*(longlong *)(param_1 + 4) + lVar9,4);
        uVar7 = uVar7 - 1;
        lVar9 = lVar9 + 4;
      } while (uVar7 != 0);
    }
  }
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    uVar6 = *param_1 * param_1[1];
    uVar7 = (ulonglong)uVar6;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)(int)uVar6;
    _Var4 = SUB168(ZEXT816(4) * auVar3,0);
    if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
      _Var4 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new(_Var4);
    *(void **)(param_1 + 6) = pvVar5;
    lVar9 = lVar8;
    if (0 < (int)uVar6) {
      do {
        FUN_1405bba90(param_2,*(longlong *)(param_1 + 6) + lVar9,4);
        uVar7 = uVar7 - 1;
        lVar9 = lVar9 + 4;
      } while (uVar7 != 0);
    }
  }
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    uVar6 = (*param_1 + 1) * (param_1[1] + 1);
    uVar7 = (ulonglong)uVar6;
    pvVar5 = operator_new((longlong)(int)uVar6);
    *(void **)(param_1 + 8) = pvVar5;
    if (0 < (int)uVar6) {
      do {
        FUN_1405bba90(param_2,*(longlong *)(param_1 + 8) + lVar8,1);
        lVar8 = lVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return;
    }
  }
  return;
}

