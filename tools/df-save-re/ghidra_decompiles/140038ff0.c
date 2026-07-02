// FUN_140038ff0 @ 140038ff0
// callees:
//   -> 14001b620 FUN_14001b620
//   -> 140dfb5b4 free


void FUN_140038ff0(void *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = (int)(*(longlong *)((longlong)param_1 + 0x10) - *(longlong *)((longlong)param_1 + 8) >> 3)
          + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      plVar4 = *(longlong **)(*(longlong *)((longlong)param_1 + 8) + lVar3 * 8);
      if ((*(byte *)((longlong)plVar4 + 0x14) & 1) == 0) {
        (**(code **)(*plVar4 + 0x40))(plVar4,0);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  plVar4 = *(longlong **)((longlong)param_1 + 8);
  uVar6 = 0;
  uVar5 = (*(longlong *)((longlong)param_1 + 0x10) - (longlong)plVar4) + 7U >> 3;
  if (*(longlong **)((longlong)param_1 + 0x10) < plVar4) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      plVar4 = plVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + 8);
  FUN_14001b620(param_1);
  free(param_1);
  return;
}

