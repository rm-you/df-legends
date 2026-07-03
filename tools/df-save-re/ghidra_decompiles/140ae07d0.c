// FUN_140ae07d0 @ 140ae07d0
// callees:
//   -> 140adffb0 FUN_140adffb0
//   -> 140dfb6d8 operator_new
//   -> 140dfb9a8 `eh_vector_constructor_iterator'


void FUN_140ae07d0(longlong param_1,int param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  short sVar6;
  __uint64 _Var7;
  void *pvVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  
  FUN_140adffb0();
  *(int *)(param_1 + 0xa0) = param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)param_2;
  _Var7 = SUB168(ZEXT816(8) * auVar1,0);
  if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
    _Var7 = 0xffffffffffffffff;
  }
  pvVar8 = operator_new(_Var7);
  *(void **)(param_1 + 0x2a0) = pvVar8;
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar13 = 0;
    do {
      uVar14 = (ulonglong)*(int *)(param_1 + 0xa4);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar14;
      uVar9 = SUB168(ZEXT816(0x70) * auVar2,0);
      if (SUB168(ZEXT816(0x70) * auVar2,8) != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      _Var7 = uVar9 + 8;
      if (0xfffffffffffffff7 < uVar9) {
        _Var7 = 0xffffffffffffffff;
      }
      puVar10 = operator_new(_Var7);
      if (puVar10 == (ulonglong *)0x0) {
        puVar10 = (ulonglong *)0x0;
      }
      else {
        *puVar10 = uVar14;
        puVar10 = puVar10 + 1;
        _eh_vector_constructor_iterator_(puVar10,0x70,uVar14,FUN_140a5ec90,FUN_140ae0700);
      }
      *(ulonglong **)(lVar13 + *(longlong *)(param_1 + 0x2a0)) = puVar10;
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + 8;
    } while (iVar12 < *(int *)(param_1 + 0xa0));
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)
                 ((*(int *)(param_1 + 0xa4) + 0xf >> 4) * (*(int *)(param_1 + 0xa0) + 0xf >> 4));
  _Var7 = SUB168(ZEXT816(4) * auVar3,0);
  if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
    _Var7 = 0xffffffffffffffff;
  }
  pvVar8 = operator_new(_Var7);
  *(void **)(param_1 + 0x2a8) = pvVar8;
  iVar12 = *(int *)(param_1 + 0xa4);
  sVar6 = (short)(*(int *)(param_1 + 0xa0) + 0xf >> 4);
  plVar16 = (longlong *)(param_1 + 0x2d0);
  lVar13 = 6;
  do {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)sVar6;
    _Var7 = SUB168(ZEXT816(8) * auVar4,0);
    if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
      _Var7 = 0xffffffffffffffff;
    }
    pvVar8 = operator_new(_Var7);
    *plVar16 = (longlong)pvVar8;
    if (0 < sVar6) {
      uVar14 = (ulonglong)(short)(iVar12 + 0xf >> 4);
      lVar15 = 0;
      uVar9 = (ulonglong)(uint)(int)sVar6;
      do {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        uVar11 = SUB168(ZEXT816(0x30) * auVar5,0);
        if (SUB168(ZEXT816(0x30) * auVar5,8) != 0) {
          uVar11 = 0xffffffffffffffff;
        }
        _Var7 = uVar11 + 8;
        if (0xfffffffffffffff7 < uVar11) {
          _Var7 = 0xffffffffffffffff;
        }
        puVar10 = operator_new(_Var7);
        if (puVar10 == (ulonglong *)0x0) {
          puVar10 = (ulonglong *)0x0;
        }
        else {
          *puVar10 = uVar14;
          puVar10 = puVar10 + 1;
          _eh_vector_constructor_iterator_(puVar10,0x30,uVar14,FUN_140007780,FUN_140ae0760);
        }
        *(ulonglong **)(lVar15 + *plVar16) = puVar10;
        lVar15 = lVar15 + 8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    plVar16 = plVar16 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}

