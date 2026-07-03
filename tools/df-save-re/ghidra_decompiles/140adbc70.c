// FUN_140adbc70 @ 140adbc70
// callees:
//   -> 140493660 FUN_140493660
//   -> 140adbba0 FUN_140adbba0
//   -> 140dfb6d8 operator_new
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 1405b8630 FUN_1405b8630
//   -> 1405b8720 FUN_1405b8720


void FUN_140adbc70(longlong param_1,char param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  __uint64 _Var4;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  short sVar11;
  uint uVar12;
  short sVar13;
  longlong lVar14;
  longlong lVar15;
  short sVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  longlong lVar19;
  short sVar20;
  
  if (param_2 != '\0') {
    FUN_140493660(param_1 + 0xe8);
    FUN_140adbba0(param_1);
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  if (*(longlong *)(param_1 + 0x483a8) == 0) {
    sVar20 = (short)(*(int *)(param_1 + 0xa0) + 0xf >> 4);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)sVar20;
    _Var4 = SUB168(ZEXT816(8) * auVar2,0);
    if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
      _Var4 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new(_Var4);
    *(void **)(param_1 + 0x483a8) = pvVar5;
    puVar18 = (ulonglong *)0x0;
    if (0 < sVar20) {
      sVar11 = (short)(iVar1 + 0xf >> 4);
      uVar17 = (ulonglong)sVar11;
      puVar10 = puVar18;
      sVar13 = 0;
      do {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar17;
        uVar6 = SUB168(ZEXT816(0x20) * auVar3,0);
        if (SUB168(ZEXT816(0x20) * auVar3,8) != 0) {
          uVar6 = 0xffffffffffffffff;
        }
        _Var4 = uVar6 + 8;
        if (0xfffffffffffffff7 < uVar6) {
          _Var4 = 0xffffffffffffffff;
        }
        puVar7 = operator_new(_Var4);
        puVar8 = puVar18;
        if (puVar7 != (ulonglong *)0x0) {
          *puVar7 = uVar17;
          _eh_vector_constructor_iterator_(puVar7 + 1,0x20,uVar17,FUN_140a5b540,FUN_140a5b560);
          puVar8 = puVar7 + 1;
        }
        *(ulonglong **)((longlong)puVar10 + *(longlong *)(param_1 + 0x483a8)) = puVar8;
        puVar8 = puVar18;
        sVar16 = 0;
        if (0 < sVar11) {
          do {
            *(short *)((longlong)puVar8 +
                      *(longlong *)((longlong)puVar10 + *(longlong *)(param_1 + 0x483a8))) = sVar13;
            *(short *)(*(longlong *)((longlong)puVar10 + *(longlong *)(param_1 + 0x483a8)) + 2 +
                      (longlong)puVar8) = sVar16;
            sVar16 = sVar16 + 1;
            puVar8 = puVar8 + 4;
          } while (sVar16 < sVar11);
        }
        sVar13 = sVar13 + 1;
        puVar10 = puVar10 + 1;
      } while (sVar13 < sVar20);
    }
  }
  uVar12 = (int)(*(longlong *)(param_1 + 0x290) - *(longlong *)(param_1 + 0x288) >> 3) - 1;
  if (-1 < (int)uVar12) {
    lVar19 = (longlong)(int)uVar12 << 3;
    do {
      lVar14 = *(longlong *)(lVar19 + *(longlong *)(param_1 + 0x288));
      uVar9 = (int)(*(longlong *)(lVar14 + 0x80) - *(longlong *)(lVar14 + 0x78) >> 1) - 1;
      if (-1 < (int)uVar9) {
        lVar14 = (longlong)(int)uVar9 * 2;
        do {
          lVar15 = *(longlong *)(lVar19 + *(longlong *)(param_1 + 0x288));
          FUN_1405b8630(((longlong)*(short *)(*(longlong *)(lVar15 + 0x90) + lVar14) >> 4) * 0x20 +
                        *(longlong *)
                         (*(longlong *)(param_1 + 0x483a8) +
                         ((longlong)*(short *)(*(longlong *)(lVar15 + 0x78) + lVar14) >> 4) * 8),
                        uVar12 & 0xffff,uVar9 & 0xffff);
          lVar14 = lVar14 + -2;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      lVar19 = lVar19 + -8;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  uVar12 = (int)(*(longlong *)(param_1 + 0x248) - *(longlong *)(param_1 + 0x240) >> 3) - 1;
  if (-1 < (int)uVar12) {
    lVar19 = (longlong)(int)uVar12 << 3;
    do {
      lVar14 = *(longlong *)(lVar19 + *(longlong *)(param_1 + 0x240));
      uVar9 = (int)(*(longlong *)(lVar14 + 0xa0) - *(longlong *)(lVar14 + 0x98) >> 1) - 1;
      if (-1 < (int)uVar9) {
        lVar15 = (longlong)(int)uVar9 * 2;
        do {
          FUN_1405b8720(((longlong)*(short *)(lVar15 + *(longlong *)(lVar14 + 0xb0)) >> 4) * 0x20 +
                        *(longlong *)
                         (*(longlong *)(param_1 + 0x483a8) +
                         ((longlong)*(short *)(lVar15 + *(longlong *)(lVar14 + 0x98)) >> 4) * 8),
                        uVar12 & 0xffff,uVar9 & 0xffff);
          lVar15 = lVar15 + -2;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      lVar19 = lVar19 + -8;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}

