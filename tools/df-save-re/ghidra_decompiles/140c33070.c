// FUN_140c33070 @ 140c33070
// callees:
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140050540 FUN_140050540
//   -> 14000c780 FUN_14000c780


void FUN_140c33070(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (-1 < param_3) {
    plVar1 = *(longlong **)(param_1 + 0x5d8);
    uVar4 = (ulonglong)param_3;
    if (uVar4 < (ulonglong)(plVar1[1] - *plVar1 >> 3)) {
      lVar2 = *(longlong *)(*plVar1 + uVar4 * 8);
      lVar3 = *(longlong *)(lVar2 + 0x98);
      lVar2 = *(longlong *)(lVar2 + 0x90);
      param_2[2] = 0;
      if (lVar3 - lVar2 >> 3 != 0) {
        if ((ulonglong)param_2[3] < 0x10) {
          *(undefined1 *)param_2 = 0;
        }
        else {
          *(undefined1 *)*param_2 = 0;
        }
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + uVar4 * 8);
        if (1 < *(int *)(lVar2 + 0x84)) {
          FUN_14000cb40(param_2,**(undefined8 **)(lVar2 + 0xa8),0,0xffffffffffffffff);
          return;
        }
        FUN_14000cb40(param_2,**(undefined8 **)(lVar2 + 0x90),0,0xffffffffffffffff);
        return;
      }
      if ((ulonglong)param_2[3] < 0x10) {
        *(undefined1 *)param_2 = 0;
      }
      else {
        *(undefined1 *)*param_2 = 0;
      }
      FUN_14000c9f0(param_2,"body part",9);
      if (*(int *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + uVar4 * 8) + 0x84) < 2) {
        return;
      }
      FUN_140050540(param_2,1,0x73);
      return;
    }
  }
  FUN_14000c780(param_2,"body part",9);
  return;
}

