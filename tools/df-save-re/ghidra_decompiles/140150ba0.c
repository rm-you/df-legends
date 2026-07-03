// FUN_140150ba0 @ 140150ba0
// callees:


longlong FUN_140150ba0(longlong param_1,short param_2,short param_3)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = (short)((longlong)(ulonglong)(uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) >> 3
                 ) + -1;
  if (-1 < sVar3) {
    do {
      sVar2 = (**(code **)**(undefined8 **)((longlong)sVar3 * 8 + *(longlong *)(param_1 + 8)))();
      if ((sVar2 == 0) &&
         (lVar1 = *(longlong *)((longlong)sVar3 * 8 + *(longlong *)(param_1 + 8)),
         (*(ushort *)(lVar1 + 0xc + (longlong)param_3 * 2) >> ((int)param_2 & 0x1fU) & 1) != 0)) {
        return lVar1;
      }
      sVar3 = sVar3 + -1;
    } while (-1 < sVar3);
  }
  return 0;
}

