// FUN_140150dd0 @ 140150dd0
// callees:


longlong FUN_140150dd0(longlong param_1,short param_2,int param_3,short param_4)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = (short)((longlong)(ulonglong)(uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) >> 3
                 );
  do {
    sVar3 = sVar3 + -1;
    if (sVar3 < 0) {
      return 0;
    }
    sVar2 = (**(code **)**(undefined8 **)((longlong)sVar3 * 8 + *(longlong *)(param_1 + 8)))();
  } while ((((sVar2 != 3) ||
            (lVar1 = *(longlong *)((longlong)sVar3 * 8 + *(longlong *)(param_1 + 8)),
            *(short *)(lVar1 + 8) != param_2)) || (*(int *)(lVar1 + 0xc) != param_3)) ||
          (*(short *)(lVar1 + 0x10) != param_4));
  return lVar1;
}

