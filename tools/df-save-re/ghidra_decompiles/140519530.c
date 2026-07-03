// FUN_140519530 @ 140519530
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140306db0 FUN_140306db0
//   -> 140dfb6d8 operator_new
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 1404937d0 FUN_1404937d0


void FUN_140519530(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  __uint64 _Var3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  short sVar7;
  ulonglong uVar8;
  short sVar9;
  ulonglong *puVar10;
  short sVar11;
  undefined4 local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    *param_1 = 0;
    return;
  }
  FUN_1405bba90(param_2,param_1 + 1,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 10,2);
  FUN_140306db0(param_1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(short)param_1[1];
  _Var3 = SUB168(ZEXT816(8) * auVar1,0);
  if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
    _Var3 = 0xffffffffffffffff;
  }
  pvVar4 = operator_new(_Var3);
  *param_1 = (longlong)pvVar4;
  sVar11 = 0;
  sVar9 = sVar11;
  if (0 < (short)param_1[1]) {
    do {
      uVar8 = (ulonglong)*(short *)((longlong)param_1 + 10);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      uVar5 = SUB168(ZEXT816(0x30) * auVar2,0);
      if (SUB168(ZEXT816(0x30) * auVar2,8) != 0) {
        uVar5 = 0xffffffffffffffff;
      }
      _Var3 = uVar5 + 8;
      if (0xfffffffffffffff7 < uVar5) {
        _Var3 = 0xffffffffffffffff;
      }
      puVar6 = operator_new(_Var3);
      puVar10 = (ulonglong *)0x0;
      if (puVar6 != (ulonglong *)0x0) {
        *puVar6 = uVar8;
        _eh_vector_constructor_iterator_(puVar6 + 1,0x30,uVar8,FUN_140007780,FUN_140004720);
        puVar10 = puVar6 + 1;
      }
      sVar7 = sVar9 + 1;
      *(ulonglong **)(*param_1 + (longlong)sVar9 * 8) = puVar10;
      sVar9 = sVar7;
    } while (sVar7 < (short)param_1[1]);
  }
  sVar9 = sVar11;
  if (0 < (short)param_1[1]) {
    do {
      if (0 < *(short *)((longlong)param_1 + 10)) {
        sVar7 = sVar11;
        do {
          FUN_1404937d0((longlong)sVar7 * 0x30 + *(longlong *)(*param_1 + (longlong)sVar9 * 8),
                        param_2);
          sVar7 = sVar7 + 1;
        } while (sVar7 < *(short *)((longlong)param_1 + 10));
      }
      sVar9 = sVar9 + 1;
    } while (sVar9 < (short)param_1[1]);
  }
  return;
}

