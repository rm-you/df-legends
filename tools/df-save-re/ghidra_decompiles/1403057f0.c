// FUN_1403057f0 @ 1403057f0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb6d8 operator_new


void FUN_1403057f0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  void *pvVar4;
  __uint64 _Var5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,(int *)((longlong)param_1 + 4),4);
  lVar10 = 0x18;
  plVar7 = param_1;
  do {
    plVar7 = plVar7 + 1;
    FUN_1405bba90(param_2,local_res18,1);
    if ((char)local_res18[0] == '\0') {
      *plVar7 = 0;
    }
    else {
      if (*plVar7 == 0) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = (longlong)(int)*param_1;
        _Var5 = SUB168(ZEXT816(8) * auVar1,0);
        if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
          _Var5 = 0xffffffffffffffff;
        }
        pvVar4 = operator_new(_Var5);
        iVar8 = 0;
        *plVar7 = (longlong)pvVar4;
        if (0 < (int)*param_1) {
          lVar9 = 0;
          do {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = (longlong)*(int *)((longlong)param_1 + 4);
            _Var5 = SUB168(ZEXT816(2) * auVar2,0);
            if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
              _Var5 = 0xffffffffffffffff;
            }
            pvVar4 = operator_new(_Var5);
            iVar8 = iVar8 + 1;
            *(void **)(lVar9 + *plVar7) = pvVar4;
            lVar9 = lVar9 + 8;
          } while (iVar8 < (int)*param_1);
        }
      }
      iVar8 = 0;
      if (0 < (int)*param_1) {
        iVar3 = *(int *)((longlong)param_1 + 4);
        lVar9 = 0;
        do {
          iVar6 = 0;
          if (0 < iVar3) {
            do {
              FUN_1405bba90(param_2,*(longlong *)(*plVar7 + lVar9) + (longlong)iVar6 * 2,2);
              iVar3 = *(int *)((longlong)param_1 + 4);
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar3);
          }
          iVar8 = iVar8 + 1;
          lVar9 = lVar9 + 8;
        } while (iVar8 < (int)*param_1);
      }
    }
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

