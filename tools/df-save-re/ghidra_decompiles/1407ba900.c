// FUN_1407ba900 @ 1407ba900
// callees:
//   -> 1406f71b0 FUN_1406f71b0


void FUN_1407ba900(longlong param_1,undefined8 param_2)

{
  short sVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  plVar2 = *(longlong **)(param_1 + 0x118);
  uVar3 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x120) + (7 - (longlong)plVar2)) >> 3;
  if (*(longlong **)(param_1 + 0x120) < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      sVar1 = (*(code *)**(undefined8 **)*plVar2)();
      if (sVar1 == 4) {
        sVar1 = *(short *)(*plVar2 + 0xc);
        if (sVar1 < 0x5a) {
          if (sVar1 < 0x46) {
            if (sVar1 < 0x32) {
              if (sVar1 < 0x19) goto LAB_1407ba9a0;
              uVar5 = 1;
            }
            else {
              uVar5 = 2;
            }
          }
          else {
            uVar5 = 5;
          }
        }
        else {
          uVar5 = 10;
        }
        FUN_1406f71b0(param_2,2,*(undefined4 *)(*plVar2 + 8),uVar5);
      }
LAB_1407ba9a0:
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}

