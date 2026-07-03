// FUN_14015e850 @ 14015e850
// callees:


void FUN_14015e850(longlong param_1,short param_2,short param_3)

{
  ushort uVar1;
  longlong lVar2;
  short sVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  plVar4 = *(longlong **)(param_1 + 8);
  uVar5 = 0;
  uVar7 = (*(longlong *)(param_1 + 0x10) - (longlong)plVar4) + 7U >> 3;
  if (*(longlong **)(param_1 + 0x10) < plVar4) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      sVar3 = (*(code *)**(undefined8 **)*plVar4)();
      if (sVar3 == 3) {
        *(undefined1 *)((longlong)param_2 * 0x10 + (longlong)param_3 + 0x12 + *plVar4) = 0;
      }
      else {
        sVar3 = (*(code *)**(undefined8 **)*plVar4)();
        if (sVar3 == 6) {
          *(undefined4 *)(*plVar4 + 0x18 + ((longlong)param_2 * 0x10 + (longlong)param_3) * 4) = 0;
        }
        else {
          sVar3 = (*(code *)**(undefined8 **)*plVar4)();
          if (sVar3 == 5) {
            lVar2 = *plVar4;
            lVar6 = (longlong)param_3 + (longlong)param_2 * 0x10;
            uVar1 = *(ushort *)(lVar2 + 8 + lVar6 * 2);
            if (((uVar1 & 1) != 0) && ((byte)(*(char *)(lVar6 + 0x208 + lVar2) - 1U) < 3)) {
              *(ushort *)(lVar2 + 8 + lVar6 * 2) = uVar1 & 0xfffe;
            }
          }
        }
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  return;
}

