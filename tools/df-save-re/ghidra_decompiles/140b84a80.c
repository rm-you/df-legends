// FUN_140b84a80 @ 140b84a80
// callees:
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140b84880 FUN_140b84880
//   -> 140dfb6d8 operator_new
//   -> 140dfb9a8 `eh_vector_constructor_iterator'


void FUN_140b84a80(longlong param_1,undefined8 param_2,char param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  char local_res18 [8];
  int local_res20 [2];
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_1405bb6d0(param_2,param_1);
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 0x20,(longlong)local_res20[0]);
  puVar12 = (ulonglong *)0x0;
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  for (puVar8 = *(undefined8 **)(param_1 + 0x20); puVar8 < puVar1; puVar8 = puVar8 + 1) {
    puVar4 = operator_new(0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar8 = puVar4;
    FUN_140b84880(puVar4,param_2);
  }
  FUN_1405bba90(param_2,local_res18,1);
  if (local_res18[0] == '\0') {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0x48,4);
    uVar13 = (ulonglong)*(int *)(param_1 + 0x48);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13;
    uVar5 = SUB168(ZEXT816(0x20) * auVar2,0);
    if (SUB168(ZEXT816(0x20) * auVar2,8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    _Var6 = uVar5 + 8;
    if (0xfffffffffffffff7 < uVar5) {
      _Var6 = 0xffffffffffffffff;
    }
    puVar7 = operator_new(_Var6);
    puVar9 = puVar12;
    if (puVar7 != (ulonglong *)0x0) {
      *puVar7 = uVar13;
      _eh_vector_constructor_iterator_(puVar7 + 1,0x20,uVar13,FUN_14000c2b0,FUN_14000c260);
      puVar9 = puVar7 + 1;
    }
    uVar13 = (ulonglong)*(int *)(param_1 + 0x48);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar13;
    uVar5 = SUB168(ZEXT816(0x20) * auVar3,0);
    *(ulonglong **)(param_1 + 0x38) = puVar9;
    if (SUB168(ZEXT816(0x20) * auVar3,8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    _Var6 = uVar5 + 8;
    if (0xfffffffffffffff7 < uVar5) {
      _Var6 = 0xffffffffffffffff;
    }
    puVar7 = operator_new(_Var6);
    puVar9 = puVar12;
    if (puVar7 != (ulonglong *)0x0) {
      *puVar7 = uVar13;
      _eh_vector_constructor_iterator_(puVar7 + 1,0x20,uVar13,FUN_14000c2b0,FUN_14000c260);
      puVar9 = puVar7 + 1;
    }
    *(ulonglong **)(param_1 + 0x40) = puVar9;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        lVar10 = (longlong)(int)puVar12 * 0x20;
        FUN_1405bb6d0(param_2,*(longlong *)(param_1 + 0x38) + lVar10);
        FUN_1405bb6d0(param_2,*(longlong *)(param_1 + 0x40) + lVar10);
        uVar11 = (int)puVar12 + 1;
        puVar12 = (ulonglong *)(ulonglong)uVar11;
      } while ((int)uVar11 < *(int *)(param_1 + 0x48));
      return;
    }
  }
  return;
}

