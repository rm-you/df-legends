// FUN_1407410f0 @ 1407410f0
// callees:


void FUN_1407410f0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  short sVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_2 = 0xffffffff;
  uVar4 = 0;
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  plVar2 = *(longlong **)(param_1 + 0x118);
  uVar3 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x120) + (7 - (longlong)plVar2)) >> 3;
  if (*(longlong **)(param_1 + 0x120) < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      sVar1 = (*(code *)**(undefined8 **)*plVar2)();
      if (sVar1 == 0) {
        *param_2 = *(undefined4 *)(*plVar2 + 8);
      }
      else {
        sVar1 = (*(code *)**(undefined8 **)*plVar2)();
        if (sVar1 == 1) {
          *param_3 = *(undefined4 *)(*plVar2 + 8);
        }
        else {
          sVar1 = (*(code *)**(undefined8 **)*plVar2)();
          if (sVar1 == 2) {
            *param_4 = *(undefined4 *)(*plVar2 + 8);
          }
        }
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}

