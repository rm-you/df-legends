// FUN_140c5af70 @ 140c5af70
// callees:
//   -> 140c7fb40 FUN_140c7fb40
//   -> 14000d840 FUN_14000d840


ulonglong FUN_140c5af70(longlong param_1,short param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)param_2;
  FUN_140c7fb40();
  plVar1 = *(longlong **)(param_1 + 0x5d8);
  uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x12a0) + uVar3 * 4);
  if (-1 < param_2) {
    if (uVar3 < (ulonglong)(plVar1[1] - *plVar1 >> 3)) {
      cVar2 = FUN_14000d840(*(longlong *)(*plVar1 + uVar3 * 8) + 0x48,9);
      if (cVar2 != '\0') {
        return (ulonglong)(uint)((int)uVar4 * 2);
      }
    }
    if ((-1 < param_2) && (uVar3 < (ulonglong)(plVar1[1] - *plVar1 >> 3))) {
      cVar2 = FUN_14000d840(*(longlong *)(*plVar1 + uVar3 * 8) + 0x48,10);
      if (cVar2 != '\0') {
        return (ulonglong)((int)uVar4 / 2 + 1);
      }
    }
  }
  return uVar4 & 0xffffffff;
}

