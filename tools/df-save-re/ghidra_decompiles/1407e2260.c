// FUN_1407e2260 @ 1407e2260
// callees:


void FUN_1407e2260(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar5 = (ulonglong)param_2;
  if (param_2 < param_3) {
    lVar8 = uVar5 * 8;
    do {
      if ((ulonglong)(param_1[1] - *param_1 >> 3) <= (ulonglong)(longlong)(int)uVar5) {
        return;
      }
      lVar1 = *(longlong *)(lVar8 + *param_1);
      puVar3 = *(undefined8 **)(lVar1 + 0x80);
      puVar2 = *(undefined8 **)(lVar1 + 0x88);
      uVar6 = (ulonglong)((longlong)puVar2 + (7 - (longlong)puVar3)) >> 3;
      if (puVar2 < puVar3) {
        uVar6 = 0;
      }
      uVar7 = 0;
      if (uVar6 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar3 + 0x40))();
          uVar7 = uVar7 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar7 < uVar6);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      lVar8 = lVar8 + 8;
    } while ((int)uVar4 < param_3);
  }
  return;
}

