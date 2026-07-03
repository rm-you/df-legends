// FUN_14007b9f0 @ 14007b9f0
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000cf60 FUN_14000cf60
//   -> 14007bc60 FUN_14007bc60
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


longlong *
FUN_14007b9f0(longlong *param_1,longlong *param_2,undefined2 *param_3,undefined8 param_4,
             undefined2 *param_5)

{
  undefined2 uVar1;
  void *pvVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  size_t sVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 local_res20;
  
  lVar5 = *param_1;
  pvVar2 = (void *)param_1[1];
  lVar10 = (longlong)param_3 - lVar5;
  local_res20 = param_4;
  if (param_1[2] - (longlong)pvVar2 >> 1 == 0) {
    lVar7 = (longlong)pvVar2 - lVar5 >> 1;
    if (lVar7 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar8 = lVar7 + 1;
    uVar9 = param_1[2] - lVar5 >> 1;
    uVar4 = (uVar9 >> 1) + uVar9;
    if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
      uVar4 = 0;
    }
    if (uVar4 < uVar8) {
      uVar4 = uVar8;
    }
    pvVar2 = (void *)FUN_14000cf60(uVar8,uVar4);
    lVar5 = (longlong)param_3 - *param_1 >> 1;
    FUN_14007bc60((void *)((longlong)pvVar2 + lVar5 * 2),1,param_5);
    memmove(pvVar2,(void *)*param_1,(longlong)param_3 - *param_1);
    memmove((void *)((longlong)pvVar2 + (lVar5 + 1) * 2),param_3,param_1[1] - (longlong)param_3);
    lVar5 = *param_1;
    lVar7 = param_1[1];
    if (lVar5 != 0) {
      FUN_140002020(lVar5,param_1[2] - lVar5 >> 1,2);
    }
    param_1[2] = (longlong)((longlong)pvVar2 + uVar4 * 2);
    param_1[1] = (longlong)((longlong)pvVar2 + ((lVar7 - lVar5 >> 1) + 1) * 2);
    *param_1 = (longlong)pvVar2;
  }
  else if ((longlong)pvVar2 - (longlong)param_3 >> 1 == 0) {
    local_res20 = CONCAT62((int6)((ulonglong)param_4 >> 0x10),*param_5);
    memmove(param_3 + 1,param_3,(longlong)pvVar2 - (longlong)param_3);
    FUN_14007bc60(param_1[1],1 - (param_1[1] - (longlong)param_3 >> 1),&local_res20);
    param_1[1] = param_1[1] + 2;
    uVar4 = 0;
    uVar8 = (ulonglong)(param_1[1] + -2 + (1 - (longlong)param_3)) >> 1;
    if ((undefined2 *)(param_1[1] + -2) < param_3) {
      uVar8 = uVar4;
    }
    if (uVar8 != 0) {
      do {
        uVar4 = uVar4 + 1;
        *param_3 = (undefined2)local_res20;
        param_3 = param_3 + 1;
      } while (uVar4 != uVar8);
    }
  }
  else {
    sVar6 = (longlong)pvVar2 - ((longlong)pvVar2 + -2);
    uVar1 = *param_5;
    memmove(pvVar2,(void *)((longlong)pvVar2 + -2),sVar6);
    param_1[1] = sVar6 + (longlong)pvVar2;
    sVar6 = (longlong)pvVar2 + (-2 - (longlong)param_3);
    memmove((void *)((longlong)pvVar2 - sVar6),param_3,sVar6);
    puVar3 = param_3;
    if (param_3 != param_3 + 1) {
      do {
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 != param_3 + 1);
    }
  }
  *param_2 = *param_1 + (lVar10 >> 1) * 2;
  return param_2;
}

