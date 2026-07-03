// FUN_14015eda0 @ 14015eda0
// callees:


void FUN_14015eda0(longlong param_1,short param_2,short param_3)

{
  ushort uVar1;
  bool bVar2;
  short sVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  plVar5 = *(longlong **)(param_1 + 8);
  uVar8 = 0;
  bVar2 = false;
  uVar6 = (*(longlong *)(param_1 + 0x10) - (longlong)plVar5) + 7U >> 3;
  if (*(longlong **)(param_1 + 0x10) < plVar5) {
    uVar6 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar6 != 0) {
    do {
      sVar3 = (*(code *)**(undefined8 **)*plVar5)();
      if (sVar3 == 3) {
        lVar4 = (longlong)param_2 * 0x10 + *plVar5;
        if ((*(char *)((longlong)param_3 + 0x12 + lVar4) != '\0') &&
           (*(short *)(*plVar5 + 0x10) == 3)) {
          *(undefined1 *)((longlong)param_3 + 0x12 + lVar4) = 0;
          bVar2 = true;
        }
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
    if (bVar2) {
      plVar5 = *(longlong **)(param_1 + 8);
      uVar6 = (*(longlong *)(param_1 + 0x10) - (longlong)plVar5) + 7U >> 3;
      if (*(longlong **)(param_1 + 0x10) < plVar5) {
        uVar6 = uVar8;
      }
      if (uVar6 != 0) {
        do {
          sVar3 = (*(code *)**(undefined8 **)*plVar5)();
          if (sVar3 == 5) {
            lVar4 = *plVar5;
            lVar9 = (longlong)param_2 * 0x10 + (longlong)param_3;
            uVar1 = *(ushort *)(lVar4 + 8 + lVar9 * 2);
            if (((uVar1 & 1) != 0) && ((byte)(*(char *)(lVar9 + 0x208 + lVar4) - 1U) < 3)) {
              *(ushort *)(lVar4 + 8 + lVar9 * 2) = uVar1 & 0xfffe;
            }
          }
          plVar5 = plVar5 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar6);
      }
    }
  }
  return;
}

