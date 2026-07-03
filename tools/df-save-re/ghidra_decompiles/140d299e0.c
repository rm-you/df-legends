// FUN_140d299e0 @ 140d299e0
// callees:
//   -> 14000c2d0 FUN_14000c2d0


void FUN_140d299e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x48390);
  iVar4 = 0;
  *(longlong *)(param_1 + 0x48398) = *plVar1;
  if (*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3 != 0) {
    lVar6 = 0;
    do {
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x168) + lVar6);
      if ((0 < *(int *)(*plVar5 + 0x2a8)) && ((**(byte **)(*plVar5 + 0x2a0) & 0x20) != 0)) {
        plVar2 = *(longlong **)(param_1 + 0x48398);
        if ((plVar5 < plVar2) && (plVar3 = (longlong *)*plVar1, plVar3 <= plVar5)) {
          if (plVar2 == *(longlong **)(param_1 + 0x483a0)) {
            FUN_14000c2d0(plVar1,1);
          }
          if (*(undefined8 **)(param_1 + 0x48398) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x48398) =
                 *(undefined8 *)(*plVar1 + ((longlong)plVar5 - (longlong)plVar3 >> 3) * 8);
          }
        }
        else {
          if (plVar2 == *(longlong **)(param_1 + 0x483a0)) {
            FUN_14000c2d0(plVar1,1);
          }
          if (*(longlong **)(param_1 + 0x48398) != (longlong *)0x0) {
            **(longlong **)(param_1 + 0x48398) = *plVar5;
          }
        }
        *(longlong *)(param_1 + 0x48398) = *(longlong *)(param_1 + 0x48398) + 8;
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((ulonglong)(longlong)iVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3));
  }
  return;
}

