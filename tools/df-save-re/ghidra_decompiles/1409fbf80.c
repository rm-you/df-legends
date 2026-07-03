// FUN_1409fbf80 @ 1409fbf80
// callees:


void FUN_1409fbf80(longlong param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  lVar6 = DAT_141d69520;
  while (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)*plVar4;
    sVar1 = *(short *)((longlong)plVar5 + 0x2c);
    sVar2 = (short)plVar5[6];
    sVar3 = *(short *)((longlong)plVar5 + 0x2e);
    if (((((sVar1 < 0) || (DAT_141d69554 <= sVar1)) || (sVar3 < 0)) ||
        ((DAT_141d69558 <= sVar3 || (sVar2 < 0)))) ||
       ((DAT_141d6955c <= sVar2 ||
        ((lVar6 == 0 ||
         (*(longlong *)
           (*(longlong *)
             (*(longlong *)(lVar6 + ((longlong)sVar1 >> 4) * 8) + ((longlong)sVar3 >> 4) * 8) +
           (longlong)sVar2 * 8) == 0)))))) {
      plVar4 = (longlong *)plVar4[2];
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,1);
        lVar6 = DAT_141d69520;
      }
    }
    else {
      plVar4 = (longlong *)plVar4[2];
    }
  }
  return;
}

