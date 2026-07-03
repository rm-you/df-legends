// FUN_14020fa30 @ 14020fa30
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 140106a50 FUN_140106a50


void FUN_14020fa30(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar1 = (undefined8 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined8 *)*param_1, puVar2 <= param_2)) {
    puVar3 = (undefined8 *)param_1[2];
    if ((puVar1 == puVar3) && ((longlong)puVar3 - (longlong)puVar1 >> 3 == 0)) {
      lVar4 = (longlong)puVar1 - (longlong)puVar2 >> 3;
      if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar5 = lVar4 + 1;
      uVar7 = (longlong)puVar3 - (longlong)puVar2 >> 3;
      uVar6 = (uVar7 >> 1) + uVar7;
      if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
        uVar6 = 0;
      }
      if (uVar6 < uVar5) {
        uVar6 = uVar5;
      }
      FUN_140106a50(param_1,uVar6);
    }
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[1] =
           *(undefined8 *)(*param_1 + ((longlong)param_2 - (longlong)puVar2 >> 3) * 8);
      param_1[1] = param_1[1] + 8;
      return;
    }
  }
  else {
    puVar2 = (undefined8 *)param_1[2];
    if ((puVar1 == puVar2) && ((longlong)puVar2 - (longlong)puVar1 >> 3 == 0)) {
      lVar4 = (longlong)((longlong)puVar1 - *param_1) >> 3;
      if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar5 = lVar4 + 1;
      uVar7 = (longlong)((longlong)puVar2 - *param_1) >> 3;
      uVar6 = (uVar7 >> 1) + uVar7;
      if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
        uVar6 = 0;
      }
      if (uVar6 < uVar5) {
        uVar6 = uVar5;
      }
      FUN_140106a50(param_1,uVar6);
    }
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 8;
  return;
}

