// FUN_140da7d20 @ 140da7d20
// callees:


undefined8 FUN_140da7d20(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  
  if (((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
      (((int)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)))) &&
     (((int)param_4 < *(int *)(param_1 + 0x1160ec) &&
      ((*(longlong *)(param_1 + 0x1160b0) != 0 &&
       (lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8)
                   + ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar1 != 0)))))) {
    sVar3 = (short)((longlong)(ulonglong)(uint)(*(int *)(lVar1 + 0x10) - *(int *)(lVar1 + 8)) >> 3);
    do {
      sVar3 = sVar3 + -1;
      if (sVar3 < 0) {
        return 0;
      }
      sVar2 = (**(code **)**(undefined8 **)(*(longlong *)(lVar1 + 8) + (longlong)sVar3 * 8))();
    } while (sVar2 != 1);
    return *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)sVar3 * 8);
  }
  return 0;
}

