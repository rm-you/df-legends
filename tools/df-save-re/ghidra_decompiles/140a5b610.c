// FUN_140a5b610 @ 140a5b610
// callees:
//   -> 140303030 FUN_140303030
//   -> 140dfb6d8 operator_new
//   -> 140dfb9a8 `eh_vector_constructor_iterator'


void FUN_140a5b610(short *param_1,short param_2,short param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  __uint64 _Var3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  short sVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  
  FUN_140303030();
  param_1[0x14] = 1;
  param_1[0x15] = 0;
  param_1[1] = (short)(param_3 + 0xf >> 4);
  sVar8 = (short)(param_2 + 0xf >> 4);
  *param_1 = sVar8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)sVar8;
  _Var3 = SUB168(ZEXT816(8) * auVar1,0);
  if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
    _Var3 = 0xffffffffffffffff;
  }
  pvVar4 = operator_new(_Var3);
  *(void **)(param_1 + 4) = pvVar4;
  sVar8 = 0;
  if (0 < *param_1) {
    do {
      uVar9 = (ulonglong)param_1[1];
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      uVar5 = SUB168(ZEXT816(0x18) * auVar2,0);
      if (SUB168(ZEXT816(0x18) * auVar2,8) != 0) {
        uVar5 = 0xffffffffffffffff;
      }
      _Var3 = uVar5 + 8;
      if (0xfffffffffffffff7 < uVar5) {
        _Var3 = 0xffffffffffffffff;
      }
      puVar6 = operator_new(_Var3);
      puVar10 = (ulonglong *)0x0;
      if (puVar6 != (ulonglong *)0x0) {
        *puVar6 = uVar9;
        _eh_vector_constructor_iterator_(puVar6 + 1,0x18,uVar9,FUN_1400025a0,FUN_140004550);
        puVar10 = puVar6 + 1;
      }
      lVar7 = (longlong)sVar8;
      sVar8 = sVar8 + 1;
      *(ulonglong **)(*(longlong *)(param_1 + 4) + lVar7 * 8) = puVar10;
    } while (sVar8 < *param_1);
  }
  return;
}

