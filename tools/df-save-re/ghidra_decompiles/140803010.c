// FUN_140803010 @ 140803010
// callees:
//   -> 140802a10 FUN_140802a10
//   -> 140803010 FUN_140803010
//   -> 1401696c0 FUN_1401696c0
//   -> 140c62080 FUN_140c62080
//   -> 140c745d0 FUN_140c745d0


void FUN_140803010(longlong param_1,short param_2,short param_3,short param_4,char param_5,
                  longlong *param_6)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) + -1;
  lVar5 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar5 * 8) + 0x10))();
      lVar4 = **(longlong **)(*(longlong *)(param_1 + 0x38) + lVar5 * 8);
      if (iVar2 == 10) {
        plVar3 = (longlong *)(**(code **)(lVar4 + 0x18))();
        if (plVar3 != (longlong *)0x0) {
          FUN_140802a10(plVar3);
          if (param_5 != '\0') {
            FUN_140803010(plVar3,param_2,param_3,param_4,param_5,param_6);
          }
          if ((param_6 == (longlong *)0x0) ||
             (cVar1 = (**(code **)(*param_6 + 0xf0))(param_6), cVar1 == '\0')) {
            (**(code **)(*plVar3 + 0x310))(plVar3,(int)param_2,(int)param_3,(int)param_4);
          }
          else {
            FUN_1401696c0(param_6,plVar3);
          }
        }
      }
      else {
        iVar2 = (**(code **)(lVar4 + 0x10))();
        if ((iVar2 == 9) &&
           (lVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar5 * 8) + 0x20))
                              (), lVar4 != 0)) {
          FUN_140c62080(lVar4);
          FUN_140c745d0(lVar4,(int)param_2,(int)param_3,(int)param_4);
        }
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return;
}

